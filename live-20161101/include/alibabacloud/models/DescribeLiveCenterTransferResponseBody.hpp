// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERTRANSFERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterTransferResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterTransferResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveCenterTransferInfoList, liveCenterTransferInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterTransferResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveCenterTransferInfoList, liveCenterTransferInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveCenterTransferResponseBody() = default ;
    DescribeLiveCenterTransferResponseBody(const DescribeLiveCenterTransferResponseBody &) = default ;
    DescribeLiveCenterTransferResponseBody(DescribeLiveCenterTransferResponseBody &&) = default ;
    DescribeLiveCenterTransferResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterTransferResponseBody() = default ;
    DescribeLiveCenterTransferResponseBody& operator=(const DescribeLiveCenterTransferResponseBody &) = default ;
    DescribeLiveCenterTransferResponseBody& operator=(DescribeLiveCenterTransferResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveCenterTransferInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveCenterTransferInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveCenterTransferInfo, liveCenterTransferInfo_);
      };
      friend void from_json(const Darabonba::Json& j, LiveCenterTransferInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveCenterTransferInfo, liveCenterTransferInfo_);
      };
      LiveCenterTransferInfoList() = default ;
      LiveCenterTransferInfoList(const LiveCenterTransferInfoList &) = default ;
      LiveCenterTransferInfoList(LiveCenterTransferInfoList &&) = default ;
      LiveCenterTransferInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveCenterTransferInfoList() = default ;
      LiveCenterTransferInfoList& operator=(const LiveCenterTransferInfoList &) = default ;
      LiveCenterTransferInfoList& operator=(LiveCenterTransferInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveCenterTransferInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveCenterTransferInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TransferArgs, transferArgs_);
        };
        friend void from_json(const Darabonba::Json& j, LiveCenterTransferInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TransferArgs, transferArgs_);
        };
        LiveCenterTransferInfo() = default ;
        LiveCenterTransferInfo(const LiveCenterTransferInfo &) = default ;
        LiveCenterTransferInfo(LiveCenterTransferInfo &&) = default ;
        LiveCenterTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveCenterTransferInfo() = default ;
        LiveCenterTransferInfo& operator=(const LiveCenterTransferInfo &) = default ;
        LiveCenterTransferInfo& operator=(LiveCenterTransferInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->dstUrl_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr
        && this->transferArgs_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveCenterTransferInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveCenterTransferInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // dstUrl Field Functions 
        bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
        void deleteDstUrl() { this->dstUrl_ = nullptr;};
        inline string getDstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
        inline LiveCenterTransferInfo& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline LiveCenterTransferInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline LiveCenterTransferInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveCenterTransferInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // transferArgs Field Functions 
        bool hasTransferArgs() const { return this->transferArgs_ != nullptr;};
        void deleteTransferArgs() { this->transferArgs_ = nullptr;};
        inline string getTransferArgs() const { DARABONBA_PTR_GET_DEFAULT(transferArgs_, "") };
        inline LiveCenterTransferInfo& setTransferArgs(string transferArgs) { DARABONBA_PTR_SET_VALUE(transferArgs_, transferArgs) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> dstUrl_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> transferArgs_ {};
      };

      virtual bool empty() const override { return this->liveCenterTransferInfo_ == nullptr; };
      // liveCenterTransferInfo Field Functions 
      bool hasLiveCenterTransferInfo() const { return this->liveCenterTransferInfo_ != nullptr;};
      void deleteLiveCenterTransferInfo() { this->liveCenterTransferInfo_ = nullptr;};
      inline const vector<LiveCenterTransferInfoList::LiveCenterTransferInfo> & getLiveCenterTransferInfo() const { DARABONBA_PTR_GET_CONST(liveCenterTransferInfo_, vector<LiveCenterTransferInfoList::LiveCenterTransferInfo>) };
      inline vector<LiveCenterTransferInfoList::LiveCenterTransferInfo> getLiveCenterTransferInfo() { DARABONBA_PTR_GET(liveCenterTransferInfo_, vector<LiveCenterTransferInfoList::LiveCenterTransferInfo>) };
      inline LiveCenterTransferInfoList& setLiveCenterTransferInfo(const vector<LiveCenterTransferInfoList::LiveCenterTransferInfo> & liveCenterTransferInfo) { DARABONBA_PTR_SET_VALUE(liveCenterTransferInfo_, liveCenterTransferInfo) };
      inline LiveCenterTransferInfoList& setLiveCenterTransferInfo(vector<LiveCenterTransferInfoList::LiveCenterTransferInfo> && liveCenterTransferInfo) { DARABONBA_PTR_SET_RVALUE(liveCenterTransferInfo_, liveCenterTransferInfo) };


    protected:
      shared_ptr<vector<LiveCenterTransferInfoList::LiveCenterTransferInfo>> liveCenterTransferInfo_ {};
    };

    virtual bool empty() const override { return this->liveCenterTransferInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveCenterTransferInfoList Field Functions 
    bool hasLiveCenterTransferInfoList() const { return this->liveCenterTransferInfoList_ != nullptr;};
    void deleteLiveCenterTransferInfoList() { this->liveCenterTransferInfoList_ = nullptr;};
    inline const DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList & getLiveCenterTransferInfoList() const { DARABONBA_PTR_GET_CONST(liveCenterTransferInfoList_, DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList getLiveCenterTransferInfoList() { DARABONBA_PTR_GET(liveCenterTransferInfoList_, DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBody& setLiveCenterTransferInfoList(const DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList & liveCenterTransferInfoList) { DARABONBA_PTR_SET_VALUE(liveCenterTransferInfoList_, liveCenterTransferInfoList) };
    inline DescribeLiveCenterTransferResponseBody& setLiveCenterTransferInfoList(DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList && liveCenterTransferInfoList) { DARABONBA_PTR_SET_RVALUE(liveCenterTransferInfoList_, liveCenterTransferInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveCenterTransferResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveCenterTransferResponseBody::LiveCenterTransferInfoList> liveCenterTransferInfoList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
