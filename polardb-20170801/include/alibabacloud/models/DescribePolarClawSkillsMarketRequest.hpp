// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSMARKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSMARKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillsMarketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillsMarketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchBySkillName, searchBySkillName_);
      DARABONBA_PTR_TO_JSON(SearchByTagName, searchByTagName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillsMarketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchBySkillName, searchBySkillName_);
      DARABONBA_PTR_FROM_JSON(SearchByTagName, searchByTagName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePolarClawSkillsMarketRequest() = default ;
    DescribePolarClawSkillsMarketRequest(const DescribePolarClawSkillsMarketRequest &) = default ;
    DescribePolarClawSkillsMarketRequest(DescribePolarClawSkillsMarketRequest &&) = default ;
    DescribePolarClawSkillsMarketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillsMarketRequest() = default ;
    DescribePolarClawSkillsMarketRequest& operator=(const DescribePolarClawSkillsMarketRequest &) = default ;
    DescribePolarClawSkillsMarketRequest& operator=(DescribePolarClawSkillsMarketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderBy_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->searchBySkillName_ == nullptr && this->searchByTagName_ == nullptr
        && this->source_ == nullptr; };
    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribePolarClawSkillsMarketRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarClawSkillsMarketRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolarClawSkillsMarketRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarClawSkillsMarketRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchBySkillName Field Functions 
    bool hasSearchBySkillName() const { return this->searchBySkillName_ != nullptr;};
    void deleteSearchBySkillName() { this->searchBySkillName_ = nullptr;};
    inline string getSearchBySkillName() const { DARABONBA_PTR_GET_DEFAULT(searchBySkillName_, "") };
    inline DescribePolarClawSkillsMarketRequest& setSearchBySkillName(string searchBySkillName) { DARABONBA_PTR_SET_VALUE(searchBySkillName_, searchBySkillName) };


    // searchByTagName Field Functions 
    bool hasSearchByTagName() const { return this->searchByTagName_ != nullptr;};
    void deleteSearchByTagName() { this->searchByTagName_ = nullptr;};
    inline string getSearchByTagName() const { DARABONBA_PTR_GET_DEFAULT(searchByTagName_, "") };
    inline DescribePolarClawSkillsMarketRequest& setSearchByTagName(string searchByTagName) { DARABONBA_PTR_SET_VALUE(searchByTagName_, searchByTagName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePolarClawSkillsMarketRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The sorting condition. DOWNLOAD_COUNT indicates sorting by download count.
    shared_ptr<string> orderBy_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // * **30**
    // * **50**
    // * **100**
    // 
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query all available regions for the current account, including region IDs.
    shared_ptr<string> regionId_ {};
    // The skill name to search by.
    shared_ptr<string> searchBySkillName_ {};
    // The tag name to search by.
    shared_ptr<string> searchByTagName_ {};
    // The source of the skill. SELF indicates private skills of the current user, and PUBLIC indicates public skills.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
