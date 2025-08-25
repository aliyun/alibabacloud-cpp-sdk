// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLEVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateHumanAnimeStyleVideoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GenerateHumanAnimeStyleVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateHumanAnimeStyleVideoResponseBody() = default ;
    GenerateHumanAnimeStyleVideoResponseBody(const GenerateHumanAnimeStyleVideoResponseBody &) = default ;
    GenerateHumanAnimeStyleVideoResponseBody(GenerateHumanAnimeStyleVideoResponseBody &&) = default ;
    GenerateHumanAnimeStyleVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleVideoResponseBody() = default ;
    GenerateHumanAnimeStyleVideoResponseBody& operator=(const GenerateHumanAnimeStyleVideoResponseBody &) = default ;
    GenerateHumanAnimeStyleVideoResponseBody& operator=(GenerateHumanAnimeStyleVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateHumanAnimeStyleVideoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateHumanAnimeStyleVideoResponseBodyData) };
    inline GenerateHumanAnimeStyleVideoResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateHumanAnimeStyleVideoResponseBodyData) };
    inline GenerateHumanAnimeStyleVideoResponseBody& setData(const GenerateHumanAnimeStyleVideoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateHumanAnimeStyleVideoResponseBody& setData(GenerateHumanAnimeStyleVideoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateHumanAnimeStyleVideoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateHumanAnimeStyleVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GenerateHumanAnimeStyleVideoResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
