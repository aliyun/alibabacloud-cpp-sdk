// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
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
    class ParameterGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_TO_JSON(ParameterCounts, parameterCounts_);
        DARABONBA_PTR_TO_JSON(ParameterDetail, parameterDetail_);
        DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
        DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_FROM_JSON(ParameterCounts, parameterCounts_);
        DARABONBA_PTR_FROM_JSON(ParameterDetail, parameterDetail_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
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

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->forceRestart_ == nullptr && this->parameterCounts_ == nullptr && this->parameterDetail_ == nullptr
        && this->parameterGroupDesc_ == nullptr && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline ParameterGroup& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline ParameterGroup& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // forceRestart Field Functions 
      bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
      void deleteForceRestart() { this->forceRestart_ = nullptr;};
      inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
      inline ParameterGroup& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


      // parameterCounts Field Functions 
      bool hasParameterCounts() const { return this->parameterCounts_ != nullptr;};
      void deleteParameterCounts() { this->parameterCounts_ = nullptr;};
      inline int32_t getParameterCounts() const { DARABONBA_PTR_GET_DEFAULT(parameterCounts_, 0) };
      inline ParameterGroup& setParameterCounts(int32_t parameterCounts) { DARABONBA_PTR_SET_VALUE(parameterCounts_, parameterCounts) };


      // parameterDetail Field Functions 
      bool hasParameterDetail() const { return this->parameterDetail_ != nullptr;};
      void deleteParameterDetail() { this->parameterDetail_ = nullptr;};
      inline const vector<ParameterGroup::ParameterDetail> & getParameterDetail() const { DARABONBA_PTR_GET_CONST(parameterDetail_, vector<ParameterGroup::ParameterDetail>) };
      inline vector<ParameterGroup::ParameterDetail> getParameterDetail() { DARABONBA_PTR_GET(parameterDetail_, vector<ParameterGroup::ParameterDetail>) };
      inline ParameterGroup& setParameterDetail(const vector<ParameterGroup::ParameterDetail> & parameterDetail) { DARABONBA_PTR_SET_VALUE(parameterDetail_, parameterDetail) };
      inline ParameterGroup& setParameterDetail(vector<ParameterGroup::ParameterDetail> && parameterDetail) { DARABONBA_PTR_SET_RVALUE(parameterDetail_, parameterDetail) };


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
      inline string getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
      inline ParameterGroup& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    protected:
      // The time when the parameter template was created. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The type of the database engine.
      shared_ptr<string> DBType_ {};
      // The version of the database engine.
      shared_ptr<string> DBVersion_ {};
      // Indicates whether to restart the cluster when this parameter template is applied. Valid values:
      // 
      // *   **0**: A restart is not required.
      // *   **1**: A restart is required.
      shared_ptr<string> forceRestart_ {};
      // The number of parameters in the parameter template.
      shared_ptr<int32_t> parameterCounts_ {};
      // Details about the parameters.
      shared_ptr<vector<ParameterGroup::ParameterDetail>> parameterDetail_ {};
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
      shared_ptr<string> parameterGroupType_ {};
    };

    virtual bool empty() const override { return this->parameterGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterGroup Field Functions 
    bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
    void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
    inline const vector<DescribeParameterGroupResponseBody::ParameterGroup> & getParameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, vector<DescribeParameterGroupResponseBody::ParameterGroup>) };
    inline vector<DescribeParameterGroupResponseBody::ParameterGroup> getParameterGroup() { DARABONBA_PTR_GET(parameterGroup_, vector<DescribeParameterGroupResponseBody::ParameterGroup>) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(const vector<DescribeParameterGroupResponseBody::ParameterGroup> & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(vector<DescribeParameterGroupResponseBody::ParameterGroup> && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the parameter templates.
    shared_ptr<vector<DescribeParameterGroupResponseBody::ParameterGroup>> parameterGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
