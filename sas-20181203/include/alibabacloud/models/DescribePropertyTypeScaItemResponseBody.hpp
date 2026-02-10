// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODY_HPP_
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
  class DescribePropertyTypeScaItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyTypeScaItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyTypeItems, propertyTypeItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyTypeScaItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyTypeItems, propertyTypeItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyTypeScaItemResponseBody() = default ;
    DescribePropertyTypeScaItemResponseBody(const DescribePropertyTypeScaItemResponseBody &) = default ;
    DescribePropertyTypeScaItemResponseBody(DescribePropertyTypeScaItemResponseBody &&) = default ;
    DescribePropertyTypeScaItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyTypeScaItemResponseBody() = default ;
    DescribePropertyTypeScaItemResponseBody& operator=(const DescribePropertyTypeScaItemResponseBody &) = default ;
    DescribePropertyTypeScaItemResponseBody& operator=(DescribePropertyTypeScaItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyTypeItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyTypeItems& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyTypeItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      PropertyTypeItems() = default ;
      PropertyTypeItems(const PropertyTypeItems &) = default ;
      PropertyTypeItems(PropertyTypeItems &&) = default ;
      PropertyTypeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyTypeItems() = default ;
      PropertyTypeItems& operator=(const PropertyTypeItems &) = default ;
      PropertyTypeItems& operator=(PropertyTypeItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PropertyTypeItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PropertyTypeItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the middleware type.
      shared_ptr<string> name_ {};
      // The type of the middleware. Valid values:
      // 
      // *   **system_service**: system service
      // *   **software_library**: software library
      // *   **docker_component**: container component
      // *   **database**: database
      // *   **web_container**: web container
      // *   **jar**: JAR package
      // *   **web_framework**: web framework
      shared_ptr<string> type_ {};
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
        && this->propertyTypeItems_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyTypeScaItemResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyTypeScaItemResponseBody::PageInfo) };
    inline DescribePropertyTypeScaItemResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyTypeScaItemResponseBody::PageInfo) };
    inline DescribePropertyTypeScaItemResponseBody& setPageInfo(const DescribePropertyTypeScaItemResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyTypeScaItemResponseBody& setPageInfo(DescribePropertyTypeScaItemResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyTypeItems Field Functions 
    bool hasPropertyTypeItems() const { return this->propertyTypeItems_ != nullptr;};
    void deletePropertyTypeItems() { this->propertyTypeItems_ = nullptr;};
    inline const vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems> & getPropertyTypeItems() const { DARABONBA_PTR_GET_CONST(propertyTypeItems_, vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems>) };
    inline vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems> getPropertyTypeItems() { DARABONBA_PTR_GET(propertyTypeItems_, vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems>) };
    inline DescribePropertyTypeScaItemResponseBody& setPropertyTypeItems(const vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems> & propertyTypeItems) { DARABONBA_PTR_SET_VALUE(propertyTypeItems_, propertyTypeItems) };
    inline DescribePropertyTypeScaItemResponseBody& setPropertyTypeItems(vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems> && propertyTypeItems) { DARABONBA_PTR_SET_RVALUE(propertyTypeItems_, propertyTypeItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyTypeScaItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribePropertyTypeScaItemResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the middleware types.
    shared_ptr<vector<DescribePropertyTypeScaItemResponseBody::PropertyTypeItems>> propertyTypeItems_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
