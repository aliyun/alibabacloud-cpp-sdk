// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKPLACEMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKPLACEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskPlacement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskPlacement& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskPlacement& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeDisksResponseBodyDisksDiskPlacement() = default ;
    DescribeDisksResponseBodyDisksDiskPlacement(const DescribeDisksResponseBodyDisksDiskPlacement &) = default ;
    DescribeDisksResponseBodyDisksDiskPlacement(DescribeDisksResponseBodyDisksDiskPlacement &&) = default ;
    DescribeDisksResponseBodyDisksDiskPlacement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskPlacement() = default ;
    DescribeDisksResponseBodyDisksDiskPlacement& operator=(const DescribeDisksResponseBodyDisksDiskPlacement &) = default ;
    DescribeDisksResponseBodyDisksDiskPlacement& operator=(DescribeDisksResponseBodyDisksDiskPlacement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneIds_ == nullptr; };
    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string zoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeDisksResponseBodyDisksDiskPlacement& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    // The IDs of the zones in which data is stored.
    std::shared_ptr<string> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
