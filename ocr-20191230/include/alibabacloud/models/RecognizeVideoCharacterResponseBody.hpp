// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeVideoCharacterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeVideoCharacterResponseBody() = default ;
    RecognizeVideoCharacterResponseBody(const RecognizeVideoCharacterResponseBody &) = default ;
    RecognizeVideoCharacterResponseBody(RecognizeVideoCharacterResponseBody &&) = default ;
    RecognizeVideoCharacterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterResponseBody() = default ;
    RecognizeVideoCharacterResponseBody& operator=(const RecognizeVideoCharacterResponseBody &) = default ;
    RecognizeVideoCharacterResponseBody& operator=(RecognizeVideoCharacterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeVideoCharacterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeVideoCharacterResponseBodyData) };
    inline RecognizeVideoCharacterResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeVideoCharacterResponseBodyData) };
    inline RecognizeVideoCharacterResponseBody& setData(const RecognizeVideoCharacterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeVideoCharacterResponseBody& setData(RecognizeVideoCharacterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RecognizeVideoCharacterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeVideoCharacterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeVideoCharacterResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
