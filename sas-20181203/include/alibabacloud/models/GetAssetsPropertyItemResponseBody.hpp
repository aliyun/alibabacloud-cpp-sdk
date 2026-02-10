// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetsPropertyItemResponseBody() = default ;
    GetAssetsPropertyItemResponseBody(const GetAssetsPropertyItemResponseBody &) = default ;
    GetAssetsPropertyItemResponseBody(GetAssetsPropertyItemResponseBody &&) = default ;
    GetAssetsPropertyItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyItemResponseBody() = default ;
    GetAssetsPropertyItemResponseBody& operator=(const GetAssetsPropertyItemResponseBody &) = default ;
    GetAssetsPropertyItemResponseBody& operator=(GetAssetsPropertyItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyItems& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(MiddlewareName, middlewareName_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(MiddlewareName, middlewareName_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      PropertyItems() = default ;
      PropertyItems(const PropertyItems &) = default ;
      PropertyItems(PropertyItems &&) = default ;
      PropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyItems() = default ;
      PropertyItems& operator=(const PropertyItems &) = default ;
      PropertyItems& operator=(PropertyItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->domain_ == nullptr && this->middlewareName_ == nullptr && this->modelName_ == nullptr && this->moduleName_ == nullptr && this->path_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline PropertyItems& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // middlewareName Field Functions 
      bool hasMiddlewareName() const { return this->middlewareName_ != nullptr;};
      void deleteMiddlewareName() { this->middlewareName_ = nullptr;};
      inline string getMiddlewareName() const { DARABONBA_PTR_GET_DEFAULT(middlewareName_, "") };
      inline PropertyItems& setMiddlewareName(string middlewareName) { DARABONBA_PTR_SET_VALUE(middlewareName_, middlewareName) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline PropertyItems& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline PropertyItems& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline PropertyItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The number of servers related to the asset fingerprints.
      shared_ptr<int32_t> count_ {};
      // The endpoint.
      // 
      // > This parameter is returned only when **Biz** is set to **web_server**.
      shared_ptr<string> domain_ {};
      // AI tool name.
      shared_ptr<string> middlewareName_ {};
      // Name of the LLM service.
      shared_ptr<string> modelName_ {};
      // The name of the module.
      // 
      // > This parameter is returned only when **Biz** is set to **lkm**.
      shared_ptr<string> moduleName_ {};
      // The path to the startup item.
      // 
      // > This parameter is returned only when **Biz** is set to **autorun**.
      shared_ptr<string> path_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertyItems_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetAssetsPropertyItemResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetAssetsPropertyItemResponseBody::PageInfo) };
    inline GetAssetsPropertyItemResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, GetAssetsPropertyItemResponseBody::PageInfo) };
    inline GetAssetsPropertyItemResponseBody& setPageInfo(const GetAssetsPropertyItemResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetAssetsPropertyItemResponseBody& setPageInfo(GetAssetsPropertyItemResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<GetAssetsPropertyItemResponseBody::PropertyItems> & getPropertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<GetAssetsPropertyItemResponseBody::PropertyItems>) };
    inline vector<GetAssetsPropertyItemResponseBody::PropertyItems> getPropertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<GetAssetsPropertyItemResponseBody::PropertyItems>) };
    inline GetAssetsPropertyItemResponseBody& setPropertyItems(const vector<GetAssetsPropertyItemResponseBody::PropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline GetAssetsPropertyItemResponseBody& setPropertyItems(vector<GetAssetsPropertyItemResponseBody::PropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetsPropertyItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<GetAssetsPropertyItemResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the aggregation information about asset fingerprints.
    shared_ptr<vector<GetAssetsPropertyItemResponseBody::PropertyItems>> propertyItems_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
