// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEBANKCARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEBANKCARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeBankCardResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeBankCardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeBankCardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeBankCardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeBankCardResponseBody() = default ;
    RecognizeBankCardResponseBody(const RecognizeBankCardResponseBody &) = default ;
    RecognizeBankCardResponseBody(RecognizeBankCardResponseBody &&) = default ;
    RecognizeBankCardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeBankCardResponseBody() = default ;
    RecognizeBankCardResponseBody& operator=(const RecognizeBankCardResponseBody &) = default ;
    RecognizeBankCardResponseBody& operator=(RecognizeBankCardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeBankCardResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeBankCardResponseBodyData) };
    inline RecognizeBankCardResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeBankCardResponseBodyData) };
    inline RecognizeBankCardResponseBody& setData(const RecognizeBankCardResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeBankCardResponseBody& setData(RecognizeBankCardResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeBankCardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeBankCardResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
