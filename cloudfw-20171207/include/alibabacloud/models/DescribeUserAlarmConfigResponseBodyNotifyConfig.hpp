// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAlarmConfigResponseBodyNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAlarmConfigResponseBodyNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(NotifyValue, notifyValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAlarmConfigResponseBodyNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(NotifyValue, notifyValue_);
    };
    DescribeUserAlarmConfigResponseBodyNotifyConfig() = default ;
    DescribeUserAlarmConfigResponseBodyNotifyConfig(const DescribeUserAlarmConfigResponseBodyNotifyConfig &) = default ;
    DescribeUserAlarmConfigResponseBodyNotifyConfig(DescribeUserAlarmConfigResponseBodyNotifyConfig &&) = default ;
    DescribeUserAlarmConfigResponseBodyNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAlarmConfigResponseBodyNotifyConfig() = default ;
    DescribeUserAlarmConfigResponseBodyNotifyConfig& operator=(const DescribeUserAlarmConfigResponseBodyNotifyConfig &) = default ;
    DescribeUserAlarmConfigResponseBodyNotifyConfig& operator=(DescribeUserAlarmConfigResponseBodyNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyType_ == nullptr
        && return this->notifyValue_ == nullptr; };
    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline DescribeUserAlarmConfigResponseBodyNotifyConfig& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // notifyValue Field Functions 
    bool hasNotifyValue() const { return this->notifyValue_ != nullptr;};
    void deleteNotifyValue() { this->notifyValue_ = nullptr;};
    inline string notifyValue() const { DARABONBA_PTR_GET_DEFAULT(notifyValue_, "") };
    inline DescribeUserAlarmConfigResponseBodyNotifyConfig& setNotifyValue(string notifyValue) { DARABONBA_PTR_SET_VALUE(notifyValue_, notifyValue) };


  protected:
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<string> notifyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
