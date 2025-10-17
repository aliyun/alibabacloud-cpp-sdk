// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksFullStatusResponseBodyDiskFullStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksFullStatusResponseBodyDiskFullStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(DiskFullStatusType, diskFullStatusType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksFullStatusResponseBodyDiskFullStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskFullStatusType, diskFullStatusType_);
    };
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet(const DescribeDisksFullStatusResponseBodyDiskFullStatusSet &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet(DescribeDisksFullStatusResponseBodyDiskFullStatusSet &&) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksFullStatusResponseBodyDiskFullStatusSet() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet& operator=(const DescribeDisksFullStatusResponseBodyDiskFullStatusSet &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSet& operator=(DescribeDisksFullStatusResponseBodyDiskFullStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskFullStatusType_ == nullptr; };
    // diskFullStatusType Field Functions 
    bool hasDiskFullStatusType() const { return this->diskFullStatusType_ != nullptr;};
    void deleteDiskFullStatusType() { this->diskFullStatusType_ = nullptr;};
    inline const vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType> & diskFullStatusType() const { DARABONBA_PTR_GET_CONST(diskFullStatusType_, vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType>) };
    inline vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType> diskFullStatusType() { DARABONBA_PTR_GET(diskFullStatusType_, vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType>) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSet& setDiskFullStatusType(const vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType> & diskFullStatusType) { DARABONBA_PTR_SET_VALUE(diskFullStatusType_, diskFullStatusType) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSet& setDiskFullStatusType(vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType> && diskFullStatusType) { DARABONBA_PTR_SET_RVALUE(diskFullStatusType_, diskFullStatusType) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType>> diskFullStatusType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
