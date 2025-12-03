// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODYCALLDOWNLOADSMONITORITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODYCALLDOWNLOADSMONITORITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& obj) { 
      DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
    };
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem() = default ;
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem(const DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem &) = default ;
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem(DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem &&) = default ;
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem() = default ;
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& operator=(const DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem &) = default ;
    DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& operator=(DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemTime_ == nullptr
        && return this->itemValue_ == nullptr; };
    // itemTime Field Functions 
    bool hasItemTime() const { return this->itemTime_ != nullptr;};
    void deleteItemTime() { this->itemTime_ = nullptr;};
    inline string itemTime() const { DARABONBA_PTR_GET_DEFAULT(itemTime_, "") };
    inline DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& setItemTime(string itemTime) { DARABONBA_PTR_SET_VALUE(itemTime_, itemTime) };


    // itemValue Field Functions 
    bool hasItemValue() const { return this->itemValue_ != nullptr;};
    void deleteItemValue() { this->itemValue_ = nullptr;};
    inline string itemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
    inline DescribeApiTrafficDataResponseBodyCallDownloadsMonitorItem& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


  protected:
    // The time of the monitoring metric. The time format follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    std::shared_ptr<string> itemTime_ = nullptr;
    // The value corresponding to the monitoring metric.
    std::shared_ptr<string> itemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
