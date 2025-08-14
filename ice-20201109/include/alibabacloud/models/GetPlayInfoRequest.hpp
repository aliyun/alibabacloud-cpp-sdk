// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPlayInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetPlayInfoRequest() = default ;
    GetPlayInfoRequest(const GetPlayInfoRequest &) = default ;
    GetPlayInfoRequest(GetPlayInfoRequest &&) = default ;
    GetPlayInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoRequest() = default ;
    GetPlayInfoRequest& operator=(const GetPlayInfoRequest &) = default ;
    GetPlayInfoRequest& operator=(GetPlayInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authTimeout_ != nullptr
        && this->inputURL_ != nullptr && this->mediaId_ != nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetPlayInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline GetPlayInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetPlayInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The input URL that you specified for the media asset when you registered the media asset. For more information, see [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html).
    // 
    // >  You must specify at least one of the MediaId and InputURL parameters.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The ID of the media asset.
    // 
    // >  You must specify at least one of the MediaId and InputURL parameters.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
