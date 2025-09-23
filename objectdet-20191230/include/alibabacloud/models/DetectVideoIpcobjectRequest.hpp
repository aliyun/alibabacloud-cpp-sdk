// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVideoIPCObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoIPCObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackOnlyHasObject, callbackOnlyHasObject_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoIPCObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackOnlyHasObject, callbackOnlyHasObject_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    DetectVideoIPCObjectRequest() = default ;
    DetectVideoIPCObjectRequest(const DetectVideoIPCObjectRequest &) = default ;
    DetectVideoIPCObjectRequest(DetectVideoIPCObjectRequest &&) = default ;
    DetectVideoIPCObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoIPCObjectRequest() = default ;
    DetectVideoIPCObjectRequest& operator=(const DetectVideoIPCObjectRequest &) = default ;
    DetectVideoIPCObjectRequest& operator=(DetectVideoIPCObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackOnlyHasObject_ != nullptr
        && this->startTimestamp_ != nullptr && this->videoURL_ != nullptr; };
    // callbackOnlyHasObject Field Functions 
    bool hasCallbackOnlyHasObject() const { return this->callbackOnlyHasObject_ != nullptr;};
    void deleteCallbackOnlyHasObject() { this->callbackOnlyHasObject_ = nullptr;};
    inline bool callbackOnlyHasObject() const { DARABONBA_PTR_GET_DEFAULT(callbackOnlyHasObject_, false) };
    inline DetectVideoIPCObjectRequest& setCallbackOnlyHasObject(bool callbackOnlyHasObject) { DARABONBA_PTR_SET_VALUE(callbackOnlyHasObject_, callbackOnlyHasObject) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DetectVideoIPCObjectRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline DetectVideoIPCObjectRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<bool> callbackOnlyHasObject_ = nullptr;
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
