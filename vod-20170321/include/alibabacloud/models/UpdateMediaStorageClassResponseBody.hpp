// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODY_HPP_
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
  class UpdateMediaStorageClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaStorageClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaStorageClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateMediaStorageClassResponseBody() = default ;
    UpdateMediaStorageClassResponseBody(const UpdateMediaStorageClassResponseBody &) = default ;
    UpdateMediaStorageClassResponseBody(UpdateMediaStorageClassResponseBody &&) = default ;
    UpdateMediaStorageClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaStorageClassResponseBody() = default ;
    UpdateMediaStorageClassResponseBody& operator=(const UpdateMediaStorageClassResponseBody &) = default ;
    UpdateMediaStorageClassResponseBody& operator=(UpdateMediaStorageClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IgnoredList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IgnoredList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, IgnoredList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      IgnoredList() = default ;
      IgnoredList(const IgnoredList &) = default ;
      IgnoredList(IgnoredList &&) = default ;
      IgnoredList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IgnoredList() = default ;
      IgnoredList& operator=(const IgnoredList &) = default ;
      IgnoredList& operator=(IgnoredList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mediaId_ == nullptr; };
      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline const vector<string> & getMediaId() const { DARABONBA_PTR_GET_CONST(mediaId_, vector<string>) };
      inline vector<string> getMediaId() { DARABONBA_PTR_GET(mediaId_, vector<string>) };
      inline IgnoredList& setMediaId(const vector<string> & mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };
      inline IgnoredList& setMediaId(vector<string> && mediaId) { DARABONBA_PTR_SET_RVALUE(mediaId_, mediaId) };


    protected:
      shared_ptr<vector<string>> mediaId_ {};
    };

    class ForbiddenList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForbiddenList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
      };
      friend void from_json(const Darabonba::Json& j, ForbiddenList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
      };
      ForbiddenList() = default ;
      ForbiddenList(const ForbiddenList &) = default ;
      ForbiddenList(ForbiddenList &&) = default ;
      ForbiddenList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForbiddenList() = default ;
      ForbiddenList& operator=(const ForbiddenList &) = default ;
      ForbiddenList& operator=(ForbiddenList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaForbiddenReasonDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaForbiddenReasonDTO& obj) { 
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, MediaForbiddenReasonDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        MediaForbiddenReasonDTO() = default ;
        MediaForbiddenReasonDTO(const MediaForbiddenReasonDTO &) = default ;
        MediaForbiddenReasonDTO(MediaForbiddenReasonDTO &&) = default ;
        MediaForbiddenReasonDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaForbiddenReasonDTO() = default ;
        MediaForbiddenReasonDTO& operator=(const MediaForbiddenReasonDTO &) = default ;
        MediaForbiddenReasonDTO& operator=(MediaForbiddenReasonDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->reason_ == nullptr; };
        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaForbiddenReasonDTO& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline MediaForbiddenReasonDTO& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // The ID of the media asset.
        shared_ptr<string> mediaId_ {};
        // The reason for the failure.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->mediaForbiddenReasonDTO_ == nullptr; };
      // mediaForbiddenReasonDTO Field Functions 
      bool hasMediaForbiddenReasonDTO() const { return this->mediaForbiddenReasonDTO_ != nullptr;};
      void deleteMediaForbiddenReasonDTO() { this->mediaForbiddenReasonDTO_ = nullptr;};
      inline const vector<ForbiddenList::MediaForbiddenReasonDTO> & getMediaForbiddenReasonDTO() const { DARABONBA_PTR_GET_CONST(mediaForbiddenReasonDTO_, vector<ForbiddenList::MediaForbiddenReasonDTO>) };
      inline vector<ForbiddenList::MediaForbiddenReasonDTO> getMediaForbiddenReasonDTO() { DARABONBA_PTR_GET(mediaForbiddenReasonDTO_, vector<ForbiddenList::MediaForbiddenReasonDTO>) };
      inline ForbiddenList& setMediaForbiddenReasonDTO(const vector<ForbiddenList::MediaForbiddenReasonDTO> & mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_VALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };
      inline ForbiddenList& setMediaForbiddenReasonDTO(vector<ForbiddenList::MediaForbiddenReasonDTO> && mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_RVALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };


    protected:
      shared_ptr<vector<ForbiddenList::MediaForbiddenReasonDTO>> mediaForbiddenReasonDTO_ {};
    };

    virtual bool empty() const override { return this->forbiddenList_ == nullptr
        && this->ignoredList_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const UpdateMediaStorageClassResponseBody::ForbiddenList & getForbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, UpdateMediaStorageClassResponseBody::ForbiddenList) };
    inline UpdateMediaStorageClassResponseBody::ForbiddenList getForbiddenList() { DARABONBA_PTR_GET(forbiddenList_, UpdateMediaStorageClassResponseBody::ForbiddenList) };
    inline UpdateMediaStorageClassResponseBody& setForbiddenList(const UpdateMediaStorageClassResponseBody::ForbiddenList & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline UpdateMediaStorageClassResponseBody& setForbiddenList(UpdateMediaStorageClassResponseBody::ForbiddenList && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const UpdateMediaStorageClassResponseBody::IgnoredList & getIgnoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, UpdateMediaStorageClassResponseBody::IgnoredList) };
    inline UpdateMediaStorageClassResponseBody::IgnoredList getIgnoredList() { DARABONBA_PTR_GET(ignoredList_, UpdateMediaStorageClassResponseBody::IgnoredList) };
    inline UpdateMediaStorageClassResponseBody& setIgnoredList(const UpdateMediaStorageClassResponseBody::IgnoredList & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline UpdateMediaStorageClassResponseBody& setIgnoredList(UpdateMediaStorageClassResponseBody::IgnoredList && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMediaStorageClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateMediaStorageClassResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IDs of the media assets that failed to be processed.
    shared_ptr<UpdateMediaStorageClassResponseBody::ForbiddenList> forbiddenList_ {};
    // The IDs of the media assets that failed to be obtained.
    shared_ptr<UpdateMediaStorageClassResponseBody::IgnoredList> ignoredList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The state of the task. Valid values:
    // 
    // *   **Processing**
    // *   **Failed**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
