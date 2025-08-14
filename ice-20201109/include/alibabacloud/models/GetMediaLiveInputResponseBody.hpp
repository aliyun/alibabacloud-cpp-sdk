// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaLiveInputResponseBodyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveInputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaLiveInputResponseBody() = default ;
    GetMediaLiveInputResponseBody(const GetMediaLiveInputResponseBody &) = default ;
    GetMediaLiveInputResponseBody(GetMediaLiveInputResponseBody &&) = default ;
    GetMediaLiveInputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputResponseBody() = default ;
    GetMediaLiveInputResponseBody& operator=(const GetMediaLiveInputResponseBody &) = default ;
    GetMediaLiveInputResponseBody& operator=(GetMediaLiveInputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->requestId_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const GetMediaLiveInputResponseBodyInput & input() const { DARABONBA_PTR_GET_CONST(input_, GetMediaLiveInputResponseBodyInput) };
    inline GetMediaLiveInputResponseBodyInput input() { DARABONBA_PTR_GET(input_, GetMediaLiveInputResponseBodyInput) };
    inline GetMediaLiveInputResponseBody& setInput(const GetMediaLiveInputResponseBodyInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetMediaLiveInputResponseBody& setInput(GetMediaLiveInputResponseBodyInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaLiveInputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The input information.
    std::shared_ptr<GetMediaLiveInputResponseBodyInput> input_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
