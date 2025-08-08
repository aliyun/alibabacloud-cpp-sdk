// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODYUPLOADFILEJOBDETAILUPLOADOSSPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODYUPLOADFILEJOBDETAILUPLOADOSSPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
    };
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam() = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam(const GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam &) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam(GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam &&) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam() = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& operator=(const GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam &) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& operator=(GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->endpoint_ != nullptr && this->objectName_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The name of the OSS object.
    std::shared_ptr<string> objectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
