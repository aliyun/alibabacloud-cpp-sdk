// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignalForOptimizeParams, signalForOptimizeParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignalForOptimizeParams, signalForOptimizeParams_);
    };
    DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody(DescribeParameterGroupsResponseBody &&) = default ;
    DescribeParameterGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody& operator=(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody& operator=(DescribeParameterGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
      };
      ParameterGroups() = default ;
      ParameterGroups(const ParameterGroups &) = default ;
      ParameterGroups(ParameterGroups &&) = default ;
      ParameterGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterGroups() = default ;
      ParameterGroups& operator=(const ParameterGroups &) = default ;
      ParameterGroups& operator=(ParameterGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParameterGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParameterGroup& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ParameterGroup& obj) { 
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
        ParameterGroup() = default ;
        ParameterGroup(const ParameterGroup &) = default ;
        ParameterGroup(ParameterGroup &&) = default ;
        ParameterGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParameterGroup() = default ;
        ParameterGroup& operator=(const ParameterGroup &) = default ;
        ParameterGroup& operator=(ParameterGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->forceRestart_ == nullptr && this->paramCounts_ == nullptr && this->parameterGroupDesc_ == nullptr
        && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ParameterGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline ParameterGroup& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline ParameterGroup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline int32_t getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, 0) };
        inline ParameterGroup& setForceRestart(int32_t forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // paramCounts Field Functions 
        bool hasParamCounts() const { return this->paramCounts_ != nullptr;};
        void deleteParamCounts() { this->paramCounts_ = nullptr;};
        inline int32_t getParamCounts() const { DARABONBA_PTR_GET_DEFAULT(paramCounts_, 0) };
        inline ParameterGroup& setParamCounts(int32_t paramCounts) { DARABONBA_PTR_SET_VALUE(paramCounts_, paramCounts) };


        // parameterGroupDesc Field Functions 
        bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
        void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
        inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
        inline ParameterGroup& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


        // parameterGroupId Field Functions 
        bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
        void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
        inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
        inline ParameterGroup& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


        // parameterGroupName Field Functions 
        bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
        void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
        inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
        inline ParameterGroup& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


        // parameterGroupType Field Functions 
        bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
        void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
        inline int32_t getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, 0) };
        inline ParameterGroup& setParameterGroupType(int32_t parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline ParameterGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the parameter template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version.
        shared_ptr<string> engineVersion_ {};
        // Indicates whether the restart of an instance is required for the parameter template to take effect. Valid values:
        // 
        // *   0: A restart is not required.
        // *   1: A restart is required.
        shared_ptr<int32_t> forceRestart_ {};
        // The number of parameters in the parameter template.
        shared_ptr<int32_t> paramCounts_ {};
        // The type of the parameter template. Valid values:
        // 
        // *   0: the default parameter template.
        // *   1: a custom parameter template.
        // *   2: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
        shared_ptr<string> parameterGroupDesc_ {};
        // The ID of the parameter template.
        shared_ptr<string> parameterGroupId_ {};
        // The name of the parameter template.
        shared_ptr<string> parameterGroupName_ {};
        // The type of the parameter template. Valid values:
        // 
        // *   0: the default parameter template.
        // *   1: a custom parameter template.
        // *   2: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
        shared_ptr<int32_t> parameterGroupType_ {};
        // The time when the parameter template was last updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->parameterGroup_ == nullptr; };
      // parameterGroup Field Functions 
      bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
      void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
      inline const vector<ParameterGroups::ParameterGroup> & getParameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, vector<ParameterGroups::ParameterGroup>) };
      inline vector<ParameterGroups::ParameterGroup> getParameterGroup() { DARABONBA_PTR_GET(parameterGroup_, vector<ParameterGroups::ParameterGroup>) };
      inline ParameterGroups& setParameterGroup(const vector<ParameterGroups::ParameterGroup> & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
      inline ParameterGroups& setParameterGroup(vector<ParameterGroups::ParameterGroup> && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


    protected:
      shared_ptr<vector<ParameterGroups::ParameterGroup>> parameterGroup_ {};
    };

    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && this->requestId_ == nullptr && this->signalForOptimizeParams_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const DescribeParameterGroupsResponseBody::ParameterGroups & getParameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, DescribeParameterGroupsResponseBody::ParameterGroups) };
    inline DescribeParameterGroupsResponseBody::ParameterGroups getParameterGroups() { DARABONBA_PTR_GET(parameterGroups_, DescribeParameterGroupsResponseBody::ParameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(const DescribeParameterGroupsResponseBody::ParameterGroups & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(DescribeParameterGroupsResponseBody::ParameterGroups && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signalForOptimizeParams Field Functions 
    bool hasSignalForOptimizeParams() const { return this->signalForOptimizeParams_ != nullptr;};
    void deleteSignalForOptimizeParams() { this->signalForOptimizeParams_ = nullptr;};
    inline bool getSignalForOptimizeParams() const { DARABONBA_PTR_GET_DEFAULT(signalForOptimizeParams_, false) };
    inline DescribeParameterGroupsResponseBody& setSignalForOptimizeParams(bool signalForOptimizeParams) { DARABONBA_PTR_SET_VALUE(signalForOptimizeParams_, signalForOptimizeParams) };


  protected:
    // The details of the parameter templates.
    shared_ptr<DescribeParameterGroupsResponseBody::ParameterGroups> parameterGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether parameter templates exist in the specified region. Valid values:
    // *   true
    // *   false
    // >Notice: This parameter is deprecated.
    shared_ptr<bool> signalForOptimizeParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
