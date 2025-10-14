// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYDATAPARAMETERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYDATAPARAMETERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterGroupsResponseBodyDataParameterGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBodyDataParameterGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CnForceRestart, cnForceRestart_);
      DARABONBA_PTR_TO_JSON(CnParamCount, cnParamCount_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(DnForceRestart, dnForceRestart_);
      DARABONBA_PTR_TO_JSON(DnParamCount, dnParamCount_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_TO_JSON(Series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBodyDataParameterGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CnForceRestart, cnForceRestart_);
      DARABONBA_PTR_FROM_JSON(CnParamCount, cnParamCount_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(DnForceRestart, dnForceRestart_);
      DARABONBA_PTR_FROM_JSON(DnParamCount, dnParamCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
    };
    DescribeParameterGroupsResponseBodyDataParameterGroups() = default ;
    DescribeParameterGroupsResponseBodyDataParameterGroups(const DescribeParameterGroupsResponseBodyDataParameterGroups &) = default ;
    DescribeParameterGroupsResponseBodyDataParameterGroups(DescribeParameterGroupsResponseBodyDataParameterGroups &&) = default ;
    DescribeParameterGroupsResponseBodyDataParameterGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBodyDataParameterGroups() = default ;
    DescribeParameterGroupsResponseBodyDataParameterGroups& operator=(const DescribeParameterGroupsResponseBodyDataParameterGroups &) = default ;
    DescribeParameterGroupsResponseBodyDataParameterGroups& operator=(DescribeParameterGroupsResponseBodyDataParameterGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnForceRestart_ == nullptr
        && return this->cnParamCount_ == nullptr && return this->dbType_ == nullptr && return this->dbVersion_ == nullptr && return this->dnForceRestart_ == nullptr && return this->dnParamCount_ == nullptr
        && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->parameterGroupId_ == nullptr && return this->parameterGroupName_ == nullptr && return this->parameterGroupType_ == nullptr
        && return this->series_ == nullptr; };
    // cnForceRestart Field Functions 
    bool hasCnForceRestart() const { return this->cnForceRestart_ != nullptr;};
    void deleteCnForceRestart() { this->cnForceRestart_ = nullptr;};
    inline bool cnForceRestart() const { DARABONBA_PTR_GET_DEFAULT(cnForceRestart_, false) };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setCnForceRestart(bool cnForceRestart) { DARABONBA_PTR_SET_VALUE(cnForceRestart_, cnForceRestart) };


    // cnParamCount Field Functions 
    bool hasCnParamCount() const { return this->cnParamCount_ != nullptr;};
    void deleteCnParamCount() { this->cnParamCount_ = nullptr;};
    inline int32_t cnParamCount() const { DARABONBA_PTR_GET_DEFAULT(cnParamCount_, 0) };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setCnParamCount(int32_t cnParamCount) { DARABONBA_PTR_SET_VALUE(cnParamCount_, cnParamCount) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string dbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // dnForceRestart Field Functions 
    bool hasDnForceRestart() const { return this->dnForceRestart_ != nullptr;};
    void deleteDnForceRestart() { this->dnForceRestart_ = nullptr;};
    inline bool dnForceRestart() const { DARABONBA_PTR_GET_DEFAULT(dnForceRestart_, false) };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setDnForceRestart(bool dnForceRestart) { DARABONBA_PTR_SET_VALUE(dnForceRestart_, dnForceRestart) };


    // dnParamCount Field Functions 
    bool hasDnParamCount() const { return this->dnParamCount_ != nullptr;};
    void deleteDnParamCount() { this->dnParamCount_ = nullptr;};
    inline int32_t dnParamCount() const { DARABONBA_PTR_GET_DEFAULT(dnParamCount_, 0) };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setDnParamCount(int32_t dnParamCount) { DARABONBA_PTR_SET_VALUE(dnParamCount_, dnParamCount) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string parameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameterGroupType Field Functions 
    bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
    void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
    inline string parameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline DescribeParameterGroupsResponseBodyDataParameterGroups& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


  protected:
    std::shared_ptr<bool> cnForceRestart_ = nullptr;
    std::shared_ptr<int32_t> cnParamCount_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> dbVersion_ = nullptr;
    std::shared_ptr<bool> dnForceRestart_ = nullptr;
    std::shared_ptr<int32_t> dnParamCount_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    std::shared_ptr<string> parameterGroupName_ = nullptr;
    std::shared_ptr<string> parameterGroupType_ = nullptr;
    std::shared_ptr<string> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
