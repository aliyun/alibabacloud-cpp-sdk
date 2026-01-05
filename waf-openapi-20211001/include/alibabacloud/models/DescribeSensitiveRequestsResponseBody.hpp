// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveRequestsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveRequestsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveRequestsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveRequestsResponseBody() = default ;
    DescribeSensitiveRequestsResponseBody(const DescribeSensitiveRequestsResponseBody &) = default ;
    DescribeSensitiveRequestsResponseBody(DescribeSensitiveRequestsResponseBody &&) = default ;
    DescribeSensitiveRequestsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveRequestsResponseBody() = default ;
    DescribeSensitiveRequestsResponseBody& operator=(const DescribeSensitiveRequestsResponseBody &) = default ;
    DescribeSensitiveRequestsResponseBody& operator=(DescribeSensitiveRequestsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalCount, abnormalCount_);
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_TO_JSON(SensitiveList, sensitiveList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalCount, abnormalCount_);
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_FROM_JSON(SensitiveList, sensitiveList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InfoCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InfoCount& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, InfoCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        InfoCount() = default ;
        InfoCount(const InfoCount &) = default ;
        InfoCount(InfoCount &&) = default ;
        InfoCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InfoCount() = default ;
        InfoCount& operator=(const InfoCount &) = default ;
        InfoCount& operator=(InfoCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline InfoCount& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline InfoCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        // The type of the sensitive data.
        shared_ptr<string> code_ {};
        // The number of sensitive data entries.
        shared_ptr<int64_t> count_ {};
      };

      virtual bool empty() const override { return this->abnormalCount_ == nullptr
        && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->clientIP_ == nullptr && this->detectionResult_ == nullptr && this->eventCount_ == nullptr
        && this->infoCount_ == nullptr && this->matchedHost_ == nullptr && this->sensitiveList_ == nullptr; };
      // abnormalCount Field Functions 
      bool hasAbnormalCount() const { return this->abnormalCount_ != nullptr;};
      void deleteAbnormalCount() { this->abnormalCount_ = nullptr;};
      inline int64_t getAbnormalCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalCount_, 0L) };
      inline Data& setAbnormalCount(int64_t abnormalCount) { DARABONBA_PTR_SET_VALUE(abnormalCount_, abnormalCount) };


      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Data& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // clientIP Field Functions 
      bool hasClientIP() const { return this->clientIP_ != nullptr;};
      void deleteClientIP() { this->clientIP_ = nullptr;};
      inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
      inline Data& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


      // detectionResult Field Functions 
      bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
      void deleteDetectionResult() { this->detectionResult_ = nullptr;};
      inline string getDetectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
      inline Data& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
      inline Data& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // infoCount Field Functions 
      bool hasInfoCount() const { return this->infoCount_ != nullptr;};
      void deleteInfoCount() { this->infoCount_ = nullptr;};
      inline const vector<Data::InfoCount> & getInfoCount() const { DARABONBA_PTR_GET_CONST(infoCount_, vector<Data::InfoCount>) };
      inline vector<Data::InfoCount> getInfoCount() { DARABONBA_PTR_GET(infoCount_, vector<Data::InfoCount>) };
      inline Data& setInfoCount(const vector<Data::InfoCount> & infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };
      inline Data& setInfoCount(vector<Data::InfoCount> && infoCount) { DARABONBA_PTR_SET_RVALUE(infoCount_, infoCount) };


      // matchedHost Field Functions 
      bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
      void deleteMatchedHost() { this->matchedHost_ = nullptr;};
      inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
      inline Data& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


      // sensitiveList Field Functions 
      bool hasSensitiveList() const { return this->sensitiveList_ != nullptr;};
      void deleteSensitiveList() { this->sensitiveList_ = nullptr;};
      inline const vector<string> & getSensitiveList() const { DARABONBA_PTR_GET_CONST(sensitiveList_, vector<string>) };
      inline vector<string> getSensitiveList() { DARABONBA_PTR_GET(sensitiveList_, vector<string>) };
      inline Data& setSensitiveList(const vector<string> & sensitiveList) { DARABONBA_PTR_SET_VALUE(sensitiveList_, sensitiveList) };
      inline Data& setSensitiveList(vector<string> && sensitiveList) { DARABONBA_PTR_SET_RVALUE(sensitiveList_, sensitiveList) };


    protected:
      // The number of risks in the previous 30 days.
      shared_ptr<int64_t> abnormalCount_ {};
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The ID of the API.
      shared_ptr<string> apiId_ {};
      // The IP address.
      shared_ptr<string> clientIP_ {};
      // The evaluation result. Valid values:
      // 
      // *   **leak**: Data leaks may occur.
      // *   **none**: No data leak can occur.
      shared_ptr<string> detectionResult_ {};
      // The number of events in the previous 30 days.
      shared_ptr<int64_t> eventCount_ {};
      // The statistics of the sensitive data.
      shared_ptr<vector<Data::InfoCount>> infoCount_ {};
      // The domain name of the API.
      shared_ptr<string> matchedHost_ {};
      // The sensitive data.
      shared_ptr<vector<string>> sensitiveList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveRequestsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveRequestsResponseBody::Data>) };
    inline vector<DescribeSensitiveRequestsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveRequestsResponseBody::Data>) };
    inline DescribeSensitiveRequestsResponseBody& setData(const vector<DescribeSensitiveRequestsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveRequestsResponseBody& setData(vector<DescribeSensitiveRequestsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveRequestsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveRequestsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The tracing results of the data.
    shared_ptr<vector<DescribeSensitiveRequestsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
