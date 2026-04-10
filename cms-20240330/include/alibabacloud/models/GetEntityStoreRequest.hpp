// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetEntityStoreRequest() = default ;
    GetEntityStoreRequest(const GetEntityStoreRequest &) = default ;
    GetEntityStoreRequest(GetEntityStoreRequest &&) = default ;
    GetEntityStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreRequest() = default ;
    GetEntityStoreRequest& operator=(const GetEntityStoreRequest &) = default ;
    GetEntityStoreRequest& operator=(GetEntityStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
