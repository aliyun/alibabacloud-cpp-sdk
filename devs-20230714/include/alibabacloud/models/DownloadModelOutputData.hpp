// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADMODELOUTPUTDATA_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADMODELOUTPUTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DownloadModelOutputData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadModelOutputData& obj) { 
      DARABONBA_PTR_TO_JSON(modelPath, modelPath_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadModelOutputData& obj) { 
      DARABONBA_PTR_FROM_JSON(modelPath, modelPath_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    DownloadModelOutputData() = default ;
    DownloadModelOutputData(const DownloadModelOutputData &) = default ;
    DownloadModelOutputData(DownloadModelOutputData &&) = default ;
    DownloadModelOutputData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadModelOutputData() = default ;
    DownloadModelOutputData& operator=(const DownloadModelOutputData &) = default ;
    DownloadModelOutputData& operator=(DownloadModelOutputData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelPath_ != nullptr
        && this->taskType_ != nullptr; };
    // modelPath Field Functions 
    bool hasModelPath() const { return this->modelPath_ != nullptr;};
    void deleteModelPath() { this->modelPath_ = nullptr;};
    inline string modelPath() const { DARABONBA_PTR_GET_DEFAULT(modelPath_, "") };
    inline DownloadModelOutputData& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DownloadModelOutputData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> modelPath_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
