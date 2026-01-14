// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cheatId, cheatId_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(imageCheat, imageCheat_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(voiceCheat, voiceCheat_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cheatId, cheatId_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(imageCheat, imageCheat_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(voiceCheat, voiceCheat_);
    };
    GetAICoachCheatDetectionResponseBody() = default ;
    GetAICoachCheatDetectionResponseBody(const GetAICoachCheatDetectionResponseBody &) = default ;
    GetAICoachCheatDetectionResponseBody(GetAICoachCheatDetectionResponseBody &&) = default ;
    GetAICoachCheatDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBody() = default ;
    GetAICoachCheatDetectionResponseBody& operator=(const GetAICoachCheatDetectionResponseBody &) = default ;
    GetAICoachCheatDetectionResponseBody& operator=(GetAICoachCheatDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceCheat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceCheat& obj) { 
        DARABONBA_PTR_TO_JSON(comparisonList, comparisonList_);
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(originalList, originalList_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceCheat& obj) { 
        DARABONBA_PTR_FROM_JSON(comparisonList, comparisonList_);
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(originalList, originalList_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      VoiceCheat() = default ;
      VoiceCheat(const VoiceCheat &) = default ;
      VoiceCheat(VoiceCheat &&) = default ;
      VoiceCheat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceCheat() = default ;
      VoiceCheat& operator=(const VoiceCheat &) = default ;
      VoiceCheat& operator=(VoiceCheat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OriginalList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginalList& obj) { 
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, OriginalList& obj) { 
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        OriginalList() = default ;
        OriginalList(const OriginalList &) = default ;
        OriginalList(OriginalList &&) = default ;
        OriginalList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginalList() = default ;
        OriginalList& operator=(const OriginalList &) = default ;
        OriginalList& operator=(OriginalList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->url_ == nullptr; };
        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline OriginalList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> url_ {};
      };

      class ComparisonList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComparisonList& obj) { 
          DARABONBA_PTR_TO_JSON(time, time_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ComparisonList& obj) { 
          DARABONBA_PTR_FROM_JSON(time, time_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        ComparisonList() = default ;
        ComparisonList(const ComparisonList &) = default ;
        ComparisonList(ComparisonList &&) = default ;
        ComparisonList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComparisonList() = default ;
        ComparisonList& operator=(const ComparisonList &) = default ;
        ComparisonList& operator=(ComparisonList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->time_ == nullptr
        && this->url_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ComparisonList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ComparisonList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> time_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->comparisonList_ == nullptr
        && this->desc_ == nullptr && this->originalList_ == nullptr && this->status_ == nullptr; };
      // comparisonList Field Functions 
      bool hasComparisonList() const { return this->comparisonList_ != nullptr;};
      void deleteComparisonList() { this->comparisonList_ = nullptr;};
      inline const vector<VoiceCheat::ComparisonList> & getComparisonList() const { DARABONBA_PTR_GET_CONST(comparisonList_, vector<VoiceCheat::ComparisonList>) };
      inline vector<VoiceCheat::ComparisonList> getComparisonList() { DARABONBA_PTR_GET(comparisonList_, vector<VoiceCheat::ComparisonList>) };
      inline VoiceCheat& setComparisonList(const vector<VoiceCheat::ComparisonList> & comparisonList) { DARABONBA_PTR_SET_VALUE(comparisonList_, comparisonList) };
      inline VoiceCheat& setComparisonList(vector<VoiceCheat::ComparisonList> && comparisonList) { DARABONBA_PTR_SET_RVALUE(comparisonList_, comparisonList) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline VoiceCheat& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // originalList Field Functions 
      bool hasOriginalList() const { return this->originalList_ != nullptr;};
      void deleteOriginalList() { this->originalList_ = nullptr;};
      inline const vector<VoiceCheat::OriginalList> & getOriginalList() const { DARABONBA_PTR_GET_CONST(originalList_, vector<VoiceCheat::OriginalList>) };
      inline vector<VoiceCheat::OriginalList> getOriginalList() { DARABONBA_PTR_GET(originalList_, vector<VoiceCheat::OriginalList>) };
      inline VoiceCheat& setOriginalList(const vector<VoiceCheat::OriginalList> & originalList) { DARABONBA_PTR_SET_VALUE(originalList_, originalList) };
      inline VoiceCheat& setOriginalList(vector<VoiceCheat::OriginalList> && originalList) { DARABONBA_PTR_SET_RVALUE(originalList_, originalList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline VoiceCheat& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<VoiceCheat::ComparisonList>> comparisonList_ {};
      shared_ptr<string> desc_ {};
      shared_ptr<vector<VoiceCheat::OriginalList>> originalList_ {};
      shared_ptr<int32_t> status_ {};
    };

    class ImageCheat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageCheat& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ImageCheat& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      ImageCheat() = default ;
      ImageCheat(const ImageCheat &) = default ;
      ImageCheat(ImageCheat &&) = default ;
      ImageCheat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageCheat() = default ;
      ImageCheat& operator=(const ImageCheat &) = default ;
      ImageCheat& operator=(ImageCheat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(time, time_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(time, time_);
          DARABONBA_PTR_FROM_JSON(url, url_);
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
        virtual bool empty() const override { return this->time_ == nullptr
        && this->url_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline List& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline List& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> time_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->desc_ == nullptr
        && this->list_ == nullptr && this->status_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline ImageCheat& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<ImageCheat::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ImageCheat::List>) };
      inline vector<ImageCheat::List> getList() { DARABONBA_PTR_GET(list_, vector<ImageCheat::List>) };
      inline ImageCheat& setList(const vector<ImageCheat::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline ImageCheat& setList(vector<ImageCheat::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ImageCheat& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> desc_ {};
      shared_ptr<vector<ImageCheat::List>> list_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->cheatId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->gmtCreate_ == nullptr && this->imageCheat_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->voiceCheat_ == nullptr; };
    // cheatId Field Functions 
    bool hasCheatId() const { return this->cheatId_ != nullptr;};
    void deleteCheatId() { this->cheatId_ = nullptr;};
    inline string getCheatId() const { DARABONBA_PTR_GET_DEFAULT(cheatId_, "") };
    inline GetAICoachCheatDetectionResponseBody& setCheatId(string cheatId) { DARABONBA_PTR_SET_VALUE(cheatId_, cheatId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAICoachCheatDetectionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAICoachCheatDetectionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachCheatDetectionResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // imageCheat Field Functions 
    bool hasImageCheat() const { return this->imageCheat_ != nullptr;};
    void deleteImageCheat() { this->imageCheat_ = nullptr;};
    inline const GetAICoachCheatDetectionResponseBody::ImageCheat & getImageCheat() const { DARABONBA_PTR_GET_CONST(imageCheat_, GetAICoachCheatDetectionResponseBody::ImageCheat) };
    inline GetAICoachCheatDetectionResponseBody::ImageCheat getImageCheat() { DARABONBA_PTR_GET(imageCheat_, GetAICoachCheatDetectionResponseBody::ImageCheat) };
    inline GetAICoachCheatDetectionResponseBody& setImageCheat(const GetAICoachCheatDetectionResponseBody::ImageCheat & imageCheat) { DARABONBA_PTR_SET_VALUE(imageCheat_, imageCheat) };
    inline GetAICoachCheatDetectionResponseBody& setImageCheat(GetAICoachCheatDetectionResponseBody::ImageCheat && imageCheat) { DARABONBA_PTR_SET_RVALUE(imageCheat_, imageCheat) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachCheatDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachCheatDetectionResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAICoachCheatDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // voiceCheat Field Functions 
    bool hasVoiceCheat() const { return this->voiceCheat_ != nullptr;};
    void deleteVoiceCheat() { this->voiceCheat_ = nullptr;};
    inline const GetAICoachCheatDetectionResponseBody::VoiceCheat & getVoiceCheat() const { DARABONBA_PTR_GET_CONST(voiceCheat_, GetAICoachCheatDetectionResponseBody::VoiceCheat) };
    inline GetAICoachCheatDetectionResponseBody::VoiceCheat getVoiceCheat() { DARABONBA_PTR_GET(voiceCheat_, GetAICoachCheatDetectionResponseBody::VoiceCheat) };
    inline GetAICoachCheatDetectionResponseBody& setVoiceCheat(const GetAICoachCheatDetectionResponseBody::VoiceCheat & voiceCheat) { DARABONBA_PTR_SET_VALUE(voiceCheat_, voiceCheat) };
    inline GetAICoachCheatDetectionResponseBody& setVoiceCheat(GetAICoachCheatDetectionResponseBody::VoiceCheat && voiceCheat) { DARABONBA_PTR_SET_RVALUE(voiceCheat_, voiceCheat) };


  protected:
    shared_ptr<string> cheatId_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<GetAICoachCheatDetectionResponseBody::ImageCheat> imageCheat_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> status_ {};
    // true
    shared_ptr<bool> success_ {};
    shared_ptr<GetAICoachCheatDetectionResponseBody::VoiceCheat> voiceCheat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
