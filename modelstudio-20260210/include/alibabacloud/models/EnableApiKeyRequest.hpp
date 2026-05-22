// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class EnableApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, EnableApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    EnableApiKeyRequest() = default ;
    EnableApiKeyRequest(const EnableApiKeyRequest &) = default ;
    EnableApiKeyRequest(EnableApiKeyRequest &&) = default ;
    EnableApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableApiKeyRequest() = default ;
    EnableApiKeyRequest& operator=(const EnableApiKeyRequest &) = default ;
    EnableApiKeyRequest& operator=(EnableApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
