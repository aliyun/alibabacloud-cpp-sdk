// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetServiceRequest() = default ;
    GetServiceRequest(const GetServiceRequest &) = default ;
    GetServiceRequest(GetServiceRequest &&) = default ;
    GetServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRequest() = default ;
    GetServiceRequest& operator=(const GetServiceRequest &) = default ;
    GetServiceRequest& operator=(GetServiceRequest &&) = default ;
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
