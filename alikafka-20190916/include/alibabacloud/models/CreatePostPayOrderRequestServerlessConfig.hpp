// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePostPayOrderRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostPayOrderRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    CreatePostPayOrderRequestServerlessConfig() = default ;
    CreatePostPayOrderRequestServerlessConfig(const CreatePostPayOrderRequestServerlessConfig &) = default ;
    CreatePostPayOrderRequestServerlessConfig(CreatePostPayOrderRequestServerlessConfig &&) = default ;
    CreatePostPayOrderRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostPayOrderRequestServerlessConfig() = default ;
    CreatePostPayOrderRequestServerlessConfig& operator=(const CreatePostPayOrderRequestServerlessConfig &) = default ;
    CreatePostPayOrderRequestServerlessConfig& operator=(CreatePostPayOrderRequestServerlessConfig &&) = default ;
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
    inline CreatePostPayOrderRequestServerlessConfig& setReservedPublishCapacity(int64_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


    // reservedSubscribeCapacity Field Functions 
    bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
    void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
    inline int64_t reservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0L) };
    inline CreatePostPayOrderRequestServerlessConfig& setReservedSubscribeCapacity(int64_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


  protected:
    // The reserved capacity for publishing messages. You can specify only an integer for this parameter. Minimum value: 60.
    // 
    // >  The actual maximum reserved capacity for publishing messages varies based on available resources in the region. The actual range displayed on the buy page shall prevail.
    std::shared_ptr<int64_t> reservedPublishCapacity_ = nullptr;
    // The reserved capacity for subscribing to messages. You can specify only an integer for this parameter. Minimum value: 20.
    // 
    // >  The actual maximum reserved capacity for subscribing to messages varies based on available resources in the region. The actual range displayed on the buy page shall prevail.
    std::shared_ptr<int64_t> reservedSubscribeCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
