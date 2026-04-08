// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUEST_HPP_
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
  class DsgWhiteListAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
    };
    DsgWhiteListAddOrUpdateRequest() = default ;
    DsgWhiteListAddOrUpdateRequest(const DsgWhiteListAddOrUpdateRequest &) = default ;
    DsgWhiteListAddOrUpdateRequest(DsgWhiteListAddOrUpdateRequest &&) = default ;
    DsgWhiteListAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListAddOrUpdateRequest() = default ;
    DsgWhiteListAddOrUpdateRequest& operator=(const DsgWhiteListAddOrUpdateRequest &) = default ;
    DsgWhiteListAddOrUpdateRequest& operator=(DsgWhiteListAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WhiteLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WhiteLists& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      };
      friend void from_json(const Darabonba::Json& j, WhiteLists& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      };
      WhiteLists() = default ;
      WhiteLists(const WhiteLists &) = default ;
      WhiteLists(WhiteLists &&) = default ;
      WhiteLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WhiteLists() = default ;
      WhiteLists& operator=(const WhiteLists &) = default ;
      WhiteLists& operator=(WhiteLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->id_ == nullptr && this->ruleId_ == nullptr && this->startTime_ == nullptr && this->userGroupIds_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline WhiteLists& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline WhiteLists& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
      inline WhiteLists& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline WhiteLists& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<int32_t> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<int32_t>) };
      inline vector<int32_t> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<int32_t>) };
      inline WhiteLists& setUserGroupIds(const vector<int32_t> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline WhiteLists& setUserGroupIds(vector<int32_t> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    protected:
      // The end of the time range to query. If you enter null, the whitelist is valid permanently.
      shared_ptr<string> endTime_ {};
      // The ID of the data masking whitelist.
      // 
      // *   If you do not configure this parameter, the current operation is to add a data masking whitelist.
      // *   If you configure this parameter, the current operation is to modify a data masking whitelist. You can call the [DsgWhiteListQueryList](https://help.aliyun.com/document_detail/2786508.html) operation to query the whitelist ID.
      shared_ptr<int32_t> id_ {};
      // The ID of the data masking rule. You can call the [DsgDesensPlanQueryList](https://help.aliyun.com/document_detail/2786578.html) operation to query the ID of the data masking rule.
      // 
      // This parameter is required.
      shared_ptr<int32_t> ruleId_ {};
      // The beginning of the time range to query.
      // 
      // This parameter is required.
      shared_ptr<string> startTime_ {};
      // A collection of user group IDs.
      // 
      // This parameter is required.
      shared_ptr<vector<int32_t>> userGroupIds_ {};
    };

    virtual bool empty() const override { return this->whiteLists_ == nullptr; };
    // whiteLists Field Functions 
    bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
    void deleteWhiteLists() { this->whiteLists_ = nullptr;};
    inline const vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> & getWhiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<DsgWhiteListAddOrUpdateRequest::WhiteLists>) };
    inline vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> getWhiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<DsgWhiteListAddOrUpdateRequest::WhiteLists>) };
    inline DsgWhiteListAddOrUpdateRequest& setWhiteLists(const vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
    inline DsgWhiteListAddOrUpdateRequest& setWhiteLists(vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


  protected:
    // A collection of whitelists.
    // 
    // This parameter is required.
    shared_ptr<vector<DsgWhiteListAddOrUpdateRequest::WhiteLists>> whiteLists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
