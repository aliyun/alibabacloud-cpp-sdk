// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeQrCodeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeQrCodeResponseBody() = default ;
    RecognizeQrCodeResponseBody(const RecognizeQrCodeResponseBody &) = default ;
    RecognizeQrCodeResponseBody(RecognizeQrCodeResponseBody &&) = default ;
    RecognizeQrCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeResponseBody() = default ;
    RecognizeQrCodeResponseBody& operator=(const RecognizeQrCodeResponseBody &) = default ;
    RecognizeQrCodeResponseBody& operator=(RecognizeQrCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeQrCodeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeQrCodeResponseBodyData) };
    inline RecognizeQrCodeResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeQrCodeResponseBodyData) };
    inline RecognizeQrCodeResponseBody& setData(const RecognizeQrCodeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeQrCodeResponseBody& setData(RecognizeQrCodeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeQrCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeQrCodeResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
