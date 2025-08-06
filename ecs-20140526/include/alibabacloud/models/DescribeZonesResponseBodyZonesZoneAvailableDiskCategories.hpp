// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEDISKCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEDISKCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableDiskCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& obj) { 
      DARABONBA_PTR_TO_JSON(DiskCategories, diskCategories_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskCategories, diskCategories_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories(const DescribeZonesResponseBodyZonesZoneAvailableDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories(DescribeZonesResponseBodyZonesZoneAvailableDiskCategories &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& operator=(const DescribeZonesResponseBodyZonesZoneAvailableDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& operator=(DescribeZonesResponseBodyZonesZoneAvailableDiskCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskCategories_ != nullptr; };
    // diskCategories Field Functions 
    bool hasDiskCategories() const { return this->diskCategories_ != nullptr;};
    void deleteDiskCategories() { this->diskCategories_ = nullptr;};
    inline const vector<string> & diskCategories() const { DARABONBA_PTR_GET_CONST(diskCategories_, vector<string>) };
    inline vector<string> diskCategories() { DARABONBA_PTR_GET(diskCategories_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& setDiskCategories(const vector<string> & diskCategories) { DARABONBA_PTR_SET_VALUE(diskCategories_, diskCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableDiskCategories& setDiskCategories(vector<string> && diskCategories) { DARABONBA_PTR_SET_RVALUE(diskCategories_, diskCategories) };


  protected:
    std::shared_ptr<vector<string>> diskCategories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
