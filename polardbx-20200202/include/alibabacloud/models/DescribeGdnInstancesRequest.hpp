// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeGdnInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGdnInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterType, filterType_);
      DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGdnInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
      DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeGdnInstancesRequest() = default ;
    DescribeGdnInstancesRequest(const DescribeGdnInstancesRequest &) = default ;
    DescribeGdnInstancesRequest(DescribeGdnInstancesRequest &&) = default ;
    DescribeGdnInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGdnInstancesRequest() = default ;
    DescribeGdnInstancesRequest& operator=(const DescribeGdnInstancesRequest &) = default ;
    DescribeGdnInstancesRequest& operator=(DescribeGdnInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterType_ == nullptr
        && this->filterValue_ == nullptr && this->GDNId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline DescribeGdnInstancesRequest& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // filterValue Field Functions 
    bool hasFilterValue() const { return this->filterValue_ != nullptr;};
    void deleteFilterValue() { this->filterValue_ = nullptr;};
    inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
    inline DescribeGdnInstancesRequest& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string getGDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline DescribeGdnInstancesRequest& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline DescribeGdnInstancesRequest& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGdnInstancesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGdnInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> filterType_ {};
    shared_ptr<string> filterValue_ {};
    // GDN ID。
    shared_ptr<string> GDNId_ {};
    shared_ptr<string> pageNum_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
