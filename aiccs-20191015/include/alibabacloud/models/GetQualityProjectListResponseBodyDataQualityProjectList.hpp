// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYPROJECTLISTRESPONSEBODYDATAQUALITYPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYPROJECTLISTRESPONSEBODYDATAQUALITYPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityProjectListResponseBodyDataQualityProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityProjectListResponseBodyDataQualityProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DepList, depList_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(QualityRuleIds, qualityRuleIds_);
      DARABONBA_PTR_TO_JSON(QualityType, qualityType_);
      DARABONBA_PTR_TO_JSON(ServicerList, servicerList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityProjectListResponseBodyDataQualityProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DepList, depList_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(QualityRuleIds, qualityRuleIds_);
      DARABONBA_PTR_FROM_JSON(QualityType, qualityType_);
      DARABONBA_PTR_FROM_JSON(ServicerList, servicerList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetQualityProjectListResponseBodyDataQualityProjectList() = default ;
    GetQualityProjectListResponseBodyDataQualityProjectList(const GetQualityProjectListResponseBodyDataQualityProjectList &) = default ;
    GetQualityProjectListResponseBodyDataQualityProjectList(GetQualityProjectListResponseBodyDataQualityProjectList &&) = default ;
    GetQualityProjectListResponseBodyDataQualityProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityProjectListResponseBodyDataQualityProjectList() = default ;
    GetQualityProjectListResponseBodyDataQualityProjectList& operator=(const GetQualityProjectListResponseBodyDataQualityProjectList &) = default ;
    GetQualityProjectListResponseBodyDataQualityProjectList& operator=(GetQualityProjectListResponseBodyDataQualityProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkFreqType_ == nullptr
        && return this->createTime_ == nullptr && return this->depList_ == nullptr && return this->groupList_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr
        && return this->projectName_ == nullptr && return this->qualityRuleIds_ == nullptr && return this->qualityType_ == nullptr && return this->servicerList_ == nullptr && return this->status_ == nullptr
        && return this->version_ == nullptr; };
    // checkFreqType Field Functions 
    bool hasCheckFreqType() const { return this->checkFreqType_ != nullptr;};
    void deleteCheckFreqType() { this->checkFreqType_ = nullptr;};
    inline int32_t checkFreqType() const { DARABONBA_PTR_GET_DEFAULT(checkFreqType_, 0) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setCheckFreqType(int32_t checkFreqType) { DARABONBA_PTR_SET_VALUE(checkFreqType_, checkFreqType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // depList Field Functions 
    bool hasDepList() const { return this->depList_ != nullptr;};
    void deleteDepList() { this->depList_ = nullptr;};
    inline const vector<int64_t> & depList() const { DARABONBA_PTR_GET_CONST(depList_, vector<int64_t>) };
    inline vector<int64_t> depList() { DARABONBA_PTR_GET(depList_, vector<int64_t>) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setDepList(const vector<int64_t> & depList) { DARABONBA_PTR_SET_VALUE(depList_, depList) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setDepList(vector<int64_t> && depList) { DARABONBA_PTR_SET_RVALUE(depList_, depList) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<int64_t> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<int64_t>) };
    inline vector<int64_t> groupList() { DARABONBA_PTR_GET(groupList_, vector<int64_t>) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setGroupList(const vector<int64_t> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setGroupList(vector<int64_t> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // qualityRuleIds Field Functions 
    bool hasQualityRuleIds() const { return this->qualityRuleIds_ != nullptr;};
    void deleteQualityRuleIds() { this->qualityRuleIds_ = nullptr;};
    inline const vector<int64_t> & qualityRuleIds() const { DARABONBA_PTR_GET_CONST(qualityRuleIds_, vector<int64_t>) };
    inline vector<int64_t> qualityRuleIds() { DARABONBA_PTR_GET(qualityRuleIds_, vector<int64_t>) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setQualityRuleIds(const vector<int64_t> & qualityRuleIds) { DARABONBA_PTR_SET_VALUE(qualityRuleIds_, qualityRuleIds) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setQualityRuleIds(vector<int64_t> && qualityRuleIds) { DARABONBA_PTR_SET_RVALUE(qualityRuleIds_, qualityRuleIds) };


    // qualityType Field Functions 
    bool hasQualityType() const { return this->qualityType_ != nullptr;};
    void deleteQualityType() { this->qualityType_ = nullptr;};
    inline int32_t qualityType() const { DARABONBA_PTR_GET_DEFAULT(qualityType_, 0) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setQualityType(int32_t qualityType) { DARABONBA_PTR_SET_VALUE(qualityType_, qualityType) };


    // servicerList Field Functions 
    bool hasServicerList() const { return this->servicerList_ != nullptr;};
    void deleteServicerList() { this->servicerList_ = nullptr;};
    inline const vector<int64_t> & servicerList() const { DARABONBA_PTR_GET_CONST(servicerList_, vector<int64_t>) };
    inline vector<int64_t> servicerList() { DARABONBA_PTR_GET(servicerList_, vector<int64_t>) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setServicerList(const vector<int64_t> & servicerList) { DARABONBA_PTR_SET_VALUE(servicerList_, servicerList) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setServicerList(vector<int64_t> && servicerList) { DARABONBA_PTR_SET_RVALUE(servicerList_, servicerList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline GetQualityProjectListResponseBodyDataQualityProjectList& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int32_t> checkFreqType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> depList_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupList_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<vector<int64_t>> qualityRuleIds_ = nullptr;
    std::shared_ptr<int32_t> qualityType_ = nullptr;
    std::shared_ptr<vector<int64_t>> servicerList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
