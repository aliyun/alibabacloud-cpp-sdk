// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListAssociatedResourceRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedResourceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(ExistingStatus, existingStatus_);
      DARABONBA_PTR_TO_JSON(SettingName, settingName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedResourceRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistingStatus, existingStatus_);
      DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    ListAssociatedResourceRulesResponseBodyRules() = default ;
    ListAssociatedResourceRulesResponseBodyRules(const ListAssociatedResourceRulesResponseBodyRules &) = default ;
    ListAssociatedResourceRulesResponseBodyRules(ListAssociatedResourceRulesResponseBodyRules &&) = default ;
    ListAssociatedResourceRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedResourceRulesResponseBodyRules() = default ;
    ListAssociatedResourceRulesResponseBodyRules& operator=(const ListAssociatedResourceRulesResponseBodyRules &) = default ;
    ListAssociatedResourceRulesResponseBodyRules& operator=(ListAssociatedResourceRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->existingStatus_ != nullptr
        && this->settingName_ != nullptr && this->status_ != nullptr && this->tagKeys_ != nullptr; };
    // existingStatus Field Functions 
    bool hasExistingStatus() const { return this->existingStatus_ != nullptr;};
    void deleteExistingStatus() { this->existingStatus_ = nullptr;};
    inline string existingStatus() const { DARABONBA_PTR_GET_DEFAULT(existingStatus_, "") };
    inline ListAssociatedResourceRulesResponseBodyRules& setExistingStatus(string existingStatus) { DARABONBA_PTR_SET_VALUE(existingStatus_, existingStatus) };


    // settingName Field Functions 
    bool hasSettingName() const { return this->settingName_ != nullptr;};
    void deleteSettingName() { this->settingName_ = nullptr;};
    inline string settingName() const { DARABONBA_PTR_GET_DEFAULT(settingName_, "") };
    inline ListAssociatedResourceRulesResponseBodyRules& setSettingName(string settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAssociatedResourceRulesResponseBodyRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> tagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline ListAssociatedResourceRulesResponseBodyRules& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline ListAssociatedResourceRulesResponseBodyRules& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    std::shared_ptr<string> existingStatus_ = nullptr;
    // Setting name of the associated resource tag rule.
    std::shared_ptr<string> settingName_ = nullptr;
    // Whether the associated resource tag rule is enabled. Values:
    // 
    // - Enable: Enabled.
    // - Disable: Disabled.
    std::shared_ptr<string> status_ = nullptr;
    // List of tag keys for the associated resource tag rule.
    std::shared_ptr<vector<string>> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
