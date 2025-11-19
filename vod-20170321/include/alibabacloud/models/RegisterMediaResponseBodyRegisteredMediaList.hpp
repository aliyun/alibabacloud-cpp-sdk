// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODYREGISTEREDMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODYREGISTEREDMEDIALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegisterMediaResponseBodyRegisteredMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaResponseBodyRegisteredMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(NewRegister, newRegister_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaResponseBodyRegisteredMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(NewRegister, newRegister_);
    };
    RegisterMediaResponseBodyRegisteredMediaList() = default ;
    RegisterMediaResponseBodyRegisteredMediaList(const RegisterMediaResponseBodyRegisteredMediaList &) = default ;
    RegisterMediaResponseBodyRegisteredMediaList(RegisterMediaResponseBodyRegisteredMediaList &&) = default ;
    RegisterMediaResponseBodyRegisteredMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaResponseBodyRegisteredMediaList() = default ;
    RegisterMediaResponseBodyRegisteredMediaList& operator=(const RegisterMediaResponseBodyRegisteredMediaList &) = default ;
    RegisterMediaResponseBodyRegisteredMediaList& operator=(RegisterMediaResponseBodyRegisteredMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileURL_ == nullptr
        && return this->mediaId_ == nullptr && return this->newRegister_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline RegisterMediaResponseBodyRegisteredMediaList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RegisterMediaResponseBodyRegisteredMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // newRegister Field Functions 
    bool hasNewRegister() const { return this->newRegister_ != nullptr;};
    void deleteNewRegister() { this->newRegister_ = nullptr;};
    inline bool newRegister() const { DARABONBA_PTR_GET_DEFAULT(newRegister_, false) };
    inline RegisterMediaResponseBodyRegisteredMediaList& setNewRegister(bool newRegister) { DARABONBA_PTR_SET_VALUE(newRegister_, newRegister) };


  protected:
    // The URL of the media file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The ID of the media file that is registered with ApsaraVideo VOD. If the registered media file is an audio or video file, the value of this parameter is the same as that of the VideoId parameter.
    std::shared_ptr<string> mediaId_ = nullptr;
    // Indicates whether the media file is newly registered or repeatedly registered. Valid values:
    // 
    // *   **true**: The media file is newly registered.
    // *   **false**: The media file is repeatedly registered.
    std::shared_ptr<bool> newRegister_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
