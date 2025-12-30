// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDemonstrationForCustomizedVoiceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDemonstrationForCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDemonstrationForCustomizedVoiceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDemonstrationForCustomizedVoiceJobResponseBody() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(const GetDemonstrationForCustomizedVoiceJobResponseBody &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(GetDemonstrationForCustomizedVoiceJobResponseBody &&) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDemonstrationForCustomizedVoiceJobResponseBody() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody& operator=(const GetDemonstrationForCustomizedVoiceJobResponseBody &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBody& operator=(GetDemonstrationForCustomizedVoiceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DemonstrationList, demonstrationList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DemonstrationList, demonstrationList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DemonstrationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DemonstrationList& obj) { 
          DARABONBA_PTR_TO_JSON(AudioId, audioId_);
          DARABONBA_PTR_TO_JSON(DemoAudio, demoAudio_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, DemonstrationList& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioId, audioId_);
          DARABONBA_PTR_FROM_JSON(DemoAudio, demoAudio_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        DemonstrationList() = default ;
        DemonstrationList(const DemonstrationList &) = default ;
        DemonstrationList(DemonstrationList &&) = default ;
        DemonstrationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DemonstrationList() = default ;
        DemonstrationList& operator=(const DemonstrationList &) = default ;
        DemonstrationList& operator=(DemonstrationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioId_ == nullptr
        && this->demoAudio_ == nullptr && this->text_ == nullptr; };
        // audioId Field Functions 
        bool hasAudioId() const { return this->audioId_ != nullptr;};
        void deleteAudioId() { this->audioId_ = nullptr;};
        inline int32_t getAudioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, 0) };
        inline DemonstrationList& setAudioId(int32_t audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


        // demoAudio Field Functions 
        bool hasDemoAudio() const { return this->demoAudio_ != nullptr;};
        void deleteDemoAudio() { this->demoAudio_ = nullptr;};
        inline string getDemoAudio() const { DARABONBA_PTR_GET_DEFAULT(demoAudio_, "") };
        inline DemonstrationList& setDemoAudio(string demoAudio) { DARABONBA_PTR_SET_VALUE(demoAudio_, demoAudio) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DemonstrationList& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // The sequence number of the text, which corresponds to the AduioRecordId parameter to be passed during audio check.
        shared_ptr<int32_t> audioId_ {};
        // The URL of the sample audio.
        // 
        // *   The value is an Object Storage Service (OSS) URL.
        // 
        //     **
        // 
        //     **Note**: The URL expires in 12 hours.
        shared_ptr<string> demoAudio_ {};
        // The text content to be read.
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->demonstrationList_ == nullptr; };
      // demonstrationList Field Functions 
      bool hasDemonstrationList() const { return this->demonstrationList_ != nullptr;};
      void deleteDemonstrationList() { this->demonstrationList_ = nullptr;};
      inline const vector<Data::DemonstrationList> & getDemonstrationList() const { DARABONBA_PTR_GET_CONST(demonstrationList_, vector<Data::DemonstrationList>) };
      inline vector<Data::DemonstrationList> getDemonstrationList() { DARABONBA_PTR_GET(demonstrationList_, vector<Data::DemonstrationList>) };
      inline Data& setDemonstrationList(const vector<Data::DemonstrationList> & demonstrationList) { DARABONBA_PTR_SET_VALUE(demonstrationList_, demonstrationList) };
      inline Data& setDemonstrationList(vector<Data::DemonstrationList> && demonstrationList) { DARABONBA_PTR_SET_RVALUE(demonstrationList_, demonstrationList) };


    protected:
      // A list of 20 text entries to be read and the corresponding sample audio.
      shared_ptr<vector<Data::DemonstrationList>> demonstrationList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDemonstrationForCustomizedVoiceJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDemonstrationForCustomizedVoiceJobResponseBody::Data) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDemonstrationForCustomizedVoiceJobResponseBody::Data) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setData(const GetDemonstrationForCustomizedVoiceJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setData(GetDemonstrationForCustomizedVoiceJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<GetDemonstrationForCustomizedVoiceJobResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
