// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPCORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPCORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateIpcOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpcOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpcOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpcOrderResponseBody() = default ;
    CreateIpcOrderResponseBody(const CreateIpcOrderResponseBody &) = default ;
    CreateIpcOrderResponseBody(CreateIpcOrderResponseBody &&) = default ;
    CreateIpcOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpcOrderResponseBody() = default ;
    CreateIpcOrderResponseBody& operator=(const CreateIpcOrderResponseBody &) = default ;
    CreateIpcOrderResponseBody& operator=(CreateIpcOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->purchaseStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // purchaseStatus Field Functions 
    bool hasPurchaseStatus() const { return this->purchaseStatus_ != nullptr;};
    void deletePurchaseStatus() { this->purchaseStatus_ = nullptr;};
    inline string getPurchaseStatus() const { DARABONBA_PTR_GET_DEFAULT(purchaseStatus_, "") };
    inline CreateIpcOrderResponseBody& setPurchaseStatus(string purchaseStatus) { DARABONBA_PTR_SET_VALUE(purchaseStatus_, purchaseStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpcOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> purchaseStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
