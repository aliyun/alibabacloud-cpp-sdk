// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETOSSBUCKETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETOSSBUCKETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList(const DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList(DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList &&) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& operator=(const DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& operator=(DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->regionId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the OSS bucket to which the OSS object belongs.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The region ID of the OSS object.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
