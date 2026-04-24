// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeWhitelistIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhitelistIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhitelistIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeWhitelistIpsResponseBody() = default ;
    DescribeWhitelistIpsResponseBody(const DescribeWhitelistIpsResponseBody &) = default ;
    DescribeWhitelistIpsResponseBody(DescribeWhitelistIpsResponseBody &&) = default ;
    DescribeWhitelistIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhitelistIpsResponseBody() = default ;
    DescribeWhitelistIpsResponseBody& operator=(const DescribeWhitelistIpsResponseBody &) = default ;
    DescribeWhitelistIpsResponseBody& operator=(DescribeWhitelistIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->ipWhitelist_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline Data& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<string> ipWhitelist_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeWhitelistIpsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeWhitelistIpsResponseBody::Data) };
    inline DescribeWhitelistIpsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeWhitelistIpsResponseBody::Data) };
    inline DescribeWhitelistIpsResponseBody& setData(const DescribeWhitelistIpsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeWhitelistIpsResponseBody& setData(DescribeWhitelistIpsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeWhitelistIpsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhitelistIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeWhitelistIpsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeWhitelistIpsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
