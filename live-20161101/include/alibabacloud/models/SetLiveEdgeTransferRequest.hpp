// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEEDGETRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEEDGETRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveEdgeTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveEdgeTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(HttpDns, httpDns_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TargetDomainList, targetDomainList_);
      DARABONBA_PTR_TO_JSON(TransferArgs, transferArgs_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveEdgeTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(HttpDns, httpDns_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TargetDomainList, targetDomainList_);
      DARABONBA_PTR_FROM_JSON(TransferArgs, transferArgs_);
    };
    SetLiveEdgeTransferRequest() = default ;
    SetLiveEdgeTransferRequest(const SetLiveEdgeTransferRequest &) = default ;
    SetLiveEdgeTransferRequest(SetLiveEdgeTransferRequest &&) = default ;
    SetLiveEdgeTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveEdgeTransferRequest() = default ;
    SetLiveEdgeTransferRequest& operator=(const SetLiveEdgeTransferRequest &) = default ;
    SetLiveEdgeTransferRequest& operator=(SetLiveEdgeTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->httpDns_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->streamName_ == nullptr
        && this->targetDomainList_ == nullptr && this->transferArgs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetLiveEdgeTransferRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveEdgeTransferRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // httpDns Field Functions 
    bool hasHttpDns() const { return this->httpDns_ != nullptr;};
    void deleteHttpDns() { this->httpDns_ = nullptr;};
    inline string getHttpDns() const { DARABONBA_PTR_GET_DEFAULT(httpDns_, "") };
    inline SetLiveEdgeTransferRequest& setHttpDns(string httpDns) { DARABONBA_PTR_SET_VALUE(httpDns_, httpDns) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveEdgeTransferRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveEdgeTransferRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline SetLiveEdgeTransferRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // targetDomainList Field Functions 
    bool hasTargetDomainList() const { return this->targetDomainList_ != nullptr;};
    void deleteTargetDomainList() { this->targetDomainList_ = nullptr;};
    inline string getTargetDomainList() const { DARABONBA_PTR_GET_DEFAULT(targetDomainList_, "") };
    inline SetLiveEdgeTransferRequest& setTargetDomainList(string targetDomainList) { DARABONBA_PTR_SET_VALUE(targetDomainList_, targetDomainList) };


    // transferArgs Field Functions 
    bool hasTransferArgs() const { return this->transferArgs_ != nullptr;};
    void deleteTransferArgs() { this->transferArgs_ = nullptr;};
    inline string getTransferArgs() const { DARABONBA_PTR_GET_DEFAULT(transferArgs_, "") };
    inline SetLiveEdgeTransferRequest& setTransferArgs(string transferArgs) { DARABONBA_PTR_SET_VALUE(transferArgs_, transferArgs) };


  protected:
    // The name of the application to which the live stream belongs. Regular expressions are supported, with a few limits. For more information, see the **Description about the AppName and StreamName parameters** section. For example, a value of **liveApp\\*\\*\\*\\*[1,2,3]** specifies that stream relay is configured for three applications: liveApp\\*\\*\\*\\*1, liveApp\\*\\*\\*\\*2, and liveApp\\*\\*\\*\\*3.****
    // 
    // > 
    // 
    // *   This parameter takes effect for only destination domain names that are specified by the TargetDomainList parameter.
    // 
    // *   You cannot use a caret (^) or a dollar sign ($) in a regular expression to configure the `AppName` parameter. Otherwise, stream relay fails.
    shared_ptr<string> appName_ {};
    // The ingest domain. Stream relay is configured based on the ingest domain. Only one stream relay configuration can be set for an ingest domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The HTTPDNS API that is used to obtain the destination URLs. The request must contain the `TargetDomainList` parameter or the `HttpDns` parameter. The two parameters are mutually exclusive.
    // 
    // >  If the `HttpDns` parameter is configured, you cannot configure the `TargetDomainList` parameter, and the `AppName` and `StreamName` parameters do not take effect.
    // 
    // For information about the requirements on the structure of messages that are returned by the HTTPDNS API, see the **Description about the HTTPDNS API** section.
    shared_ptr<string> httpDns_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The name of the ingested stream. Regular expressions are supported, with a few limits. For more information, see the **Description about the AppName and StreamName parameters** section. For example, a value of **liveStream\\*\\*\\*\\*[1,2,3]** specifies that stream relay is configured for three streams: liveStream\\*\\*\\*\\*1, liveStream\\*\\*\\*\\*2, and liveStream\\*\\*\\*\\*3.****
    // 
    // > 
    // 
    // *   This parameter takes effect for only destination domain names that are specified by the TargetDomainList parameter.
    // 
    // *   You cannot use a caret (^) or a dollar sign ($) in a regular expression to configure the `StreamName` parameter. Otherwise, stream relay fails.
    shared_ptr<string> streamName_ {};
    // The destination domain names to which you want to relay the ingested stream. Separate multiple domain names with commas (,). The request must contain the `TargetDomainList` parameter or the `HttpDns` parameter. The two parameters are mutually exclusive.
    // 
    // > 
    // 
    // *   The `AppName` and `StreamName` parameters take effect only when the `TargetDomainList` parameter is configured.
    // 
    // *   If the `TargetDomainList` parameter is configured, you cannot configure the `HttpDns` parameter.
    shared_ptr<string> targetDomainList_ {};
    // Specifies whether to pass through stream ingest parameters. Valid values:
    // 
    // *   **yes**: passes through stream ingest parameters.
    // *   **no**: does not pass through stream ingest parameters.
    shared_ptr<string> transferArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
