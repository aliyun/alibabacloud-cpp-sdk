// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSCANGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVULSCANGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetVulScanGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulScanGlobalConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetVulScanGlobalConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetVulScanGlobalConfigRequest() = default ;
    GetVulScanGlobalConfigRequest(const GetVulScanGlobalConfigRequest &) = default ;
    GetVulScanGlobalConfigRequest(GetVulScanGlobalConfigRequest &&) = default ;
    GetVulScanGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulScanGlobalConfigRequest() = default ;
    GetVulScanGlobalConfigRequest& operator=(const GetVulScanGlobalConfigRequest &) = default ;
    GetVulScanGlobalConfigRequest& operator=(GetVulScanGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
