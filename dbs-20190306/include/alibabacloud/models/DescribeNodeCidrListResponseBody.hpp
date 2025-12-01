// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNodeCidrListResponseBodyInternetIPs.hpp>
#include <alibabacloud/models/DescribeNodeCidrListResponseBodyIntranetIPs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeNodeCidrListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeCidrListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InternetIPs, internetIPs_);
      DARABONBA_PTR_TO_JSON(IntranetIPs, intranetIPs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeCidrListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InternetIPs, internetIPs_);
      DARABONBA_PTR_FROM_JSON(IntranetIPs, intranetIPs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeNodeCidrListResponseBody() = default ;
    DescribeNodeCidrListResponseBody(const DescribeNodeCidrListResponseBody &) = default ;
    DescribeNodeCidrListResponseBody(DescribeNodeCidrListResponseBody &&) = default ;
    DescribeNodeCidrListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeCidrListResponseBody() = default ;
    DescribeNodeCidrListResponseBody& operator=(const DescribeNodeCidrListResponseBody &) = default ;
    DescribeNodeCidrListResponseBody& operator=(DescribeNodeCidrListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->internetIPs_ == nullptr && return this->intranetIPs_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeNodeCidrListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeNodeCidrListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeNodeCidrListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // internetIPs Field Functions 
    bool hasInternetIPs() const { return this->internetIPs_ != nullptr;};
    void deleteInternetIPs() { this->internetIPs_ = nullptr;};
    inline const DescribeNodeCidrListResponseBodyInternetIPs & internetIPs() const { DARABONBA_PTR_GET_CONST(internetIPs_, DescribeNodeCidrListResponseBodyInternetIPs) };
    inline DescribeNodeCidrListResponseBodyInternetIPs internetIPs() { DARABONBA_PTR_GET(internetIPs_, DescribeNodeCidrListResponseBodyInternetIPs) };
    inline DescribeNodeCidrListResponseBody& setInternetIPs(const DescribeNodeCidrListResponseBodyInternetIPs & internetIPs) { DARABONBA_PTR_SET_VALUE(internetIPs_, internetIPs) };
    inline DescribeNodeCidrListResponseBody& setInternetIPs(DescribeNodeCidrListResponseBodyInternetIPs && internetIPs) { DARABONBA_PTR_SET_RVALUE(internetIPs_, internetIPs) };


    // intranetIPs Field Functions 
    bool hasIntranetIPs() const { return this->intranetIPs_ != nullptr;};
    void deleteIntranetIPs() { this->intranetIPs_ = nullptr;};
    inline const DescribeNodeCidrListResponseBodyIntranetIPs & intranetIPs() const { DARABONBA_PTR_GET_CONST(intranetIPs_, DescribeNodeCidrListResponseBodyIntranetIPs) };
    inline DescribeNodeCidrListResponseBodyIntranetIPs intranetIPs() { DARABONBA_PTR_GET(intranetIPs_, DescribeNodeCidrListResponseBodyIntranetIPs) };
    inline DescribeNodeCidrListResponseBody& setIntranetIPs(const DescribeNodeCidrListResponseBodyIntranetIPs & intranetIPs) { DARABONBA_PTR_SET_VALUE(intranetIPs_, intranetIPs) };
    inline DescribeNodeCidrListResponseBody& setIntranetIPs(DescribeNodeCidrListResponseBodyIntranetIPs && intranetIPs) { DARABONBA_PTR_SET_RVALUE(intranetIPs_, intranetIPs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeCidrListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNodeCidrListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The public CIDR blocks.
    std::shared_ptr<DescribeNodeCidrListResponseBodyInternetIPs> internetIPs_ = nullptr;
    // The internal CIDR blocks.
    std::shared_ptr<DescribeNodeCidrListResponseBodyIntranetIPs> intranetIPs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
