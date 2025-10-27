// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulDetailsRequest() = default ;
    DescribeVulDetailsRequest(const DescribeVulDetailsRequest &) = default ;
    DescribeVulDetailsRequest(DescribeVulDetailsRequest &&) = default ;
    DescribeVulDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDetailsRequest() = default ;
    DescribeVulDetailsRequest& operator=(const DescribeVulDetailsRequest &) = default ;
    DescribeVulDetailsRequest& operator=(DescribeVulDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->lang_ == nullptr && return this->name_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->type_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeVulDetailsRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVulDetailsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVulDetailsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeVulDetailsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulDetailsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The vulnerability announcement.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    // 
    // This parameter is required.
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the vulnerability.
    // 
    // > You can call the [DescribeGroupedVul](~~DescribeGroupedVul~~) or [DescribeVulList](~~DescribeVulList~~) operation to query the names of vulnerabilities.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **app**: application vulnerabilitiy
    // *   **emg**: urgent vulnerability
    // *   **sca**: vulnerability that is detected based on software component analysis
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
