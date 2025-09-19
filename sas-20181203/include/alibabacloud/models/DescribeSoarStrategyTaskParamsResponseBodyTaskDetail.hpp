// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSRESPONSEBODYTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSRESPONSEBODYTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskParamsResponseBodyTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail() = default ;
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail(const DescribeSoarStrategyTaskParamsResponseBodyTaskDetail &) = default ;
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail(DescribeSoarStrategyTaskParamsResponseBodyTaskDetail &&) = default ;
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskParamsResponseBodyTaskDetail() = default ;
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& operator=(const DescribeSoarStrategyTaskParamsResponseBodyTaskDetail &) = default ;
    DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& operator=(DescribeSoarStrategyTaskParamsResponseBodyTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->taskName_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSoarStrategyTaskParamsResponseBodyTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Task parameters.
    std::shared_ptr<string> params_ = nullptr;
    // 任务名称。
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
