// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveInputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMediaLiveInputResponseBody() = default ;
    CreateMediaLiveInputResponseBody(const CreateMediaLiveInputResponseBody &) = default ;
    CreateMediaLiveInputResponseBody(CreateMediaLiveInputResponseBody &&) = default ;
    CreateMediaLiveInputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputResponseBody() = default ;
    CreateMediaLiveInputResponseBody& operator=(const CreateMediaLiveInputResponseBody &) = default ;
    CreateMediaLiveInputResponseBody& operator=(CreateMediaLiveInputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputId_ != nullptr
        && this->requestId_ != nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline CreateMediaLiveInputResponseBody& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMediaLiveInputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the input.
    std::shared_ptr<string> inputId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
