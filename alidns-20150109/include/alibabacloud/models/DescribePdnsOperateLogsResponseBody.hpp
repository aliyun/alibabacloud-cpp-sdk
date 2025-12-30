// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSOPERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSOPERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsOperateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePdnsOperateLogsResponseBody() = default ;
    DescribePdnsOperateLogsResponseBody(const DescribePdnsOperateLogsResponseBody &) = default ;
    DescribePdnsOperateLogsResponseBody(DescribePdnsOperateLogsResponseBody &&) = default ;
    DescribePdnsOperateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsOperateLogsResponseBody() = default ;
    DescribePdnsOperateLogsResponseBody& operator=(const DescribePdnsOperateLogsResponseBody &) = default ;
    DescribePdnsOperateLogsResponseBody& operator=(DescribePdnsOperateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(content, content_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->operateTime_ == nullptr && this->type_ == nullptr && this->content_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Logs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
      inline Logs& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Logs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Logs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> operateTime_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<DescribePdnsOperateLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DescribePdnsOperateLogsResponseBody::Logs>) };
    inline vector<DescribePdnsOperateLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<DescribePdnsOperateLogsResponseBody::Logs>) };
    inline DescribePdnsOperateLogsResponseBody& setLogs(const vector<DescribePdnsOperateLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribePdnsOperateLogsResponseBody& setLogs(vector<DescribePdnsOperateLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsOperateLogsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsOperateLogsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsOperateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsOperateLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePdnsOperateLogsResponseBody::Logs>> logs_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
