// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPLAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPLAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeDisplayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisplayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayConfigModel, displayConfigModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisplayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayConfigModel, displayConfigModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDisplayConfigResponseBody() = default ;
    DescribeDisplayConfigResponseBody(const DescribeDisplayConfigResponseBody &) = default ;
    DescribeDisplayConfigResponseBody(DescribeDisplayConfigResponseBody &&) = default ;
    DescribeDisplayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisplayConfigResponseBody() = default ;
    DescribeDisplayConfigResponseBody& operator=(const DescribeDisplayConfigResponseBody &) = default ;
    DescribeDisplayConfigResponseBody& operator=(DescribeDisplayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DisplayConfigModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DisplayConfigModel& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(Dpi, dpi_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
        DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      };
      friend void from_json(const Darabonba::Json& j, DisplayConfigModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_FROM_JSON(Dpi, dpi_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
        DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      };
      DisplayConfigModel() = default ;
      DisplayConfigModel(const DisplayConfigModel &) = default ;
      DisplayConfigModel(DisplayConfigModel &&) = default ;
      DisplayConfigModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DisplayConfigModel() = default ;
      DisplayConfigModel& operator=(const DisplayConfigModel &) = default ;
      DisplayConfigModel& operator=(DisplayConfigModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->dpi_ == nullptr && this->fps_ == nullptr && this->lockResolution_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline DisplayConfigModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // dpi Field Functions 
      bool hasDpi() const { return this->dpi_ != nullptr;};
      void deleteDpi() { this->dpi_ = nullptr;};
      inline int32_t getDpi() const { DARABONBA_PTR_GET_DEFAULT(dpi_, 0) };
      inline DisplayConfigModel& setDpi(int32_t dpi) { DARABONBA_PTR_SET_VALUE(dpi_, dpi) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline int32_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
      inline DisplayConfigModel& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // lockResolution Field Functions 
      bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
      void deleteLockResolution() { this->lockResolution_ = nullptr;};
      inline string getLockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
      inline DisplayConfigModel& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline DisplayConfigModel& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline DisplayConfigModel& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    protected:
      shared_ptr<string> androidInstanceId_ {};
      shared_ptr<int32_t> dpi_ {};
      shared_ptr<int32_t> fps_ {};
      shared_ptr<string> lockResolution_ {};
      shared_ptr<int32_t> resolutionHeight_ {};
      shared_ptr<int32_t> resolutionWidth_ {};
    };

    virtual bool empty() const override { return this->displayConfigModel_ == nullptr
        && this->requestId_ == nullptr; };
    // displayConfigModel Field Functions 
    bool hasDisplayConfigModel() const { return this->displayConfigModel_ != nullptr;};
    void deleteDisplayConfigModel() { this->displayConfigModel_ = nullptr;};
    inline const vector<DescribeDisplayConfigResponseBody::DisplayConfigModel> & getDisplayConfigModel() const { DARABONBA_PTR_GET_CONST(displayConfigModel_, vector<DescribeDisplayConfigResponseBody::DisplayConfigModel>) };
    inline vector<DescribeDisplayConfigResponseBody::DisplayConfigModel> getDisplayConfigModel() { DARABONBA_PTR_GET(displayConfigModel_, vector<DescribeDisplayConfigResponseBody::DisplayConfigModel>) };
    inline DescribeDisplayConfigResponseBody& setDisplayConfigModel(const vector<DescribeDisplayConfigResponseBody::DisplayConfigModel> & displayConfigModel) { DARABONBA_PTR_SET_VALUE(displayConfigModel_, displayConfigModel) };
    inline DescribeDisplayConfigResponseBody& setDisplayConfigModel(vector<DescribeDisplayConfigResponseBody::DisplayConfigModel> && displayConfigModel) { DARABONBA_PTR_SET_RVALUE(displayConfigModel_, displayConfigModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisplayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDisplayConfigResponseBody::DisplayConfigModel>> displayConfigModel_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
