// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckResultDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckResultDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_TO_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckResultDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_FROM_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    GetOssCheckResultDetailRequest() = default ;
    GetOssCheckResultDetailRequest(const GetOssCheckResultDetailRequest &) = default ;
    GetOssCheckResultDetailRequest(GetOssCheckResultDetailRequest &&) = default ;
    GetOssCheckResultDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckResultDetailRequest() = default ;
    GetOssCheckResultDetailRequest& operator=(const GetOssCheckResultDetailRequest &) = default ;
    GetOssCheckResultDetailRequest& operator=(GetOssCheckResultDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && this->mediaType_ == nullptr && this->object_ == nullptr && this->parentTaskId_ == nullptr && this->queryRequestId_ == nullptr && this->regionId_ == nullptr
        && this->serviceCode_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOssCheckResultDetailRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline GetOssCheckResultDetailRequest& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline GetOssCheckResultDetailRequest& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline GetOssCheckResultDetailRequest& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


    // queryRequestId Field Functions 
    bool hasQueryRequestId() const { return this->queryRequestId_ != nullptr;};
    void deleteQueryRequestId() { this->queryRequestId_ = nullptr;};
    inline string getQueryRequestId() const { DARABONBA_PTR_GET_DEFAULT(queryRequestId_, "") };
    inline GetOssCheckResultDetailRequest& setQueryRequestId(string queryRequestId) { DARABONBA_PTR_SET_VALUE(queryRequestId_, queryRequestId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOssCheckResultDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetOssCheckResultDetailRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // Bucket name.
    shared_ptr<string> bucket_ {};
    // Media type.
    shared_ptr<int32_t> mediaType_ {};
    // Object name.
    shared_ptr<string> object_ {};
    // Parent task ID.
    shared_ptr<string> parentTaskId_ {};
    // Query request ID.
    shared_ptr<string> queryRequestId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Service code.
    shared_ptr<string> serviceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
