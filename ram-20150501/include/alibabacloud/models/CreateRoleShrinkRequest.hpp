// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreateRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowConsoleLogin, allowConsoleLogin_);
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowConsoleLogin, allowConsoleLogin_);
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreateRoleShrinkRequest() = default ;
    CreateRoleShrinkRequest(const CreateRoleShrinkRequest &) = default ;
    CreateRoleShrinkRequest(CreateRoleShrinkRequest &&) = default ;
    CreateRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleShrinkRequest() = default ;
    CreateRoleShrinkRequest& operator=(const CreateRoleShrinkRequest &) = default ;
    CreateRoleShrinkRequest& operator=(CreateRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowConsoleLogin_ == nullptr
        && this->assumeRolePolicyDocument_ == nullptr && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleName_ == nullptr && this->tagShrink_ == nullptr; };
    // allowConsoleLogin Field Functions 
    bool hasAllowConsoleLogin() const { return this->allowConsoleLogin_ != nullptr;};
    void deleteAllowConsoleLogin() { this->allowConsoleLogin_ = nullptr;};
    inline bool getAllowConsoleLogin() const { DARABONBA_PTR_GET_DEFAULT(allowConsoleLogin_, false) };
    inline CreateRoleShrinkRequest& setAllowConsoleLogin(bool allowConsoleLogin) { DARABONBA_PTR_SET_VALUE(allowConsoleLogin_, allowConsoleLogin) };


    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline CreateRoleShrinkRequest& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRoleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline CreateRoleShrinkRequest& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateRoleShrinkRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateRoleShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // Specifies whether console logon is allowed for the RAM role. Valid values:
    // - true: Console logon is allowed.
    // - false: Console logon is not allowed.
    shared_ptr<bool> allowConsoleLogin_ {};
    // The trust policy. Specifies one or more principals that are allowed to assume the RAM role. The principal can be an Alibaba Cloud account, an Alibaba Cloud service, or an identity provider.
    // >Resource Access Management (RAM) users cannot assume RAM roles whose trusted entity is an Alibaba Cloud service.
    shared_ptr<string> assumeRolePolicyDocument_ {};
    // The description of the RAM role.
    // 
    // The description must be 1 to 1024 characters in length.
    shared_ptr<string> description_ {};
    // The maximum session duration of the RAM role.
    // 
    // Valid values: 3600 to 43200. Unit: seconds. Default value: 3600.
    // 
    // If you leave this parameter empty, the default value is used.
    shared_ptr<int64_t> maxSessionDuration_ {};
    // The name of the RAM role.
    // 
    // The name must be 1 to 64 characters in length and can contain letters, digits, periods (.), and hyphens (-).
    shared_ptr<string> roleName_ {};
    // The tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
