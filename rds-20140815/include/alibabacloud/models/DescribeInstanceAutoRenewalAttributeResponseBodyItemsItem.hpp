// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODYITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODYITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem(const DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem(DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem &&) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& operator=(const DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& operator=(DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->duration_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether to enable auto-renewal for the instance.
    std::shared_ptr<string> autoRenew_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The renewal period.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
