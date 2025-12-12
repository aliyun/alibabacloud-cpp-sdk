// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASKPRECISIONSPRECISION_HPP_
#define ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASKPRECISIONSPRECISION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision(const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision(ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision &&) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& operator=(const ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& operator=(ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->modelId_ == nullptr && return this->modelName_ == nullptr && return this->precision_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline float precision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0.0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setPrecision(float precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisionsPrecision& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
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
