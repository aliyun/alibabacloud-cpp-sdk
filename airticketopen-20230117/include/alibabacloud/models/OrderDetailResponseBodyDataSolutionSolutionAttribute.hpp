// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSOLUTIONATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSOLUTIONATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataSolutionSolutionAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataSolutionSolutionAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataSolutionSolutionAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
    };
    OrderDetailResponseBodyDataSolutionSolutionAttribute() = default ;
    OrderDetailResponseBodyDataSolutionSolutionAttribute(const OrderDetailResponseBodyDataSolutionSolutionAttribute &) = default ;
    OrderDetailResponseBodyDataSolutionSolutionAttribute(OrderDetailResponseBodyDataSolutionSolutionAttribute &&) = default ;
    OrderDetailResponseBodyDataSolutionSolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataSolutionSolutionAttribute() = default ;
    OrderDetailResponseBodyDataSolutionSolutionAttribute& operator=(const OrderDetailResponseBodyDataSolutionSolutionAttribute &) = default ;
    OrderDetailResponseBodyDataSolutionSolutionAttribute& operator=(OrderDetailResponseBodyDataSolutionSolutionAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issueTimeInfo_ == nullptr
        && return this->supplySourceType_ == nullptr; };
    // issueTimeInfo Field Functions 
    bool hasIssueTimeInfo() const { return this->issueTimeInfo_ != nullptr;};
    void deleteIssueTimeInfo() { this->issueTimeInfo_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo & issueTimeInfo() const { DARABONBA_PTR_GET_CONST(issueTimeInfo_, Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo) };
    inline Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo issueTimeInfo() { DARABONBA_PTR_GET(issueTimeInfo_, Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo) };
    inline OrderDetailResponseBodyDataSolutionSolutionAttribute& setIssueTimeInfo(const Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo & issueTimeInfo) { DARABONBA_PTR_SET_VALUE(issueTimeInfo_, issueTimeInfo) };
    inline OrderDetailResponseBodyDataSolutionSolutionAttribute& setIssueTimeInfo(Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo && issueTimeInfo) { DARABONBA_PTR_SET_RVALUE(issueTimeInfo_, issueTimeInfo) };


    // supplySourceType Field Functions 
    bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
    void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
    inline string supplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
    inline OrderDetailResponseBodyDataSolutionSolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


  protected:
    std::shared_ptr<Models::OrderDetailResponseBodyDataSolutionSolutionAttributeIssueTimeInfo> issueTimeInfo_ = nullptr;
    std::shared_ptr<string> supplySourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
