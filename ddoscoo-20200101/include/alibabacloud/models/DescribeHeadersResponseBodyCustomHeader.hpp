// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODYCUSTOMHEADER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODYCUSTOMHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHeadersResponseBodyCustomHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHeadersResponseBodyCustomHeader& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHeadersResponseBodyCustomHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
    };
    DescribeHeadersResponseBodyCustomHeader() = default ;
    DescribeHeadersResponseBodyCustomHeader(const DescribeHeadersResponseBodyCustomHeader &) = default ;
    DescribeHeadersResponseBodyCustomHeader(DescribeHeadersResponseBodyCustomHeader &&) = default ;
    DescribeHeadersResponseBodyCustomHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHeadersResponseBodyCustomHeader() = default ;
    DescribeHeadersResponseBodyCustomHeader& operator=(const DescribeHeadersResponseBodyCustomHeader &) = default ;
    DescribeHeadersResponseBodyCustomHeader& operator=(DescribeHeadersResponseBodyCustomHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->headers_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHeadersResponseBodyCustomHeader& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string headers() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline DescribeHeadersResponseBodyCustomHeader& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The header of the response.
    std::shared_ptr<string> headers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
