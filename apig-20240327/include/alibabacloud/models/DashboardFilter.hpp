// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHBOARDFILTER_HPP_
#define ALIBABACLOUD_MODELS_DASHBOARDFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DashboardFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashboardFilter& obj) { 
      DARABONBA_PTR_TO_JSON(routeName, routeName_);
    };
    friend void from_json(const Darabonba::Json& j, DashboardFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(routeName, routeName_);
    };
    DashboardFilter() = default ;
    DashboardFilter(const DashboardFilter &) = default ;
    DashboardFilter(DashboardFilter &&) = default ;
    DashboardFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashboardFilter() = default ;
    DashboardFilter& operator=(const DashboardFilter &) = default ;
    DashboardFilter& operator=(DashboardFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeName_ != nullptr; };
    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline DashboardFilter& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


  protected:
    std::shared_ptr<string> routeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
