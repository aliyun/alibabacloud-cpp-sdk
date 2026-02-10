// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADLIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADLIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileUploadLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileUploadLimitResponseBody() = default ;
    GetFileUploadLimitResponseBody(const GetFileUploadLimitResponseBody &) = default ;
    GetFileUploadLimitResponseBody(GetFileUploadLimitResponseBody &&) = default ;
    GetFileUploadLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadLimitResponseBody() = default ;
    GetFileUploadLimitResponseBody& operator=(const GetFileUploadLimitResponseBody &) = default ;
    GetFileUploadLimitResponseBody& operator=(GetFileUploadLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Limit, limit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
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
      virtual bool empty() const override { return this->limit_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
      inline Data& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    protected:
      // The QPS limit on the files uploaded from the client.
      shared_ptr<string> limit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileUploadLimitResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileUploadLimitResponseBody::Data) };
    inline GetFileUploadLimitResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileUploadLimitResponseBody::Data) };
    inline GetFileUploadLimitResponseBody& setData(const GetFileUploadLimitResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileUploadLimitResponseBody& setData(GetFileUploadLimitResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileUploadLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the request is successful.
    shared_ptr<GetFileUploadLimitResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
