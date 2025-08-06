// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FETCHFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class FetchFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FetchFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FetchFileResponseBodyData() = default ;
    FetchFileResponseBodyData(const FetchFileResponseBodyData &) = default ;
    FetchFileResponseBodyData(FetchFileResponseBodyData &&) = default ;
    FetchFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchFileResponseBodyData() = default ;
    FetchFileResponseBodyData& operator=(const FetchFileResponseBodyData &) = default ;
    FetchFileResponseBodyData& operator=(FetchFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidInstanceId_ != nullptr
        && this->taskId_ != nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline FetchFileResponseBodyData& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FetchFileResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
