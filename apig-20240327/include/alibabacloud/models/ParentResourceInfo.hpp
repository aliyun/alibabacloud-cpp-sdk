// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARENTRESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_PARENTRESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ParentResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParentResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apiInfo, apiInfo_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ParentResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apiInfo, apiInfo_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    ParentResourceInfo() = default ;
    ParentResourceInfo(const ParentResourceInfo &) = default ;
    ParentResourceInfo(ParentResourceInfo &&) = default ;
    ParentResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParentResourceInfo() = default ;
    ParentResourceInfo& operator=(const ParentResourceInfo &) = default ;
    ParentResourceInfo& operator=(ParentResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfo_ == nullptr
        && this->resourceType_ == nullptr; };
    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline const HttpApiApiInfo & getApiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, HttpApiApiInfo) };
    inline HttpApiApiInfo getApiInfo() { DARABONBA_PTR_GET(apiInfo_, HttpApiApiInfo) };
    inline ParentResourceInfo& setApiInfo(const HttpApiApiInfo & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
    inline ParentResourceInfo& setApiInfo(HttpApiApiInfo && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ParentResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The API information.
    shared_ptr<HttpApiApiInfo> apiInfo_ {};
    // The resource type. Valid values: HttpApi/Operation/GatewayRoute/Gateway/GatewayDomain
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
