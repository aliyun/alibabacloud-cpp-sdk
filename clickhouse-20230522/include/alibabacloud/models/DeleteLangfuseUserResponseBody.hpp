// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELANGFUSEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELANGFUSEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteLangfuseUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLangfuseUserResponseBody() = default ;
    DeleteLangfuseUserResponseBody(const DeleteLangfuseUserResponseBody &) = default ;
    DeleteLangfuseUserResponseBody(DeleteLangfuseUserResponseBody &&) = default ;
    DeleteLangfuseUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLangfuseUserResponseBody() = default ;
    DeleteLangfuseUserResponseBody& operator=(const DeleteLangfuseUserResponseBody &) = default ;
    DeleteLangfuseUserResponseBody& operator=(DeleteLangfuseUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    protected:
      // The email address of the user.
      shared_ptr<string> email_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteLangfuseUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteLangfuseUserResponseBody::Data) };
    inline DeleteLangfuseUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteLangfuseUserResponseBody::Data) };
    inline DeleteLangfuseUserResponseBody& setData(const DeleteLangfuseUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteLangfuseUserResponseBody& setData(DeleteLangfuseUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLangfuseUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response result.
    shared_ptr<DeleteLangfuseUserResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
