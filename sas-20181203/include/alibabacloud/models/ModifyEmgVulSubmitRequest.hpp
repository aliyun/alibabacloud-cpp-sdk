// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEMGVULSUBMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEMGVULSUBMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyEmgVulSubmitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEmgVulSubmitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(UserAgreement, userAgreement_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEmgVulSubmitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(UserAgreement, userAgreement_);
    };
    ModifyEmgVulSubmitRequest() = default ;
    ModifyEmgVulSubmitRequest(const ModifyEmgVulSubmitRequest &) = default ;
    ModifyEmgVulSubmitRequest(ModifyEmgVulSubmitRequest &&) = default ;
    ModifyEmgVulSubmitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEmgVulSubmitRequest() = default ;
    ModifyEmgVulSubmitRequest& operator=(const ModifyEmgVulSubmitRequest &) = default ;
    ModifyEmgVulSubmitRequest& operator=(ModifyEmgVulSubmitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->name_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->userAgreement_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyEmgVulSubmitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyEmgVulSubmitRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ModifyEmgVulSubmitRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // userAgreement Field Functions 
    bool hasUserAgreement() const { return this->userAgreement_ != nullptr;};
    void deleteUserAgreement() { this->userAgreement_ = nullptr;};
    inline string getUserAgreement() const { DARABONBA_PTR_GET_DEFAULT(userAgreement_, "") };
    inline ModifyEmgVulSubmitRequest& setUserAgreement(string userAgreement) { DARABONBA_PTR_SET_VALUE(userAgreement_, userAgreement) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The name of the vulnerability.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // Specifies whether to scan for urgent vulnerabilities. Valid values:
    // 
    // *   **yes**
    // *   **no**
    // 
    // This parameter is required.
    shared_ptr<string> userAgreement_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
