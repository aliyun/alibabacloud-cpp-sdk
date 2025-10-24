// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTIONSOLUTIONATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTIONSOLUTIONATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBodyDataSolutionSolutionAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBodyDataSolutionSolutionAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBodyDataSolutionSolutionAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
    };
    PricingResponseBodyDataSolutionSolutionAttribute() = default ;
    PricingResponseBodyDataSolutionSolutionAttribute(const PricingResponseBodyDataSolutionSolutionAttribute &) = default ;
    PricingResponseBodyDataSolutionSolutionAttribute(PricingResponseBodyDataSolutionSolutionAttribute &&) = default ;
    PricingResponseBodyDataSolutionSolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBodyDataSolutionSolutionAttribute() = default ;
    PricingResponseBodyDataSolutionSolutionAttribute& operator=(const PricingResponseBodyDataSolutionSolutionAttribute &) = default ;
    PricingResponseBodyDataSolutionSolutionAttribute& operator=(PricingResponseBodyDataSolutionSolutionAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issueTimeInfo_ == nullptr
        && return this->supplySourceType_ == nullptr; };
    // issueTimeInfo Field Functions 
    bool hasIssueTimeInfo() const { return this->issueTimeInfo_ != nullptr;};
    void deleteIssueTimeInfo() { this->issueTimeInfo_ = nullptr;};
    inline const Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo & issueTimeInfo() const { DARABONBA_PTR_GET_CONST(issueTimeInfo_, Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo) };
    inline Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo issueTimeInfo() { DARABONBA_PTR_GET(issueTimeInfo_, Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo) };
    inline PricingResponseBodyDataSolutionSolutionAttribute& setIssueTimeInfo(const Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo & issueTimeInfo) { DARABONBA_PTR_SET_VALUE(issueTimeInfo_, issueTimeInfo) };
    inline PricingResponseBodyDataSolutionSolutionAttribute& setIssueTimeInfo(Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo && issueTimeInfo) { DARABONBA_PTR_SET_RVALUE(issueTimeInfo_, issueTimeInfo) };


    // supplySourceType Field Functions 
    bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
    void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
    inline string supplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
    inline PricingResponseBodyDataSolutionSolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


  protected:
    std::shared_ptr<Models::PricingResponseBodyDataSolutionSolutionAttributeIssueTimeInfo> issueTimeInfo_ = nullptr;
    std::shared_ptr<string> supplySourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
