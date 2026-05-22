// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class DisableApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DisableApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    DisableApiKeyRequest() = default ;
    DisableApiKeyRequest(const DisableApiKeyRequest &) = default ;
    DisableApiKeyRequest(DisableApiKeyRequest &&) = default ;
    DisableApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableApiKeyRequest() = default ;
    DisableApiKeyRequest& operator=(const DisableApiKeyRequest &) = default ;
    DisableApiKeyRequest& operator=(DisableApiKeyRequest &&) = default ;
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
