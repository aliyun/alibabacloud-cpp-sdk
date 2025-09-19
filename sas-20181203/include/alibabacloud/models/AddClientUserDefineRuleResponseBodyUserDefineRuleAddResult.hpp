// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODYUSERDEFINERULEADDRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODYUSERDEFINERULEADDRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult() = default ;
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult(const AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult &) = default ;
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult(AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult &&) = default ;
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult() = default ;
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& operator=(const AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult &) = default ;
    AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& operator=(AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->platform_ != nullptr && this->switchId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    // *   **all**: all types
    std::shared_ptr<string> platform_ = nullptr;
    // The switch ID of the custom defense rule.
    std::shared_ptr<string> switchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
