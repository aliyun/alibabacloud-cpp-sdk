// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataCronClearOrderRequestParamCronClearItemList.hpp>
#include <alibabacloud/models/CreateDataCronClearOrderRequestParamDbItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCronClearOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCronClearOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(CronClearItemList, cronClearItemList_);
      DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_TO_JSON(DurationHour, durationHour_);
      DARABONBA_PTR_TO_JSON(specifyDuration, specifyDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCronClearOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(CronClearItemList, cronClearItemList_);
      DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_FROM_JSON(DurationHour, durationHour_);
      DARABONBA_PTR_FROM_JSON(specifyDuration, specifyDuration_);
    };
    CreateDataCronClearOrderRequestParam() = default ;
    CreateDataCronClearOrderRequestParam(const CreateDataCronClearOrderRequestParam &) = default ;
    CreateDataCronClearOrderRequestParam(CreateDataCronClearOrderRequestParam &&) = default ;
    CreateDataCronClearOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCronClearOrderRequestParam() = default ;
    CreateDataCronClearOrderRequestParam& operator=(const CreateDataCronClearOrderRequestParam &) = default ;
    CreateDataCronClearOrderRequestParam& operator=(CreateDataCronClearOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && return this->cronClearItemList_ == nullptr && return this->cronFormat_ == nullptr && return this->dbItemList_ == nullptr && return this->durationHour_ == nullptr && return this->specifyDuration_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDataCronClearOrderRequestParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // cronClearItemList Field Functions 
    bool hasCronClearItemList() const { return this->cronClearItemList_ != nullptr;};
    void deleteCronClearItemList() { this->cronClearItemList_ = nullptr;};
    inline const vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList> & cronClearItemList() const { DARABONBA_PTR_GET_CONST(cronClearItemList_, vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList>) };
    inline vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList> cronClearItemList() { DARABONBA_PTR_GET(cronClearItemList_, vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList>) };
    inline CreateDataCronClearOrderRequestParam& setCronClearItemList(const vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList> & cronClearItemList) { DARABONBA_PTR_SET_VALUE(cronClearItemList_, cronClearItemList) };
    inline CreateDataCronClearOrderRequestParam& setCronClearItemList(vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList> && cronClearItemList) { DARABONBA_PTR_SET_RVALUE(cronClearItemList_, cronClearItemList) };


    // cronFormat Field Functions 
    bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
    void deleteCronFormat() { this->cronFormat_ = nullptr;};
    inline string cronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
    inline CreateDataCronClearOrderRequestParam& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


    // dbItemList Field Functions 
    bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
    void deleteDbItemList() { this->dbItemList_ = nullptr;};
    inline const vector<Models::CreateDataCronClearOrderRequestParamDbItemList> & dbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Models::CreateDataCronClearOrderRequestParamDbItemList>) };
    inline vector<Models::CreateDataCronClearOrderRequestParamDbItemList> dbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Models::CreateDataCronClearOrderRequestParamDbItemList>) };
    inline CreateDataCronClearOrderRequestParam& setDbItemList(const vector<Models::CreateDataCronClearOrderRequestParamDbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
    inline CreateDataCronClearOrderRequestParam& setDbItemList(vector<Models::CreateDataCronClearOrderRequestParamDbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


    // durationHour Field Functions 
    bool hasDurationHour() const { return this->durationHour_ != nullptr;};
    void deleteDurationHour() { this->durationHour_ = nullptr;};
    inline int64_t durationHour() const { DARABONBA_PTR_GET_DEFAULT(durationHour_, 0L) };
    inline CreateDataCronClearOrderRequestParam& setDurationHour(int64_t durationHour) { DARABONBA_PTR_SET_VALUE(durationHour_, durationHour) };


    // specifyDuration Field Functions 
    bool hasSpecifyDuration() const { return this->specifyDuration_ != nullptr;};
    void deleteSpecifyDuration() { this->specifyDuration_ = nullptr;};
    inline bool specifyDuration() const { DARABONBA_PTR_GET_DEFAULT(specifyDuration_, false) };
    inline CreateDataCronClearOrderRequestParam& setSpecifyDuration(bool specifyDuration) { DARABONBA_PTR_SET_VALUE(specifyDuration_, specifyDuration) };


  protected:
    // The reason for the data change.
    std::shared_ptr<string> classify_ = nullptr;
    // The tables for which you want to clear historical data.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataCronClearOrderRequestParamCronClearItemList>> cronClearItemList_ = nullptr;
    // The crontab expression that you can use to run the task at a specified time. For more information, see [Crontab expression](https://help.aliyun.com/document_detail/206581.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> cronFormat_ = nullptr;
    // The databases for which you want to clear historical data.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataCronClearOrderRequestParamDbItemList>> dbItemList_ = nullptr;
    // The amount of time taken to run the task. Unit: hours.
    // 
    // >  If the **specifyDuration** parameter is set to **true**, this parameter is required.
    std::shared_ptr<int64_t> durationHour_ = nullptr;
    // Specifies whether to specify an end time for the task. Valid values:
    // 
    // *   **true**: specifies an end time for the task. The task is automatically suspended after this end time.
    // *   **false**: does not specify an end time for the task. The task is stopped after the historical data is cleared.
    // 
    // This parameter is required.
    std::shared_ptr<bool> specifyDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
