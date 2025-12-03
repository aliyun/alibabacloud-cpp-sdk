// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODYGROUPQPSMONITORITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODYGROUPQPSMONITORITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupQpsResponseBodyGroupQpsMonitorItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupQpsResponseBodyGroupQpsMonitorItem& obj) { 
      DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupQpsResponseBodyGroupQpsMonitorItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemTime, itemTime_);
      DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
    };
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem() = default ;
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem(const DescribeGroupQpsResponseBodyGroupQpsMonitorItem &) = default ;
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem(DescribeGroupQpsResponseBodyGroupQpsMonitorItem &&) = default ;
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupQpsResponseBodyGroupQpsMonitorItem() = default ;
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem& operator=(const DescribeGroupQpsResponseBodyGroupQpsMonitorItem &) = default ;
    DescribeGroupQpsResponseBodyGroupQpsMonitorItem& operator=(DescribeGroupQpsResponseBodyGroupQpsMonitorItem &&) = default ;
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
    inline DescribeGroupQpsResponseBodyGroupQpsMonitorItem& setItemTime(string itemTime) { DARABONBA_PTR_SET_VALUE(itemTime_, itemTime) };


    // itemValue Field Functions 
    bool hasItemValue() const { return this->itemValue_ != nullptr;};
    void deleteItemValue() { this->itemValue_ = nullptr;};
    inline string itemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
    inline DescribeGroupQpsResponseBodyGroupQpsMonitorItem& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


  protected:
    // The point in time.
    std::shared_ptr<string> itemTime_ = nullptr;
    // The number of requests at the specified point in time.
    std::shared_ptr<string> itemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
