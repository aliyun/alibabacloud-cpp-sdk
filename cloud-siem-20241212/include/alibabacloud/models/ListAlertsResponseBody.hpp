// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alerts, alerts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alerts, alerts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertsResponseBody() = default ;
    ListAlertsResponseBody(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody(ListAlertsResponseBody &&) = default ;
    ListAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBody() = default ;
    ListAlertsResponseBody& operator=(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody& operator=(ListAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alerts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alerts& obj) { 
        DARABONBA_PTR_TO_JSON(AlertRecord, alertRecord_);
        DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Alerts& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertRecord, alertRecord_);
        DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      };
      Alerts() = default ;
      Alerts(const Alerts &) = default ;
      Alerts(Alerts &&) = default ;
      Alerts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alerts() = default ;
      Alerts& operator=(const Alerts &) = default ;
      Alerts& operator=(Alerts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertRecord_ == nullptr
        && this->alertUuid_ == nullptr; };
      // alertRecord Field Functions 
      bool hasAlertRecord() const { return this->alertRecord_ != nullptr;};
      void deleteAlertRecord() { this->alertRecord_ = nullptr;};
      inline string getAlertRecord() const { DARABONBA_PTR_GET_DEFAULT(alertRecord_, "") };
      inline Alerts& setAlertRecord(string alertRecord) { DARABONBA_PTR_SET_VALUE(alertRecord_, alertRecord) };


      // alertUuid Field Functions 
      bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
      void deleteAlertUuid() { this->alertUuid_ = nullptr;};
      inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
      inline Alerts& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    protected:
      // The alert details.
      shared_ptr<string> alertRecord_ {};
      // The alert UUID.
      shared_ptr<string> alertUuid_ {};
    };

    virtual bool empty() const override { return this->alerts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // alerts Field Functions 
    bool hasAlerts() const { return this->alerts_ != nullptr;};
    void deleteAlerts() { this->alerts_ = nullptr;};
    inline const vector<ListAlertsResponseBody::Alerts> & getAlerts() const { DARABONBA_PTR_GET_CONST(alerts_, vector<ListAlertsResponseBody::Alerts>) };
    inline vector<ListAlertsResponseBody::Alerts> getAlerts() { DARABONBA_PTR_GET(alerts_, vector<ListAlertsResponseBody::Alerts>) };
    inline ListAlertsResponseBody& setAlerts(const vector<ListAlertsResponseBody::Alerts> & alerts) { DARABONBA_PTR_SET_VALUE(alerts_, alerts) };
    inline ListAlertsResponseBody& setAlerts(vector<ListAlertsResponseBody::Alerts> && alerts) { DARABONBA_PTR_SET_RVALUE(alerts_, alerts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The alert details.
    shared_ptr<vector<ListAlertsResponseBody::Alerts>> alerts_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
