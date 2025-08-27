// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TrainOrderQueryV2Request() = default ;
    TrainOrderQueryV2Request(const TrainOrderQueryV2Request &) = default ;
    TrainOrderQueryV2Request(TrainOrderQueryV2Request &&) = default ;
    TrainOrderQueryV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2Request() = default ;
    TrainOrderQueryV2Request& operator=(const TrainOrderQueryV2Request &) = default ;
    TrainOrderQueryV2Request& operator=(TrainOrderQueryV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->userId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline TrainOrderQueryV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryV2Request& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
