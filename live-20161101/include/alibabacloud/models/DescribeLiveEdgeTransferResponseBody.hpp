// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEEDGETRANSFERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEEDGETRANSFERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveEdgeTransferResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveEdgeTransferResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(HttpDns, httpDns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TargetDomainList, targetDomainList_);
      DARABONBA_PTR_TO_JSON(TransferArgs, transferArgs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveEdgeTransferResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(HttpDns, httpDns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TargetDomainList, targetDomainList_);
      DARABONBA_PTR_FROM_JSON(TransferArgs, transferArgs_);
    };
    DescribeLiveEdgeTransferResponseBody() = default ;
    DescribeLiveEdgeTransferResponseBody(const DescribeLiveEdgeTransferResponseBody &) = default ;
    DescribeLiveEdgeTransferResponseBody(DescribeLiveEdgeTransferResponseBody &&) = default ;
    DescribeLiveEdgeTransferResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveEdgeTransferResponseBody() = default ;
    DescribeLiveEdgeTransferResponseBody& operator=(const DescribeLiveEdgeTransferResponseBody &) = default ;
    DescribeLiveEdgeTransferResponseBody& operator=(DescribeLiveEdgeTransferResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->httpDns_ == nullptr && this->requestId_ == nullptr && this->streamName_ == nullptr && this->targetDomainList_ == nullptr
        && this->transferArgs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // httpDns Field Functions 
    bool hasHttpDns() const { return this->httpDns_ != nullptr;};
    void deleteHttpDns() { this->httpDns_ = nullptr;};
    inline string getHttpDns() const { DARABONBA_PTR_GET_DEFAULT(httpDns_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setHttpDns(string httpDns) { DARABONBA_PTR_SET_VALUE(httpDns_, httpDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // targetDomainList Field Functions 
    bool hasTargetDomainList() const { return this->targetDomainList_ != nullptr;};
    void deleteTargetDomainList() { this->targetDomainList_ = nullptr;};
    inline string getTargetDomainList() const { DARABONBA_PTR_GET_DEFAULT(targetDomainList_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setTargetDomainList(string targetDomainList) { DARABONBA_PTR_SET_VALUE(targetDomainList_, targetDomainList) };


    // transferArgs Field Functions 
    bool hasTransferArgs() const { return this->transferArgs_ != nullptr;};
    void deleteTransferArgs() { this->transferArgs_ = nullptr;};
    inline string getTransferArgs() const { DARABONBA_PTR_GET_DEFAULT(transferArgs_, "") };
    inline DescribeLiveEdgeTransferResponseBody& setTransferArgs(string transferArgs) { DARABONBA_PTR_SET_VALUE(transferArgs_, transferArgs) };


  protected:
    // The name of the application to which the live stream belongs.
    shared_ptr<string> appName_ {};
    // The ingest domain.
    shared_ptr<string> domainName_ {};
    // The HTTPDNS API that is used to obtain the destination URLs.
    shared_ptr<string> httpDns_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the ingested stream.
    shared_ptr<string> streamName_ {};
    // The destination domain names to which the ingested stream is relayed. Multiple domain names are separated by commas (,).
    shared_ptr<string> targetDomainList_ {};
    // Indicates whether stream ingest parameters are passed through. Valid values:
    // 
    // *   **yes**: Stream ingest parameters are passed through.
    // *   **no**: Stream ingest parameters are not passed through.
    shared_ptr<string> transferArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
