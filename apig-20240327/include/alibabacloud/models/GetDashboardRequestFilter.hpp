// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASHBOARDREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETDASHBOARDREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDashboardRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDashboardRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(routeName, routeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDashboardRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(routeName, routeName_);
    };
    GetDashboardRequestFilter() = default ;
    GetDashboardRequestFilter(const GetDashboardRequestFilter &) = default ;
    GetDashboardRequestFilter(GetDashboardRequestFilter &&) = default ;
    GetDashboardRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDashboardRequestFilter() = default ;
    GetDashboardRequestFilter& operator=(const GetDashboardRequestFilter &) = default ;
    GetDashboardRequestFilter& operator=(GetDashboardRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeName_ == nullptr; };
    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline GetDashboardRequestFilter& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


  protected:
    // The route name.
    std::shared_ptr<string> routeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
