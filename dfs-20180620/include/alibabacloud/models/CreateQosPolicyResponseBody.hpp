// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateQosPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_TO_JSON(QosPolicyId, qosPolicyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_FROM_JSON(QosPolicyId, qosPolicyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateQosPolicyResponseBody() = default ;
    CreateQosPolicyResponseBody(const CreateQosPolicyResponseBody &) = default ;
    CreateQosPolicyResponseBody(CreateQosPolicyResponseBody &&) = default ;
    CreateQosPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosPolicyResponseBody() = default ;
    CreateQosPolicyResponseBody& operator=(const CreateQosPolicyResponseBody &) = default ;
    CreateQosPolicyResponseBody& operator=(CreateQosPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessages_ == nullptr
        && return this->qosPolicyId_ == nullptr && return this->requestId_ == nullptr; };
    // errorMessages Field Functions 
    bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
    void deleteErrorMessages() { this->errorMessages_ = nullptr;};
    inline string errorMessages() const { DARABONBA_PTR_GET_DEFAULT(errorMessages_, "") };
    inline CreateQosPolicyResponseBody& setErrorMessages(string errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };


    // qosPolicyId Field Functions 
    bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
    void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
    inline string qosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
    inline CreateQosPolicyResponseBody& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQosPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> errorMessages_ = nullptr;
    std::shared_ptr<string> qosPolicyId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
