// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Sorts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sorts& obj) { 
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      };
      friend void from_json(const Darabonba::Json& j, Sorts& obj) { 
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      };
      Sorts() = default ;
      Sorts(const Sorts &) = default ;
      Sorts(Sorts &&) = default ;
      Sorts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sorts() = default ;
      Sorts& operator=(const Sorts &) = default ;
      Sorts& operator=(Sorts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->order_ == nullptr
        && this->propertyName_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline Sorts& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // propertyName Field Functions 
      bool hasPropertyName() const { return this->propertyName_ != nullptr;};
      void deletePropertyName() { this->propertyName_ = nullptr;};
      inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
      inline Sorts& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    protected:
      shared_ptr<string> order_ {};
      shared_ptr<string> propertyName_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nextPageToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->schemaId_ == nullptr && this->searchPattern_ == nullptr
        && this->sorts_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDocumentsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDocumentsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDocumentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDocumentsRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListDocumentsRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string getSearchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListDocumentsRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


    // sorts Field Functions 
    bool hasSorts() const { return this->sorts_ != nullptr;};
    void deleteSorts() { this->sorts_ = nullptr;};
    inline const vector<ListDocumentsRequest::Sorts> & getSorts() const { DARABONBA_PTR_GET_CONST(sorts_, vector<ListDocumentsRequest::Sorts>) };
    inline vector<ListDocumentsRequest::Sorts> getSorts() { DARABONBA_PTR_GET(sorts_, vector<ListDocumentsRequest::Sorts>) };
    inline ListDocumentsRequest& setSorts(const vector<ListDocumentsRequest::Sorts> & sorts) { DARABONBA_PTR_SET_VALUE(sorts_, sorts) };
    inline ListDocumentsRequest& setSorts(vector<ListDocumentsRequest::Sorts> && sorts) { DARABONBA_PTR_SET_RVALUE(sorts_, sorts) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    // schema id
    // 
    // This parameter is required.
    shared_ptr<string> schemaId_ {};
    shared_ptr<string> searchPattern_ {};
    shared_ptr<vector<ListDocumentsRequest::Sorts>> sorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
