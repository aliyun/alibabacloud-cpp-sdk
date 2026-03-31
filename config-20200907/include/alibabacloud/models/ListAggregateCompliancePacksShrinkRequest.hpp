// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateCompliancePacksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateCompliancePacksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateCompliancePacksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListAggregateCompliancePacksShrinkRequest() = default ;
    ListAggregateCompliancePacksShrinkRequest(const ListAggregateCompliancePacksShrinkRequest &) = default ;
    ListAggregateCompliancePacksShrinkRequest(ListAggregateCompliancePacksShrinkRequest &&) = default ;
    ListAggregateCompliancePacksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateCompliancePacksShrinkRequest() = default ;
    ListAggregateCompliancePacksShrinkRequest& operator=(const ListAggregateCompliancePacksShrinkRequest &) = default ;
    ListAggregateCompliancePacksShrinkRequest& operator=(ListAggregateCompliancePacksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->riskLevel_ == nullptr && this->status_ == nullptr && this->tagShrink_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateCompliancePacksShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAggregateCompliancePacksShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAggregateCompliancePacksShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListAggregateCompliancePacksShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAggregateCompliancePacksShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListAggregateCompliancePacksShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> riskLevel_ {};
    // The status of the one or more compliance packages to be queried. Valid values:
    // 
    // *   ACTIVE: compliance packages that are available for use.
    // *   CREATING: compliance packages that are being created.
    shared_ptr<string> status_ {};
    // The tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
