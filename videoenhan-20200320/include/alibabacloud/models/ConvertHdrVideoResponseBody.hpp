// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHDRVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHDRVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConvertHdrVideoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ConvertHdrVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHdrVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHdrVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConvertHdrVideoResponseBody() = default ;
    ConvertHdrVideoResponseBody(const ConvertHdrVideoResponseBody &) = default ;
    ConvertHdrVideoResponseBody(ConvertHdrVideoResponseBody &&) = default ;
    ConvertHdrVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHdrVideoResponseBody() = default ;
    ConvertHdrVideoResponseBody& operator=(const ConvertHdrVideoResponseBody &) = default ;
    ConvertHdrVideoResponseBody& operator=(ConvertHdrVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ConvertHdrVideoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ConvertHdrVideoResponseBodyData) };
    inline ConvertHdrVideoResponseBodyData data() { DARABONBA_PTR_GET(data_, ConvertHdrVideoResponseBodyData) };
    inline ConvertHdrVideoResponseBody& setData(const ConvertHdrVideoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ConvertHdrVideoResponseBody& setData(ConvertHdrVideoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ConvertHdrVideoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConvertHdrVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ConvertHdrVideoResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
