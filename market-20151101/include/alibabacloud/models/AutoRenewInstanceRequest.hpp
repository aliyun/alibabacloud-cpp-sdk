// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTORENEWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTORENEWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class AutoRenewInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoRenewInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewCycle, autoRenewCycle_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(OrderBizId, orderBizId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AutoRenewInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewCycle, autoRenewCycle_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(OrderBizId, orderBizId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AutoRenewInstanceRequest() = default ;
    AutoRenewInstanceRequest(const AutoRenewInstanceRequest &) = default ;
    AutoRenewInstanceRequest(AutoRenewInstanceRequest &&) = default ;
    AutoRenewInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoRenewInstanceRequest() = default ;
    AutoRenewInstanceRequest& operator=(const AutoRenewInstanceRequest &) = default ;
    AutoRenewInstanceRequest& operator=(AutoRenewInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewCycle_ != nullptr
        && this->autoRenewDuration_ != nullptr && this->orderBizId_ != nullptr && this->ownerId_ != nullptr && this->type_ != nullptr; };
    // autoRenewCycle Field Functions 
    bool hasAutoRenewCycle() const { return this->autoRenewCycle_ != nullptr;};
    void deleteAutoRenewCycle() { this->autoRenewCycle_ = nullptr;};
    inline string autoRenewCycle() const { DARABONBA_PTR_GET_DEFAULT(autoRenewCycle_, "") };
    inline AutoRenewInstanceRequest& setAutoRenewCycle(string autoRenewCycle) { DARABONBA_PTR_SET_VALUE(autoRenewCycle_, autoRenewCycle) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline AutoRenewInstanceRequest& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // orderBizId Field Functions 
    bool hasOrderBizId() const { return this->orderBizId_ != nullptr;};
    void deleteOrderBizId() { this->orderBizId_ = nullptr;};
    inline int64_t orderBizId() const { DARABONBA_PTR_GET_DEFAULT(orderBizId_, 0L) };
    inline AutoRenewInstanceRequest& setOrderBizId(int64_t orderBizId) { DARABONBA_PTR_SET_VALUE(orderBizId_, orderBizId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AutoRenewInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AutoRenewInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> autoRenewCycle_ = nullptr;
    std::shared_ptr<int32_t> autoRenewDuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orderBizId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
