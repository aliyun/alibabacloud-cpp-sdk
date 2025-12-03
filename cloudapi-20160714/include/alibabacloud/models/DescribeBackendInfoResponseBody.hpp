// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendInfo, backendInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendInfo, backendInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackendInfoResponseBody() = default ;
    DescribeBackendInfoResponseBody(const DescribeBackendInfoResponseBody &) = default ;
    DescribeBackendInfoResponseBody(DescribeBackendInfoResponseBody &&) = default ;
    DescribeBackendInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBody() = default ;
    DescribeBackendInfoResponseBody& operator=(const DescribeBackendInfoResponseBody &) = default ;
    DescribeBackendInfoResponseBody& operator=(DescribeBackendInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // backendInfo Field Functions 
    bool hasBackendInfo() const { return this->backendInfo_ != nullptr;};
    void deleteBackendInfo() { this->backendInfo_ = nullptr;};
    inline const DescribeBackendInfoResponseBodyBackendInfo & backendInfo() const { DARABONBA_PTR_GET_CONST(backendInfo_, DescribeBackendInfoResponseBodyBackendInfo) };
    inline DescribeBackendInfoResponseBodyBackendInfo backendInfo() { DARABONBA_PTR_GET(backendInfo_, DescribeBackendInfoResponseBodyBackendInfo) };
    inline DescribeBackendInfoResponseBody& setBackendInfo(const DescribeBackendInfoResponseBodyBackendInfo & backendInfo) { DARABONBA_PTR_SET_VALUE(backendInfo_, backendInfo) };
    inline DescribeBackendInfoResponseBody& setBackendInfo(DescribeBackendInfoResponseBodyBackendInfo && backendInfo) { DARABONBA_PTR_SET_RVALUE(backendInfo_, backendInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackendInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the backend service.
    std::shared_ptr<DescribeBackendInfoResponseBodyBackendInfo> backendInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
