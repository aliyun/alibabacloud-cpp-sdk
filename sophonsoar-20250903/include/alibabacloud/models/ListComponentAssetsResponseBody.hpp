// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentAssetsResponseBody() = default ;
    ListComponentAssetsResponseBody(const ListComponentAssetsResponseBody &) = default ;
    ListComponentAssetsResponseBody(ListComponentAssetsResponseBody &&) = default ;
    ListComponentAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentAssetsResponseBody() = default ;
    ListComponentAssetsResponseBody& operator=(const ListComponentAssetsResponseBody &) = default ;
    ListComponentAssetsResponseBody& operator=(ListComponentAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentAssets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentAssets& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentAssetName, componentAssetName_);
        DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
        DARABONBA_PTR_TO_JSON(ComponentAssetValues, componentAssetValues_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentAssets& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentAssetName, componentAssetName_);
        DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
        DARABONBA_PTR_FROM_JSON(ComponentAssetValues, componentAssetValues_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ComponentAssets() = default ;
      ComponentAssets(const ComponentAssets &) = default ;
      ComponentAssets(ComponentAssets &&) = default ;
      ComponentAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentAssets() = default ;
      ComponentAssets& operator=(const ComponentAssets &) = default ;
      ComponentAssets& operator=(ComponentAssets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComponentAssetValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentAssetValues& obj) { 
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentAssetValues& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        };
        ComponentAssetValues() = default ;
        ComponentAssetValues(const ComponentAssetValues &) = default ;
        ComponentAssetValues(ComponentAssetValues &&) = default ;
        ComponentAssetValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentAssetValues() = default ;
        ComponentAssetValues& operator=(const ComponentAssetValues &) = default ;
        ComponentAssetValues& operator=(ComponentAssetValues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr; };
        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline ComponentAssetValues& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // fieldValue Field Functions 
        bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
        void deleteFieldValue() { this->fieldValue_ = nullptr;};
        inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
        inline ComponentAssetValues& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      protected:
        // Field name.
        shared_ptr<string> fieldName_ {};
        // Field value.
        shared_ptr<string> fieldValue_ {};
      };

      virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && this->componentAssetUuid_ == nullptr && this->componentAssetValues_ == nullptr && this->componentName_ == nullptr && this->createTime_ == nullptr && this->updateTime_ == nullptr; };
      // componentAssetName Field Functions 
      bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
      void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
      inline string getComponentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
      inline ComponentAssets& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


      // componentAssetUuid Field Functions 
      bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
      void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
      inline string getComponentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
      inline ComponentAssets& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


      // componentAssetValues Field Functions 
      bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
      void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
      inline const vector<ComponentAssets::ComponentAssetValues> & getComponentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<ComponentAssets::ComponentAssetValues>) };
      inline vector<ComponentAssets::ComponentAssetValues> getComponentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<ComponentAssets::ComponentAssetValues>) };
      inline ComponentAssets& setComponentAssetValues(const vector<ComponentAssets::ComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
      inline ComponentAssets& setComponentAssetValues(vector<ComponentAssets::ComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline ComponentAssets& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ComponentAssets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ComponentAssets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Asset name.
      shared_ptr<string> componentAssetName_ {};
      // Asset UUID.
      shared_ptr<string> componentAssetUuid_ {};
      // Configuration information of the asset.
      shared_ptr<vector<ComponentAssets::ComponentAssetValues>> componentAssetValues_ {};
      // The name of the component.
      shared_ptr<string> componentName_ {};
      // Creation time.
      shared_ptr<int64_t> createTime_ {};
      // Update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->componentAssets_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // componentAssets Field Functions 
    bool hasComponentAssets() const { return this->componentAssets_ != nullptr;};
    void deleteComponentAssets() { this->componentAssets_ = nullptr;};
    inline const vector<ListComponentAssetsResponseBody::ComponentAssets> & getComponentAssets() const { DARABONBA_PTR_GET_CONST(componentAssets_, vector<ListComponentAssetsResponseBody::ComponentAssets>) };
    inline vector<ListComponentAssetsResponseBody::ComponentAssets> getComponentAssets() { DARABONBA_PTR_GET(componentAssets_, vector<ListComponentAssetsResponseBody::ComponentAssets>) };
    inline ListComponentAssetsResponseBody& setComponentAssets(const vector<ListComponentAssetsResponseBody::ComponentAssets> & componentAssets) { DARABONBA_PTR_SET_VALUE(componentAssets_, componentAssets) };
    inline ListComponentAssetsResponseBody& setComponentAssets(vector<ListComponentAssetsResponseBody::ComponentAssets> && componentAssets) { DARABONBA_PTR_SET_RVALUE(componentAssets_, componentAssets) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentAssetsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentAssetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListComponentAssetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComponentAssetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentAssetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of assets.
    shared_ptr<vector<ListComponentAssetsResponseBody::ComponentAssets>> componentAssets_ {};
    // The maximum number of results to return. Range: 0~100.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // Page number for paginated queries, with a default value of 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of items to return per page. Range: 1~100.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and issue localization.
    shared_ptr<string> requestId_ {};
    // Total number of queried items.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
