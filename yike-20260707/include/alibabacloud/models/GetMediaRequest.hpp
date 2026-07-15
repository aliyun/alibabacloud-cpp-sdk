// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetMediaRequest() = default ;
    GetMediaRequest(const GetMediaRequest &) = default ;
    GetMediaRequest(GetMediaRequest &&) = default ;
    GetMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaRequest() = default ;
    GetMediaRequest& operator=(const GetMediaRequest &) = default ;
    GetMediaRequest& operator=(GetMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->inputURL_ == nullptr && this->mediaId_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetMediaRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline GetMediaRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    shared_ptr<int64_t> authTimeout_ {};
    shared_ptr<string> inputURL_ {};
    shared_ptr<string> mediaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
