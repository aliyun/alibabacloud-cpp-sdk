// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWILDCARDBYTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWILDCARDBYTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteWildcardByTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWildcardByTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWildcardByTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteWildcardByTopicResponseBody() = default ;
    DeleteWildcardByTopicResponseBody(const DeleteWildcardByTopicResponseBody &) = default ;
    DeleteWildcardByTopicResponseBody(DeleteWildcardByTopicResponseBody &&) = default ;
    DeleteWildcardByTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWildcardByTopicResponseBody() = default ;
    DeleteWildcardByTopicResponseBody& operator=(const DeleteWildcardByTopicResponseBody &) = default ;
    DeleteWildcardByTopicResponseBody& operator=(DeleteWildcardByTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
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
      virtual bool empty() const override { return this->deleted_ == nullptr; };
      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline string getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, "") };
      inline Data& setDeleted(string deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    protected:
      // Indicates whether the deletion was successful. Valid values:
      // - **true**: The deletion was successful.
      // - **false**: The deletion failed.
      shared_ptr<string> deleted_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeleteWildcardByTopicResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteWildcardByTopicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteWildcardByTopicResponseBody::Data) };
    inline DeleteWildcardByTopicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteWildcardByTopicResponseBody::Data) };
    inline DeleteWildcardByTopicResponseBody& setData(const DeleteWildcardByTopicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteWildcardByTopicResponseBody& setData(DeleteWildcardByTopicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWildcardByTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteWildcardByTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // - 200: success.
    // - Other values: error codes. For more information, see error codes.
    shared_ptr<int32_t> code_ {};
    // The rule information dataset.
    shared_ptr<DeleteWildcardByTopicResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // - true: The operation was successful.
    // - false: The operation failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
