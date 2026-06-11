// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONOP_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONOP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubscriptionForModify.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SubscriptionOp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionOp& obj) { 
      DARABONBA_PTR_TO_JSON(op, op_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionOp& obj) { 
      DARABONBA_PTR_FROM_JSON(op, op_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    SubscriptionOp() = default ;
    SubscriptionOp(const SubscriptionOp &) = default ;
    SubscriptionOp(SubscriptionOp &&) = default ;
    SubscriptionOp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionOp() = default ;
    SubscriptionOp& operator=(const SubscriptionOp &) = default ;
    SubscriptionOp& operator=(SubscriptionOp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->op_ == nullptr
        && this->payload_ == nullptr && this->uuid_ == nullptr; };
    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline SubscriptionOp& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const SubscriptionForModify & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, SubscriptionForModify) };
    inline SubscriptionForModify getPayload() { DARABONBA_PTR_GET(payload_, SubscriptionForModify) };
    inline SubscriptionOp& setPayload(const SubscriptionForModify & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline SubscriptionOp& setPayload(SubscriptionForModify && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline SubscriptionOp& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> op_ {};
    // create/update 必填
    shared_ptr<SubscriptionForModify> payload_ {};
    // update/remove 必填
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
