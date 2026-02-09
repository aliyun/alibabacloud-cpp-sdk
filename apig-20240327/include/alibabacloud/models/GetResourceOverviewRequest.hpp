// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
    };
    GetResourceOverviewRequest() = default ;
    GetResourceOverviewRequest(const GetResourceOverviewRequest &) = default ;
    GetResourceOverviewRequest(GetResourceOverviewRequest &&) = default ;
    GetResourceOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewRequest() = default ;
    GetResourceOverviewRequest& operator=(const GetResourceOverviewRequest &) = default ;
    GetResourceOverviewRequest& operator=(GetResourceOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline GetResourceOverviewRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


  protected:
    // The gateway type.
    shared_ptr<string> gatewayType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
