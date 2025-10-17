// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZone, availableZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZone, availableZone_);
    };
    DescribeResourcesModificationResponseBodyAvailableZones() = default ;
    DescribeResourcesModificationResponseBodyAvailableZones(const DescribeResourcesModificationResponseBodyAvailableZones &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZones(DescribeResourcesModificationResponseBodyAvailableZones &&) = default ;
    DescribeResourcesModificationResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBodyAvailableZones() = default ;
    DescribeResourcesModificationResponseBodyAvailableZones& operator=(const DescribeResourcesModificationResponseBodyAvailableZones &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZones& operator=(DescribeResourcesModificationResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZone_ == nullptr; };
    // availableZone Field Functions 
    bool hasAvailableZone() const { return this->availableZone_ != nullptr;};
    void deleteAvailableZone() { this->availableZone_ = nullptr;};
    inline const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone> & availableZone() const { DARABONBA_PTR_GET_CONST(availableZone_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone>) };
    inline vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone> availableZone() { DARABONBA_PTR_GET(availableZone_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone>) };
    inline DescribeResourcesModificationResponseBodyAvailableZones& setAvailableZone(const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone> & availableZone) { DARABONBA_PTR_SET_VALUE(availableZone_, availableZone) };
    inline DescribeResourcesModificationResponseBodyAvailableZones& setAvailableZone(vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone> && availableZone) { DARABONBA_PTR_SET_RVALUE(availableZone_, availableZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone>> availableZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
