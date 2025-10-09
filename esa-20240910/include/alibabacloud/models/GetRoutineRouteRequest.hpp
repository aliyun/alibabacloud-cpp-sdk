// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetRoutineRouteRequest() = default ;
    GetRoutineRouteRequest(const GetRoutineRouteRequest &) = default ;
    GetRoutineRouteRequest(GetRoutineRouteRequest &&) = default ;
    GetRoutineRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineRouteRequest() = default ;
    GetRoutineRouteRequest& operator=(const GetRoutineRouteRequest &) = default ;
    GetRoutineRouteRequest& operator=(GetRoutineRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetRoutineRouteRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetRoutineRouteRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the configuration. You can call the [ListSiteRoutes](https://help.aliyun.com/document_detail/2879631.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
