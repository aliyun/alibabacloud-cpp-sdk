// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONNQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONNQUESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteConnQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteConnQuestionResponseBody() = default ;
    DeleteConnQuestionResponseBody(const DeleteConnQuestionResponseBody &) = default ;
    DeleteConnQuestionResponseBody(DeleteConnQuestionResponseBody &&) = default ;
    DeleteConnQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConnQuestionResponseBody() = default ;
    DeleteConnQuestionResponseBody& operator=(const DeleteConnQuestionResponseBody &) = default ;
    DeleteConnQuestionResponseBody& operator=(DeleteConnQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteConnQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
