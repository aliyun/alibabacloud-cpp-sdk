// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODYAPPLICATIONACCESSPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODYAPPLICATIONACCESSPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListApplicationAccessPointsResponseBodyApplicationAccessPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccessPointsResponseBodyApplicationAccessPoints& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccessPoint, applicationAccessPoint_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccessPointsResponseBodyApplicationAccessPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccessPoint, applicationAccessPoint_);
    };
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints() = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints(const ListApplicationAccessPointsResponseBodyApplicationAccessPoints &) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints(ListApplicationAccessPointsResponseBodyApplicationAccessPoints &&) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccessPointsResponseBodyApplicationAccessPoints() = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints& operator=(const ListApplicationAccessPointsResponseBodyApplicationAccessPoints &) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPoints& operator=(ListApplicationAccessPointsResponseBodyApplicationAccessPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccessPoint_ == nullptr; };
    // applicationAccessPoint Field Functions 
    bool hasApplicationAccessPoint() const { return this->applicationAccessPoint_ != nullptr;};
    void deleteApplicationAccessPoint() { this->applicationAccessPoint_ = nullptr;};
    inline const vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint> & applicationAccessPoint() const { DARABONBA_PTR_GET_CONST(applicationAccessPoint_, vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint>) };
    inline vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint> applicationAccessPoint() { DARABONBA_PTR_GET(applicationAccessPoint_, vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint>) };
    inline ListApplicationAccessPointsResponseBodyApplicationAccessPoints& setApplicationAccessPoint(const vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint> & applicationAccessPoint) { DARABONBA_PTR_SET_VALUE(applicationAccessPoint_, applicationAccessPoint) };
    inline ListApplicationAccessPointsResponseBodyApplicationAccessPoints& setApplicationAccessPoint(vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint> && applicationAccessPoint) { DARABONBA_PTR_SET_RVALUE(applicationAccessPoint_, applicationAccessPoint) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint>> applicationAccessPoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
