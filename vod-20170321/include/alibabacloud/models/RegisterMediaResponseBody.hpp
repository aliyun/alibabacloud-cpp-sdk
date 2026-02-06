// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegisterMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFileURLs, failedFileURLs_);
      DARABONBA_PTR_TO_JSON(RegisteredMediaList, registeredMediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFileURLs, failedFileURLs_);
      DARABONBA_PTR_FROM_JSON(RegisteredMediaList, registeredMediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterMediaResponseBody() = default ;
    RegisterMediaResponseBody(const RegisterMediaResponseBody &) = default ;
    RegisterMediaResponseBody(RegisterMediaResponseBody &&) = default ;
    RegisterMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaResponseBody() = default ;
    RegisterMediaResponseBody& operator=(const RegisterMediaResponseBody &) = default ;
    RegisterMediaResponseBody& operator=(RegisterMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegisteredMediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegisteredMediaList& obj) { 
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(NewRegister, newRegister_);
      };
      friend void from_json(const Darabonba::Json& j, RegisteredMediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(NewRegister, newRegister_);
      };
      RegisteredMediaList() = default ;
      RegisteredMediaList(const RegisteredMediaList &) = default ;
      RegisteredMediaList(RegisteredMediaList &&) = default ;
      RegisteredMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegisteredMediaList() = default ;
      RegisteredMediaList& operator=(const RegisteredMediaList &) = default ;
      RegisteredMediaList& operator=(RegisteredMediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileURL_ == nullptr
        && this->mediaId_ == nullptr && this->newRegister_ == nullptr; };
      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline RegisteredMediaList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline RegisteredMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // newRegister Field Functions 
      bool hasNewRegister() const { return this->newRegister_ != nullptr;};
      void deleteNewRegister() { this->newRegister_ = nullptr;};
      inline bool getNewRegister() const { DARABONBA_PTR_GET_DEFAULT(newRegister_, false) };
      inline RegisteredMediaList& setNewRegister(bool newRegister) { DARABONBA_PTR_SET_VALUE(newRegister_, newRegister) };


    protected:
      // The URL of the media file.
      shared_ptr<string> fileURL_ {};
      // The ID of the media file that is registered with ApsaraVideo VOD. If the registered media file is an audio or video file, the value of this parameter is the same as that of the VideoId parameter.
      shared_ptr<string> mediaId_ {};
      // Indicates whether the media file is newly registered or repeatedly registered. Valid values:
      // 
      // *   **true**: The media file is newly registered.
      // *   **false**: The media file is repeatedly registered.
      shared_ptr<bool> newRegister_ {};
    };

    virtual bool empty() const override { return this->failedFileURLs_ == nullptr
        && this->registeredMediaList_ == nullptr && this->requestId_ == nullptr; };
    // failedFileURLs Field Functions 
    bool hasFailedFileURLs() const { return this->failedFileURLs_ != nullptr;};
    void deleteFailedFileURLs() { this->failedFileURLs_ = nullptr;};
    inline const vector<string> & getFailedFileURLs() const { DARABONBA_PTR_GET_CONST(failedFileURLs_, vector<string>) };
    inline vector<string> getFailedFileURLs() { DARABONBA_PTR_GET(failedFileURLs_, vector<string>) };
    inline RegisterMediaResponseBody& setFailedFileURLs(const vector<string> & failedFileURLs) { DARABONBA_PTR_SET_VALUE(failedFileURLs_, failedFileURLs) };
    inline RegisterMediaResponseBody& setFailedFileURLs(vector<string> && failedFileURLs) { DARABONBA_PTR_SET_RVALUE(failedFileURLs_, failedFileURLs) };


    // registeredMediaList Field Functions 
    bool hasRegisteredMediaList() const { return this->registeredMediaList_ != nullptr;};
    void deleteRegisteredMediaList() { this->registeredMediaList_ = nullptr;};
    inline const vector<RegisterMediaResponseBody::RegisteredMediaList> & getRegisteredMediaList() const { DARABONBA_PTR_GET_CONST(registeredMediaList_, vector<RegisterMediaResponseBody::RegisteredMediaList>) };
    inline vector<RegisterMediaResponseBody::RegisteredMediaList> getRegisteredMediaList() { DARABONBA_PTR_GET(registeredMediaList_, vector<RegisterMediaResponseBody::RegisteredMediaList>) };
    inline RegisterMediaResponseBody& setRegisteredMediaList(const vector<RegisterMediaResponseBody::RegisteredMediaList> & registeredMediaList) { DARABONBA_PTR_SET_VALUE(registeredMediaList_, registeredMediaList) };
    inline RegisterMediaResponseBody& setRegisteredMediaList(vector<RegisterMediaResponseBody::RegisteredMediaList> && registeredMediaList) { DARABONBA_PTR_SET_RVALUE(registeredMediaList_, registeredMediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URLs of the media files that failed to be registered.
    shared_ptr<vector<string>> failedFileURLs_ {};
    // The media files that are registered, including newly registered and repeatedly registered media files.
    shared_ptr<vector<RegisterMediaResponseBody::RegisteredMediaList>> registeredMediaList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
