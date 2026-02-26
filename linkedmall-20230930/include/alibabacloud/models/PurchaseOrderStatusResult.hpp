// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEORDERSTATUSRESULT_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEORDERSTATUSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class PurchaseOrderStatusResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseOrderStatusResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseOrderStatusResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    PurchaseOrderStatusResult() = default ;
    PurchaseOrderStatusResult(const PurchaseOrderStatusResult &) = default ;
    PurchaseOrderStatusResult(PurchaseOrderStatusResult &&) = default ;
    PurchaseOrderStatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseOrderStatusResult() = default ;
    PurchaseOrderStatusResult& operator=(const PurchaseOrderStatusResult &) = default ;
    PurchaseOrderStatusResult& operator=(PurchaseOrderStatusResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseOrderStatusResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PurchaseOrderStatusResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
