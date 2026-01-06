// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
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
  class DescribeParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamGroup, paramGroup_);
      DARABONBA_PTR_TO_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamGroup, paramGroup_);
      DARABONBA_PTR_FROM_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody(DescribeParameterGroupResponseBody &&) = default ;
    DescribeParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody& operator=(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody& operator=(DescribeParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelatedCustinsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedCustinsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedCustinsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
      };
      RelatedCustinsInfo() = default ;
      RelatedCustinsInfo(const RelatedCustinsInfo &) = default ;
      RelatedCustinsInfo(RelatedCustinsInfo &&) = default ;
      RelatedCustinsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedCustinsInfo() = default ;
      RelatedCustinsInfo& operator=(const RelatedCustinsInfo &) = default ;
      RelatedCustinsInfo& operator=(RelatedCustinsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedCustinsInfoItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedCustinsInfoItem& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedTime, appliedTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedCustinsInfoItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedTime, appliedTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        };
        RelatedCustinsInfoItem() = default ;
        RelatedCustinsInfoItem(const RelatedCustinsInfoItem &) = default ;
        RelatedCustinsInfoItem(RelatedCustinsInfoItem &&) = default ;
        RelatedCustinsInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedCustinsInfoItem() = default ;
        RelatedCustinsInfoItem& operator=(const RelatedCustinsInfoItem &) = default ;
        RelatedCustinsInfoItem& operator=(RelatedCustinsInfoItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedTime_ == nullptr
        && this->DBInstanceName_ == nullptr; };
        // appliedTime Field Functions 
        bool hasAppliedTime() const { return this->appliedTime_ != nullptr;};
        void deleteAppliedTime() { this->appliedTime_ = nullptr;};
        inline string getAppliedTime() const { DARABONBA_PTR_GET_DEFAULT(appliedTime_, "") };
        inline RelatedCustinsInfoItem& setAppliedTime(string appliedTime) { DARABONBA_PTR_SET_VALUE(appliedTime_, appliedTime) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline RelatedCustinsInfoItem& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      protected:
        // The time when the parameter template was applied.
        shared_ptr<string> appliedTime_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceName_ {};
      };

      virtual bool empty() const override { return this->relatedCustinsInfo_ == nullptr; };
      // relatedCustinsInfo Field Functions 
      bool hasRelatedCustinsInfo() const { return this->relatedCustinsInfo_ != nullptr;};
      void deleteRelatedCustinsInfo() { this->relatedCustinsInfo_ = nullptr;};
      inline const vector<RelatedCustinsInfo::RelatedCustinsInfoItem> & getRelatedCustinsInfo() const { DARABONBA_PTR_GET_CONST(relatedCustinsInfo_, vector<RelatedCustinsInfo::RelatedCustinsInfoItem>) };
      inline vector<RelatedCustinsInfo::RelatedCustinsInfoItem> getRelatedCustinsInfo() { DARABONBA_PTR_GET(relatedCustinsInfo_, vector<RelatedCustinsInfo::RelatedCustinsInfoItem>) };
      inline RelatedCustinsInfo& setRelatedCustinsInfo(const vector<RelatedCustinsInfo::RelatedCustinsInfoItem> & relatedCustinsInfo) { DARABONBA_PTR_SET_VALUE(relatedCustinsInfo_, relatedCustinsInfo) };
      inline RelatedCustinsInfo& setRelatedCustinsInfo(vector<RelatedCustinsInfo::RelatedCustinsInfoItem> && relatedCustinsInfo) { DARABONBA_PTR_SET_RVALUE(relatedCustinsInfo_, relatedCustinsInfo) };


    protected:
      shared_ptr<vector<RelatedCustinsInfo::RelatedCustinsInfoItem>> relatedCustinsInfo_ {};
    };

    class ParamGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParamGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
      };
      friend void from_json(const Darabonba::Json& j, ParamGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
      };
      ParamGroup() = default ;
      ParamGroup(const ParamGroup &) = default ;
      ParamGroup(ParamGroup &&) = default ;
      ParamGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParamGroup() = default ;
      ParamGroup& operator=(const ParamGroup &) = default ;
      ParamGroup& operator=(ParamGroup &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ParamDetail, paramDetail_);
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
          DARABONBA_PTR_FROM_JSON(ParamDetail, paramDetail_);
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
        class ParamDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamDetail& obj) { 
            DARABONBA_PTR_TO_JSON(ParameterDetail, parameterDetail_);
          };
          friend void from_json(const Darabonba::Json& j, ParamDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(ParameterDetail, parameterDetail_);
          };
          ParamDetail() = default ;
          ParamDetail(const ParamDetail &) = default ;
          ParamDetail(ParamDetail &&) = default ;
          ParamDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamDetail() = default ;
          ParamDetail& operator=(const ParamDetail &) = default ;
          ParamDetail& operator=(ParamDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ParameterDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ParameterDetail& obj) { 
              DARABONBA_PTR_TO_JSON(ParamName, paramName_);
              DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
            };
            friend void from_json(const Darabonba::Json& j, ParameterDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
              DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
            };
            ParameterDetail() = default ;
            ParameterDetail(const ParameterDetail &) = default ;
            ParameterDetail(ParameterDetail &&) = default ;
            ParameterDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ParameterDetail() = default ;
            ParameterDetail& operator=(const ParameterDetail &) = default ;
            ParameterDetail& operator=(ParameterDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->paramName_ == nullptr
        && this->paramValue_ == nullptr; };
            // paramName Field Functions 
            bool hasParamName() const { return this->paramName_ != nullptr;};
            void deleteParamName() { this->paramName_ = nullptr;};
            inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
            inline ParameterDetail& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


            // paramValue Field Functions 
            bool hasParamValue() const { return this->paramValue_ != nullptr;};
            void deleteParamValue() { this->paramValue_ = nullptr;};
            inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
            inline ParameterDetail& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


          protected:
            // The name of the parameter.
            shared_ptr<string> paramName_ {};
            // The value of the parameter.
            shared_ptr<string> paramValue_ {};
          };

          virtual bool empty() const override { return this->parameterDetail_ == nullptr; };
          // parameterDetail Field Functions 
          bool hasParameterDetail() const { return this->parameterDetail_ != nullptr;};
          void deleteParameterDetail() { this->parameterDetail_ = nullptr;};
          inline const vector<ParamDetail::ParameterDetail> & getParameterDetail() const { DARABONBA_PTR_GET_CONST(parameterDetail_, vector<ParamDetail::ParameterDetail>) };
          inline vector<ParamDetail::ParameterDetail> getParameterDetail() { DARABONBA_PTR_GET(parameterDetail_, vector<ParamDetail::ParameterDetail>) };
          inline ParamDetail& setParameterDetail(const vector<ParamDetail::ParameterDetail> & parameterDetail) { DARABONBA_PTR_SET_VALUE(parameterDetail_, parameterDetail) };
          inline ParamDetail& setParameterDetail(vector<ParamDetail::ParameterDetail> && parameterDetail) { DARABONBA_PTR_SET_RVALUE(parameterDetail_, parameterDetail) };


        protected:
          shared_ptr<vector<ParamDetail::ParameterDetail>> parameterDetail_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->forceRestart_ == nullptr && this->paramCounts_ == nullptr && this->paramDetail_ == nullptr
        && this->parameterGroupDesc_ == nullptr && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr && this->updateTime_ == nullptr; };
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


        // paramDetail Field Functions 
        bool hasParamDetail() const { return this->paramDetail_ != nullptr;};
        void deleteParamDetail() { this->paramDetail_ = nullptr;};
        inline const ParameterGroup::ParamDetail & getParamDetail() const { DARABONBA_PTR_GET_CONST(paramDetail_, ParameterGroup::ParamDetail) };
        inline ParameterGroup::ParamDetail getParamDetail() { DARABONBA_PTR_GET(paramDetail_, ParameterGroup::ParamDetail) };
        inline ParameterGroup& setParamDetail(const ParameterGroup::ParamDetail & paramDetail) { DARABONBA_PTR_SET_VALUE(paramDetail_, paramDetail) };
        inline ParameterGroup& setParamDetail(ParameterGroup::ParamDetail && paramDetail) { DARABONBA_PTR_SET_RVALUE(paramDetail_, paramDetail) };


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
        // The time when the parameter template was created.
        shared_ptr<string> createTime_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version of the instance.
        shared_ptr<string> engineVersion_ {};
        // Indicates whether the restart of an instance is required for the parameter template to take effect. Valid values:
        // 
        // *   **0**: A restart is not required.
        // *   **1**: A restart is required.
        shared_ptr<int32_t> forceRestart_ {};
        // The number of parameters in the parameter template.
        shared_ptr<int32_t> paramCounts_ {};
        // The details of the parameters.
        shared_ptr<ParameterGroup::ParamDetail> paramDetail_ {};
        // The description of the parameter template.
        shared_ptr<string> parameterGroupDesc_ {};
        // The ID of the parameter template.
        shared_ptr<string> parameterGroupId_ {};
        // The name of the parameter template.
        shared_ptr<string> parameterGroupName_ {};
        // The type of the parameter template. Valid values:
        // 
        // *   **0**: the default parameter template.
        // *   **1**: a custom parameter template.
        // *   **2**: an automatic backup parameter template. After you apply this type of template, the system automatically backs up the original parameter settings and saves the backup as a template.
        shared_ptr<int32_t> parameterGroupType_ {};
        // The time when the parameter template was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->parameterGroup_ == nullptr; };
      // parameterGroup Field Functions 
      bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
      void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
      inline const vector<ParamGroup::ParameterGroup> & getParameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, vector<ParamGroup::ParameterGroup>) };
      inline vector<ParamGroup::ParameterGroup> getParameterGroup() { DARABONBA_PTR_GET(parameterGroup_, vector<ParamGroup::ParameterGroup>) };
      inline ParamGroup& setParameterGroup(const vector<ParamGroup::ParameterGroup> & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
      inline ParamGroup& setParameterGroup(vector<ParamGroup::ParameterGroup> && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


    protected:
      shared_ptr<vector<ParamGroup::ParameterGroup>> parameterGroup_ {};
    };

    virtual bool empty() const override { return this->paramGroup_ == nullptr
        && this->relatedCustinsInfo_ == nullptr && this->requestId_ == nullptr; };
    // paramGroup Field Functions 
    bool hasParamGroup() const { return this->paramGroup_ != nullptr;};
    void deleteParamGroup() { this->paramGroup_ = nullptr;};
    inline const DescribeParameterGroupResponseBody::ParamGroup & getParamGroup() const { DARABONBA_PTR_GET_CONST(paramGroup_, DescribeParameterGroupResponseBody::ParamGroup) };
    inline DescribeParameterGroupResponseBody::ParamGroup getParamGroup() { DARABONBA_PTR_GET(paramGroup_, DescribeParameterGroupResponseBody::ParamGroup) };
    inline DescribeParameterGroupResponseBody& setParamGroup(const DescribeParameterGroupResponseBody::ParamGroup & paramGroup) { DARABONBA_PTR_SET_VALUE(paramGroup_, paramGroup) };
    inline DescribeParameterGroupResponseBody& setParamGroup(DescribeParameterGroupResponseBody::ParamGroup && paramGroup) { DARABONBA_PTR_SET_RVALUE(paramGroup_, paramGroup) };


    // relatedCustinsInfo Field Functions 
    bool hasRelatedCustinsInfo() const { return this->relatedCustinsInfo_ != nullptr;};
    void deleteRelatedCustinsInfo() { this->relatedCustinsInfo_ = nullptr;};
    inline const DescribeParameterGroupResponseBody::RelatedCustinsInfo & getRelatedCustinsInfo() const { DARABONBA_PTR_GET_CONST(relatedCustinsInfo_, DescribeParameterGroupResponseBody::RelatedCustinsInfo) };
    inline DescribeParameterGroupResponseBody::RelatedCustinsInfo getRelatedCustinsInfo() { DARABONBA_PTR_GET(relatedCustinsInfo_, DescribeParameterGroupResponseBody::RelatedCustinsInfo) };
    inline DescribeParameterGroupResponseBody& setRelatedCustinsInfo(const DescribeParameterGroupResponseBody::RelatedCustinsInfo & relatedCustinsInfo) { DARABONBA_PTR_SET_VALUE(relatedCustinsInfo_, relatedCustinsInfo) };
    inline DescribeParameterGroupResponseBody& setRelatedCustinsInfo(DescribeParameterGroupResponseBody::RelatedCustinsInfo && relatedCustinsInfo) { DARABONBA_PTR_SET_RVALUE(relatedCustinsInfo_, relatedCustinsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the parameter template.
    shared_ptr<DescribeParameterGroupResponseBody::ParamGroup> paramGroup_ {};
    // The information about the instance to which the parameter template is applied.
    // 
    // >  This parameter is available only for ApsaraDB RDS for PostgreSQL instances.
    shared_ptr<DescribeParameterGroupResponseBody::RelatedCustinsInfo> relatedCustinsInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
