// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODYREGIONCONFIGFILESERVERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODYREGIONCONFIGFILESERVERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryRegionConfigResponseBodyRegionConfigFileServerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegionConfigResponseBodyRegionConfigFileServerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_TO_JSON(VpcUrl, vpcUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegionConfigResponseBodyRegionConfigFileServerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
      DARABONBA_PTR_FROM_JSON(VpcUrl, vpcUrl_);
    };
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig() = default ;
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig(const QueryRegionConfigResponseBodyRegionConfigFileServerConfig &) = default ;
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig(QueryRegionConfigResponseBodyRegionConfigFileServerConfig &&) = default ;
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegionConfigResponseBodyRegionConfigFileServerConfig() = default ;
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig& operator=(const QueryRegionConfigResponseBodyRegionConfigFileServerConfig &) = default ;
    QueryRegionConfigResponseBodyRegionConfigFileServerConfig& operator=(QueryRegionConfigResponseBodyRegionConfigFileServerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->internalUrl_ == nullptr && return this->publicUrl_ == nullptr && return this->vpcUrl_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline QueryRegionConfigResponseBodyRegionConfigFileServerConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // internalUrl Field Functions 
    bool hasInternalUrl() const { return this->internalUrl_ != nullptr;};
    void deleteInternalUrl() { this->internalUrl_ = nullptr;};
    inline string internalUrl() const { DARABONBA_PTR_GET_DEFAULT(internalUrl_, "") };
    inline QueryRegionConfigResponseBodyRegionConfigFileServerConfig& setInternalUrl(string internalUrl) { DARABONBA_PTR_SET_VALUE(internalUrl_, internalUrl) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string publicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline QueryRegionConfigResponseBodyRegionConfigFileServerConfig& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    // vpcUrl Field Functions 
    bool hasVpcUrl() const { return this->vpcUrl_ != nullptr;};
    void deleteVpcUrl() { this->vpcUrl_ = nullptr;};
    inline string vpcUrl() const { DARABONBA_PTR_GET_DEFAULT(vpcUrl_, "") };
    inline QueryRegionConfigResponseBodyRegionConfigFileServerConfig& setVpcUrl(string vpcUrl) { DARABONBA_PTR_SET_VALUE(vpcUrl_, vpcUrl) };


  protected:
    // The Object Storage Service (OSS) bucket of the file server.
    std::shared_ptr<string> bucket_ = nullptr;
    // The internal endpoint of the file server.
    std::shared_ptr<string> internalUrl_ = nullptr;
    // The public endpoint of the file server.
    std::shared_ptr<string> publicUrl_ = nullptr;
    // The virtual private cloud (VPC) endpoint of the file server.
    std::shared_ptr<string> vpcUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
