// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMRECOVERYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMRECOVERYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmRecoveryPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddGtmRecoveryPlanResponseBody() = default ;
    AddGtmRecoveryPlanResponseBody(const AddGtmRecoveryPlanResponseBody &) = default ;
    AddGtmRecoveryPlanResponseBody(AddGtmRecoveryPlanResponseBody &&) = default ;
    AddGtmRecoveryPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmRecoveryPlanResponseBody() = default ;
    AddGtmRecoveryPlanResponseBody& operator=(const AddGtmRecoveryPlanResponseBody &) = default ;
    AddGtmRecoveryPlanResponseBody& operator=(AddGtmRecoveryPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recoveryPlanId_ == nullptr
        && return this->requestId_ == nullptr; };
    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline string recoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, "") };
    inline AddGtmRecoveryPlanResponseBody& setRecoveryPlanId(string recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddGtmRecoveryPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the disaster recovery plan.
    std::shared_ptr<string> recoveryPlanId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
