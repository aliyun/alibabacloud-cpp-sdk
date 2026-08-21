// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateSkillSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
    };
    CreateSkillSpaceResponseBody() = default ;
    CreateSkillSpaceResponseBody(const CreateSkillSpaceResponseBody &) = default ;
    CreateSkillSpaceResponseBody(CreateSkillSpaceResponseBody &&) = default ;
    CreateSkillSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillSpaceResponseBody() = default ;
    CreateSkillSpaceResponseBody& operator=(const CreateSkillSpaceResponseBody &) = default ;
    CreateSkillSpaceResponseBody& operator=(CreateSkillSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skillSpaceId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSkillSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline CreateSkillSpaceResponseBody& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // SkillSpace ID
    shared_ptr<string> skillSpaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
