// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
    };
    CreateSkillResponseBody() = default ;
    CreateSkillResponseBody(const CreateSkillResponseBody &) = default ;
    CreateSkillResponseBody(CreateSkillResponseBody &&) = default ;
    CreateSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillResponseBody() = default ;
    CreateSkillResponseBody& operator=(const CreateSkillResponseBody &) = default ;
    CreateSkillResponseBody& operator=(CreateSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skillId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline CreateSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Skill ID
    shared_ptr<string> skillId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
