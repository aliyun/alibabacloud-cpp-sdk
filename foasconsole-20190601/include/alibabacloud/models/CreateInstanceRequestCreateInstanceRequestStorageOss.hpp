// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUESTSTORAGEOSS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUESTSTORAGEOSS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateInstanceRequestCreateInstanceRequestStorageOss : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestCreateInstanceRequestStorageOss& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestCreateInstanceRequestStorageOss& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
    };
    CreateInstanceRequestCreateInstanceRequestStorageOss() = default ;
    CreateInstanceRequestCreateInstanceRequestStorageOss(const CreateInstanceRequestCreateInstanceRequestStorageOss &) = default ;
    CreateInstanceRequestCreateInstanceRequestStorageOss(CreateInstanceRequestCreateInstanceRequestStorageOss &&) = default ;
    CreateInstanceRequestCreateInstanceRequestStorageOss(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestCreateInstanceRequestStorageOss() = default ;
    CreateInstanceRequestCreateInstanceRequestStorageOss& operator=(const CreateInstanceRequestCreateInstanceRequestStorageOss &) = default ;
    CreateInstanceRequestCreateInstanceRequestStorageOss& operator=(CreateInstanceRequestCreateInstanceRequestStorageOss &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline CreateInstanceRequestCreateInstanceRequestStorageOss& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
