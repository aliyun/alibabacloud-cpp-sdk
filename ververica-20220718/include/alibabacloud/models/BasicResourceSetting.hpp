// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BASICRESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_BASICRESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BasicResourceSettingSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class BasicResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BasicResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(jobmanagerResourceSettingSpec, jobmanagerResourceSettingSpec_);
      DARABONBA_PTR_TO_JSON(parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(taskmanagerResourceSettingSpec, taskmanagerResourceSettingSpec_);
    };
    friend void from_json(const Darabonba::Json& j, BasicResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(jobmanagerResourceSettingSpec, jobmanagerResourceSettingSpec_);
      DARABONBA_PTR_FROM_JSON(parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(taskmanagerResourceSettingSpec, taskmanagerResourceSettingSpec_);
    };
    BasicResourceSetting() = default ;
    BasicResourceSetting(const BasicResourceSetting &) = default ;
    BasicResourceSetting(BasicResourceSetting &&) = default ;
    BasicResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BasicResourceSetting() = default ;
    BasicResourceSetting& operator=(const BasicResourceSetting &) = default ;
    BasicResourceSetting& operator=(BasicResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobmanagerResourceSettingSpec_ == nullptr
        && return this->parallelism_ == nullptr && return this->taskmanagerResourceSettingSpec_ == nullptr; };
    // jobmanagerResourceSettingSpec Field Functions 
    bool hasJobmanagerResourceSettingSpec() const { return this->jobmanagerResourceSettingSpec_ != nullptr;};
    void deleteJobmanagerResourceSettingSpec() { this->jobmanagerResourceSettingSpec_ = nullptr;};
    inline const BasicResourceSettingSpec & jobmanagerResourceSettingSpec() const { DARABONBA_PTR_GET_CONST(jobmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline BasicResourceSettingSpec jobmanagerResourceSettingSpec() { DARABONBA_PTR_GET(jobmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline BasicResourceSetting& setJobmanagerResourceSettingSpec(const BasicResourceSettingSpec & jobmanagerResourceSettingSpec) { DARABONBA_PTR_SET_VALUE(jobmanagerResourceSettingSpec_, jobmanagerResourceSettingSpec) };
    inline BasicResourceSetting& setJobmanagerResourceSettingSpec(BasicResourceSettingSpec && jobmanagerResourceSettingSpec) { DARABONBA_PTR_SET_RVALUE(jobmanagerResourceSettingSpec_, jobmanagerResourceSettingSpec) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline BasicResourceSetting& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // taskmanagerResourceSettingSpec Field Functions 
    bool hasTaskmanagerResourceSettingSpec() const { return this->taskmanagerResourceSettingSpec_ != nullptr;};
    void deleteTaskmanagerResourceSettingSpec() { this->taskmanagerResourceSettingSpec_ = nullptr;};
    inline const BasicResourceSettingSpec & taskmanagerResourceSettingSpec() const { DARABONBA_PTR_GET_CONST(taskmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline BasicResourceSettingSpec taskmanagerResourceSettingSpec() { DARABONBA_PTR_GET(taskmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline BasicResourceSetting& setTaskmanagerResourceSettingSpec(const BasicResourceSettingSpec & taskmanagerResourceSettingSpec) { DARABONBA_PTR_SET_VALUE(taskmanagerResourceSettingSpec_, taskmanagerResourceSettingSpec) };
    inline BasicResourceSetting& setTaskmanagerResourceSettingSpec(BasicResourceSettingSpec && taskmanagerResourceSettingSpec) { DARABONBA_PTR_SET_RVALUE(taskmanagerResourceSettingSpec_, taskmanagerResourceSettingSpec) };


  protected:
    std::shared_ptr<BasicResourceSettingSpec> jobmanagerResourceSettingSpec_ = nullptr;
    std::shared_ptr<int64_t> parallelism_ = nullptr;
    std::shared_ptr<BasicResourceSettingSpec> taskmanagerResourceSettingSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
