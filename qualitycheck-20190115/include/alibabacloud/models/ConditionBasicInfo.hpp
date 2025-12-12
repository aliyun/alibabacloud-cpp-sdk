// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConditionBasicInfoCheckRange.hpp>
#include <vector>
#include <alibabacloud/models/OperatorBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ConditionBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Check_range, checkRange_);
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Check_range, checkRange_);
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    ConditionBasicInfo() = default ;
    ConditionBasicInfo(const ConditionBasicInfo &) = default ;
    ConditionBasicInfo(ConditionBasicInfo &&) = default ;
    ConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionBasicInfo() = default ;
    ConditionBasicInfo& operator=(const ConditionBasicInfo &) = default ;
    ConditionBasicInfo& operator=(ConditionBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRange_ == nullptr
        && return this->cid_ == nullptr && return this->exclusion_ == nullptr && return this->id_ == nullptr && return this->lambda_ == nullptr && return this->name_ == nullptr
        && return this->operators_ == nullptr && return this->rid_ == nullptr && return this->userGroup_ == nullptr; };
    // checkRange Field Functions 
    bool hasCheckRange() const { return this->checkRange_ != nullptr;};
    void deleteCheckRange() { this->checkRange_ = nullptr;};
    inline const ConditionBasicInfoCheckRange & checkRange() const { DARABONBA_PTR_GET_CONST(checkRange_, ConditionBasicInfoCheckRange) };
    inline ConditionBasicInfoCheckRange checkRange() { DARABONBA_PTR_GET(checkRange_, ConditionBasicInfoCheckRange) };
    inline ConditionBasicInfo& setCheckRange(const ConditionBasicInfoCheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
    inline ConditionBasicInfo& setCheckRange(ConditionBasicInfoCheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline ConditionBasicInfo& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // exclusion Field Functions 
    bool hasExclusion() const { return this->exclusion_ != nullptr;};
    void deleteExclusion() { this->exclusion_ = nullptr;};
    inline int32_t exclusion() const { DARABONBA_PTR_GET_DEFAULT(exclusion_, 0) };
    inline ConditionBasicInfo& setExclusion(int32_t exclusion) { DARABONBA_PTR_SET_VALUE(exclusion_, exclusion) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ConditionBasicInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline ConditionBasicInfo& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConditionBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<OperatorBasicInfo> & operators() const { DARABONBA_PTR_GET_CONST(operators_, vector<OperatorBasicInfo>) };
    inline vector<OperatorBasicInfo> operators() { DARABONBA_PTR_GET(operators_, vector<OperatorBasicInfo>) };
    inline ConditionBasicInfo& setOperators(const vector<OperatorBasicInfo> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline ConditionBasicInfo& setOperators(vector<OperatorBasicInfo> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline ConditionBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline ConditionBasicInfo& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    std::shared_ptr<ConditionBasicInfoCheckRange> checkRange_ = nullptr;
    std::shared_ptr<string> cid_ = nullptr;
    std::shared_ptr<int32_t> exclusion_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<OperatorBasicInfo>> operators_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
