// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTSATISFACTION_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTSATISFACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction(const GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction(GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction &&) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& operator=(const GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& operator=(GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remark_ == nullptr
        && return this->satisfactionDescription_ == nullptr && return this->success_ == nullptr && return this->taskId_ == nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // satisfactionDescription Field Functions 
    bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
    void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
    inline string satisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> satisfactionDescription_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
