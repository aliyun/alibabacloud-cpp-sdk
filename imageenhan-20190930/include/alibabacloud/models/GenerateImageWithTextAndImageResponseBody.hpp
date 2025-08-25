// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateImageWithTextAndImageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateImageWithTextAndImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageWithTextAndImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageWithTextAndImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateImageWithTextAndImageResponseBody() = default ;
    GenerateImageWithTextAndImageResponseBody(const GenerateImageWithTextAndImageResponseBody &) = default ;
    GenerateImageWithTextAndImageResponseBody(GenerateImageWithTextAndImageResponseBody &&) = default ;
    GenerateImageWithTextAndImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageWithTextAndImageResponseBody() = default ;
    GenerateImageWithTextAndImageResponseBody& operator=(const GenerateImageWithTextAndImageResponseBody &) = default ;
    GenerateImageWithTextAndImageResponseBody& operator=(GenerateImageWithTextAndImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateImageWithTextAndImageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateImageWithTextAndImageResponseBodyData) };
    inline GenerateImageWithTextAndImageResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateImageWithTextAndImageResponseBodyData) };
    inline GenerateImageWithTextAndImageResponseBody& setData(const GenerateImageWithTextAndImageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateImageWithTextAndImageResponseBody& setData(GenerateImageWithTextAndImageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateImageWithTextAndImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateImageWithTextAndImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GenerateImageWithTextAndImageResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
