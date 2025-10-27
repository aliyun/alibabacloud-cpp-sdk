// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERSCANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERSCANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerScanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerScanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerScanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyContainerScanConfigResponseBody() = default ;
    ModifyContainerScanConfigResponseBody(const ModifyContainerScanConfigResponseBody &) = default ;
    ModifyContainerScanConfigResponseBody(ModifyContainerScanConfigResponseBody &&) = default ;
    ModifyContainerScanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerScanConfigResponseBody() = default ;
    ModifyContainerScanConfigResponseBody& operator=(const ModifyContainerScanConfigResponseBody &) = default ;
    ModifyContainerScanConfigResponseBody& operator=(ModifyContainerScanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline ModifyContainerScanConfigResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyContainerScanConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyContainerScanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> data_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
