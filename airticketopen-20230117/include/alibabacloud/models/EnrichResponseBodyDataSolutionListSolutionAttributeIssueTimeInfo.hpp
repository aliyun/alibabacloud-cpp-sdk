// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTEISSUETIMEINFO_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTEISSUETIMEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(issue_ticket_type, issueTicketType_);
      DARABONBA_PTR_TO_JSON(issue_time_limit, issueTimeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_ticket_type, issueTicketType_);
      DARABONBA_PTR_FROM_JSON(issue_time_limit, issueTimeLimit_);
    };
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(const EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &&) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& operator=(const EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& operator=(EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo &&) = default ;
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
    inline EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& setIssueTicketType(int32_t issueTicketType) { DARABONBA_PTR_SET_VALUE(issueTicketType_, issueTicketType) };


    // issueTimeLimit Field Functions 
    bool hasIssueTimeLimit() const { return this->issueTimeLimit_ != nullptr;};
    void deleteIssueTimeLimit() { this->issueTimeLimit_ = nullptr;};
    inline int32_t issueTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(issueTimeLimit_, 0) };
    inline EnrichResponseBodyDataSolutionListSolutionAttributeIssueTimeInfo& setIssueTimeLimit(int32_t issueTimeLimit) { DARABONBA_PTR_SET_VALUE(issueTimeLimit_, issueTimeLimit) };


  protected:
    // Issue ticket type:  1: after payment; 2: before departure; -1: unknown
    std::shared_ptr<int32_t> issueTicketType_ = nullptr;
    // Estimated issue ticket time, unit: minutes
    std::shared_ptr<int32_t> issueTimeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
