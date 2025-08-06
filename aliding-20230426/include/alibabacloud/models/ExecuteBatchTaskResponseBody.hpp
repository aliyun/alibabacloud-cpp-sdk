// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEBATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEBATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ExecuteBatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(failNumber, failNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(successNumber, successNumber_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(failNumber, failNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(successNumber, successNumber_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ExecuteBatchTaskResponseBody() = default ;
    ExecuteBatchTaskResponseBody(const ExecuteBatchTaskResponseBody &) = default ;
    ExecuteBatchTaskResponseBody(ExecuteBatchTaskResponseBody &&) = default ;
    ExecuteBatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteBatchTaskResponseBody() = default ;
    ExecuteBatchTaskResponseBody& operator=(const ExecuteBatchTaskResponseBody &) = default ;
    ExecuteBatchTaskResponseBody& operator=(ExecuteBatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failNumber_ != nullptr
        && this->requestId_ != nullptr && this->successNumber_ != nullptr && this->total_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // failNumber Field Functions 
    bool hasFailNumber() const { return this->failNumber_ != nullptr;};
    void deleteFailNumber() { this->failNumber_ = nullptr;};
    inline int32_t failNumber() const { DARABONBA_PTR_GET_DEFAULT(failNumber_, 0) };
    inline ExecuteBatchTaskResponseBody& setFailNumber(int32_t failNumber) { DARABONBA_PTR_SET_VALUE(failNumber_, failNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteBatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successNumber Field Functions 
    bool hasSuccessNumber() const { return this->successNumber_ != nullptr;};
    void deleteSuccessNumber() { this->successNumber_ = nullptr;};
    inline int32_t successNumber() const { DARABONBA_PTR_GET_DEFAULT(successNumber_, 0) };
    inline ExecuteBatchTaskResponseBody& setSuccessNumber(int32_t successNumber) { DARABONBA_PTR_SET_VALUE(successNumber_, successNumber) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ExecuteBatchTaskResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ExecuteBatchTaskResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ExecuteBatchTaskResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<int32_t> failNumber_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> successNumber_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
