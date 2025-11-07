// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionListSolutionAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
    };
    EnrichResponseBodyDataSolutionListSolutionAttribute() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(const EnrichResponseBodyDataSolutionListSolutionAttribute &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(EnrichResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListSolutionAttribute() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute& operator=(const EnrichResponseBodyDataSolutionListSolutionAttribute &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute& operator=(EnrichResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issueTimeInfo_ == nullptr
        && return this->supplySourceType_ == nullptr; };
    // issueTimeInfo Field Functions 
    bool hasIssueTimeInfo() const { return this->issueTimeInfo_ != nullptr;};
    void deleteIssueTimeInfo() { this->issueTimeInfo_ = nullptr;};
    inline const Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo & issueTimeInfo() const { DARABONBA_PTR_GET_CONST(issueTimeInfo_, Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo) };
    inline Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo issueTimeInfo() { DARABONBA_PTR_GET(issueTimeInfo_, Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo) };
    inline EnrichResponseBodyDataSolutionListSolutionAttribute& setIssueTimeInfo(const Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo & issueTimeInfo) { DARABONBA_PTR_SET_VALUE(issueTimeInfo_, issueTimeInfo) };
    inline EnrichResponseBodyDataSolutionListSolutionAttribute& setIssueTimeInfo(Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo && issueTimeInfo) { DARABONBA_PTR_SET_RVALUE(issueTimeInfo_, issueTimeInfo) };


    // supplySourceType Field Functions 
    bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
    void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
    inline string supplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
    inline EnrichResponseBodyDataSolutionListSolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


  protected:
    // Issue ticket time related
    std::shared_ptr<Models::EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo> issueTimeInfo_ = nullptr;
    // Supply source type 1: Self-operated; 2: Agent; 3: Flagship store
    std::shared_ptr<string> supplySourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
