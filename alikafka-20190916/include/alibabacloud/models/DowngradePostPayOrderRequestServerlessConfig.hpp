// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNGRADEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DOWNGRADEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DowngradePostPayOrderRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DowngradePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DowngradePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    DowngradePostPayOrderRequestServerlessConfig() = default ;
    DowngradePostPayOrderRequestServerlessConfig(const DowngradePostPayOrderRequestServerlessConfig &) = default ;
    DowngradePostPayOrderRequestServerlessConfig(DowngradePostPayOrderRequestServerlessConfig &&) = default ;
    DowngradePostPayOrderRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DowngradePostPayOrderRequestServerlessConfig() = default ;
    DowngradePostPayOrderRequestServerlessConfig& operator=(const DowngradePostPayOrderRequestServerlessConfig &) = default ;
    DowngradePostPayOrderRequestServerlessConfig& operator=(DowngradePostPayOrderRequestServerlessConfig &&) = default ;
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
    inline DowngradePostPayOrderRequestServerlessConfig& setReservedPublishCapacity(int64_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


    // reservedSubscribeCapacity Field Functions 
    bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
    void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
    inline int64_t reservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0L) };
    inline DowngradePostPayOrderRequestServerlessConfig& setReservedSubscribeCapacity(int64_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


  protected:
    std::shared_ptr<int64_t> reservedPublishCapacity_ = nullptr;
    std::shared_ptr<int64_t> reservedSubscribeCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
