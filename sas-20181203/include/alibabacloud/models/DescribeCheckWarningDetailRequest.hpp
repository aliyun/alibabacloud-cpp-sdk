// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckWarningId, checkWarningId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckWarningId, checkWarningId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCheckWarningDetailRequest() = default ;
    DescribeCheckWarningDetailRequest(const DescribeCheckWarningDetailRequest &) = default ;
    DescribeCheckWarningDetailRequest(DescribeCheckWarningDetailRequest &&) = default ;
    DescribeCheckWarningDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningDetailRequest() = default ;
    DescribeCheckWarningDetailRequest& operator=(const DescribeCheckWarningDetailRequest &) = default ;
    DescribeCheckWarningDetailRequest& operator=(DescribeCheckWarningDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkWarningId_ == nullptr && this->containerName_ == nullptr && this->lang_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->sourceIp_ == nullptr
        && this->uuid_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeCheckWarningDetailRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkWarningId Field Functions 
    bool hasCheckWarningId() const { return this->checkWarningId_ != nullptr;};
    void deleteCheckWarningId() { this->checkWarningId_ = nullptr;};
    inline int64_t getCheckWarningId() const { DARABONBA_PTR_GET_DEFAULT(checkWarningId_, 0L) };
    inline DescribeCheckWarningDetailRequest& setCheckWarningId(int64_t checkWarningId) { DARABONBA_PTR_SET_VALUE(checkWarningId_, checkWarningId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeCheckWarningDetailRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCheckWarningDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeCheckWarningDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCheckWarningDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCheckWarningDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckItemWarningSummary](~~ListCheckItemWarningSummary~~) operation to query the IDs of check items.
    // 
    // >  If you specify this parameter, you must also specify the Uuid parameter.
    shared_ptr<string> checkId_ {};
    // The ID of the alert triggered by the check item.
    // 
    // >  To query the details of a check item, you must provide the ID of the alert that is triggered by the check item. You can call the [DescribeCheckWarnings](~~DescribeCheckWarnings~~) operation to query the IDs of alerts.
    // 
    // >  If the Uuid and CheckId parameters are not specified, this parameter is required.
    shared_ptr<int64_t> checkWarningId_ {};
    // Container name.
    shared_ptr<string> containerName_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the IDs of Alibaba Cloud accounts.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // >  If you specify this parameter, you must also specify the CheckId parameter.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
