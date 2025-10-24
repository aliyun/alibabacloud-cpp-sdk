// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTEISSUETIMEINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTEISSUETIMEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(issue_ticket_type, issueTicketType_);
      DARABONBA_PTR_TO_JSON(issue_time_limit, issueTimeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_ticket_type, issueTicketType_);
      DARABONBA_PTR_FROM_JSON(issue_time_limit, issueTimeLimit_);
    };
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo() = default ;
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(const SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &) = default ;
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &&) = default ;
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo() = default ;
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& operator=(const SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &) = default ;
    SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& operator=(SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issueTicketType_ == nullptr
        && return this->issueTimeLimit_ == nullptr; };
    // issueTicketType Field Functions 
    bool hasIssueTicketType() const { return this->issueTicketType_ != nullptr;};
    void deleteIssueTicketType() { this->issueTicketType_ = nullptr;};
    inline int32_t issueTicketType() const { DARABONBA_PTR_GET_DEFAULT(issueTicketType_, 0) };
    inline SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& setIssueTicketType(int32_t issueTicketType) { DARABONBA_PTR_SET_VALUE(issueTicketType_, issueTicketType) };


    // issueTimeLimit Field Functions 
    bool hasIssueTimeLimit() const { return this->issueTimeLimit_ != nullptr;};
    void deleteIssueTimeLimit() { this->issueTimeLimit_ = nullptr;};
    inline int32_t issueTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(issueTimeLimit_, 0) };
    inline SearchResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& setIssueTimeLimit(int32_t issueTimeLimit) { DARABONBA_PTR_SET_VALUE(issueTimeLimit_, issueTimeLimit) };


  protected:
    std::shared_ptr<int32_t> issueTicketType_ = nullptr;
    std::shared_ptr<int32_t> issueTimeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
