// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYCHECKRESULTBASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYCHECKRESULTBASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetSecurityCheckResultBaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityCheckResultBaseInfoRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityCheckResultBaseInfoRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetSecurityCheckResultBaseInfoRequest() = default ;
    GetSecurityCheckResultBaseInfoRequest(const GetSecurityCheckResultBaseInfoRequest &) = default ;
    GetSecurityCheckResultBaseInfoRequest(GetSecurityCheckResultBaseInfoRequest &&) = default ;
    GetSecurityCheckResultBaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityCheckResultBaseInfoRequest() = default ;
    GetSecurityCheckResultBaseInfoRequest& operator=(const GetSecurityCheckResultBaseInfoRequest &) = default ;
    GetSecurityCheckResultBaseInfoRequest& operator=(GetSecurityCheckResultBaseInfoRequest &&) = default ;
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
