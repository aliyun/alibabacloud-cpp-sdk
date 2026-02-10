// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGINSWITCHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGINSWITCHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyLoginSwitchConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoginSwitchConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoginSwitchConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyLoginSwitchConfigRequest() = default ;
    ModifyLoginSwitchConfigRequest(const ModifyLoginSwitchConfigRequest &) = default ;
    ModifyLoginSwitchConfigRequest(ModifyLoginSwitchConfigRequest &&) = default ;
    ModifyLoginSwitchConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoginSwitchConfigRequest() = default ;
    ModifyLoginSwitchConfigRequest& operator=(const ModifyLoginSwitchConfigRequest &) = default ;
    ModifyLoginSwitchConfigRequest& operator=(ModifyLoginSwitchConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && this->status_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline ModifyLoginSwitchConfigRequest& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyLoginSwitchConfigRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the logon security settings that you want to enable or disable. Valid values:
    // 
    // *   **login_common_ip**: unapproved logon IP addresses
    // *   **login_common_time**: unapproved logon time ranges
    // *   **login_common_account**: unapproved logon accounts
    // 
    // This parameter is required.
    shared_ptr<string> item_ {};
    // Specifies whether to enable the logon security settings. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
