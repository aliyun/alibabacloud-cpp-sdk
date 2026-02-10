// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterNamespaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOpaClusterNamespaceListResponseBody() = default ;
    GetOpaClusterNamespaceListResponseBody(const GetOpaClusterNamespaceListResponseBody &) = default ;
    GetOpaClusterNamespaceListResponseBody(GetOpaClusterNamespaceListResponseBody &&) = default ;
    GetOpaClusterNamespaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterNamespaceListResponseBody() = default ;
    GetOpaClusterNamespaceListResponseBody& operator=(const GetOpaClusterNamespaceListResponseBody &) = default ;
    GetOpaClusterNamespaceListResponseBody& operator=(GetOpaClusterNamespaceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NameSpaceName, nameSpaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NameSpaceName, nameSpaceName_);
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
      virtual bool empty() const override { return this->nameSpaceName_ == nullptr; };
      // nameSpaceName Field Functions 
      bool hasNameSpaceName() const { return this->nameSpaceName_ != nullptr;};
      void deleteNameSpaceName() { this->nameSpaceName_ = nullptr;};
      inline string getNameSpaceName() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceName_, "") };
      inline Data& setNameSpaceName(string nameSpaceName) { DARABONBA_PTR_SET_VALUE(nameSpaceName_, nameSpaceName) };


    protected:
      // The name of the namespace.
      shared_ptr<string> nameSpaceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOpaClusterNamespaceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetOpaClusterNamespaceListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetOpaClusterNamespaceListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetOpaClusterNamespaceListResponseBody::Data>) };
    inline vector<GetOpaClusterNamespaceListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetOpaClusterNamespaceListResponseBody::Data>) };
    inline GetOpaClusterNamespaceListResponseBody& setData(const vector<GetOpaClusterNamespaceListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOpaClusterNamespaceListResponseBody& setData(vector<GetOpaClusterNamespaceListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOpaClusterNamespaceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpaClusterNamespaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOpaClusterNamespaceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The namespaces.
    shared_ptr<vector<GetOpaClusterNamespaceListResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
