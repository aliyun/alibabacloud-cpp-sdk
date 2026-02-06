// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AuthorizeSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionCodes, permissionCodesShrink_);
      DARABONBA_PTR_TO_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionCodes, permissionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    AuthorizeSkillShrinkRequest() = default ;
    AuthorizeSkillShrinkRequest(const AuthorizeSkillShrinkRequest &) = default ;
    AuthorizeSkillShrinkRequest(AuthorizeSkillShrinkRequest &&) = default ;
    AuthorizeSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeSkillShrinkRequest() = default ;
    AuthorizeSkillShrinkRequest& operator=(const AuthorizeSkillShrinkRequest &) = default ;
    AuthorizeSkillShrinkRequest& operator=(AuthorizeSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissionCodesShrink_ == nullptr
        && this->sourceIdOfAssistantId_ == nullptr; };
    // permissionCodesShrink Field Functions 
    bool hasPermissionCodesShrink() const { return this->permissionCodesShrink_ != nullptr;};
    void deletePermissionCodesShrink() { this->permissionCodesShrink_ = nullptr;};
    inline string getPermissionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionCodesShrink_, "") };
    inline AuthorizeSkillShrinkRequest& setPermissionCodesShrink(string permissionCodesShrink) { DARABONBA_PTR_SET_VALUE(permissionCodesShrink_, permissionCodesShrink) };


    // sourceIdOfAssistantId Field Functions 
    bool hasSourceIdOfAssistantId() const { return this->sourceIdOfAssistantId_ != nullptr;};
    void deleteSourceIdOfAssistantId() { this->sourceIdOfAssistantId_ = nullptr;};
    inline string getSourceIdOfAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfAssistantId_, "") };
    inline AuthorizeSkillShrinkRequest& setSourceIdOfAssistantId(string sourceIdOfAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfAssistantId_, sourceIdOfAssistantId) };


  protected:
    shared_ptr<string> permissionCodesShrink_ {};
    shared_ptr<string> sourceIdOfAssistantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
