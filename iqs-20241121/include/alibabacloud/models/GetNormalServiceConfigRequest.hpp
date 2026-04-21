// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALSERVICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALSERVICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class GetNormalServiceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalServiceConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetNormalServiceConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetNormalServiceConfigRequest() = default ;
    GetNormalServiceConfigRequest(const GetNormalServiceConfigRequest &) = default ;
    GetNormalServiceConfigRequest(GetNormalServiceConfigRequest &&) = default ;
    GetNormalServiceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalServiceConfigRequest() = default ;
    GetNormalServiceConfigRequest& operator=(const GetNormalServiceConfigRequest &) = default ;
    GetNormalServiceConfigRequest& operator=(GetNormalServiceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
