// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECHECKRESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECHECKRESULTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RemoveCheckResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RemoveCheckResultWhiteListRequest() = default ;
    RemoveCheckResultWhiteListRequest(const RemoveCheckResultWhiteListRequest &) = default ;
    RemoveCheckResultWhiteListRequest(RemoveCheckResultWhiteListRequest &&) = default ;
    RemoveCheckResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveCheckResultWhiteListRequest() = default ;
    RemoveCheckResultWhiteListRequest& operator=(const RemoveCheckResultWhiteListRequest &) = default ;
    RemoveCheckResultWhiteListRequest& operator=(RemoveCheckResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkGroupId_ == nullptr
        && return this->checkIds_ == nullptr && return this->instanceIds_ == nullptr && return this->ruleId_ == nullptr && return this->type_ == nullptr; };
    // checkGroupId Field Functions 
    bool hasCheckGroupId() const { return this->checkGroupId_ != nullptr;};
    void deleteCheckGroupId() { this->checkGroupId_ = nullptr;};
    inline string checkGroupId() const { DARABONBA_PTR_GET_DEFAULT(checkGroupId_, "") };
    inline RemoveCheckResultWhiteListRequest& setCheckGroupId(string checkGroupId) { DARABONBA_PTR_SET_VALUE(checkGroupId_, checkGroupId) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline RemoveCheckResultWhiteListRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline RemoveCheckResultWhiteListRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveCheckResultWhiteListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveCheckResultWhiteListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline RemoveCheckResultWhiteListRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RemoveCheckResultWhiteListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> checkGroupId_ = nullptr;
    // The IDs of the check items.
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the whitelist rule.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of whitelist rules.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
