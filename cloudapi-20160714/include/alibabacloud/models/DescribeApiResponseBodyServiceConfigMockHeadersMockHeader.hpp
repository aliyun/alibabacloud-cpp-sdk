// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGMOCKHEADERSMOCKHEADER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGMOCKHEADERSMOCKHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceConfigMockHeadersMockHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
      DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
      DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
    };
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader() = default ;
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader(const DescribeApiResponseBodyServiceConfigMockHeadersMockHeader &) = default ;
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader(DescribeApiResponseBodyServiceConfigMockHeadersMockHeader &&) = default ;
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceConfigMockHeadersMockHeader() = default ;
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& operator=(const DescribeApiResponseBodyServiceConfigMockHeadersMockHeader &) = default ;
    DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& operator=(DescribeApiResponseBodyServiceConfigMockHeadersMockHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerName_ == nullptr
        && return this->headerValue_ == nullptr; };
    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string headerName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    // headerValue Field Functions 
    bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
    void deleteHeaderValue() { this->headerValue_ = nullptr;};
    inline string headerValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
    inline DescribeApiResponseBodyServiceConfigMockHeadersMockHeader& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


  protected:
    // The HTTP header.
    std::shared_ptr<string> headerName_ = nullptr;
    // The value of the HTTP header.
    std::shared_ptr<string> headerValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
