// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODYLIVECENTERTRANSFERINFOLISTLIVECENTERTRANSFERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODYLIVECENTERTRANSFERINFOLISTLIVECENTERTRANSFERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TransferArgs, transferArgs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TransferArgs, transferArgs_);
    };
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo() = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo(const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo &) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo(DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo &&) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo() = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& operator=(const DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo &) = default ;
    DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& operator=(DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->dstUrl_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr
        && return this->transferArgs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string dstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transferArgs Field Functions 
    bool hasTransferArgs() const { return this->transferArgs_ != nullptr;};
    void deleteTransferArgs() { this->transferArgs_ = nullptr;};
    inline string transferArgs() const { DARABONBA_PTR_GET_DEFAULT(transferArgs_, "") };
    inline DescribeLiveCenterTransferResponseBodyLiveCenterTransferInfoListLiveCenterTransferInfo& setTransferArgs(string transferArgs) { DARABONBA_PTR_SET_VALUE(transferArgs_, transferArgs) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The third-party URL to which the live stream is relayed.
    std::shared_ptr<string> dstUrl_ = nullptr;
    // The end time of stream relay.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of stream relay.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The validity period of stream relay. Valid values:
    // 
    // *   **always**: The stream can always be relayed.
    // *   **time**: The stream can be relayed in a specified time period.
    std::shared_ptr<string> transferArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
