// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREITEMRESPONSEBODY_HPP_
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
  class DescribePropertySoftwareItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertySoftwareItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertySoftwareItemResponseBody() = default ;
    DescribePropertySoftwareItemResponseBody(const DescribePropertySoftwareItemResponseBody &) = default ;
    DescribePropertySoftwareItemResponseBody(DescribePropertySoftwareItemResponseBody &&) = default ;
    DescribePropertySoftwareItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertySoftwareItemResponseBody() = default ;
    DescribePropertySoftwareItemResponseBody& operator=(const DescribePropertySoftwareItemResponseBody &) = default ;
    DescribePropertySoftwareItemResponseBody& operator=(DescribePropertySoftwareItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyItems& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->name_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PropertyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The number of servers on which the software is installed.
      shared_ptr<int32_t> count_ {};
      // The name of the software.
      shared_ptr<string> name_ {};
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
    inline const DescribePropertySoftwareItemResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertySoftwareItemResponseBody::PageInfo) };
    inline DescribePropertySoftwareItemResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertySoftwareItemResponseBody::PageInfo) };
    inline DescribePropertySoftwareItemResponseBody& setPageInfo(const DescribePropertySoftwareItemResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertySoftwareItemResponseBody& setPageInfo(DescribePropertySoftwareItemResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<DescribePropertySoftwareItemResponseBody::PropertyItems> & getPropertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<DescribePropertySoftwareItemResponseBody::PropertyItems>) };
    inline vector<DescribePropertySoftwareItemResponseBody::PropertyItems> getPropertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<DescribePropertySoftwareItemResponseBody::PropertyItems>) };
    inline DescribePropertySoftwareItemResponseBody& setPropertyItems(const vector<DescribePropertySoftwareItemResponseBody::PropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline DescribePropertySoftwareItemResponseBody& setPropertyItems(vector<DescribePropertySoftwareItemResponseBody::PropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertySoftwareItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribePropertySoftwareItemResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the software assets returned.
    shared_ptr<vector<DescribePropertySoftwareItemResponseBody::PropertyItems>> propertyItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
