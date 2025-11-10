// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEACCOUNTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEACCOUNTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstanceAccountResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAccountResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(accountType, accountType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAccountResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(accountType, accountType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListInstanceAccountResponseBodyDataList() = default ;
    ListInstanceAccountResponseBodyDataList(const ListInstanceAccountResponseBodyDataList &) = default ;
    ListInstanceAccountResponseBodyDataList(ListInstanceAccountResponseBodyDataList &&) = default ;
    ListInstanceAccountResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAccountResponseBodyDataList() = default ;
    ListInstanceAccountResponseBodyDataList& operator=(const ListInstanceAccountResponseBodyDataList &) = default ;
    ListInstanceAccountResponseBodyDataList& operator=(ListInstanceAccountResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && return this->accountType_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->username_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline ListInstanceAccountResponseBodyDataList& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline ListInstanceAccountResponseBodyDataList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceAccountResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceAccountResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListInstanceAccountResponseBodyDataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The status of the account.
    // Valid values:
    //   - DISABLE
    //   - ENABLE
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The account type.
    //   - CUSTOMER
    //   - DEFAULT
    std::shared_ptr<string> accountType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
