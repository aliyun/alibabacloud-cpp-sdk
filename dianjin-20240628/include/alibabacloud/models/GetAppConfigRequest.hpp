// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAppConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAppConfigRequest() = default ;
    GetAppConfigRequest(const GetAppConfigRequest &) = default ;
    GetAppConfigRequest(GetAppConfigRequest &&) = default ;
    GetAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConfigRequest() = default ;
    GetAppConfigRequest& operator=(const GetAppConfigRequest &) = default ;
    GetAppConfigRequest& operator=(GetAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
