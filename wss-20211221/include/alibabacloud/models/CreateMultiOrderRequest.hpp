// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMultiOrderRequestOrderItems.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class CreateMultiOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderItems, orderItems_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    CreateMultiOrderRequest() = default ;
    CreateMultiOrderRequest(const CreateMultiOrderRequest &) = default ;
    CreateMultiOrderRequest(CreateMultiOrderRequest &&) = default ;
    CreateMultiOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiOrderRequest() = default ;
    CreateMultiOrderRequest& operator=(const CreateMultiOrderRequest &) = default ;
    CreateMultiOrderRequest& operator=(CreateMultiOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderItems_ != nullptr
        && this->orderType_ != nullptr && this->properties_ != nullptr && this->resellerOwnerUid_ != nullptr; };
    // orderItems Field Functions 
    bool hasOrderItems() const { return this->orderItems_ != nullptr;};
    void deleteOrderItems() { this->orderItems_ = nullptr;};
    inline const vector<CreateMultiOrderRequestOrderItems> & orderItems() const { DARABONBA_PTR_GET_CONST(orderItems_, vector<CreateMultiOrderRequestOrderItems>) };
    inline vector<CreateMultiOrderRequestOrderItems> orderItems() { DARABONBA_PTR_GET(orderItems_, vector<CreateMultiOrderRequestOrderItems>) };
    inline CreateMultiOrderRequest& setOrderItems(const vector<CreateMultiOrderRequestOrderItems> & orderItems) { DARABONBA_PTR_SET_VALUE(orderItems_, orderItems) };
    inline CreateMultiOrderRequest& setOrderItems(vector<CreateMultiOrderRequestOrderItems> && orderItems) { DARABONBA_PTR_SET_RVALUE(orderItems_, orderItems) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateMultiOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
    inline map<string, string> properties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
    inline CreateMultiOrderRequest& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CreateMultiOrderRequest& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateMultiOrderRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    std::shared_ptr<vector<CreateMultiOrderRequestOrderItems>> orderItems_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<map<string, string>> properties_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
