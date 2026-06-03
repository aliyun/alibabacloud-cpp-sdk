// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetPublicKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetPublicKeyRequest() = default ;
    GetPublicKeyRequest(const GetPublicKeyRequest &) = default ;
    GetPublicKeyRequest(GetPublicKeyRequest &&) = default ;
    GetPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicKeyRequest() = default ;
    GetPublicKeyRequest& operator=(const GetPublicKeyRequest &) = default ;
    GetPublicKeyRequest& operator=(GetPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
