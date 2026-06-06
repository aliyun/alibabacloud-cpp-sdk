// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKEXECUTIONSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKEXECUTIONSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTaskExecutionStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskExecutionStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskCode, taskCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskExecutionStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskCode, taskCode_);
    };
    GetTaskExecutionStatisticsRequest() = default ;
    GetTaskExecutionStatisticsRequest(const GetTaskExecutionStatisticsRequest &) = default ;
    GetTaskExecutionStatisticsRequest(GetTaskExecutionStatisticsRequest &&) = default ;
    GetTaskExecutionStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskExecutionStatisticsRequest() = default ;
    GetTaskExecutionStatisticsRequest& operator=(const GetTaskExecutionStatisticsRequest &) = default ;
    GetTaskExecutionStatisticsRequest& operator=(GetTaskExecutionStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskCode_ == nullptr; };
    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline GetTaskExecutionStatisticsRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
