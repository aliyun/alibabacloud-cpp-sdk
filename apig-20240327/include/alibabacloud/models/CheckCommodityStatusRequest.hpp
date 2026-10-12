// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMMODITYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMMODITYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CheckCommodityStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCommodityStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, CheckCommodityStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    CheckCommodityStatusRequest() = default ;
    CheckCommodityStatusRequest(const CheckCommodityStatusRequest &) = default ;
    CheckCommodityStatusRequest(CheckCommodityStatusRequest &&) = default ;
    CheckCommodityStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCommodityStatusRequest() = default ;
    CheckCommodityStatusRequest& operator=(const CheckCommodityStatusRequest &) = default ;
    CheckCommodityStatusRequest& operator=(CheckCommodityStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
