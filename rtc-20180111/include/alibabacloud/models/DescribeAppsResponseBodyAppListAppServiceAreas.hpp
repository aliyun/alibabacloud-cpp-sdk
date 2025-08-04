// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLISTAPPSERVICEAREAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLISTAPPSERVICEAREAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppsResponseBodyAppListAppServiceAreas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyAppListAppServiceAreas& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceArea, serviceArea_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyAppListAppServiceAreas& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceArea, serviceArea_);
    };
    DescribeAppsResponseBodyAppListAppServiceAreas() = default ;
    DescribeAppsResponseBodyAppListAppServiceAreas(const DescribeAppsResponseBodyAppListAppServiceAreas &) = default ;
    DescribeAppsResponseBodyAppListAppServiceAreas(DescribeAppsResponseBodyAppListAppServiceAreas &&) = default ;
    DescribeAppsResponseBodyAppListAppServiceAreas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyAppListAppServiceAreas() = default ;
    DescribeAppsResponseBodyAppListAppServiceAreas& operator=(const DescribeAppsResponseBodyAppListAppServiceAreas &) = default ;
    DescribeAppsResponseBodyAppListAppServiceAreas& operator=(DescribeAppsResponseBodyAppListAppServiceAreas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceArea_ != nullptr; };
    // serviceArea Field Functions 
    bool hasServiceArea() const { return this->serviceArea_ != nullptr;};
    void deleteServiceArea() { this->serviceArea_ = nullptr;};
    inline const vector<string> & serviceArea() const { DARABONBA_PTR_GET_CONST(serviceArea_, vector<string>) };
    inline vector<string> serviceArea() { DARABONBA_PTR_GET(serviceArea_, vector<string>) };
    inline DescribeAppsResponseBodyAppListAppServiceAreas& setServiceArea(const vector<string> & serviceArea) { DARABONBA_PTR_SET_VALUE(serviceArea_, serviceArea) };
    inline DescribeAppsResponseBodyAppListAppServiceAreas& setServiceArea(vector<string> && serviceArea) { DARABONBA_PTR_SET_RVALUE(serviceArea_, serviceArea) };


  protected:
    std::shared_ptr<vector<string>> serviceArea_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
