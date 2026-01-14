// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSHISTORYCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSHISTORYCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosHistoryConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosHistoryConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosHistoryConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNacosHistoryConfigsResponseBody() = default ;
    ListNacosHistoryConfigsResponseBody(const ListNacosHistoryConfigsResponseBody &) = default ;
    ListNacosHistoryConfigsResponseBody(ListNacosHistoryConfigsResponseBody &&) = default ;
    ListNacosHistoryConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosHistoryConfigsResponseBody() = default ;
    ListNacosHistoryConfigsResponseBody& operator=(const ListNacosHistoryConfigsResponseBody &) = default ;
    ListNacosHistoryConfigsResponseBody& operator=(ListNacosHistoryConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoryItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoryItems& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_PTR_TO_JSON(SrcUser, srcUser_);
      };
      friend void from_json(const Darabonba::Json& j, HistoryItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_PTR_FROM_JSON(SrcUser, srcUser_);
      };
      HistoryItems() = default ;
      HistoryItems(const HistoryItems &) = default ;
      HistoryItems(HistoryItems &&) = default ;
      HistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoryItems() = default ;
      HistoryItems& operator=(const HistoryItems &) = default ;
      HistoryItems& operator=(HistoryItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->dataId_ == nullptr && this->group_ == nullptr && this->id_ == nullptr && this->lastModifiedTime_ == nullptr && this->opType_ == nullptr
        && this->srcUser_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline HistoryItems& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline HistoryItems& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline HistoryItems& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline HistoryItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline HistoryItems& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline HistoryItems& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // srcUser Field Functions 
      bool hasSrcUser() const { return this->srcUser_ != nullptr;};
      void deleteSrcUser() { this->srcUser_ = nullptr;};
      inline string getSrcUser() const { DARABONBA_PTR_GET_DEFAULT(srcUser_, "") };
      inline HistoryItems& setSrcUser(string srcUser) { DARABONBA_PTR_SET_VALUE(srcUser_, srcUser) };


    protected:
      // The application tag.
      shared_ptr<string> appName_ {};
      // The ID of the data.
      shared_ptr<string> dataId_ {};
      // The name of the group.
      shared_ptr<string> group_ {};
      // The ID of the configuration.
      shared_ptr<int64_t> id_ {};
      // The timestamp when the configuration was last modified.
      shared_ptr<int64_t> lastModifiedTime_ {};
      // The format of the configuration file.
      shared_ptr<string> opType_ {};
      shared_ptr<string> srcUser_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->historyItems_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNacosHistoryConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // historyItems Field Functions 
    bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
    void deleteHistoryItems() { this->historyItems_ = nullptr;};
    inline const vector<ListNacosHistoryConfigsResponseBody::HistoryItems> & getHistoryItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<ListNacosHistoryConfigsResponseBody::HistoryItems>) };
    inline vector<ListNacosHistoryConfigsResponseBody::HistoryItems> getHistoryItems() { DARABONBA_PTR_GET(historyItems_, vector<ListNacosHistoryConfigsResponseBody::HistoryItems>) };
    inline ListNacosHistoryConfigsResponseBody& setHistoryItems(const vector<ListNacosHistoryConfigsResponseBody::HistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
    inline ListNacosHistoryConfigsResponseBody& setHistoryItems(vector<ListNacosHistoryConfigsResponseBody::HistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListNacosHistoryConfigsResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNacosHistoryConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNacosHistoryConfigsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNacosHistoryConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNacosHistoryConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNacosHistoryConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNacosHistoryConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The configuration items.
    shared_ptr<vector<ListNacosHistoryConfigsResponseBody::HistoryItems>> historyItems_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
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
