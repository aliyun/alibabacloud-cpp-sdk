// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeIdentityCardResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeIdentityCardResponseBody() = default ;
    RecognizeIdentityCardResponseBody(const RecognizeIdentityCardResponseBody &) = default ;
    RecognizeIdentityCardResponseBody(RecognizeIdentityCardResponseBody &&) = default ;
    RecognizeIdentityCardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBody() = default ;
    RecognizeIdentityCardResponseBody& operator=(const RecognizeIdentityCardResponseBody &) = default ;
    RecognizeIdentityCardResponseBody& operator=(RecognizeIdentityCardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeIdentityCardResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeIdentityCardResponseBodyData) };
    inline RecognizeIdentityCardResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeIdentityCardResponseBodyData) };
    inline RecognizeIdentityCardResponseBody& setData(const RecognizeIdentityCardResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeIdentityCardResponseBody& setData(RecognizeIdentityCardResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeIdentityCardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeIdentityCardResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
