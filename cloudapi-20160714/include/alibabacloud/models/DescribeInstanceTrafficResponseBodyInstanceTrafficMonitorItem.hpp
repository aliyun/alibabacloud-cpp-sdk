// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODYINSTANCETRAFFICMONITORITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODYINSTANCETRAFFICMONITORITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
    };
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem() = default ;
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem(const DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem &) = default ;
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem(DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem &&) = default ;
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem() = default ;
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& operator=(const DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem &) = default ;
    DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& operator=(DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->itemTime_ == nullptr && return this->itemValue_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // itemTime Field Functions 
    bool hasItemTime() const { return this->itemTime_ != nullptr;};
    void deleteItemTime() { this->itemTime_ = nullptr;};
    inline string itemTime() const { DARABONBA_PTR_GET_DEFAULT(itemTime_, "") };
    inline DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& setItemTime(string itemTime) { DARABONBA_PTR_SET_VALUE(itemTime_, itemTime) };


    // itemValue Field Functions 
    bool hasItemValue() const { return this->itemValue_ != nullptr;};
    void deleteItemValue() { this->itemValue_ = nullptr;};
    inline string itemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
    inline DescribeInstanceTrafficResponseBodyInstanceTrafficMonitorItem& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


  protected:
    // The metric. Valid values:
    // 
    // *   inbound: traffic consumed by requests
    // *   outbound: traffic consumed by responses
    std::shared_ptr<string> item_ = nullptr;
    // The monitoring time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    std::shared_ptr<string> itemTime_ = nullptr;
    // The amount of traffic consumed by the requests and responses in the instance.
    std::shared_ptr<string> itemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
