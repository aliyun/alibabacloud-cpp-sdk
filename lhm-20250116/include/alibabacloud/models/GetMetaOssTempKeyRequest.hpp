// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAOSSTEMPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETAOSSTEMPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaOssTempKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaOssTempKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetMetaOssTempKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetMetaOssTempKeyRequest() = default ;
    GetMetaOssTempKeyRequest(const GetMetaOssTempKeyRequest &) = default ;
    GetMetaOssTempKeyRequest(GetMetaOssTempKeyRequest &&) = default ;
    GetMetaOssTempKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaOssTempKeyRequest() = default ;
    GetMetaOssTempKeyRequest& operator=(const GetMetaOssTempKeyRequest &) = default ;
    GetMetaOssTempKeyRequest& operator=(GetMetaOssTempKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
