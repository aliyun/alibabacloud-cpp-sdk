// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListServiceRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    ListServiceRecordsRequest() = default ;
    ListServiceRecordsRequest(const ListServiceRecordsRequest &) = default ;
    ListServiceRecordsRequest(ListServiceRecordsRequest &&) = default ;
    ListServiceRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRecordsRequest() = default ;
    ListServiceRecordsRequest& operator=(const ListServiceRecordsRequest &) = default ;
    ListServiceRecordsRequest& operator=(ListServiceRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->recordType_ == nullptr && this->search_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceRecordsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline ListServiceRecordsRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListServiceRecordsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


  protected:
    // The maximum number of entries to return. Maximum value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The type of the linked entry. Currently supported:
    // logCorrelation, which indicates application log association.
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
    // The filter information for service-linked entries.
    shared_ptr<string> search_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
