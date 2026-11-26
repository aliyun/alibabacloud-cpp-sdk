// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYINFOPREFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYINFOPREFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetSecurityInfoPreferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityInfoPreferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserManageSecurityEmail, allowUserManageSecurityEmail_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityInfoPreferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserManageSecurityEmail, allowUserManageSecurityEmail_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    SetSecurityInfoPreferenceRequest() = default ;
    SetSecurityInfoPreferenceRequest(const SetSecurityInfoPreferenceRequest &) = default ;
    SetSecurityInfoPreferenceRequest(SetSecurityInfoPreferenceRequest &&) = default ;
    SetSecurityInfoPreferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityInfoPreferenceRequest() = default ;
    SetSecurityInfoPreferenceRequest& operator=(const SetSecurityInfoPreferenceRequest &) = default ;
    SetSecurityInfoPreferenceRequest& operator=(SetSecurityInfoPreferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUserManageSecurityEmail_ == nullptr
        && this->directoryId_ == nullptr; };
    // allowUserManageSecurityEmail Field Functions 
    bool hasAllowUserManageSecurityEmail() const { return this->allowUserManageSecurityEmail_ != nullptr;};
    void deleteAllowUserManageSecurityEmail() { this->allowUserManageSecurityEmail_ = nullptr;};
    inline bool getAllowUserManageSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(allowUserManageSecurityEmail_, false) };
    inline SetSecurityInfoPreferenceRequest& setAllowUserManageSecurityEmail(bool allowUserManageSecurityEmail) { DARABONBA_PTR_SET_VALUE(allowUserManageSecurityEmail_, allowUserManageSecurityEmail) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetSecurityInfoPreferenceRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // Specifies whether to allow CloudSSO users in the directory to manage their security email addresses in the CloudSSO user portal, including setting, modifying, and deleting security email addresses, and sending verification emails. Valid values:
    // 
    // - true: allowed.
    // - false: not allowed.
    // 
    // This parameter is required.
    shared_ptr<bool> allowUserManageSecurityEmail_ {};
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
