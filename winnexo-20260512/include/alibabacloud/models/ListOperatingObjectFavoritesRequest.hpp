// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATINGOBJECTFAVORITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATINGOBJECTFAVORITESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListOperatingObjectFavoritesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListOperatingObjectFavoritesRequest() = default ;
    ListOperatingObjectFavoritesRequest(const ListOperatingObjectFavoritesRequest &) = default ;
    ListOperatingObjectFavoritesRequest(ListOperatingObjectFavoritesRequest &&) = default ;
    ListOperatingObjectFavoritesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperatingObjectFavoritesRequest() = default ;
    ListOperatingObjectFavoritesRequest& operator=(const ListOperatingObjectFavoritesRequest &) = default ;
    ListOperatingObjectFavoritesRequest& operator=(ListOperatingObjectFavoritesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->nextToken_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->pageSize_ == nullptr && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline ListOperatingObjectFavoritesRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOperatingObjectFavoritesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListOperatingObjectFavoritesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListOperatingObjectFavoritesRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOperatingObjectFavoritesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListOperatingObjectFavoritesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The graph name. Call listGraphs to retrieve available graphs.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The pagination cursor.
    shared_ptr<string> nextToken_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // The digital employee name (operating object name). Optional.
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The tenant ID to take effect.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
