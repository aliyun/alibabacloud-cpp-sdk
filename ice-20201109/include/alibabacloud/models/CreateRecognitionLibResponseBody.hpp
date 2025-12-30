// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECOGNITIONLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECOGNITIONLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateRecognitionLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecognitionLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecognitionLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRecognitionLibResponseBody() = default ;
    CreateRecognitionLibResponseBody(const CreateRecognitionLibResponseBody &) = default ;
    CreateRecognitionLibResponseBody(CreateRecognitionLibResponseBody &&) = default ;
    CreateRecognitionLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecognitionLibResponseBody() = default ;
    CreateRecognitionLibResponseBody& operator=(const CreateRecognitionLibResponseBody &) = default ;
    CreateRecognitionLibResponseBody& operator=(CreateRecognitionLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && this->requestId_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline CreateRecognitionLibResponseBody& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecognitionLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the recognition library created.
    shared_ptr<string> libId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
