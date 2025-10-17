// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZone, availableZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZone, availableZone_);
    };
    DescribeAvailableResourceResponseBodyAvailableZones() = default ;
    DescribeAvailableResourceResponseBodyAvailableZones(const DescribeAvailableResourceResponseBodyAvailableZones &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZones(DescribeAvailableResourceResponseBodyAvailableZones &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZones() = default ;
    DescribeAvailableResourceResponseBodyAvailableZones& operator=(const DescribeAvailableResourceResponseBodyAvailableZones &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZones& operator=(DescribeAvailableResourceResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZone_ == nullptr; };
    // availableZone Field Functions 
    bool hasAvailableZone() const { return this->availableZone_ != nullptr;};
    void deleteAvailableZone() { this->availableZone_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> & availableZone() const { DARABONBA_PTR_GET_CONST(availableZone_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> availableZone() { DARABONBA_PTR_GET(availableZone_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>) };
    inline DescribeAvailableResourceResponseBodyAvailableZones& setAvailableZone(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> & availableZone) { DARABONBA_PTR_SET_VALUE(availableZone_, availableZone) };
    inline DescribeAvailableResourceResponseBodyAvailableZones& setAvailableZone(vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> && availableZone) { DARABONBA_PTR_SET_RVALUE(availableZone_, availableZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>> availableZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
