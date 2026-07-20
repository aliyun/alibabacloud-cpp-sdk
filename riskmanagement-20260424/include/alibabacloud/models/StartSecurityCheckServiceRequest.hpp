// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSECURITYCHECKSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSECURITYCHECKSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class StartSecurityCheckServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSecurityCheckServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StartSecurityCheckServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    StartSecurityCheckServiceRequest() = default ;
    StartSecurityCheckServiceRequest(const StartSecurityCheckServiceRequest &) = default ;
    StartSecurityCheckServiceRequest(StartSecurityCheckServiceRequest &&) = default ;
    StartSecurityCheckServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSecurityCheckServiceRequest() = default ;
    StartSecurityCheckServiceRequest& operator=(const StartSecurityCheckServiceRequest &) = default ;
    StartSecurityCheckServiceRequest& operator=(StartSecurityCheckServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
