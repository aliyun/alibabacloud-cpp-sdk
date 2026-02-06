// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODY_HPP_
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
  class GetMediaAuditAudioResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditAudioResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditAudioResultDetail, mediaAuditAudioResultDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditAudioResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditAudioResultDetail, mediaAuditAudioResultDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditAudioResultDetailResponseBody() = default ;
    GetMediaAuditAudioResultDetailResponseBody(const GetMediaAuditAudioResultDetailResponseBody &) = default ;
    GetMediaAuditAudioResultDetailResponseBody(GetMediaAuditAudioResultDetailResponseBody &&) = default ;
    GetMediaAuditAudioResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditAudioResultDetailResponseBody() = default ;
    GetMediaAuditAudioResultDetailResponseBody& operator=(const GetMediaAuditAudioResultDetailResponseBody &) = default ;
    GetMediaAuditAudioResultDetailResponseBody& operator=(GetMediaAuditAudioResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaAuditAudioResultDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaAuditAudioResultDetail& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageTotal, pageTotal_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, MediaAuditAudioResultDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageTotal, pageTotal_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      MediaAuditAudioResultDetail() = default ;
      MediaAuditAudioResultDetail(const MediaAuditAudioResultDetail &) = default ;
      MediaAuditAudioResultDetail(MediaAuditAudioResultDetail &&) = default ;
      MediaAuditAudioResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaAuditAudioResultDetail() = default ;
      MediaAuditAudioResultDetail& operator=(const MediaAuditAudioResultDetail &) = default ;
      MediaAuditAudioResultDetail& operator=(MediaAuditAudioResultDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->label_ == nullptr && this->startTime_ == nullptr && this->text_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline List& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline List& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline List& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // The end time of the audio that failed the review. Unit: seconds.
        shared_ptr<int64_t> endTime_ {};
        // The review results. Valid values:
        // *   **spam**
        // *   **ad**
        // *   **abuse**
        // *   **flood**
        // *   **contraband**
        // *   **meaningless**
        // *   **normal**
        shared_ptr<string> label_ {};
        // The start time of the audio that failed the review. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
        // The text that corresponds to the audio.
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageTotal_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<MediaAuditAudioResultDetail::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<MediaAuditAudioResultDetail::List>) };
      inline vector<MediaAuditAudioResultDetail::List> getList() { DARABONBA_PTR_GET(list_, vector<MediaAuditAudioResultDetail::List>) };
      inline MediaAuditAudioResultDetail& setList(const vector<MediaAuditAudioResultDetail::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline MediaAuditAudioResultDetail& setList(vector<MediaAuditAudioResultDetail::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageTotal Field Functions 
      bool hasPageTotal() const { return this->pageTotal_ != nullptr;};
      void deletePageTotal() { this->pageTotal_ = nullptr;};
      inline int32_t getPageTotal() const { DARABONBA_PTR_GET_DEFAULT(pageTotal_, 0) };
      inline MediaAuditAudioResultDetail& setPageTotal(int32_t pageTotal) { DARABONBA_PTR_SET_VALUE(pageTotal_, pageTotal) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline MediaAuditAudioResultDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of results.
      shared_ptr<vector<MediaAuditAudioResultDetail::List>> list_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageTotal_ {};
      // The total number of pages returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->mediaAuditAudioResultDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaAuditAudioResultDetail Field Functions 
    bool hasMediaAuditAudioResultDetail() const { return this->mediaAuditAudioResultDetail_ != nullptr;};
    void deleteMediaAuditAudioResultDetail() { this->mediaAuditAudioResultDetail_ = nullptr;};
    inline const GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail & getMediaAuditAudioResultDetail() const { DARABONBA_PTR_GET_CONST(mediaAuditAudioResultDetail_, GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail getMediaAuditAudioResultDetail() { DARABONBA_PTR_GET(mediaAuditAudioResultDetail_, GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBody& setMediaAuditAudioResultDetail(const GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail & mediaAuditAudioResultDetail) { DARABONBA_PTR_SET_VALUE(mediaAuditAudioResultDetail_, mediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBody& setMediaAuditAudioResultDetail(GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail && mediaAuditAudioResultDetail) { DARABONBA_PTR_SET_RVALUE(mediaAuditAudioResultDetail_, mediaAuditAudioResultDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditAudioResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of review results.
    shared_ptr<GetMediaAuditAudioResultDetailResponseBody::MediaAuditAudioResultDetail> mediaAuditAudioResultDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
