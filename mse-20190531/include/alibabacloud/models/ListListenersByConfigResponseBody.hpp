// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListListenersByConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersByConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersByConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenersByConfigResponseBody() = default ;
    ListListenersByConfigResponseBody(const ListListenersByConfigResponseBody &) = default ;
    ListListenersByConfigResponseBody(ListListenersByConfigResponseBody &&) = default ;
    ListListenersByConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersByConfigResponseBody() = default ;
    ListListenersByConfigResponseBody& operator=(const ListListenersByConfigResponseBody &) = default ;
    ListListenersByConfigResponseBody& operator=(ListListenersByConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MatchRuleName, matchRuleName_);
        DARABONBA_PTR_TO_JSON(MatchRuleType, matchRuleType_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MatchRuleName, matchRuleName_);
        DARABONBA_PTR_FROM_JSON(MatchRuleType, matchRuleType_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->labels_ == nullptr && this->matchRuleName_ == nullptr && this->matchRuleType_ == nullptr && this->md5_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Listeners& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Listeners& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Listeners& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // matchRuleName Field Functions 
      bool hasMatchRuleName() const { return this->matchRuleName_ != nullptr;};
      void deleteMatchRuleName() { this->matchRuleName_ = nullptr;};
      inline string getMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(matchRuleName_, "") };
      inline Listeners& setMatchRuleName(string matchRuleName) { DARABONBA_PTR_SET_VALUE(matchRuleName_, matchRuleName) };


      // matchRuleType Field Functions 
      bool hasMatchRuleType() const { return this->matchRuleType_ != nullptr;};
      void deleteMatchRuleType() { this->matchRuleType_ = nullptr;};
      inline string getMatchRuleType() const { DARABONBA_PTR_GET_DEFAULT(matchRuleType_, "") };
      inline Listeners& setMatchRuleType(string matchRuleType) { DARABONBA_PTR_SET_VALUE(matchRuleType_, matchRuleType) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Listeners& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Listeners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Listeners& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The IP address.
      shared_ptr<string> ip_ {};
      // The label of the listener.
      shared_ptr<map<string, string>> labels_ {};
      shared_ptr<string> matchRuleName_ {};
      shared_ptr<string> matchRuleType_ {};
      // The verification string.
      shared_ptr<string> md5_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The current version of the listener. Valid values: gray and normal.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpCode_ == nullptr && this->listeners_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListListenersByConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListListenersByConfigResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<ListListenersByConfigResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<ListListenersByConfigResponseBody::Listeners>) };
    inline vector<ListListenersByConfigResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<ListListenersByConfigResponseBody::Listeners>) };
    inline ListListenersByConfigResponseBody& setListeners(const vector<ListListenersByConfigResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline ListListenersByConfigResponseBody& setListeners(vector<ListListenersByConfigResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListListenersByConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListenersByConfigResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListenersByConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenersByConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListListenersByConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenersByConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The information about listeners.
    shared_ptr<vector<ListListenersByConfigResponseBody::Listeners>> listeners_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
