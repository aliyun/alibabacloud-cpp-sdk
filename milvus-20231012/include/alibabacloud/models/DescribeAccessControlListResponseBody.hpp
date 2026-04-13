// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DescribeAccessControlListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAccessControlListResponseBody() = default ;
    DescribeAccessControlListResponseBody(const DescribeAccessControlListResponseBody &) = default ;
    DescribeAccessControlListResponseBody(DescribeAccessControlListResponseBody &&) = default ;
    DescribeAccessControlListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListResponseBody() = default ;
    DescribeAccessControlListResponseBody& operator=(const DescribeAccessControlListResponseBody &) = default ;
    DescribeAccessControlListResponseBody& operator=(DescribeAccessControlListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
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
      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->cidr_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Data& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline const vector<string> & getCidr() const { DARABONBA_PTR_GET_CONST(cidr_, vector<string>) };
      inline vector<string> getCidr() { DARABONBA_PTR_GET(cidr_, vector<string>) };
      inline Data& setCidr(const vector<string> & cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };
      inline Data& setCidr(vector<string> && cidr) { DARABONBA_PTR_SET_RVALUE(cidr_, cidr) };


    protected:
      // AclId for public network access control.
      shared_ptr<string> aclId_ {};
      // The CIDR blocks.
      shared_ptr<vector<string>> cidr_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeAccessControlListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccessControlListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccessControlListResponseBody::Data) };
    inline DescribeAccessControlListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAccessControlListResponseBody::Data) };
    inline DescribeAccessControlListResponseBody& setData(const DescribeAccessControlListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccessControlListResponseBody& setData(DescribeAccessControlListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeAccessControlListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAccessControlListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeAccessControlListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAccessControlListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The detailed information about the failed permission verification.
    shared_ptr<string> accessDeniedDetail_ {};
    // The returned result.
    shared_ptr<DescribeAccessControlListResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
