// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODY_HPP_
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
  class ListCustomizedVoicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCustomizedVoicesResponseBody() = default ;
    ListCustomizedVoicesResponseBody(const ListCustomizedVoicesResponseBody &) = default ;
    ListCustomizedVoicesResponseBody(ListCustomizedVoicesResponseBody &&) = default ;
    ListCustomizedVoicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoicesResponseBody() = default ;
    ListCustomizedVoicesResponseBody& operator=(const ListCustomizedVoicesResponseBody &) = default ;
    ListCustomizedVoicesResponseBody& operator=(ListCustomizedVoicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomizedVoiceList, customizedVoiceList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomizedVoiceList, customizedVoiceList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class CustomizedVoiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomizedVoiceList& obj) { 
          DARABONBA_PTR_TO_JSON(DemoAudioMediaId, demoAudioMediaId_);
          DARABONBA_PTR_TO_JSON(Gender, gender_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomizedVoiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoAudioMediaId, demoAudioMediaId_);
          DARABONBA_PTR_FROM_JSON(Gender, gender_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
        };
        CustomizedVoiceList() = default ;
        CustomizedVoiceList(const CustomizedVoiceList &) = default ;
        CustomizedVoiceList(CustomizedVoiceList &&) = default ;
        CustomizedVoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomizedVoiceList() = default ;
        CustomizedVoiceList& operator=(const CustomizedVoiceList &) = default ;
        CustomizedVoiceList& operator=(CustomizedVoiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->demoAudioMediaId_ == nullptr
        && this->gender_ == nullptr && this->scenario_ == nullptr && this->type_ == nullptr && this->voiceDesc_ == nullptr && this->voiceId_ == nullptr
        && this->voiceName_ == nullptr; };
        // demoAudioMediaId Field Functions 
        bool hasDemoAudioMediaId() const { return this->demoAudioMediaId_ != nullptr;};
        void deleteDemoAudioMediaId() { this->demoAudioMediaId_ = nullptr;};
        inline string getDemoAudioMediaId() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaId_, "") };
        inline CustomizedVoiceList& setDemoAudioMediaId(string demoAudioMediaId) { DARABONBA_PTR_SET_VALUE(demoAudioMediaId_, demoAudioMediaId) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
        inline CustomizedVoiceList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline CustomizedVoiceList& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CustomizedVoiceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // voiceDesc Field Functions 
        bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
        void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
        inline string getVoiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
        inline CustomizedVoiceList& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
        inline CustomizedVoiceList& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceName Field Functions 
        bool hasVoiceName() const { return this->voiceName_ != nullptr;};
        void deleteVoiceName() { this->voiceName_ = nullptr;};
        inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
        inline CustomizedVoiceList& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


      protected:
        // The media asset ID of the sample audio file.
        shared_ptr<string> demoAudioMediaId_ {};
        // The gender. Valid values:
        // 
        // *   female
        // *   male
        shared_ptr<string> gender_ {};
        // The scenario. Valid values:
        // 
        // *   story
        // *   interaction
        // *   navigation
        shared_ptr<string> scenario_ {};
        // *   The voice type. Valid values:
        // 
        //     *   Basic
        //     *   Standard
        shared_ptr<string> type_ {};
        // The voice description.
        shared_ptr<string> voiceDesc_ {};
        // The voice ID.
        shared_ptr<string> voiceId_ {};
        // The voice name.
        shared_ptr<string> voiceName_ {};
      };

      virtual bool empty() const override { return this->customizedVoiceList_ == nullptr
        && this->totalCount_ == nullptr; };
      // customizedVoiceList Field Functions 
      bool hasCustomizedVoiceList() const { return this->customizedVoiceList_ != nullptr;};
      void deleteCustomizedVoiceList() { this->customizedVoiceList_ = nullptr;};
      inline const vector<Data::CustomizedVoiceList> & getCustomizedVoiceList() const { DARABONBA_PTR_GET_CONST(customizedVoiceList_, vector<Data::CustomizedVoiceList>) };
      inline vector<Data::CustomizedVoiceList> getCustomizedVoiceList() { DARABONBA_PTR_GET(customizedVoiceList_, vector<Data::CustomizedVoiceList>) };
      inline Data& setCustomizedVoiceList(const vector<Data::CustomizedVoiceList> & customizedVoiceList) { DARABONBA_PTR_SET_VALUE(customizedVoiceList_, customizedVoiceList) };
      inline Data& setCustomizedVoiceList(vector<Data::CustomizedVoiceList> && customizedVoiceList) { DARABONBA_PTR_SET_RVALUE(customizedVoiceList_, customizedVoiceList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The queried personalized human voices.
      shared_ptr<vector<Data::CustomizedVoiceList>> customizedVoiceList_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomizedVoicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomizedVoicesResponseBody::Data) };
    inline ListCustomizedVoicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomizedVoicesResponseBody::Data) };
    inline ListCustomizedVoicesResponseBody& setData(const ListCustomizedVoicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomizedVoicesResponseBody& setData(ListCustomizedVoicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomizedVoicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomizedVoicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListCustomizedVoicesResponseBody::Data> data_ {};
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
