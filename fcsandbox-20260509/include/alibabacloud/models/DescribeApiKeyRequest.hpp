// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DescribeApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeApiKeyRequest() = default ;
    DescribeApiKeyRequest(const DescribeApiKeyRequest &) = default ;
    DescribeApiKeyRequest(DescribeApiKeyRequest &&) = default ;
    DescribeApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiKeyRequest() = default ;
    DescribeApiKeyRequest& operator=(const DescribeApiKeyRequest &) = default ;
    DescribeApiKeyRequest& operator=(DescribeApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
