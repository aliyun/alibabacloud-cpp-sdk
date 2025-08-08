// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTTEMPBUCKETTOKEN_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTTEMPBUCKETTOKEN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ArtifactTempBucketTokenCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ArtifactTempBucketToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactTempBucketToken& obj) { 
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(ossRegion, ossRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactTempBucketToken& obj) { 
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(ossRegion, ossRegion_);
    };
    ArtifactTempBucketToken() = default ;
    ArtifactTempBucketToken(const ArtifactTempBucketToken &) = default ;
    ArtifactTempBucketToken(ArtifactTempBucketToken &&) = default ;
    ArtifactTempBucketToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactTempBucketToken() = default ;
    ArtifactTempBucketToken& operator=(const ArtifactTempBucketToken &) = default ;
    ArtifactTempBucketToken& operator=(ArtifactTempBucketToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credentials_ != nullptr
        && this->ossBucketName_ != nullptr && this->ossObjectName_ != nullptr && this->ossRegion_ != nullptr; };
    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const ArtifactTempBucketTokenCredentials & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, ArtifactTempBucketTokenCredentials) };
    inline ArtifactTempBucketTokenCredentials credentials() { DARABONBA_PTR_GET(credentials_, ArtifactTempBucketTokenCredentials) };
    inline ArtifactTempBucketToken& setCredentials(const ArtifactTempBucketTokenCredentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline ArtifactTempBucketToken& setCredentials(ArtifactTempBucketTokenCredentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline ArtifactTempBucketToken& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string ossObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline ArtifactTempBucketToken& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // ossRegion Field Functions 
    bool hasOssRegion() const { return this->ossRegion_ != nullptr;};
    void deleteOssRegion() { this->ossRegion_ = nullptr;};
    inline string ossRegion() const { DARABONBA_PTR_GET_DEFAULT(ossRegion_, "") };
    inline ArtifactTempBucketToken& setOssRegion(string ossRegion) { DARABONBA_PTR_SET_VALUE(ossRegion_, ossRegion) };


  protected:
    std::shared_ptr<ArtifactTempBucketTokenCredentials> credentials_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> ossObjectName_ = nullptr;
    std::shared_ptr<string> ossRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
