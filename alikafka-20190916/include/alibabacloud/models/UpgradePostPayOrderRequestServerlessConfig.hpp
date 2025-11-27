// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpgradePostPayOrderRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    UpgradePostPayOrderRequestServerlessConfig() = default ;
    UpgradePostPayOrderRequestServerlessConfig(const UpgradePostPayOrderRequestServerlessConfig &) = default ;
    UpgradePostPayOrderRequestServerlessConfig(UpgradePostPayOrderRequestServerlessConfig &&) = default ;
    UpgradePostPayOrderRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePostPayOrderRequestServerlessConfig() = default ;
    UpgradePostPayOrderRequestServerlessConfig& operator=(const UpgradePostPayOrderRequestServerlessConfig &) = default ;
    UpgradePostPayOrderRequestServerlessConfig& operator=(UpgradePostPayOrderRequestServerlessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reservedPublishCapacity_ == nullptr
        && return this->reservedSubscribeCapacity_ == nullptr; };
    // reservedPublishCapacity Field Functions 
    bool hasReservedPublishCapacity() const { return this->reservedPublishCapacity_ != nullptr;};
    void deleteReservedPublishCapacity() { this->reservedPublishCapacity_ = nullptr;};
    inline int64_t reservedPublishCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedPublishCapacity_, 0L) };
    inline UpgradePostPayOrderRequestServerlessConfig& setReservedPublishCapacity(int64_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


    // reservedSubscribeCapacity Field Functions 
    bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
    void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
    inline int64_t reservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0L) };
    inline UpgradePostPayOrderRequestServerlessConfig& setReservedSubscribeCapacity(int64_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


  protected:
    // The reserved capacity for publishing messages. You can specify only an integer for this parameter. Minimum value: 60.
    // 
    // >  The maximum capacity that you can reserve for an instance varies based on available resources in a region. The reserved capacity range displayed on the buy page shall prevail.
    std::shared_ptr<int64_t> reservedPublishCapacity_ = nullptr;
    // The reserved capacity for subscribing to messages. You can specify only an integer for this parameter. Minimum value: 50.
    // 
    // >  The maximum capacity that you can reserve for an instance varies based on available resources in a region. The reserved capacity range displayed on the buy page shall prevail.
    std::shared_ptr<int64_t> reservedSubscribeCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
