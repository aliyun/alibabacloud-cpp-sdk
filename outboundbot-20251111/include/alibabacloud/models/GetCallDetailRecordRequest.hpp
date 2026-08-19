// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class GetCallDetailRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetCallDetailRecordRequest() = default ;
    GetCallDetailRecordRequest(const GetCallDetailRecordRequest &) = default ;
    GetCallDetailRecordRequest(GetCallDetailRecordRequest &&) = default ;
    GetCallDetailRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordRequest() = default ;
    GetCallDetailRecordRequest& operator=(const GetCallDetailRecordRequest &) = default ;
    GetCallDetailRecordRequest& operator=(GetCallDetailRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->productCode_ == nullptr && this->sessionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCallDetailRecordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetCallDetailRecordRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetCallDetailRecordRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The call session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
