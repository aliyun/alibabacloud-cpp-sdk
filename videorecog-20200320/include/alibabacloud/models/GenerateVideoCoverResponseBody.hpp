// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateVideoCoverResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GenerateVideoCoverResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoCoverResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoCoverResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateVideoCoverResponseBody() = default ;
    GenerateVideoCoverResponseBody(const GenerateVideoCoverResponseBody &) = default ;
    GenerateVideoCoverResponseBody(GenerateVideoCoverResponseBody &&) = default ;
    GenerateVideoCoverResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoCoverResponseBody() = default ;
    GenerateVideoCoverResponseBody& operator=(const GenerateVideoCoverResponseBody &) = default ;
    GenerateVideoCoverResponseBody& operator=(GenerateVideoCoverResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateVideoCoverResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateVideoCoverResponseBodyData) };
    inline GenerateVideoCoverResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateVideoCoverResponseBodyData) };
    inline GenerateVideoCoverResponseBody& setData(const GenerateVideoCoverResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateVideoCoverResponseBody& setData(GenerateVideoCoverResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateVideoCoverResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateVideoCoverResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GenerateVideoCoverResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
