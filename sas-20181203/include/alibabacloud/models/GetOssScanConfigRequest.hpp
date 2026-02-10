// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSCANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOssScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetOssScanConfigRequest() = default ;
    GetOssScanConfigRequest(const GetOssScanConfigRequest &) = default ;
    GetOssScanConfigRequest(GetOssScanConfigRequest &&) = default ;
    GetOssScanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssScanConfigRequest() = default ;
    GetOssScanConfigRequest& operator=(const GetOssScanConfigRequest &) = default ;
    GetOssScanConfigRequest& operator=(GetOssScanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->id_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetOssScanConfigRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetOssScanConfigRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The name of the bucket.
    shared_ptr<string> bucketName_ {};
    // The policy ID.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
