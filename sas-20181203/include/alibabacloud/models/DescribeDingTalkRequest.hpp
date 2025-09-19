// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDINGTALKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDINGTALKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDingTalkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDingTalkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleActionName, ruleActionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDingTalkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleActionName, ruleActionName_);
    };
    DescribeDingTalkRequest() = default ;
    DescribeDingTalkRequest(const DescribeDingTalkRequest &) = default ;
    DescribeDingTalkRequest(DescribeDingTalkRequest &&) = default ;
    DescribeDingTalkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDingTalkRequest() = default ;
    DescribeDingTalkRequest& operator=(const DescribeDingTalkRequest &) = default ;
    DescribeDingTalkRequest& operator=(DescribeDingTalkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->ruleActionName_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDingTalkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDingTalkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleActionName Field Functions 
    bool hasRuleActionName() const { return this->ruleActionName_ != nullptr;};
    void deleteRuleActionName() { this->ruleActionName_ = nullptr;};
    inline string ruleActionName() const { DARABONBA_PTR_GET_DEFAULT(ruleActionName_, "") };
    inline DescribeDingTalkRequest& setRuleActionName(string ruleActionName) { DARABONBA_PTR_SET_VALUE(ruleActionName_, ruleActionName) };


  protected:
    // The number of the page to return.Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the notification.
    std::shared_ptr<string> ruleActionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
