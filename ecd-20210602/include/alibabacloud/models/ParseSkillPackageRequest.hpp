// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSESKILLPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PARSESKILLPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ParseSkillPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseSkillPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OssObjectETag, ossObjectETag_);
      DARABONBA_PTR_TO_JSON(OssObjectKey, ossObjectKey_);
    };
    friend void from_json(const Darabonba::Json& j, ParseSkillPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OssObjectETag, ossObjectETag_);
      DARABONBA_PTR_FROM_JSON(OssObjectKey, ossObjectKey_);
    };
    ParseSkillPackageRequest() = default ;
    ParseSkillPackageRequest(const ParseSkillPackageRequest &) = default ;
    ParseSkillPackageRequest(ParseSkillPackageRequest &&) = default ;
    ParseSkillPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseSkillPackageRequest() = default ;
    ParseSkillPackageRequest& operator=(const ParseSkillPackageRequest &) = default ;
    ParseSkillPackageRequest& operator=(ParseSkillPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossObjectETag_ == nullptr
        && this->ossObjectKey_ == nullptr; };
    // ossObjectETag Field Functions 
    bool hasOssObjectETag() const { return this->ossObjectETag_ != nullptr;};
    void deleteOssObjectETag() { this->ossObjectETag_ = nullptr;};
    inline string getOssObjectETag() const { DARABONBA_PTR_GET_DEFAULT(ossObjectETag_, "") };
    inline ParseSkillPackageRequest& setOssObjectETag(string ossObjectETag) { DARABONBA_PTR_SET_VALUE(ossObjectETag_, ossObjectETag) };


    // ossObjectKey Field Functions 
    bool hasOssObjectKey() const { return this->ossObjectKey_ != nullptr;};
    void deleteOssObjectKey() { this->ossObjectKey_ = nullptr;};
    inline string getOssObjectKey() const { DARABONBA_PTR_GET_DEFAULT(ossObjectKey_, "") };
    inline ParseSkillPackageRequest& setOssObjectKey(string ossObjectKey) { DARABONBA_PTR_SET_VALUE(ossObjectKey_, ossObjectKey) };


  protected:
    // The OSS ETag returned after the file is uploaded to OSS.
    // 
    // This parameter is required.
    shared_ptr<string> ossObjectETag_ {};
    // The OSS path of the skill package.
    // 
    // This parameter is required.
    shared_ptr<string> ossObjectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
