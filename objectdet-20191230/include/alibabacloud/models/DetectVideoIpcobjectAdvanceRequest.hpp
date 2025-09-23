// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVideoIPCObjectAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoIPCObjectAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackOnlyHasObject, callbackOnlyHasObject_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoIPCObjectAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackOnlyHasObject, callbackOnlyHasObject_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    DetectVideoIPCObjectAdvanceRequest() = default ;
    DetectVideoIPCObjectAdvanceRequest(const DetectVideoIPCObjectAdvanceRequest &) = default ;
    DetectVideoIPCObjectAdvanceRequest(DetectVideoIPCObjectAdvanceRequest &&) = default ;
    DetectVideoIPCObjectAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoIPCObjectAdvanceRequest() = default ;
    DetectVideoIPCObjectAdvanceRequest& operator=(const DetectVideoIPCObjectAdvanceRequest &) = default ;
    DetectVideoIPCObjectAdvanceRequest& operator=(DetectVideoIPCObjectAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackOnlyHasObject_ != nullptr
        && this->startTimestamp_ != nullptr && this->videoURLObject_ != nullptr; };
    // callbackOnlyHasObject Field Functions 
    bool hasCallbackOnlyHasObject() const { return this->callbackOnlyHasObject_ != nullptr;};
    void deleteCallbackOnlyHasObject() { this->callbackOnlyHasObject_ = nullptr;};
    inline bool callbackOnlyHasObject() const { DARABONBA_PTR_GET_DEFAULT(callbackOnlyHasObject_, false) };
    inline DetectVideoIPCObjectAdvanceRequest& setCallbackOnlyHasObject(bool callbackOnlyHasObject) { DARABONBA_PTR_SET_VALUE(callbackOnlyHasObject_, callbackOnlyHasObject) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DetectVideoIPCObjectAdvanceRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline DetectVideoIPCObjectAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    std::shared_ptr<bool> callbackOnlyHasObject_ = nullptr;
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
