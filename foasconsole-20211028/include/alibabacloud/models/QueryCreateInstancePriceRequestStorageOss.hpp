// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTSTORAGEOSS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTSTORAGEOSS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryCreateInstancePriceRequestStorageOss : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceRequestStorageOss& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceRequestStorageOss& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
    };
    QueryCreateInstancePriceRequestStorageOss() = default ;
    QueryCreateInstancePriceRequestStorageOss(const QueryCreateInstancePriceRequestStorageOss &) = default ;
    QueryCreateInstancePriceRequestStorageOss(QueryCreateInstancePriceRequestStorageOss &&) = default ;
    QueryCreateInstancePriceRequestStorageOss(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceRequestStorageOss() = default ;
    QueryCreateInstancePriceRequestStorageOss& operator=(const QueryCreateInstancePriceRequestStorageOss &) = default ;
    QueryCreateInstancePriceRequestStorageOss& operator=(QueryCreateInstancePriceRequestStorageOss &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline QueryCreateInstancePriceRequestStorageOss& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
