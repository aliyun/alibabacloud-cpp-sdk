// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHUGGINGFACEMODELINPUTMODELCONFIGFMKHUGGINGFACECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHUGGINGFACEMODELINPUTMODELCONFIGFMKHUGGINGFACECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(framework, framework_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(framework, framework_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig() = default ;
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig(const DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig &) = default ;
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig(DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig &&) = default ;
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig() = default ;
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& operator=(const DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig &) = default ;
    DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& operator=(DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->framework_ != nullptr
        && this->task_ != nullptr; };
    // framework Field Functions 
    bool hasFramework() const { return this->framework_ != nullptr;};
    void deleteFramework() { this->framework_ = nullptr;};
    inline string framework() const { DARABONBA_PTR_GET_DEFAULT(framework_, "") };
    inline DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& setFramework(string framework) { DARABONBA_PTR_SET_VALUE(framework_, framework) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string task() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


  protected:
    std::shared_ptr<string> framework_ = nullptr;
    std::shared_ptr<string> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
