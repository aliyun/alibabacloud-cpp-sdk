// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class CreateTenantSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
    };
    CreateTenantSkillResponseBody() = default ;
    CreateTenantSkillResponseBody(const CreateTenantSkillResponseBody &) = default ;
    CreateTenantSkillResponseBody(CreateTenantSkillResponseBody &&) = default ;
    CreateTenantSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantSkillResponseBody() = default ;
    CreateTenantSkillResponseBody& operator=(const CreateTenantSkillResponseBody &) = default ;
    CreateTenantSkillResponseBody& operator=(CreateTenantSkillResponseBody &&) = default ;
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
    inline CreateTenantSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline CreateTenantSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The unique ID of the skill.
    shared_ptr<string> skillId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
