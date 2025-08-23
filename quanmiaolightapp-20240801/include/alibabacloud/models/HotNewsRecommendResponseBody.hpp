// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotNewsRecommendResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class HotNewsRecommendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotNewsRecommendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, HotNewsRecommendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    HotNewsRecommendResponseBody() = default ;
    HotNewsRecommendResponseBody(const HotNewsRecommendResponseBody &) = default ;
    HotNewsRecommendResponseBody(HotNewsRecommendResponseBody &&) = default ;
    HotNewsRecommendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotNewsRecommendResponseBody() = default ;
    HotNewsRecommendResponseBody& operator=(const HotNewsRecommendResponseBody &) = default ;
    HotNewsRecommendResponseBody& operator=(HotNewsRecommendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotNewsRecommendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const HotNewsRecommendResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, HotNewsRecommendResponseBodyData) };
    inline HotNewsRecommendResponseBodyData data() { DARABONBA_PTR_GET(data_, HotNewsRecommendResponseBodyData) };
    inline HotNewsRecommendResponseBody& setData(const HotNewsRecommendResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline HotNewsRecommendResponseBody& setData(HotNewsRecommendResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotNewsRecommendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotNewsRecommendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotNewsRecommendResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<HotNewsRecommendResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
