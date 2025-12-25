// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConvertHybridInstanceResponseBodyOrderInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ConvertHybridInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHybridInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHybridInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ConvertHybridInstanceResponseBody() = default ;
    ConvertHybridInstanceResponseBody(const ConvertHybridInstanceResponseBody &) = default ;
    ConvertHybridInstanceResponseBody(ConvertHybridInstanceResponseBody &&) = default ;
    ConvertHybridInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHybridInstanceResponseBody() = default ;
    ConvertHybridInstanceResponseBody& operator=(const ConvertHybridInstanceResponseBody &) = default ;
    ConvertHybridInstanceResponseBody& operator=(ConvertHybridInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->orderInfo_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ConvertHybridInstanceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // orderInfo Field Functions 
    bool hasOrderInfo() const { return this->orderInfo_ != nullptr;};
    void deleteOrderInfo() { this->orderInfo_ = nullptr;};
    inline const ConvertHybridInstanceResponseBodyOrderInfo & orderInfo() const { DARABONBA_PTR_GET_CONST(orderInfo_, ConvertHybridInstanceResponseBodyOrderInfo) };
    inline ConvertHybridInstanceResponseBodyOrderInfo orderInfo() { DARABONBA_PTR_GET(orderInfo_, ConvertHybridInstanceResponseBodyOrderInfo) };
    inline ConvertHybridInstanceResponseBody& setOrderInfo(const ConvertHybridInstanceResponseBodyOrderInfo & orderInfo) { DARABONBA_PTR_SET_VALUE(orderInfo_, orderInfo) };
    inline ConvertHybridInstanceResponseBody& setOrderInfo(ConvertHybridInstanceResponseBodyOrderInfo && orderInfo) { DARABONBA_PTR_SET_RVALUE(orderInfo_, orderInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConvertHybridInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ConvertHybridInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<ConvertHybridInstanceResponseBodyOrderInfo> orderInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
