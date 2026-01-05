// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNGRADEANDROIDINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNGRADEANDROIDINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DowngradeAndroidInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DowngradeAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DowngradeAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
    };
    DowngradeAndroidInstanceGroupRequest() = default ;
    DowngradeAndroidInstanceGroupRequest(const DowngradeAndroidInstanceGroupRequest &) = default ;
    DowngradeAndroidInstanceGroupRequest(DowngradeAndroidInstanceGroupRequest &&) = default ;
    DowngradeAndroidInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DowngradeAndroidInstanceGroupRequest() = default ;
    DowngradeAndroidInstanceGroupRequest& operator=(const DowngradeAndroidInstanceGroupRequest &) = default ;
    DowngradeAndroidInstanceGroupRequest& operator=(DowngradeAndroidInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->autoPay_ == nullptr && this->instanceGroupId_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DowngradeAndroidInstanceGroupRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DowngradeAndroidInstanceGroupRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline DowngradeAndroidInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DowngradeAndroidInstanceGroupRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


  protected:
    // The IDs of the cloud phone instances that you want to delete.
    shared_ptr<vector<string>> androidInstanceIds_ {};
    // Specifies whether to enable the auto-payment feature. Default value: false.
    // 
    // Valid values:
    // 
    // *   true: enables the auto-payment feature. Ensure your account has sufficient balance to use this feature.
    // *   false: disables the auto-payment feature. This requires manual payment each time you place an order.
    shared_ptr<bool> autoPay_ {};
    // The ID of the instance group.
    // 
    // This parameter is required.
    shared_ptr<string> instanceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
