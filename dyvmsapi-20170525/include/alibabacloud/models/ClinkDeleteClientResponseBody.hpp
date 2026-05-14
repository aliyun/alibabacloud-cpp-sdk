// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDELETECLIENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDELETECLIENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkDeleteClientResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDeleteClientResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDeleteClientResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDeleteClientResponseBody() = default ;
    ClinkDeleteClientResponseBody(const ClinkDeleteClientResponseBody &) = default ;
    ClinkDeleteClientResponseBody(ClinkDeleteClientResponseBody &&) = default ;
    ClinkDeleteClientResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDeleteClientResponseBody() = default ;
    ClinkDeleteClientResponseBody& operator=(const ClinkDeleteClientResponseBody &) = default ;
    ClinkDeleteClientResponseBody& operator=(ClinkDeleteClientResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(Cno, cno_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(Cno, cno_);
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
      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->cno_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // cno Field Functions 
      bool hasCno() const { return this->cno_ != nullptr;};
      void deleteCno() { this->cno_ = nullptr;};
      inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
      inline Data& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 座席号
      shared_ptr<string> cno_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDeleteClientResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDeleteClientResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDeleteClientResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDeleteClientResponseBody::Data) };
    inline ClinkDeleteClientResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDeleteClientResponseBody::Data) };
    inline ClinkDeleteClientResponseBody& setData(const ClinkDeleteClientResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDeleteClientResponseBody& setData(ClinkDeleteClientResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDeleteClientResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDeleteClientResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDeleteClientResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
