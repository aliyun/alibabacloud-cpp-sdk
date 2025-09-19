// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTAPIINVOKEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileDetectApiInvokeInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectApiInvokeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectApiInvokeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectApiInvokeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileDetectApiInvokeInfoResponseBody() = default ;
    GetFileDetectApiInvokeInfoResponseBody(const GetFileDetectApiInvokeInfoResponseBody &) = default ;
    GetFileDetectApiInvokeInfoResponseBody(GetFileDetectApiInvokeInfoResponseBody &&) = default ;
    GetFileDetectApiInvokeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectApiInvokeInfoResponseBody() = default ;
    GetFileDetectApiInvokeInfoResponseBody& operator=(const GetFileDetectApiInvokeInfoResponseBody &) = default ;
    GetFileDetectApiInvokeInfoResponseBody& operator=(GetFileDetectApiInvokeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileDetectApiInvokeInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetFileDetectApiInvokeInfoResponseBodyData) };
    inline GetFileDetectApiInvokeInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, GetFileDetectApiInvokeInfoResponseBodyData) };
    inline GetFileDetectApiInvokeInfoResponseBody& setData(const GetFileDetectApiInvokeInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileDetectApiInvokeInfoResponseBody& setData(GetFileDetectApiInvokeInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectApiInvokeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returns the response body.
    std::shared_ptr<GetFileDetectApiInvokeInfoResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
