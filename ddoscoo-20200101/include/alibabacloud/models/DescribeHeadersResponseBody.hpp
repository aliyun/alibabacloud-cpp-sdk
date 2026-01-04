// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHeadersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHeadersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHeadersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHeadersResponseBody() = default ;
    DescribeHeadersResponseBody(const DescribeHeadersResponseBody &) = default ;
    DescribeHeadersResponseBody(DescribeHeadersResponseBody &&) = default ;
    DescribeHeadersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHeadersResponseBody() = default ;
    DescribeHeadersResponseBody& operator=(const DescribeHeadersResponseBody &) = default ;
    DescribeHeadersResponseBody& operator=(DescribeHeadersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomHeader : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomHeader& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Headers, headers_);
      };
      friend void from_json(const Darabonba::Json& j, CustomHeader& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Headers, headers_);
      };
      CustomHeader() = default ;
      CustomHeader(const CustomHeader &) = default ;
      CustomHeader(CustomHeader &&) = default ;
      CustomHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomHeader() = default ;
      CustomHeader& operator=(const CustomHeader &) = default ;
      CustomHeader& operator=(CustomHeader &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->headers_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CustomHeader& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
      inline CustomHeader& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The header of the response.
      shared_ptr<string> headers_ {};
    };

    virtual bool empty() const override { return this->customHeader_ == nullptr
        && this->requestId_ == nullptr; };
    // customHeader Field Functions 
    bool hasCustomHeader() const { return this->customHeader_ != nullptr;};
    void deleteCustomHeader() { this->customHeader_ = nullptr;};
    inline const DescribeHeadersResponseBody::CustomHeader & getCustomHeader() const { DARABONBA_PTR_GET_CONST(customHeader_, DescribeHeadersResponseBody::CustomHeader) };
    inline DescribeHeadersResponseBody::CustomHeader getCustomHeader() { DARABONBA_PTR_GET(customHeader_, DescribeHeadersResponseBody::CustomHeader) };
    inline DescribeHeadersResponseBody& setCustomHeader(const DescribeHeadersResponseBody::CustomHeader & customHeader) { DARABONBA_PTR_SET_VALUE(customHeader_, customHeader) };
    inline DescribeHeadersResponseBody& setCustomHeader(DescribeHeadersResponseBody::CustomHeader && customHeader) { DARABONBA_PTR_SET_RVALUE(customHeader_, customHeader) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHeadersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the custom header.
    shared_ptr<DescribeHeadersResponseBody::CustomHeader> customHeader_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
