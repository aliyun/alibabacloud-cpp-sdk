// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPBUCKETSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPBUCKETSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetBackupBucketsListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupBucketsListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupBucketsListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetBackupBucketsListResponseBodyData() = default ;
    GetBackupBucketsListResponseBodyData(const GetBackupBucketsListResponseBodyData &) = default ;
    GetBackupBucketsListResponseBodyData(GetBackupBucketsListResponseBodyData &&) = default ;
    GetBackupBucketsListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupBucketsListResponseBodyData() = default ;
    GetBackupBucketsListResponseBodyData& operator=(const GetBackupBucketsListResponseBodyData &) = default ;
    GetBackupBucketsListResponseBodyData& operator=(GetBackupBucketsListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->region_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetBackupBucketsListResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetBackupBucketsListResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // OSS file storage bucket name.
    std::shared_ptr<string> bucket_ = nullptr;
    // Region.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
