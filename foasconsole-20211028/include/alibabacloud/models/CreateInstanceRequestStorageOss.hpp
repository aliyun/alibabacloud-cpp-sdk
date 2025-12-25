// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSTORAGEOSS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSTORAGEOSS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateInstanceRequestStorageOss : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestStorageOss& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestStorageOss& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
    };
    CreateInstanceRequestStorageOss() = default ;
    CreateInstanceRequestStorageOss(const CreateInstanceRequestStorageOss &) = default ;
    CreateInstanceRequestStorageOss(CreateInstanceRequestStorageOss &&) = default ;
    CreateInstanceRequestStorageOss(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestStorageOss() = default ;
    CreateInstanceRequestStorageOss& operator=(const CreateInstanceRequestStorageOss &) = default ;
    CreateInstanceRequestStorageOss& operator=(CreateInstanceRequestStorageOss &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline CreateInstanceRequestStorageOss& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
