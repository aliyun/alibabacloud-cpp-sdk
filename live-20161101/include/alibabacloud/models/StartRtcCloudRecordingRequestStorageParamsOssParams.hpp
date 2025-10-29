// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSOSSPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSOSSPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestStorageParamsOSSParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestStorageParamsOSSParams& obj) { 
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSEndpoint, OSSEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestStorageParamsOSSParams& obj) { 
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSEndpoint, OSSEndpoint_);
    };
    StartRtcCloudRecordingRequestStorageParamsOSSParams() = default ;
    StartRtcCloudRecordingRequestStorageParamsOSSParams(const StartRtcCloudRecordingRequestStorageParamsOSSParams &) = default ;
    StartRtcCloudRecordingRequestStorageParamsOSSParams(StartRtcCloudRecordingRequestStorageParamsOSSParams &&) = default ;
    StartRtcCloudRecordingRequestStorageParamsOSSParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestStorageParamsOSSParams() = default ;
    StartRtcCloudRecordingRequestStorageParamsOSSParams& operator=(const StartRtcCloudRecordingRequestStorageParamsOSSParams &) = default ;
    StartRtcCloudRecordingRequestStorageParamsOSSParams& operator=(StartRtcCloudRecordingRequestStorageParamsOSSParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->OSSBucket_ == nullptr
        && return this->OSSEndpoint_ == nullptr; };
    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsOSSParams& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSEndpoint Field Functions 
    bool hasOSSEndpoint() const { return this->OSSEndpoint_ != nullptr;};
    void deleteOSSEndpoint() { this->OSSEndpoint_ = nullptr;};
    inline string OSSEndpoint() const { DARABONBA_PTR_GET_DEFAULT(OSSEndpoint_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsOSSParams& setOSSEndpoint(string OSSEndpoint) { DARABONBA_PTR_SET_VALUE(OSSEndpoint_, OSSEndpoint) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> OSSBucket_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> OSSEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
