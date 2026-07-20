// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYCHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class UpdateSecurityCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityCheckResultRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityCheckResultRequest& obj) { 
      (void)j; (void)obj; 
    };
    UpdateSecurityCheckResultRequest() = default ;
    UpdateSecurityCheckResultRequest(const UpdateSecurityCheckResultRequest &) = default ;
    UpdateSecurityCheckResultRequest(UpdateSecurityCheckResultRequest &&) = default ;
    UpdateSecurityCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityCheckResultRequest() = default ;
    UpdateSecurityCheckResultRequest& operator=(const UpdateSecurityCheckResultRequest &) = default ;
    UpdateSecurityCheckResultRequest& operator=(UpdateSecurityCheckResultRequest &&) = default ;
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
