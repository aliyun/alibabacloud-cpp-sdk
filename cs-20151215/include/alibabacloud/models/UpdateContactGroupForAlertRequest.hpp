// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTGROUPFORALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTGROUPFORALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateContactGroupForAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactGroupForAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_TO_JSON(contact_group_ids, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(cr_name, crName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactGroupForAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alert_rule_group_name, alertRuleGroupName_);
      DARABONBA_PTR_FROM_JSON(contact_group_ids, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(cr_name, crName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    UpdateContactGroupForAlertRequest() = default ;
    UpdateContactGroupForAlertRequest(const UpdateContactGroupForAlertRequest &) = default ;
    UpdateContactGroupForAlertRequest(UpdateContactGroupForAlertRequest &&) = default ;
    UpdateContactGroupForAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactGroupForAlertRequest() = default ;
    UpdateContactGroupForAlertRequest& operator=(const UpdateContactGroupForAlertRequest &) = default ;
    UpdateContactGroupForAlertRequest& operator=(UpdateContactGroupForAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRuleGroupName_ == nullptr
        && return this->contactGroupIds_ == nullptr && return this->crName_ == nullptr && return this->namespace_ == nullptr; };
    // alertRuleGroupName Field Functions 
    bool hasAlertRuleGroupName() const { return this->alertRuleGroupName_ != nullptr;};
    void deleteAlertRuleGroupName() { this->alertRuleGroupName_ = nullptr;};
    inline string alertRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(alertRuleGroupName_, "") };
    inline UpdateContactGroupForAlertRequest& setAlertRuleGroupName(string alertRuleGroupName) { DARABONBA_PTR_SET_VALUE(alertRuleGroupName_, alertRuleGroupName) };


    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline const vector<int64_t> & contactGroupIds() const { DARABONBA_PTR_GET_CONST(contactGroupIds_, vector<int64_t>) };
    inline vector<int64_t> contactGroupIds() { DARABONBA_PTR_GET(contactGroupIds_, vector<int64_t>) };
    inline UpdateContactGroupForAlertRequest& setContactGroupIds(const vector<int64_t> & contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };
    inline UpdateContactGroupForAlertRequest& setContactGroupIds(vector<int64_t> && contactGroupIds) { DARABONBA_PTR_SET_RVALUE(contactGroupIds_, contactGroupIds) };


    // crName Field Functions 
    bool hasCrName() const { return this->crName_ != nullptr;};
    void deleteCrName() { this->crName_ = nullptr;};
    inline string crName() const { DARABONBA_PTR_GET_DEFAULT(crName_, "") };
    inline UpdateContactGroupForAlertRequest& setCrName(string crName) { DARABONBA_PTR_SET_VALUE(crName_, crName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateContactGroupForAlertRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the alert contact group.
    std::shared_ptr<string> alertRuleGroupName_ = nullptr;
    // The list of contact group IDs.
    std::shared_ptr<vector<int64_t>> contactGroupIds_ = nullptr;
    // The name of the container registry instance.
    std::shared_ptr<string> crName_ = nullptr;
    // The namespace in which the resource resides.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
