// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRAYDASHBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetRayDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(metricsEnabled, metricsEnabled_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetRayDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(metricsEnabled, metricsEnabled_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetRayDashboardResponseBody() = default ;
    GetRayDashboardResponseBody(const GetRayDashboardResponseBody &) = default ;
    GetRayDashboardResponseBody(GetRayDashboardResponseBody &&) = default ;
    GetRayDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayDashboardResponseBody() = default ;
    GetRayDashboardResponseBody& operator=(const GetRayDashboardResponseBody &) = default ;
    GetRayDashboardResponseBody& operator=(GetRayDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricsEnabled_ == nullptr
        && return this->url_ == nullptr; };
    // metricsEnabled Field Functions 
    bool hasMetricsEnabled() const { return this->metricsEnabled_ != nullptr;};
    void deleteMetricsEnabled() { this->metricsEnabled_ = nullptr;};
    inline string metricsEnabled() const { DARABONBA_PTR_GET_DEFAULT(metricsEnabled_, "") };
    inline GetRayDashboardResponseBody& setMetricsEnabled(string metricsEnabled) { DARABONBA_PTR_SET_VALUE(metricsEnabled_, metricsEnabled) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetRayDashboardResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Indicates whether the dashboard has been integrated with CloudMonitor and supports ray metrics
    std::shared_ptr<string> metricsEnabled_ = nullptr;
    // The Ray Dashboard URL
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
