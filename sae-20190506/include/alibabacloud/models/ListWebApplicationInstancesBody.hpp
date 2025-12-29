// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWebInstancesOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationInstancesBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationInstancesBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationInstancesBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWebApplicationInstancesBody() = default ;
    ListWebApplicationInstancesBody(const ListWebApplicationInstancesBody &) = default ;
    ListWebApplicationInstancesBody(ListWebApplicationInstancesBody &&) = default ;
    ListWebApplicationInstancesBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationInstancesBody() = default ;
    ListWebApplicationInstancesBody& operator=(const ListWebApplicationInstancesBody &) = default ;
    ListWebApplicationInstancesBody& operator=(ListWebApplicationInstancesBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListWebApplicationInstancesBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWebInstancesOutput & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWebInstancesOutput) };
    inline ListWebInstancesOutput getData() { DARABONBA_PTR_GET(data_, ListWebInstancesOutput) };
    inline ListWebApplicationInstancesBody& setData(const ListWebInstancesOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWebApplicationInstancesBody& setData(ListWebInstancesOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWebApplicationInstancesBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWebApplicationInstancesBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWebApplicationInstancesBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListWebInstancesOutput> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
