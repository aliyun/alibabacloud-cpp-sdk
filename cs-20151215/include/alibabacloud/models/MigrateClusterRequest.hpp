// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class MigrateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oss_bucket_endpoint, ossBucketEndpoint_);
      DARABONBA_PTR_TO_JSON(oss_bucket_name, ossBucketName_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oss_bucket_endpoint, ossBucketEndpoint_);
      DARABONBA_PTR_FROM_JSON(oss_bucket_name, ossBucketName_);
    };
    MigrateClusterRequest() = default ;
    MigrateClusterRequest(const MigrateClusterRequest &) = default ;
    MigrateClusterRequest(MigrateClusterRequest &&) = default ;
    MigrateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateClusterRequest() = default ;
    MigrateClusterRequest& operator=(const MigrateClusterRequest &) = default ;
    MigrateClusterRequest& operator=(MigrateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucketEndpoint_ == nullptr
        && return this->ossBucketName_ == nullptr; };
    // ossBucketEndpoint Field Functions 
    bool hasOssBucketEndpoint() const { return this->ossBucketEndpoint_ != nullptr;};
    void deleteOssBucketEndpoint() { this->ossBucketEndpoint_ = nullptr;};
    inline string ossBucketEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossBucketEndpoint_, "") };
    inline MigrateClusterRequest& setOssBucketEndpoint(string ossBucketEndpoint) { DARABONBA_PTR_SET_VALUE(ossBucketEndpoint_, ossBucketEndpoint) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline MigrateClusterRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


  protected:
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> ossBucketEndpoint_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossBucketName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
