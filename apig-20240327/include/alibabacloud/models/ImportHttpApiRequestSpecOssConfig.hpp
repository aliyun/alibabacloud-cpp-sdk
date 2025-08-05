// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUESTSPECOSSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIREQUESTSPECOSSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiRequestSpecOssConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiRequestSpecOssConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(objectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiRequestSpecOssConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(objectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ImportHttpApiRequestSpecOssConfig() = default ;
    ImportHttpApiRequestSpecOssConfig(const ImportHttpApiRequestSpecOssConfig &) = default ;
    ImportHttpApiRequestSpecOssConfig(ImportHttpApiRequestSpecOssConfig &&) = default ;
    ImportHttpApiRequestSpecOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiRequestSpecOssConfig() = default ;
    ImportHttpApiRequestSpecOssConfig& operator=(const ImportHttpApiRequestSpecOssConfig &) = default ;
    ImportHttpApiRequestSpecOssConfig& operator=(ImportHttpApiRequestSpecOssConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->objectKey_ != nullptr && this->regionId_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ImportHttpApiRequestSpecOssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline ImportHttpApiRequestSpecOssConfig& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportHttpApiRequestSpecOssConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The bucket name.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The full path of the file.
    std::shared_ptr<string> objectKey_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
