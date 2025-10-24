// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTNODESSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTNODESSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ReportNodesStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportNodesStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IssueCategory, issueCategory_);
      DARABONBA_PTR_TO_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ReportNodesStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IssueCategory, issueCategory_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ReportNodesStatusShrinkRequest() = default ;
    ReportNodesStatusShrinkRequest(const ReportNodesStatusShrinkRequest &) = default ;
    ReportNodesStatusShrinkRequest(ReportNodesStatusShrinkRequest &&) = default ;
    ReportNodesStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportNodesStatusShrinkRequest() = default ;
    ReportNodesStatusShrinkRequest& operator=(const ReportNodesStatusShrinkRequest &) = default ;
    ReportNodesStatusShrinkRequest& operator=(ReportNodesStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->endTime_ == nullptr && return this->issueCategory_ == nullptr && return this->nodesShrink_ == nullptr && return this->reason_ == nullptr && return this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReportNodesStatusShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ReportNodesStatusShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // issueCategory Field Functions 
    bool hasIssueCategory() const { return this->issueCategory_ != nullptr;};
    void deleteIssueCategory() { this->issueCategory_ = nullptr;};
    inline string issueCategory() const { DARABONBA_PTR_GET_DEFAULT(issueCategory_, "") };
    inline ReportNodesStatusShrinkRequest& setIssueCategory(string issueCategory) { DARABONBA_PTR_SET_VALUE(issueCategory_, issueCategory) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string nodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline ReportNodesStatusShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ReportNodesStatusShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ReportNodesStatusShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> issueCategory_ = nullptr;
    std::shared_ptr<string> nodesShrink_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
