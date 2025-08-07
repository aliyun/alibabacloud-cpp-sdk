// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODYDATAPRECISIONSPRECISION_HPP_
#define ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODYDATAPRECISIONSPRECISION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetPrecisionTaskResponseBodyDataPrecisionsPrecision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrecisionTaskResponseBodyDataPrecisionsPrecision& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrecisionTaskResponseBodyDataPrecisionsPrecision& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision() = default ;
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision(const GetPrecisionTaskResponseBodyDataPrecisionsPrecision &) = default ;
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision(GetPrecisionTaskResponseBodyDataPrecisionsPrecision &&) = default ;
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrecisionTaskResponseBodyDataPrecisionsPrecision() = default ;
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision& operator=(const GetPrecisionTaskResponseBodyDataPrecisionsPrecision &) = default ;
    GetPrecisionTaskResponseBodyDataPrecisionsPrecision& operator=(GetPrecisionTaskResponseBodyDataPrecisionsPrecision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelId_ != nullptr
        && this->modelName_ != nullptr && this->precision_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline GetPrecisionTaskResponseBodyDataPrecisionsPrecision& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetPrecisionTaskResponseBodyDataPrecisionsPrecision& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline float precision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0.0) };
    inline GetPrecisionTaskResponseBodyDataPrecisionsPrecision& setPrecision(float precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetPrecisionTaskResponseBodyDataPrecisionsPrecision& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetPrecisionTaskResponseBodyDataPrecisionsPrecision& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<float> precision_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
