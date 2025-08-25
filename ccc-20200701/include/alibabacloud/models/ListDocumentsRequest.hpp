// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDocumentsRequestSorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_TO_JSON(Sorts, sorts_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_FROM_JSON(Sorts, sorts_);
    };
    ListDocumentsRequest() = default ;
    ListDocumentsRequest(const ListDocumentsRequest &) = default ;
    ListDocumentsRequest(ListDocumentsRequest &&) = default ;
    ListDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsRequest() = default ;
    ListDocumentsRequest& operator=(const ListDocumentsRequest &) = default ;
    ListDocumentsRequest& operator=(ListDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nextPageToken_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->schemaId_ != nullptr && this->searchPattern_ != nullptr
        && this->sorts_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDocumentsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDocumentsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDocumentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDocumentsRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListDocumentsRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListDocumentsRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


    // sorts Field Functions 
    bool hasSorts() const { return this->sorts_ != nullptr;};
    void deleteSorts() { this->sorts_ = nullptr;};
    inline const vector<ListDocumentsRequestSorts> & sorts() const { DARABONBA_PTR_GET_CONST(sorts_, vector<ListDocumentsRequestSorts>) };
    inline vector<ListDocumentsRequestSorts> sorts() { DARABONBA_PTR_GET(sorts_, vector<ListDocumentsRequestSorts>) };
    inline ListDocumentsRequest& setSorts(const vector<ListDocumentsRequestSorts> & sorts) { DARABONBA_PTR_SET_VALUE(sorts_, sorts) };
    inline ListDocumentsRequest& setSorts(vector<ListDocumentsRequestSorts> && sorts) { DARABONBA_PTR_SET_RVALUE(sorts_, sorts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // schema id
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaId_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
    std::shared_ptr<vector<ListDocumentsRequestSorts>> sorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
