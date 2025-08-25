// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORTEMOTION_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORTEMOTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion &&) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& operator=(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& operator=(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->remark_ != nullptr && this->success_ != nullptr && this->taskId_ != nullptr && this->type_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline int32_t confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& setConfidence(int32_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> confidence_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
