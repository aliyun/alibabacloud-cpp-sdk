// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PushInfos, pushInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PushInfos, pushInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryPushRecordsResponseBody() = default ;
    QueryPushRecordsResponseBody(const QueryPushRecordsResponseBody &) = default ;
    QueryPushRecordsResponseBody(QueryPushRecordsResponseBody &&) = default ;
    QueryPushRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushRecordsResponseBody() = default ;
    QueryPushRecordsResponseBody& operator=(const QueryPushRecordsResponseBody &) = default ;
    QueryPushRecordsResponseBody& operator=(QueryPushRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PushInfo, pushInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PushInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PushInfo, pushInfo_);
      };
      PushInfos() = default ;
      PushInfos(const PushInfos &) = default ;
      PushInfos(PushInfos &&) = default ;
      PushInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushInfos() = default ;
      PushInfos& operator=(const PushInfos &) = default ;
      PushInfos& operator=(PushInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
          DARABONBA_PTR_TO_JSON(PushType, pushType_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, PushInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
          DARABONBA_PTR_FROM_JSON(PushType, pushType_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        PushInfo() = default ;
        PushInfo(const PushInfo &) = default ;
        PushInfo(PushInfo &&) = default ;
        PushInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushInfo() = default ;
        PushInfo& operator=(const PushInfo &) = default ;
        PushInfo& operator=(PushInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appKey_ == nullptr
        && this->body_ == nullptr && this->deviceType_ == nullptr && this->messageId_ == nullptr && this->pushTime_ == nullptr && this->pushType_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->target_ == nullptr && this->title_ == nullptr; };
        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
        inline PushInfo& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline PushInfo& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
        inline PushInfo& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline PushInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // pushTime Field Functions 
        bool hasPushTime() const { return this->pushTime_ != nullptr;};
        void deletePushTime() { this->pushTime_ = nullptr;};
        inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
        inline PushInfo& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


        // pushType Field Functions 
        bool hasPushType() const { return this->pushType_ != nullptr;};
        void deletePushType() { this->pushType_ = nullptr;};
        inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
        inline PushInfo& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline PushInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PushInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline PushInfo& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline PushInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> appKey_ {};
        shared_ptr<string> body_ {};
        shared_ptr<string> deviceType_ {};
        shared_ptr<string> messageId_ {};
        shared_ptr<string> pushTime_ {};
        shared_ptr<string> pushType_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> target_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->pushInfo_ == nullptr; };
      // pushInfo Field Functions 
      bool hasPushInfo() const { return this->pushInfo_ != nullptr;};
      void deletePushInfo() { this->pushInfo_ = nullptr;};
      inline const vector<PushInfos::PushInfo> & getPushInfo() const { DARABONBA_PTR_GET_CONST(pushInfo_, vector<PushInfos::PushInfo>) };
      inline vector<PushInfos::PushInfo> getPushInfo() { DARABONBA_PTR_GET(pushInfo_, vector<PushInfos::PushInfo>) };
      inline PushInfos& setPushInfo(const vector<PushInfos::PushInfo> & pushInfo) { DARABONBA_PTR_SET_VALUE(pushInfo_, pushInfo) };
      inline PushInfos& setPushInfo(vector<PushInfos::PushInfo> && pushInfo) { DARABONBA_PTR_SET_RVALUE(pushInfo_, pushInfo) };


    protected:
      shared_ptr<vector<PushInfos::PushInfo>> pushInfo_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->pushInfos_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryPushRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryPushRecordsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPushRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pushInfos Field Functions 
    bool hasPushInfos() const { return this->pushInfos_ != nullptr;};
    void deletePushInfos() { this->pushInfos_ = nullptr;};
    inline const QueryPushRecordsResponseBody::PushInfos & getPushInfos() const { DARABONBA_PTR_GET_CONST(pushInfos_, QueryPushRecordsResponseBody::PushInfos) };
    inline QueryPushRecordsResponseBody::PushInfos getPushInfos() { DARABONBA_PTR_GET(pushInfos_, QueryPushRecordsResponseBody::PushInfos) };
    inline QueryPushRecordsResponseBody& setPushInfos(const QueryPushRecordsResponseBody::PushInfos & pushInfos) { DARABONBA_PTR_SET_VALUE(pushInfos_, pushInfos) };
    inline QueryPushRecordsResponseBody& setPushInfos(QueryPushRecordsResponseBody::PushInfos && pushInfos) { DARABONBA_PTR_SET_RVALUE(pushInfos_, pushInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryPushRecordsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<QueryPushRecordsResponseBody::PushInfos> pushInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
