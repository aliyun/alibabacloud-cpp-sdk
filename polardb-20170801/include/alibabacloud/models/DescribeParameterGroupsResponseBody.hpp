// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
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
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      friend void from_json(const Darabonba::Json& j, ParameterGroups& obj) { 
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->forceRestart_ == nullptr && this->parameterCounts_ == nullptr && this->parameterGroupDesc_ == nullptr
        && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline ParameterGroups& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline ParameterGroups& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // forceRestart Field Functions 
      bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
      void deleteForceRestart() { this->forceRestart_ = nullptr;};
      inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
      inline ParameterGroups& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


      // parameterCounts Field Functions 
      bool hasParameterCounts() const { return this->parameterCounts_ != nullptr;};
      void deleteParameterCounts() { this->parameterCounts_ = nullptr;};
      inline int64_t getParameterCounts() const { DARABONBA_PTR_GET_DEFAULT(parameterCounts_, 0L) };
      inline ParameterGroups& setParameterCounts(int64_t parameterCounts) { DARABONBA_PTR_SET_VALUE(parameterCounts_, parameterCounts) };


      // parameterGroupDesc Field Functions 
      bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
      void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
      inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
      inline ParameterGroups& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


      // parameterGroupId Field Functions 
      bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
      void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
      inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
      inline ParameterGroups& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


      // parameterGroupName Field Functions 
      bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
      void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
      inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
      inline ParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


      // parameterGroupType Field Functions 
      bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
      void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
      inline string getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
      inline ParameterGroups& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    protected:
      // The time when the parameter template was created. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The type of the engine.
      shared_ptr<string> DBType_ {};
      // The version of the database engine
      shared_ptr<string> DBVersion_ {};
      // Indicates whether to restart the cluster when this parameter template is applied. Valid values:
      // 
      // *   **0**: A restart is not required.
      // *   **1**: A restart is required.
      shared_ptr<string> forceRestart_ {};
      // The number of parameters in the parameter template.
      shared_ptr<int64_t> parameterCounts_ {};
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

    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const vector<DescribeParameterGroupsResponseBody::ParameterGroups> & getParameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<DescribeParameterGroupsResponseBody::ParameterGroups>) };
    inline vector<DescribeParameterGroupsResponseBody::ParameterGroups> getParameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<DescribeParameterGroupsResponseBody::ParameterGroups>) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(const vector<DescribeParameterGroupsResponseBody::ParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(vector<DescribeParameterGroupsResponseBody::ParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of parameter templates.
    shared_ptr<vector<DescribeParameterGroupsResponseBody::ParameterGroups>> parameterGroups_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
