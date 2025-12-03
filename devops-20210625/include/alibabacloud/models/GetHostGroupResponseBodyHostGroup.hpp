// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODYHOSTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHostGroupResponseBodyHostGroupHostInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBodyHostGroup& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(ecsLabelKey, ecsLabelKey_);
      DARABONBA_PTR_TO_JSON(ecsLabelValue, ecsLabelValue_);
      DARABONBA_PTR_TO_JSON(ecsType, ecsType_);
      DARABONBA_PTR_TO_JSON(hostInfos, hostInfos_);
      DARABONBA_PTR_TO_JSON(hostNum, hostNum_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(upateTIme, upateTIme_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBodyHostGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(ecsLabelKey, ecsLabelKey_);
      DARABONBA_PTR_FROM_JSON(ecsLabelValue, ecsLabelValue_);
      DARABONBA_PTR_FROM_JSON(ecsType, ecsType_);
      DARABONBA_PTR_FROM_JSON(hostInfos, hostInfos_);
      DARABONBA_PTR_FROM_JSON(hostNum, hostNum_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(upateTIme, upateTIme_);
    };
    GetHostGroupResponseBodyHostGroup() = default ;
    GetHostGroupResponseBodyHostGroup(const GetHostGroupResponseBodyHostGroup &) = default ;
    GetHostGroupResponseBodyHostGroup(GetHostGroupResponseBodyHostGroup &&) = default ;
    GetHostGroupResponseBodyHostGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBodyHostGroup() = default ;
    GetHostGroupResponseBodyHostGroup& operator=(const GetHostGroupResponseBodyHostGroup &) = default ;
    GetHostGroupResponseBodyHostGroup& operator=(GetHostGroupResponseBodyHostGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunRegion_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorAccountId_ == nullptr && return this->description_ == nullptr && return this->ecsLabelKey_ == nullptr && return this->ecsLabelValue_ == nullptr
        && return this->ecsType_ == nullptr && return this->hostInfos_ == nullptr && return this->hostNum_ == nullptr && return this->id_ == nullptr && return this->modifierAccountId_ == nullptr
        && return this->name_ == nullptr && return this->serviceConnectionId_ == nullptr && return this->type_ == nullptr && return this->upateTIme_ == nullptr; };
    // aliyunRegion Field Functions 
    bool hasAliyunRegion() const { return this->aliyunRegion_ != nullptr;};
    void deleteAliyunRegion() { this->aliyunRegion_ = nullptr;};
    inline string aliyunRegion() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegion_, "") };
    inline GetHostGroupResponseBodyHostGroup& setAliyunRegion(string aliyunRegion) { DARABONBA_PTR_SET_VALUE(aliyunRegion_, aliyunRegion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetHostGroupResponseBodyHostGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetHostGroupResponseBodyHostGroup& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetHostGroupResponseBodyHostGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsLabelKey Field Functions 
    bool hasEcsLabelKey() const { return this->ecsLabelKey_ != nullptr;};
    void deleteEcsLabelKey() { this->ecsLabelKey_ = nullptr;};
    inline string ecsLabelKey() const { DARABONBA_PTR_GET_DEFAULT(ecsLabelKey_, "") };
    inline GetHostGroupResponseBodyHostGroup& setEcsLabelKey(string ecsLabelKey) { DARABONBA_PTR_SET_VALUE(ecsLabelKey_, ecsLabelKey) };


    // ecsLabelValue Field Functions 
    bool hasEcsLabelValue() const { return this->ecsLabelValue_ != nullptr;};
    void deleteEcsLabelValue() { this->ecsLabelValue_ = nullptr;};
    inline string ecsLabelValue() const { DARABONBA_PTR_GET_DEFAULT(ecsLabelValue_, "") };
    inline GetHostGroupResponseBodyHostGroup& setEcsLabelValue(string ecsLabelValue) { DARABONBA_PTR_SET_VALUE(ecsLabelValue_, ecsLabelValue) };


    // ecsType Field Functions 
    bool hasEcsType() const { return this->ecsType_ != nullptr;};
    void deleteEcsType() { this->ecsType_ = nullptr;};
    inline string ecsType() const { DARABONBA_PTR_GET_DEFAULT(ecsType_, "") };
    inline GetHostGroupResponseBodyHostGroup& setEcsType(string ecsType) { DARABONBA_PTR_SET_VALUE(ecsType_, ecsType) };


    // hostInfos Field Functions 
    bool hasHostInfos() const { return this->hostInfos_ != nullptr;};
    void deleteHostInfos() { this->hostInfos_ = nullptr;};
    inline const vector<Models::GetHostGroupResponseBodyHostGroupHostInfos> & hostInfos() const { DARABONBA_PTR_GET_CONST(hostInfos_, vector<Models::GetHostGroupResponseBodyHostGroupHostInfos>) };
    inline vector<Models::GetHostGroupResponseBodyHostGroupHostInfos> hostInfos() { DARABONBA_PTR_GET(hostInfos_, vector<Models::GetHostGroupResponseBodyHostGroupHostInfos>) };
    inline GetHostGroupResponseBodyHostGroup& setHostInfos(const vector<Models::GetHostGroupResponseBodyHostGroupHostInfos> & hostInfos) { DARABONBA_PTR_SET_VALUE(hostInfos_, hostInfos) };
    inline GetHostGroupResponseBodyHostGroup& setHostInfos(vector<Models::GetHostGroupResponseBodyHostGroupHostInfos> && hostInfos) { DARABONBA_PTR_SET_RVALUE(hostInfos_, hostInfos) };


    // hostNum Field Functions 
    bool hasHostNum() const { return this->hostNum_ != nullptr;};
    void deleteHostNum() { this->hostNum_ = nullptr;};
    inline int64_t hostNum() const { DARABONBA_PTR_GET_DEFAULT(hostNum_, 0L) };
    inline GetHostGroupResponseBodyHostGroup& setHostNum(int64_t hostNum) { DARABONBA_PTR_SET_VALUE(hostNum_, hostNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetHostGroupResponseBodyHostGroup& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifierAccountId Field Functions 
    bool hasModifierAccountId() const { return this->modifierAccountId_ != nullptr;};
    void deleteModifierAccountId() { this->modifierAccountId_ = nullptr;};
    inline string modifierAccountId() const { DARABONBA_PTR_GET_DEFAULT(modifierAccountId_, "") };
    inline GetHostGroupResponseBodyHostGroup& setModifierAccountId(string modifierAccountId) { DARABONBA_PTR_SET_VALUE(modifierAccountId_, modifierAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetHostGroupResponseBodyHostGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceConnectionId Field Functions 
    bool hasServiceConnectionId() const { return this->serviceConnectionId_ != nullptr;};
    void deleteServiceConnectionId() { this->serviceConnectionId_ = nullptr;};
    inline int64_t serviceConnectionId() const { DARABONBA_PTR_GET_DEFAULT(serviceConnectionId_, 0L) };
    inline GetHostGroupResponseBodyHostGroup& setServiceConnectionId(int64_t serviceConnectionId) { DARABONBA_PTR_SET_VALUE(serviceConnectionId_, serviceConnectionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetHostGroupResponseBodyHostGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upateTIme Field Functions 
    bool hasUpateTIme() const { return this->upateTIme_ != nullptr;};
    void deleteUpateTIme() { this->upateTIme_ = nullptr;};
    inline int64_t upateTIme() const { DARABONBA_PTR_GET_DEFAULT(upateTIme_, 0L) };
    inline GetHostGroupResponseBodyHostGroup& setUpateTIme(int64_t upateTIme) { DARABONBA_PTR_SET_VALUE(upateTIme_, upateTIme) };


  protected:
    std::shared_ptr<string> aliyunRegion_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ecsLabelKey_ = nullptr;
    std::shared_ptr<string> ecsLabelValue_ = nullptr;
    std::shared_ptr<string> ecsType_ = nullptr;
    std::shared_ptr<vector<Models::GetHostGroupResponseBodyHostGroupHostInfos>> hostInfos_ = nullptr;
    std::shared_ptr<int64_t> hostNum_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modifierAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> serviceConnectionId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> upateTIme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
