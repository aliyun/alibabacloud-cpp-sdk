// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListServiceRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListServiceRecordsResponseBody() = default ;
    ListServiceRecordsResponseBody(const ListServiceRecordsResponseBody &) = default ;
    ListServiceRecordsResponseBody(ListServiceRecordsResponseBody &&) = default ;
    ListServiceRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRecordsResponseBody() = default ;
    ListServiceRecordsResponseBody& operator=(const ListServiceRecordsResponseBody &) = default ;
    ListServiceRecordsResponseBody& operator=(ListServiceRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(recordContent, recordContent_);
        DARABONBA_PTR_TO_JSON(recordType, recordType_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(recordContent, recordContent_);
        DARABONBA_PTR_FROM_JSON(recordType, recordType_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->recordContent_ == nullptr
        && this->recordType_ == nullptr && this->serviceId_ == nullptr && this->workspace_ == nullptr; };
      // recordContent Field Functions 
      bool hasRecordContent() const { return this->recordContent_ != nullptr;};
      void deleteRecordContent() { this->recordContent_ = nullptr;};
      inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
      inline Records& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
      inline Records& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Records& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Records& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The entry content in JSON string format. The format varies depending on the recordType.
      shared_ptr<string> recordContent_ {};
      // The type of the linked entry. Currently supported:
      // logCorrelation, which indicates application log association.
      shared_ptr<string> recordType_ {};
      // The unique identifier of the service.
      shared_ptr<string> serviceId_ {};
      // The workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceRecordsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListServiceRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListServiceRecordsResponseBody::Records>) };
    inline vector<ListServiceRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListServiceRecordsResponseBody::Records>) };
    inline ListServiceRecordsResponseBody& setRecords(const vector<ListServiceRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListServiceRecordsResponseBody& setRecords(vector<ListServiceRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The list of ticket operation records.
    shared_ptr<vector<ListServiceRecordsResponseBody::Records>> records_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
