// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMultiOrderShrinkRequestOrderItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class CreateMultiOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    CreateMultiOrderShrinkRequest() = default ;
    CreateMultiOrderShrinkRequest(const CreateMultiOrderShrinkRequest &) = default ;
    CreateMultiOrderShrinkRequest(CreateMultiOrderShrinkRequest &&) = default ;
    CreateMultiOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiOrderShrinkRequest() = default ;
    CreateMultiOrderShrinkRequest& operator=(const CreateMultiOrderShrinkRequest &) = default ;
    CreateMultiOrderShrinkRequest& operator=(CreateMultiOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderItems_ == nullptr
        && return this->orderType_ == nullptr && return this->propertiesShrink_ == nullptr && return this->resellerOwnerUid_ == nullptr; };
    // orderItems Field Functions 
    bool hasOrderItems() const { return this->orderItems_ != nullptr;};
    void deleteOrderItems() { this->orderItems_ = nullptr;};
    inline const vector<CreateMultiOrderShrinkRequestOrderItems> & orderItems() const { DARABONBA_PTR_GET_CONST(orderItems_, vector<CreateMultiOrderShrinkRequestOrderItems>) };
    inline vector<CreateMultiOrderShrinkRequestOrderItems> orderItems() { DARABONBA_PTR_GET(orderItems_, vector<CreateMultiOrderShrinkRequestOrderItems>) };
    inline CreateMultiOrderShrinkRequest& setOrderItems(const vector<CreateMultiOrderShrinkRequestOrderItems> & orderItems) { DARABONBA_PTR_SET_VALUE(orderItems_, orderItems) };
    inline CreateMultiOrderShrinkRequest& setOrderItems(vector<CreateMultiOrderShrinkRequestOrderItems> && orderItems) { DARABONBA_PTR_SET_RVALUE(orderItems_, orderItems) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateMultiOrderShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // propertiesShrink Field Functions 
    bool hasPropertiesShrink() const { return this->propertiesShrink_ != nullptr;};
    void deletePropertiesShrink() { this->propertiesShrink_ = nullptr;};
    inline string propertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(propertiesShrink_, "") };
    inline CreateMultiOrderShrinkRequest& setPropertiesShrink(string propertiesShrink) { DARABONBA_PTR_SET_VALUE(propertiesShrink_, propertiesShrink) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateMultiOrderShrinkRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    std::shared_ptr<vector<CreateMultiOrderShrinkRequestOrderItems>> orderItems_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> propertiesShrink_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
