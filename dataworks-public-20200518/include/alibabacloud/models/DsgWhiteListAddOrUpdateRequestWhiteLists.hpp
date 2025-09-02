// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUESTWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUESTWHITELISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListAddOrUpdateRequestWhiteLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListAddOrUpdateRequestWhiteLists& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListAddOrUpdateRequestWhiteLists& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    DsgWhiteListAddOrUpdateRequestWhiteLists() = default ;
    DsgWhiteListAddOrUpdateRequestWhiteLists(const DsgWhiteListAddOrUpdateRequestWhiteLists &) = default ;
    DsgWhiteListAddOrUpdateRequestWhiteLists(DsgWhiteListAddOrUpdateRequestWhiteLists &&) = default ;
    DsgWhiteListAddOrUpdateRequestWhiteLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListAddOrUpdateRequestWhiteLists() = default ;
    DsgWhiteListAddOrUpdateRequestWhiteLists& operator=(const DsgWhiteListAddOrUpdateRequestWhiteLists &) = default ;
    DsgWhiteListAddOrUpdateRequestWhiteLists& operator=(DsgWhiteListAddOrUpdateRequestWhiteLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->id_ != nullptr && this->ruleId_ != nullptr && this->startTime_ != nullptr && this->userGroupIds_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<int32_t> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<int32_t>) };
    inline vector<int32_t> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<int32_t>) };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setUserGroupIds(const vector<int32_t> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline DsgWhiteListAddOrUpdateRequestWhiteLists& setUserGroupIds(vector<int32_t> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // The end of the time range to query. If you enter null, the whitelist is valid permanently.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the data masking whitelist.
    // 
    // *   If you do not configure this parameter, the current operation is to add a data masking whitelist.
    // *   If you configure this parameter, the current operation is to modify a data masking whitelist. You can call the [DsgWhiteListQueryList](https://help.aliyun.com/document_detail/2786508.html) operation to query the whitelist ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The ID of the data masking rule. You can call the [DsgDesensPlanQueryList](https://help.aliyun.com/document_detail/2786578.html) operation to query the ID of the data masking rule.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The beginning of the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // A collection of user group IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
