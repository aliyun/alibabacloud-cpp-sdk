// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchResponseBodyDataSolutionListSolutionAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time_info, issueTimeInfo_);
      DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
    };
    SearchResponseBodyDataSolutionListSolutionAttribute() = default ;
    SearchResponseBodyDataSolutionListSolutionAttribute(const SearchResponseBodyDataSolutionListSolutionAttribute &) = default ;
    SearchResponseBodyDataSolutionListSolutionAttribute(SearchResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    SearchResponseBodyDataSolutionListSolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDataSolutionListSolutionAttribute() = default ;
    SearchResponseBodyDataSolutionListSolutionAttribute& operator=(const SearchResponseBodyDataSolutionListSolutionAttribute &) = default ;
    SearchResponseBodyDataSolutionListSolutionAttribute& operator=(SearchResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issueTimeInfo_ == nullptr
        && return this->supplySourceType_ == nullptr; };
    // issueTimeInfo Field Functions 
    bool hasIssueTimeInfo() const { return this->issueTimeInfo_ != nullptr;};
    void deleteIssueTimeInfo() { this->issueTimeInfo_ = nullptr;};
    inline const Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo & issueTimeInfo() const { DARABONBA_PTR_GET_CONST(issueTimeInfo_, Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo) };
    inline Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo issueTimeInfo() { DARABONBA_PTR_GET(issueTimeInfo_, Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo) };
    inline SearchResponseBodyDataSolutionListSolutionAttribute& setIssueTimeInfo(const Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo & issueTimeInfo) { DARABONBA_PTR_SET_VALUE(issueTimeInfo_, issueTimeInfo) };
    inline SearchResponseBodyDataSolutionListSolutionAttribute& setIssueTimeInfo(Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo && issueTimeInfo) { DARABONBA_PTR_SET_RVALUE(issueTimeInfo_, issueTimeInfo) };


    // supplySourceType Field Functions 
    bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
    void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
    inline string supplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
    inline SearchResponseBodyDataSolutionListSolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


  protected:
    std::shared_ptr<Models::SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo> issueTimeInfo_ = nullptr;
    // supply source: 1;2;3
    std::shared_ptr<string> supplySourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
