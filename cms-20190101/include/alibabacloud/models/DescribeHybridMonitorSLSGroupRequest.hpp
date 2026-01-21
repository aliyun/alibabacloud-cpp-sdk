// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorSLSGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
    };
    DescribeHybridMonitorSLSGroupRequest() = default ;
    DescribeHybridMonitorSLSGroupRequest(const DescribeHybridMonitorSLSGroupRequest &) = default ;
    DescribeHybridMonitorSLSGroupRequest(DescribeHybridMonitorSLSGroupRequest &&) = default ;
    DescribeHybridMonitorSLSGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorSLSGroupRequest() = default ;
    DescribeHybridMonitorSLSGroupRequest& operator=(const DescribeHybridMonitorSLSGroupRequest &) = default ;
    DescribeHybridMonitorSLSGroupRequest& operator=(DescribeHybridMonitorSLSGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->SLSGroupName_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeHybridMonitorSLSGroupRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeHybridMonitorSLSGroupRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeHybridMonitorSLSGroupRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridMonitorSLSGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string getSLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline DescribeHybridMonitorSLSGroupRequest& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


  protected:
    // The keyword that is used to search for Logstore groups.
    shared_ptr<string> keyword_ {};
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    // 
    // Minimum value: 1. Default value: 10.
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The name of the Logstore group.
    shared_ptr<string> SLSGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
