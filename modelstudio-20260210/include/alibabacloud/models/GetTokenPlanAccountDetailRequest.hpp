// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENPLANACCOUNTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENPLANACCOUNTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetTokenPlanAccountDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenPlanAccountDetailRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetTokenPlanAccountDetailRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetTokenPlanAccountDetailRequest() = default ;
    GetTokenPlanAccountDetailRequest(const GetTokenPlanAccountDetailRequest &) = default ;
    GetTokenPlanAccountDetailRequest(GetTokenPlanAccountDetailRequest &&) = default ;
    GetTokenPlanAccountDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenPlanAccountDetailRequest() = default ;
    GetTokenPlanAccountDetailRequest& operator=(const GetTokenPlanAccountDetailRequest &) = default ;
    GetTokenPlanAccountDetailRequest& operator=(GetTokenPlanAccountDetailRequest &&) = default ;
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
