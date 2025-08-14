// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLISTOUTPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLISTOUTPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartJobsResponseBodySmartJobListOutputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsResponseBodySmartJobListOutputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Object, object_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsResponseBodySmartJobListOutputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
    };
    ListSmartJobsResponseBodySmartJobListOutputConfig() = default ;
    ListSmartJobsResponseBodySmartJobListOutputConfig(const ListSmartJobsResponseBodySmartJobListOutputConfig &) = default ;
    ListSmartJobsResponseBodySmartJobListOutputConfig(ListSmartJobsResponseBodySmartJobListOutputConfig &&) = default ;
    ListSmartJobsResponseBodySmartJobListOutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsResponseBodySmartJobListOutputConfig() = default ;
    ListSmartJobsResponseBodySmartJobListOutputConfig& operator=(const ListSmartJobsResponseBodySmartJobListOutputConfig &) = default ;
    ListSmartJobsResponseBodySmartJobListOutputConfig& operator=(ListSmartJobsResponseBodySmartJobListOutputConfig &&) = default ;
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
    inline ListSmartJobsResponseBodySmartJobListOutputConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline ListSmartJobsResponseBodySmartJobListOutputConfig& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


  protected:
    // The Object Storage Service (OSS) bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The OSS object.
    std::shared_ptr<string> object_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
