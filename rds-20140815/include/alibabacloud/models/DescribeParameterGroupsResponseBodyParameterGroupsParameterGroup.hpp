// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYPARAMETERGROUPSPARAMETERGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYPARAMETERGROUPSPARAMETERGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_TO_JSON(ParamCounts, paramCounts_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_FROM_JSON(ParamCounts, paramCounts_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup() = default ;
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup(const DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup &) = default ;
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup(DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup &&) = default ;
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup() = default ;
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& operator=(const DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup &) = default ;
    DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& operator=(DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->forceRestart_ == nullptr && return this->paramCounts_ == nullptr && return this->parameterGroupDesc_ == nullptr
        && return this->parameterGroupId_ == nullptr && return this->parameterGroupName_ == nullptr && return this->parameterGroupType_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline int32_t forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, 0) };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setForceRestart(int32_t forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // paramCounts Field Functions 
    bool hasParamCounts() const { return this->paramCounts_ != nullptr;};
    void deleteParamCounts() { this->paramCounts_ = nullptr;};
    inline int32_t paramCounts() const { DARABONBA_PTR_GET_DEFAULT(paramCounts_, 0) };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setParamCounts(int32_t paramCounts) { DARABONBA_PTR_SET_VALUE(paramCounts_, paramCounts) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string parameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string parameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameterGroupType Field Functions 
    bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
    void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
    inline int32_t parameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, 0) };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setParameterGroupType(int32_t parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroupsParameterGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the parameter template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // Indicates whether the restart of an instance is required for the parameter template to take effect. Valid values:
    // 
    // *   0: A restart is not required.
    // *   1: A restart is required.
    std::shared_ptr<int32_t> forceRestart_ = nullptr;
    // The number of parameters in the parameter template.
    std::shared_ptr<int32_t> paramCounts_ = nullptr;
    // The type of the parameter template. Valid values:
    // 
    // *   0: the default parameter template.
    // *   1: a custom parameter template.
    // *   2: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
    std::shared_ptr<string> parameterGroupDesc_ = nullptr;
    // The ID of the parameter template.
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    // The name of the parameter template.
    std::shared_ptr<string> parameterGroupName_ = nullptr;
    // The type of the parameter template. Valid values:
    // 
    // *   0: the default parameter template.
    // *   1: a custom parameter template.
    // *   2: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
    std::shared_ptr<int32_t> parameterGroupType_ = nullptr;
    // The time when the parameter template was last updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
