// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ResetApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ResetApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    ResetApiKeyRequest() = default ;
    ResetApiKeyRequest(const ResetApiKeyRequest &) = default ;
    ResetApiKeyRequest(ResetApiKeyRequest &&) = default ;
    ResetApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetApiKeyRequest() = default ;
    ResetApiKeyRequest& operator=(const ResetApiKeyRequest &) = default ;
    ResetApiKeyRequest& operator=(ResetApiKeyRequest &&) = default ;
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
