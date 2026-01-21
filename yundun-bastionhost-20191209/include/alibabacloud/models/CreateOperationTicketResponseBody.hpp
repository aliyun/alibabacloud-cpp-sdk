// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPERATIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPERATIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateOperationTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOperationTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOperationTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOperationTicketResponseBody() = default ;
    CreateOperationTicketResponseBody(const CreateOperationTicketResponseBody &) = default ;
    CreateOperationTicketResponseBody(CreateOperationTicketResponseBody &&) = default ;
    CreateOperationTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOperationTicketResponseBody() = default ;
    CreateOperationTicketResponseBody& operator=(const CreateOperationTicketResponseBody &) = default ;
    CreateOperationTicketResponseBody& operator=(CreateOperationTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationTicketId_ == nullptr
        && this->requestId_ == nullptr; };
    // operationTicketId Field Functions 
    bool hasOperationTicketId() const { return this->operationTicketId_ != nullptr;};
    void deleteOperationTicketId() { this->operationTicketId_ = nullptr;};
    inline string getOperationTicketId() const { DARABONBA_PTR_GET_DEFAULT(operationTicketId_, "") };
    inline CreateOperationTicketResponseBody& setOperationTicketId(string operationTicketId) { DARABONBA_PTR_SET_VALUE(operationTicketId_, operationTicketId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOperationTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> operationTicketId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
