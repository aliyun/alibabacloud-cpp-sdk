// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateContainerScanTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateContainerScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContainerScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContainerScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateContainerScanTaskResponseBody() = default ;
    CreateContainerScanTaskResponseBody(const CreateContainerScanTaskResponseBody &) = default ;
    CreateContainerScanTaskResponseBody(CreateContainerScanTaskResponseBody &&) = default ;
    CreateContainerScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContainerScanTaskResponseBody() = default ;
    CreateContainerScanTaskResponseBody& operator=(const CreateContainerScanTaskResponseBody &) = default ;
    CreateContainerScanTaskResponseBody& operator=(CreateContainerScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateContainerScanTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateContainerScanTaskResponseBodyData) };
    inline CreateContainerScanTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateContainerScanTaskResponseBodyData) };
    inline CreateContainerScanTaskResponseBody& setData(const CreateContainerScanTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateContainerScanTaskResponseBody& setData(CreateContainerScanTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateContainerScanTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateContainerScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateContainerScanTaskResponseBodyData> data_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
