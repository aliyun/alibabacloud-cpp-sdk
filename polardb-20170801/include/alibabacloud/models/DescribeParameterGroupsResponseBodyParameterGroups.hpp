// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYPARAMETERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYPARAMETERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterGroupsResponseBodyParameterGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBodyParameterGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_TO_JSON(ParameterCounts, parameterCounts_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBodyParameterGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_FROM_JSON(ParameterCounts, parameterCounts_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
    };
    DescribeParameterGroupsResponseBodyParameterGroups() = default ;
    DescribeParameterGroupsResponseBodyParameterGroups(const DescribeParameterGroupsResponseBodyParameterGroups &) = default ;
    DescribeParameterGroupsResponseBodyParameterGroups(DescribeParameterGroupsResponseBodyParameterGroups &&) = default ;
    DescribeParameterGroupsResponseBodyParameterGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBodyParameterGroups() = default ;
    DescribeParameterGroupsResponseBodyParameterGroups& operator=(const DescribeParameterGroupsResponseBodyParameterGroups &) = default ;
    DescribeParameterGroupsResponseBodyParameterGroups& operator=(DescribeParameterGroupsResponseBodyParameterGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->forceRestart_ == nullptr && return this->parameterCounts_ == nullptr && return this->parameterGroupDesc_ == nullptr
        && return this->parameterGroupId_ == nullptr && return this->parameterGroupName_ == nullptr && return this->parameterGroupType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline string forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // parameterCounts Field Functions 
    bool hasParameterCounts() const { return this->parameterCounts_ != nullptr;};
    void deleteParameterCounts() { this->parameterCounts_ = nullptr;};
    inline int64_t parameterCounts() const { DARABONBA_PTR_GET_DEFAULT(parameterCounts_, 0L) };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setParameterCounts(int64_t parameterCounts) { DARABONBA_PTR_SET_VALUE(parameterCounts_, parameterCounts) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string parameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string parameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameterGroupType Field Functions 
    bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
    void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
    inline string parameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
    inline DescribeParameterGroupsResponseBodyParameterGroups& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


  protected:
    // The time when the parameter template was created. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The type of the engine.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine
    std::shared_ptr<string> DBVersion_ = nullptr;
    // Indicates whether to restart the cluster when this parameter template is applied. Valid values:
    // 
    // *   **0**: A restart is not required.
    // *   **1**: A restart is required.
    std::shared_ptr<string> forceRestart_ = nullptr;
    // The number of parameters in the parameter template.
    std::shared_ptr<int64_t> parameterCounts_ = nullptr;
    // The description of the parameter template.
    std::shared_ptr<string> parameterGroupDesc_ = nullptr;
    // The ID of the parameter template.
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    // The name of the parameter template.
    std::shared_ptr<string> parameterGroupName_ = nullptr;
    // The type of the parameter template. Valid values:
    // 
    // *   **0**: the default parameter template.
    // *   **1**: a custom parameter template.
    // *   **2**: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
    std::shared_ptr<string> parameterGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
