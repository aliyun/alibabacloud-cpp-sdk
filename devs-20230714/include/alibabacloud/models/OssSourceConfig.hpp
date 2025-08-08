// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSSOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_OSSSOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class OssSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(object, object_);
    };
    friend void from_json(const Darabonba::Json& j, OssSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(object, object_);
    };
    OssSourceConfig() = default ;
    OssSourceConfig(const OssSourceConfig &) = default ;
    OssSourceConfig(OssSourceConfig &&) = default ;
    OssSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssSourceConfig() = default ;
    OssSourceConfig& operator=(const OssSourceConfig &) = default ;
    OssSourceConfig& operator=(OssSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->object_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline OssSourceConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline OssSourceConfig& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> object_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
