// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotJobList, fpShotJobList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotJobList, fpShotJobList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpShotJobListResponseBody() = default ;
    QueryFpShotJobListResponseBody(const QueryFpShotJobListResponseBody &) = default ;
    QueryFpShotJobListResponseBody(QueryFpShotJobListResponseBody &&) = default ;
    QueryFpShotJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBody() = default ;
    QueryFpShotJobListResponseBody& operator=(const QueryFpShotJobListResponseBody &) = default ;
    QueryFpShotJobListResponseBody& operator=(QueryFpShotJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistIds& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistIds& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistIds() = default ;
      NonExistIds(const NonExistIds &) = default ;
      NonExistIds(NonExistIds &&) = default ;
      NonExistIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistIds() = default ;
      NonExistIds& operator=(const NonExistIds &) = default ;
      NonExistIds& operator=(NonExistIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    class FpShotJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpShotJobList& obj) { 
        DARABONBA_PTR_TO_JSON(FpShotJob, fpShotJob_);
      };
      friend void from_json(const Darabonba::Json& j, FpShotJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(FpShotJob, fpShotJob_);
      };
      FpShotJobList() = default ;
      FpShotJobList(const FpShotJobList &) = default ;
      FpShotJobList(FpShotJobList &&) = default ;
      FpShotJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpShotJobList() = default ;
      FpShotJobList& operator=(const FpShotJobList &) = default ;
      FpShotJobList& operator=(FpShotJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FpShotJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FpShotJob& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(FpShotConfig, fpShotConfig_);
          DARABONBA_PTR_TO_JSON(FpShotResult, fpShotResult_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, FpShotJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(FpShotConfig, fpShotConfig_);
          DARABONBA_PTR_FROM_JSON(FpShotResult, fpShotResult_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        FpShotJob() = default ;
        FpShotJob(const FpShotJob &) = default ;
        FpShotJob(FpShotJob &&) = default ;
        FpShotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FpShotJob() = default ;
        FpShotJob& operator=(const FpShotJob &) = default ;
        FpShotJob& operator=(FpShotJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InputFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
          };
          friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
          };
          InputFile() = default ;
          InputFile(const InputFile &) = default ;
          InputFile(InputFile &&) = default ;
          InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputFile() = default ;
          InputFile& operator=(const InputFile &) = default ;
          InputFile& operator=(InputFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline InputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline InputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline InputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        protected:
          shared_ptr<string> bucket_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> object_ {};
        };

        class FpShotResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FpShotResult& obj) { 
            DARABONBA_PTR_TO_JSON(AudioFpShots, audioFpShots_);
            DARABONBA_PTR_TO_JSON(FpShots, fpShots_);
            DARABONBA_PTR_TO_JSON(TextFpShots, textFpShots_);
          };
          friend void from_json(const Darabonba::Json& j, FpShotResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioFpShots, audioFpShots_);
            DARABONBA_PTR_FROM_JSON(FpShots, fpShots_);
            DARABONBA_PTR_FROM_JSON(TextFpShots, textFpShots_);
          };
          FpShotResult() = default ;
          FpShotResult(const FpShotResult &) = default ;
          FpShotResult(FpShotResult &&) = default ;
          FpShotResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FpShotResult() = default ;
          FpShotResult& operator=(const FpShotResult &) = default ;
          FpShotResult& operator=(FpShotResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextFpShots : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextFpShots& obj) { 
              DARABONBA_PTR_TO_JSON(TextFpShot, textFpShot_);
            };
            friend void from_json(const Darabonba::Json& j, TextFpShots& obj) { 
              DARABONBA_PTR_FROM_JSON(TextFpShot, textFpShot_);
            };
            TextFpShots() = default ;
            TextFpShots(const TextFpShots &) = default ;
            TextFpShots(TextFpShots &&) = default ;
            TextFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextFpShots() = default ;
            TextFpShots& operator=(const TextFpShots &) = default ;
            TextFpShots& operator=(TextFpShots &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TextFpShot : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TextFpShot& obj) { 
                DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_TO_JSON(Similarity, similarity_);
                DARABONBA_PTR_TO_JSON(TextFpShotSlices, textFpShotSlices_);
              };
              friend void from_json(const Darabonba::Json& j, TextFpShot& obj) { 
                DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
                DARABONBA_PTR_FROM_JSON(TextFpShotSlices, textFpShotSlices_);
              };
              TextFpShot() = default ;
              TextFpShot(const TextFpShot &) = default ;
              TextFpShot(TextFpShot &&) = default ;
              TextFpShot(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TextFpShot() = default ;
              TextFpShot& operator=(const TextFpShot &) = default ;
              TextFpShot& operator=(TextFpShot &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TextFpShotSlices : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TextFpShotSlices& obj) { 
                  DARABONBA_PTR_TO_JSON(TextFpShotSlice, textFpShotSlice_);
                };
                friend void from_json(const Darabonba::Json& j, TextFpShotSlices& obj) { 
                  DARABONBA_PTR_FROM_JSON(TextFpShotSlice, textFpShotSlice_);
                };
                TextFpShotSlices() = default ;
                TextFpShotSlices(const TextFpShotSlices &) = default ;
                TextFpShotSlices(TextFpShotSlices &&) = default ;
                TextFpShotSlices(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TextFpShotSlices() = default ;
                TextFpShotSlices& operator=(const TextFpShotSlices &) = default ;
                TextFpShotSlices& operator=(TextFpShotSlices &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class TextFpShotSlice : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const TextFpShotSlice& obj) { 
                    DARABONBA_PTR_TO_JSON(DuplicationText, duplicationText_);
                    DARABONBA_PTR_TO_JSON(InputFragment, inputFragment_);
                    DARABONBA_PTR_TO_JSON(InputText, inputText_);
                    DARABONBA_PTR_TO_JSON(Similarity, similarity_);
                  };
                  friend void from_json(const Darabonba::Json& j, TextFpShotSlice& obj) { 
                    DARABONBA_PTR_FROM_JSON(DuplicationText, duplicationText_);
                    DARABONBA_PTR_FROM_JSON(InputFragment, inputFragment_);
                    DARABONBA_PTR_FROM_JSON(InputText, inputText_);
                    DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
                  };
                  TextFpShotSlice() = default ;
                  TextFpShotSlice(const TextFpShotSlice &) = default ;
                  TextFpShotSlice(TextFpShotSlice &&) = default ;
                  TextFpShotSlice(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~TextFpShotSlice() = default ;
                  TextFpShotSlice& operator=(const TextFpShotSlice &) = default ;
                  TextFpShotSlice& operator=(TextFpShotSlice &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class InputFragment : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const InputFragment& obj) { 
                      DARABONBA_PTR_TO_JSON(Duration, duration_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, InputFragment& obj) { 
                      DARABONBA_PTR_FROM_JSON(Duration, duration_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    InputFragment() = default ;
                    InputFragment(const InputFragment &) = default ;
                    InputFragment(InputFragment &&) = default ;
                    InputFragment(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~InputFragment() = default ;
                    InputFragment& operator=(const InputFragment &) = default ;
                    InputFragment& operator=(InputFragment &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
                    // duration Field Functions 
                    bool hasDuration() const { return this->duration_ != nullptr;};
                    void deleteDuration() { this->duration_ = nullptr;};
                    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                    inline InputFragment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
                    inline InputFragment& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> duration_ {};
                    shared_ptr<string> start_ {};
                  };

                  virtual bool empty() const override { return this->duplicationText_ == nullptr
        && this->inputFragment_ == nullptr && this->inputText_ == nullptr && this->similarity_ == nullptr; };
                  // duplicationText Field Functions 
                  bool hasDuplicationText() const { return this->duplicationText_ != nullptr;};
                  void deleteDuplicationText() { this->duplicationText_ = nullptr;};
                  inline string getDuplicationText() const { DARABONBA_PTR_GET_DEFAULT(duplicationText_, "") };
                  inline TextFpShotSlice& setDuplicationText(string duplicationText) { DARABONBA_PTR_SET_VALUE(duplicationText_, duplicationText) };


                  // inputFragment Field Functions 
                  bool hasInputFragment() const { return this->inputFragment_ != nullptr;};
                  void deleteInputFragment() { this->inputFragment_ = nullptr;};
                  inline const TextFpShotSlice::InputFragment & getInputFragment() const { DARABONBA_PTR_GET_CONST(inputFragment_, TextFpShotSlice::InputFragment) };
                  inline TextFpShotSlice::InputFragment getInputFragment() { DARABONBA_PTR_GET(inputFragment_, TextFpShotSlice::InputFragment) };
                  inline TextFpShotSlice& setInputFragment(const TextFpShotSlice::InputFragment & inputFragment) { DARABONBA_PTR_SET_VALUE(inputFragment_, inputFragment) };
                  inline TextFpShotSlice& setInputFragment(TextFpShotSlice::InputFragment && inputFragment) { DARABONBA_PTR_SET_RVALUE(inputFragment_, inputFragment) };


                  // inputText Field Functions 
                  bool hasInputText() const { return this->inputText_ != nullptr;};
                  void deleteInputText() { this->inputText_ = nullptr;};
                  inline string getInputText() const { DARABONBA_PTR_GET_DEFAULT(inputText_, "") };
                  inline TextFpShotSlice& setInputText(string inputText) { DARABONBA_PTR_SET_VALUE(inputText_, inputText) };


                  // similarity Field Functions 
                  bool hasSimilarity() const { return this->similarity_ != nullptr;};
                  void deleteSimilarity() { this->similarity_ = nullptr;};
                  inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
                  inline TextFpShotSlice& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


                protected:
                  shared_ptr<string> duplicationText_ {};
                  shared_ptr<TextFpShotSlice::InputFragment> inputFragment_ {};
                  shared_ptr<string> inputText_ {};
                  shared_ptr<string> similarity_ {};
                };

                virtual bool empty() const override { return this->textFpShotSlice_ == nullptr; };
                // textFpShotSlice Field Functions 
                bool hasTextFpShotSlice() const { return this->textFpShotSlice_ != nullptr;};
                void deleteTextFpShotSlice() { this->textFpShotSlice_ = nullptr;};
                inline const vector<TextFpShotSlices::TextFpShotSlice> & getTextFpShotSlice() const { DARABONBA_PTR_GET_CONST(textFpShotSlice_, vector<TextFpShotSlices::TextFpShotSlice>) };
                inline vector<TextFpShotSlices::TextFpShotSlice> getTextFpShotSlice() { DARABONBA_PTR_GET(textFpShotSlice_, vector<TextFpShotSlices::TextFpShotSlice>) };
                inline TextFpShotSlices& setTextFpShotSlice(const vector<TextFpShotSlices::TextFpShotSlice> & textFpShotSlice) { DARABONBA_PTR_SET_VALUE(textFpShotSlice_, textFpShotSlice) };
                inline TextFpShotSlices& setTextFpShotSlice(vector<TextFpShotSlices::TextFpShotSlice> && textFpShotSlice) { DARABONBA_PTR_SET_RVALUE(textFpShotSlice_, textFpShotSlice) };


              protected:
                shared_ptr<vector<TextFpShotSlices::TextFpShotSlice>> textFpShotSlice_ {};
              };

              virtual bool empty() const override { return this->primaryKey_ == nullptr
        && this->similarity_ == nullptr && this->textFpShotSlices_ == nullptr; };
              // primaryKey Field Functions 
              bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
              void deletePrimaryKey() { this->primaryKey_ = nullptr;};
              inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
              inline TextFpShot& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


              // similarity Field Functions 
              bool hasSimilarity() const { return this->similarity_ != nullptr;};
              void deleteSimilarity() { this->similarity_ = nullptr;};
              inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
              inline TextFpShot& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


              // textFpShotSlices Field Functions 
              bool hasTextFpShotSlices() const { return this->textFpShotSlices_ != nullptr;};
              void deleteTextFpShotSlices() { this->textFpShotSlices_ = nullptr;};
              inline const TextFpShot::TextFpShotSlices & getTextFpShotSlices() const { DARABONBA_PTR_GET_CONST(textFpShotSlices_, TextFpShot::TextFpShotSlices) };
              inline TextFpShot::TextFpShotSlices getTextFpShotSlices() { DARABONBA_PTR_GET(textFpShotSlices_, TextFpShot::TextFpShotSlices) };
              inline TextFpShot& setTextFpShotSlices(const TextFpShot::TextFpShotSlices & textFpShotSlices) { DARABONBA_PTR_SET_VALUE(textFpShotSlices_, textFpShotSlices) };
              inline TextFpShot& setTextFpShotSlices(TextFpShot::TextFpShotSlices && textFpShotSlices) { DARABONBA_PTR_SET_RVALUE(textFpShotSlices_, textFpShotSlices) };


            protected:
              shared_ptr<string> primaryKey_ {};
              shared_ptr<string> similarity_ {};
              shared_ptr<TextFpShot::TextFpShotSlices> textFpShotSlices_ {};
            };

            virtual bool empty() const override { return this->textFpShot_ == nullptr; };
            // textFpShot Field Functions 
            bool hasTextFpShot() const { return this->textFpShot_ != nullptr;};
            void deleteTextFpShot() { this->textFpShot_ = nullptr;};
            inline const vector<TextFpShots::TextFpShot> & getTextFpShot() const { DARABONBA_PTR_GET_CONST(textFpShot_, vector<TextFpShots::TextFpShot>) };
            inline vector<TextFpShots::TextFpShot> getTextFpShot() { DARABONBA_PTR_GET(textFpShot_, vector<TextFpShots::TextFpShot>) };
            inline TextFpShots& setTextFpShot(const vector<TextFpShots::TextFpShot> & textFpShot) { DARABONBA_PTR_SET_VALUE(textFpShot_, textFpShot) };
            inline TextFpShots& setTextFpShot(vector<TextFpShots::TextFpShot> && textFpShot) { DARABONBA_PTR_SET_RVALUE(textFpShot_, textFpShot) };


          protected:
            shared_ptr<vector<TextFpShots::TextFpShot>> textFpShot_ {};
          };

          class FpShots : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FpShots& obj) { 
              DARABONBA_PTR_TO_JSON(FpShot, fpShot_);
            };
            friend void from_json(const Darabonba::Json& j, FpShots& obj) { 
              DARABONBA_PTR_FROM_JSON(FpShot, fpShot_);
            };
            FpShots() = default ;
            FpShots(const FpShots &) = default ;
            FpShots(FpShots &&) = default ;
            FpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FpShots() = default ;
            FpShots& operator=(const FpShots &) = default ;
            FpShots& operator=(FpShots &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class FpShot : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FpShot& obj) { 
                DARABONBA_PTR_TO_JSON(FpShotSlices, fpShotSlices_);
                DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_TO_JSON(Similarity, similarity_);
              };
              friend void from_json(const Darabonba::Json& j, FpShot& obj) { 
                DARABONBA_PTR_FROM_JSON(FpShotSlices, fpShotSlices_);
                DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
              };
              FpShot() = default ;
              FpShot(const FpShot &) = default ;
              FpShot(FpShot &&) = default ;
              FpShot(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FpShot() = default ;
              FpShot& operator=(const FpShot &) = default ;
              FpShot& operator=(FpShot &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class FpShotSlices : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const FpShotSlices& obj) { 
                  DARABONBA_PTR_TO_JSON(FpShotSlice, fpShotSlice_);
                };
                friend void from_json(const Darabonba::Json& j, FpShotSlices& obj) { 
                  DARABONBA_PTR_FROM_JSON(FpShotSlice, fpShotSlice_);
                };
                FpShotSlices() = default ;
                FpShotSlices(const FpShotSlices &) = default ;
                FpShotSlices(FpShotSlices &&) = default ;
                FpShotSlices(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~FpShotSlices() = default ;
                FpShotSlices& operator=(const FpShotSlices &) = default ;
                FpShotSlices& operator=(FpShotSlices &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class FpShotSlice : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const FpShotSlice& obj) { 
                    DARABONBA_PTR_TO_JSON(Duplication, duplication_);
                    DARABONBA_PTR_TO_JSON(Input, input_);
                    DARABONBA_PTR_TO_JSON(Similarity, similarity_);
                  };
                  friend void from_json(const Darabonba::Json& j, FpShotSlice& obj) { 
                    DARABONBA_PTR_FROM_JSON(Duplication, duplication_);
                    DARABONBA_PTR_FROM_JSON(Input, input_);
                    DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
                  };
                  FpShotSlice() = default ;
                  FpShotSlice(const FpShotSlice &) = default ;
                  FpShotSlice(FpShotSlice &&) = default ;
                  FpShotSlice(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~FpShotSlice() = default ;
                  FpShotSlice& operator=(const FpShotSlice &) = default ;
                  FpShotSlice& operator=(FpShotSlice &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Input : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Input& obj) { 
                      DARABONBA_PTR_TO_JSON(Duration, duration_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, Input& obj) { 
                      DARABONBA_PTR_FROM_JSON(Duration, duration_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    Input() = default ;
                    Input(const Input &) = default ;
                    Input(Input &&) = default ;
                    Input(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Input() = default ;
                    Input& operator=(const Input &) = default ;
                    Input& operator=(Input &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
                    // duration Field Functions 
                    bool hasDuration() const { return this->duration_ != nullptr;};
                    void deleteDuration() { this->duration_ = nullptr;};
                    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                    inline Input& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
                    inline Input& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> duration_ {};
                    shared_ptr<string> start_ {};
                  };

                  class Duplication : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Duplication& obj) { 
                      DARABONBA_PTR_TO_JSON(Duration, duration_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, Duplication& obj) { 
                      DARABONBA_PTR_FROM_JSON(Duration, duration_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    Duplication() = default ;
                    Duplication(const Duplication &) = default ;
                    Duplication(Duplication &&) = default ;
                    Duplication(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Duplication() = default ;
                    Duplication& operator=(const Duplication &) = default ;
                    Duplication& operator=(Duplication &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
                    // duration Field Functions 
                    bool hasDuration() const { return this->duration_ != nullptr;};
                    void deleteDuration() { this->duration_ = nullptr;};
                    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                    inline Duplication& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
                    inline Duplication& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> duration_ {};
                    shared_ptr<string> start_ {};
                  };

                  virtual bool empty() const override { return this->duplication_ == nullptr
        && this->input_ == nullptr && this->similarity_ == nullptr; };
                  // duplication Field Functions 
                  bool hasDuplication() const { return this->duplication_ != nullptr;};
                  void deleteDuplication() { this->duplication_ = nullptr;};
                  inline const FpShotSlice::Duplication & getDuplication() const { DARABONBA_PTR_GET_CONST(duplication_, FpShotSlice::Duplication) };
                  inline FpShotSlice::Duplication getDuplication() { DARABONBA_PTR_GET(duplication_, FpShotSlice::Duplication) };
                  inline FpShotSlice& setDuplication(const FpShotSlice::Duplication & duplication) { DARABONBA_PTR_SET_VALUE(duplication_, duplication) };
                  inline FpShotSlice& setDuplication(FpShotSlice::Duplication && duplication) { DARABONBA_PTR_SET_RVALUE(duplication_, duplication) };


                  // input Field Functions 
                  bool hasInput() const { return this->input_ != nullptr;};
                  void deleteInput() { this->input_ = nullptr;};
                  inline const FpShotSlice::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, FpShotSlice::Input) };
                  inline FpShotSlice::Input getInput() { DARABONBA_PTR_GET(input_, FpShotSlice::Input) };
                  inline FpShotSlice& setInput(const FpShotSlice::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
                  inline FpShotSlice& setInput(FpShotSlice::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


                  // similarity Field Functions 
                  bool hasSimilarity() const { return this->similarity_ != nullptr;};
                  void deleteSimilarity() { this->similarity_ = nullptr;};
                  inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
                  inline FpShotSlice& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


                protected:
                  shared_ptr<FpShotSlice::Duplication> duplication_ {};
                  shared_ptr<FpShotSlice::Input> input_ {};
                  shared_ptr<string> similarity_ {};
                };

                virtual bool empty() const override { return this->fpShotSlice_ == nullptr; };
                // fpShotSlice Field Functions 
                bool hasFpShotSlice() const { return this->fpShotSlice_ != nullptr;};
                void deleteFpShotSlice() { this->fpShotSlice_ = nullptr;};
                inline const vector<FpShotSlices::FpShotSlice> & getFpShotSlice() const { DARABONBA_PTR_GET_CONST(fpShotSlice_, vector<FpShotSlices::FpShotSlice>) };
                inline vector<FpShotSlices::FpShotSlice> getFpShotSlice() { DARABONBA_PTR_GET(fpShotSlice_, vector<FpShotSlices::FpShotSlice>) };
                inline FpShotSlices& setFpShotSlice(const vector<FpShotSlices::FpShotSlice> & fpShotSlice) { DARABONBA_PTR_SET_VALUE(fpShotSlice_, fpShotSlice) };
                inline FpShotSlices& setFpShotSlice(vector<FpShotSlices::FpShotSlice> && fpShotSlice) { DARABONBA_PTR_SET_RVALUE(fpShotSlice_, fpShotSlice) };


              protected:
                shared_ptr<vector<FpShotSlices::FpShotSlice>> fpShotSlice_ {};
              };

              virtual bool empty() const override { return this->fpShotSlices_ == nullptr
        && this->primaryKey_ == nullptr && this->similarity_ == nullptr; };
              // fpShotSlices Field Functions 
              bool hasFpShotSlices() const { return this->fpShotSlices_ != nullptr;};
              void deleteFpShotSlices() { this->fpShotSlices_ = nullptr;};
              inline const FpShot::FpShotSlices & getFpShotSlices() const { DARABONBA_PTR_GET_CONST(fpShotSlices_, FpShot::FpShotSlices) };
              inline FpShot::FpShotSlices getFpShotSlices() { DARABONBA_PTR_GET(fpShotSlices_, FpShot::FpShotSlices) };
              inline FpShot& setFpShotSlices(const FpShot::FpShotSlices & fpShotSlices) { DARABONBA_PTR_SET_VALUE(fpShotSlices_, fpShotSlices) };
              inline FpShot& setFpShotSlices(FpShot::FpShotSlices && fpShotSlices) { DARABONBA_PTR_SET_RVALUE(fpShotSlices_, fpShotSlices) };


              // primaryKey Field Functions 
              bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
              void deletePrimaryKey() { this->primaryKey_ = nullptr;};
              inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
              inline FpShot& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


              // similarity Field Functions 
              bool hasSimilarity() const { return this->similarity_ != nullptr;};
              void deleteSimilarity() { this->similarity_ = nullptr;};
              inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
              inline FpShot& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


            protected:
              shared_ptr<FpShot::FpShotSlices> fpShotSlices_ {};
              shared_ptr<string> primaryKey_ {};
              shared_ptr<string> similarity_ {};
            };

            virtual bool empty() const override { return this->fpShot_ == nullptr; };
            // fpShot Field Functions 
            bool hasFpShot() const { return this->fpShot_ != nullptr;};
            void deleteFpShot() { this->fpShot_ = nullptr;};
            inline const vector<FpShots::FpShot> & getFpShot() const { DARABONBA_PTR_GET_CONST(fpShot_, vector<FpShots::FpShot>) };
            inline vector<FpShots::FpShot> getFpShot() { DARABONBA_PTR_GET(fpShot_, vector<FpShots::FpShot>) };
            inline FpShots& setFpShot(const vector<FpShots::FpShot> & fpShot) { DARABONBA_PTR_SET_VALUE(fpShot_, fpShot) };
            inline FpShots& setFpShot(vector<FpShots::FpShot> && fpShot) { DARABONBA_PTR_SET_RVALUE(fpShot_, fpShot) };


          protected:
            shared_ptr<vector<FpShots::FpShot>> fpShot_ {};
          };

          class AudioFpShots : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioFpShots& obj) { 
              DARABONBA_PTR_TO_JSON(FpShot, fpShot_);
            };
            friend void from_json(const Darabonba::Json& j, AudioFpShots& obj) { 
              DARABONBA_PTR_FROM_JSON(FpShot, fpShot_);
            };
            AudioFpShots() = default ;
            AudioFpShots(const AudioFpShots &) = default ;
            AudioFpShots(AudioFpShots &&) = default ;
            AudioFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioFpShots() = default ;
            AudioFpShots& operator=(const AudioFpShots &) = default ;
            AudioFpShots& operator=(AudioFpShots &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class FpShot : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FpShot& obj) { 
                DARABONBA_PTR_TO_JSON(FpShotSlices, fpShotSlices_);
                DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_TO_JSON(Similarity, similarity_);
              };
              friend void from_json(const Darabonba::Json& j, FpShot& obj) { 
                DARABONBA_PTR_FROM_JSON(FpShotSlices, fpShotSlices_);
                DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
                DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
              };
              FpShot() = default ;
              FpShot(const FpShot &) = default ;
              FpShot(FpShot &&) = default ;
              FpShot(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FpShot() = default ;
              FpShot& operator=(const FpShot &) = default ;
              FpShot& operator=(FpShot &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class FpShotSlices : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const FpShotSlices& obj) { 
                  DARABONBA_PTR_TO_JSON(FpShotSlice, fpShotSlice_);
                };
                friend void from_json(const Darabonba::Json& j, FpShotSlices& obj) { 
                  DARABONBA_PTR_FROM_JSON(FpShotSlice, fpShotSlice_);
                };
                FpShotSlices() = default ;
                FpShotSlices(const FpShotSlices &) = default ;
                FpShotSlices(FpShotSlices &&) = default ;
                FpShotSlices(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~FpShotSlices() = default ;
                FpShotSlices& operator=(const FpShotSlices &) = default ;
                FpShotSlices& operator=(FpShotSlices &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class FpShotSlice : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const FpShotSlice& obj) { 
                    DARABONBA_PTR_TO_JSON(Duplication, duplication_);
                    DARABONBA_PTR_TO_JSON(Input, input_);
                    DARABONBA_PTR_TO_JSON(Similarity, similarity_);
                  };
                  friend void from_json(const Darabonba::Json& j, FpShotSlice& obj) { 
                    DARABONBA_PTR_FROM_JSON(Duplication, duplication_);
                    DARABONBA_PTR_FROM_JSON(Input, input_);
                    DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
                  };
                  FpShotSlice() = default ;
                  FpShotSlice(const FpShotSlice &) = default ;
                  FpShotSlice(FpShotSlice &&) = default ;
                  FpShotSlice(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~FpShotSlice() = default ;
                  FpShotSlice& operator=(const FpShotSlice &) = default ;
                  FpShotSlice& operator=(FpShotSlice &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Input : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Input& obj) { 
                      DARABONBA_PTR_TO_JSON(Duration, duration_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, Input& obj) { 
                      DARABONBA_PTR_FROM_JSON(Duration, duration_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    Input() = default ;
                    Input(const Input &) = default ;
                    Input(Input &&) = default ;
                    Input(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Input() = default ;
                    Input& operator=(const Input &) = default ;
                    Input& operator=(Input &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
                    // duration Field Functions 
                    bool hasDuration() const { return this->duration_ != nullptr;};
                    void deleteDuration() { this->duration_ = nullptr;};
                    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                    inline Input& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
                    inline Input& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> duration_ {};
                    shared_ptr<string> start_ {};
                  };

                  class Duplication : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Duplication& obj) { 
                      DARABONBA_PTR_TO_JSON(Duration, duration_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, Duplication& obj) { 
                      DARABONBA_PTR_FROM_JSON(Duration, duration_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    Duplication() = default ;
                    Duplication(const Duplication &) = default ;
                    Duplication(Duplication &&) = default ;
                    Duplication(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Duplication() = default ;
                    Duplication& operator=(const Duplication &) = default ;
                    Duplication& operator=(Duplication &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
                    // duration Field Functions 
                    bool hasDuration() const { return this->duration_ != nullptr;};
                    void deleteDuration() { this->duration_ = nullptr;};
                    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                    inline Duplication& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
                    inline Duplication& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> duration_ {};
                    shared_ptr<string> start_ {};
                  };

                  virtual bool empty() const override { return this->duplication_ == nullptr
        && this->input_ == nullptr && this->similarity_ == nullptr; };
                  // duplication Field Functions 
                  bool hasDuplication() const { return this->duplication_ != nullptr;};
                  void deleteDuplication() { this->duplication_ = nullptr;};
                  inline const FpShotSlice::Duplication & getDuplication() const { DARABONBA_PTR_GET_CONST(duplication_, FpShotSlice::Duplication) };
                  inline FpShotSlice::Duplication getDuplication() { DARABONBA_PTR_GET(duplication_, FpShotSlice::Duplication) };
                  inline FpShotSlice& setDuplication(const FpShotSlice::Duplication & duplication) { DARABONBA_PTR_SET_VALUE(duplication_, duplication) };
                  inline FpShotSlice& setDuplication(FpShotSlice::Duplication && duplication) { DARABONBA_PTR_SET_RVALUE(duplication_, duplication) };


                  // input Field Functions 
                  bool hasInput() const { return this->input_ != nullptr;};
                  void deleteInput() { this->input_ = nullptr;};
                  inline const FpShotSlice::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, FpShotSlice::Input) };
                  inline FpShotSlice::Input getInput() { DARABONBA_PTR_GET(input_, FpShotSlice::Input) };
                  inline FpShotSlice& setInput(const FpShotSlice::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
                  inline FpShotSlice& setInput(FpShotSlice::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


                  // similarity Field Functions 
                  bool hasSimilarity() const { return this->similarity_ != nullptr;};
                  void deleteSimilarity() { this->similarity_ = nullptr;};
                  inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
                  inline FpShotSlice& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


                protected:
                  shared_ptr<FpShotSlice::Duplication> duplication_ {};
                  shared_ptr<FpShotSlice::Input> input_ {};
                  shared_ptr<string> similarity_ {};
                };

                virtual bool empty() const override { return this->fpShotSlice_ == nullptr; };
                // fpShotSlice Field Functions 
                bool hasFpShotSlice() const { return this->fpShotSlice_ != nullptr;};
                void deleteFpShotSlice() { this->fpShotSlice_ = nullptr;};
                inline const vector<FpShotSlices::FpShotSlice> & getFpShotSlice() const { DARABONBA_PTR_GET_CONST(fpShotSlice_, vector<FpShotSlices::FpShotSlice>) };
                inline vector<FpShotSlices::FpShotSlice> getFpShotSlice() { DARABONBA_PTR_GET(fpShotSlice_, vector<FpShotSlices::FpShotSlice>) };
                inline FpShotSlices& setFpShotSlice(const vector<FpShotSlices::FpShotSlice> & fpShotSlice) { DARABONBA_PTR_SET_VALUE(fpShotSlice_, fpShotSlice) };
                inline FpShotSlices& setFpShotSlice(vector<FpShotSlices::FpShotSlice> && fpShotSlice) { DARABONBA_PTR_SET_RVALUE(fpShotSlice_, fpShotSlice) };


              protected:
                shared_ptr<vector<FpShotSlices::FpShotSlice>> fpShotSlice_ {};
              };

              virtual bool empty() const override { return this->fpShotSlices_ == nullptr
        && this->primaryKey_ == nullptr && this->similarity_ == nullptr; };
              // fpShotSlices Field Functions 
              bool hasFpShotSlices() const { return this->fpShotSlices_ != nullptr;};
              void deleteFpShotSlices() { this->fpShotSlices_ = nullptr;};
              inline const FpShot::FpShotSlices & getFpShotSlices() const { DARABONBA_PTR_GET_CONST(fpShotSlices_, FpShot::FpShotSlices) };
              inline FpShot::FpShotSlices getFpShotSlices() { DARABONBA_PTR_GET(fpShotSlices_, FpShot::FpShotSlices) };
              inline FpShot& setFpShotSlices(const FpShot::FpShotSlices & fpShotSlices) { DARABONBA_PTR_SET_VALUE(fpShotSlices_, fpShotSlices) };
              inline FpShot& setFpShotSlices(FpShot::FpShotSlices && fpShotSlices) { DARABONBA_PTR_SET_RVALUE(fpShotSlices_, fpShotSlices) };


              // primaryKey Field Functions 
              bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
              void deletePrimaryKey() { this->primaryKey_ = nullptr;};
              inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
              inline FpShot& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


              // similarity Field Functions 
              bool hasSimilarity() const { return this->similarity_ != nullptr;};
              void deleteSimilarity() { this->similarity_ = nullptr;};
              inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
              inline FpShot& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


            protected:
              shared_ptr<FpShot::FpShotSlices> fpShotSlices_ {};
              shared_ptr<string> primaryKey_ {};
              shared_ptr<string> similarity_ {};
            };

            virtual bool empty() const override { return this->fpShot_ == nullptr; };
            // fpShot Field Functions 
            bool hasFpShot() const { return this->fpShot_ != nullptr;};
            void deleteFpShot() { this->fpShot_ = nullptr;};
            inline const vector<AudioFpShots::FpShot> & getFpShot() const { DARABONBA_PTR_GET_CONST(fpShot_, vector<AudioFpShots::FpShot>) };
            inline vector<AudioFpShots::FpShot> getFpShot() { DARABONBA_PTR_GET(fpShot_, vector<AudioFpShots::FpShot>) };
            inline AudioFpShots& setFpShot(const vector<AudioFpShots::FpShot> & fpShot) { DARABONBA_PTR_SET_VALUE(fpShot_, fpShot) };
            inline AudioFpShots& setFpShot(vector<AudioFpShots::FpShot> && fpShot) { DARABONBA_PTR_SET_RVALUE(fpShot_, fpShot) };


          protected:
            shared_ptr<vector<AudioFpShots::FpShot>> fpShot_ {};
          };

          virtual bool empty() const override { return this->audioFpShots_ == nullptr
        && this->fpShots_ == nullptr && this->textFpShots_ == nullptr; };
          // audioFpShots Field Functions 
          bool hasAudioFpShots() const { return this->audioFpShots_ != nullptr;};
          void deleteAudioFpShots() { this->audioFpShots_ = nullptr;};
          inline const FpShotResult::AudioFpShots & getAudioFpShots() const { DARABONBA_PTR_GET_CONST(audioFpShots_, FpShotResult::AudioFpShots) };
          inline FpShotResult::AudioFpShots getAudioFpShots() { DARABONBA_PTR_GET(audioFpShots_, FpShotResult::AudioFpShots) };
          inline FpShotResult& setAudioFpShots(const FpShotResult::AudioFpShots & audioFpShots) { DARABONBA_PTR_SET_VALUE(audioFpShots_, audioFpShots) };
          inline FpShotResult& setAudioFpShots(FpShotResult::AudioFpShots && audioFpShots) { DARABONBA_PTR_SET_RVALUE(audioFpShots_, audioFpShots) };


          // fpShots Field Functions 
          bool hasFpShots() const { return this->fpShots_ != nullptr;};
          void deleteFpShots() { this->fpShots_ = nullptr;};
          inline const FpShotResult::FpShots & getFpShots() const { DARABONBA_PTR_GET_CONST(fpShots_, FpShotResult::FpShots) };
          inline FpShotResult::FpShots getFpShots() { DARABONBA_PTR_GET(fpShots_, FpShotResult::FpShots) };
          inline FpShotResult& setFpShots(const FpShotResult::FpShots & fpShots) { DARABONBA_PTR_SET_VALUE(fpShots_, fpShots) };
          inline FpShotResult& setFpShots(FpShotResult::FpShots && fpShots) { DARABONBA_PTR_SET_RVALUE(fpShots_, fpShots) };


          // textFpShots Field Functions 
          bool hasTextFpShots() const { return this->textFpShots_ != nullptr;};
          void deleteTextFpShots() { this->textFpShots_ = nullptr;};
          inline const FpShotResult::TextFpShots & getTextFpShots() const { DARABONBA_PTR_GET_CONST(textFpShots_, FpShotResult::TextFpShots) };
          inline FpShotResult::TextFpShots getTextFpShots() { DARABONBA_PTR_GET(textFpShots_, FpShotResult::TextFpShots) };
          inline FpShotResult& setTextFpShots(const FpShotResult::TextFpShots & textFpShots) { DARABONBA_PTR_SET_VALUE(textFpShots_, textFpShots) };
          inline FpShotResult& setTextFpShots(FpShotResult::TextFpShots && textFpShots) { DARABONBA_PTR_SET_RVALUE(textFpShots_, textFpShots) };


        protected:
          shared_ptr<FpShotResult::AudioFpShots> audioFpShots_ {};
          shared_ptr<FpShotResult::FpShots> fpShots_ {};
          shared_ptr<FpShotResult::TextFpShots> textFpShots_ {};
        };

        class FpShotConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FpShotConfig& obj) { 
            DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
            DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
            DARABONBA_PTR_TO_JSON(SaveType, saveType_);
          };
          friend void from_json(const Darabonba::Json& j, FpShotConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
            DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
            DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
          };
          FpShotConfig() = default ;
          FpShotConfig(const FpShotConfig &) = default ;
          FpShotConfig(FpShotConfig &&) = default ;
          FpShotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FpShotConfig() = default ;
          FpShotConfig& operator=(const FpShotConfig &) = default ;
          FpShotConfig& operator=(FpShotConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fpDBId_ == nullptr
        && this->primaryKey_ == nullptr && this->saveType_ == nullptr; };
          // fpDBId Field Functions 
          bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
          void deleteFpDBId() { this->fpDBId_ = nullptr;};
          inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
          inline FpShotConfig& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


          // primaryKey Field Functions 
          bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
          void deletePrimaryKey() { this->primaryKey_ = nullptr;};
          inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
          inline FpShotConfig& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


          // saveType Field Functions 
          bool hasSaveType() const { return this->saveType_ != nullptr;};
          void deleteSaveType() { this->saveType_ = nullptr;};
          inline string getSaveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
          inline FpShotConfig& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


        protected:
          shared_ptr<string> fpDBId_ {};
          shared_ptr<string> primaryKey_ {};
          shared_ptr<string> saveType_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->creationTime_ == nullptr && this->duration_ == nullptr && this->fileId_ == nullptr && this->finishTime_ == nullptr && this->fpShotConfig_ == nullptr
        && this->fpShotResult_ == nullptr && this->id_ == nullptr && this->input_ == nullptr && this->inputFile_ == nullptr && this->message_ == nullptr
        && this->pipelineId_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FpShotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline FpShotJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline FpShotJob& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FpShotJob& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline FpShotJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // fpShotConfig Field Functions 
        bool hasFpShotConfig() const { return this->fpShotConfig_ != nullptr;};
        void deleteFpShotConfig() { this->fpShotConfig_ = nullptr;};
        inline const FpShotJob::FpShotConfig & getFpShotConfig() const { DARABONBA_PTR_GET_CONST(fpShotConfig_, FpShotJob::FpShotConfig) };
        inline FpShotJob::FpShotConfig getFpShotConfig() { DARABONBA_PTR_GET(fpShotConfig_, FpShotJob::FpShotConfig) };
        inline FpShotJob& setFpShotConfig(const FpShotJob::FpShotConfig & fpShotConfig) { DARABONBA_PTR_SET_VALUE(fpShotConfig_, fpShotConfig) };
        inline FpShotJob& setFpShotConfig(FpShotJob::FpShotConfig && fpShotConfig) { DARABONBA_PTR_SET_RVALUE(fpShotConfig_, fpShotConfig) };


        // fpShotResult Field Functions 
        bool hasFpShotResult() const { return this->fpShotResult_ != nullptr;};
        void deleteFpShotResult() { this->fpShotResult_ = nullptr;};
        inline const FpShotJob::FpShotResult & getFpShotResult() const { DARABONBA_PTR_GET_CONST(fpShotResult_, FpShotJob::FpShotResult) };
        inline FpShotJob::FpShotResult getFpShotResult() { DARABONBA_PTR_GET(fpShotResult_, FpShotJob::FpShotResult) };
        inline FpShotJob& setFpShotResult(const FpShotJob::FpShotResult & fpShotResult) { DARABONBA_PTR_SET_VALUE(fpShotResult_, fpShotResult) };
        inline FpShotJob& setFpShotResult(FpShotJob::FpShotResult && fpShotResult) { DARABONBA_PTR_SET_RVALUE(fpShotResult_, fpShotResult) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FpShotJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
        inline FpShotJob& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


        // inputFile Field Functions 
        bool hasInputFile() const { return this->inputFile_ != nullptr;};
        void deleteInputFile() { this->inputFile_ = nullptr;};
        inline const FpShotJob::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, FpShotJob::InputFile) };
        inline FpShotJob::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, FpShotJob::InputFile) };
        inline FpShotJob& setInputFile(const FpShotJob::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
        inline FpShotJob& setInputFile(FpShotJob::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline FpShotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline FpShotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline FpShotJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline FpShotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> fileId_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<FpShotJob::FpShotConfig> fpShotConfig_ {};
        shared_ptr<FpShotJob::FpShotResult> fpShotResult_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> input_ {};
        shared_ptr<FpShotJob::InputFile> inputFile_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> pipelineId_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->fpShotJob_ == nullptr; };
      // fpShotJob Field Functions 
      bool hasFpShotJob() const { return this->fpShotJob_ != nullptr;};
      void deleteFpShotJob() { this->fpShotJob_ = nullptr;};
      inline const vector<FpShotJobList::FpShotJob> & getFpShotJob() const { DARABONBA_PTR_GET_CONST(fpShotJob_, vector<FpShotJobList::FpShotJob>) };
      inline vector<FpShotJobList::FpShotJob> getFpShotJob() { DARABONBA_PTR_GET(fpShotJob_, vector<FpShotJobList::FpShotJob>) };
      inline FpShotJobList& setFpShotJob(const vector<FpShotJobList::FpShotJob> & fpShotJob) { DARABONBA_PTR_SET_VALUE(fpShotJob_, fpShotJob) };
      inline FpShotJobList& setFpShotJob(vector<FpShotJobList::FpShotJob> && fpShotJob) { DARABONBA_PTR_SET_RVALUE(fpShotJob_, fpShotJob) };


    protected:
      shared_ptr<vector<FpShotJobList::FpShotJob>> fpShotJob_ {};
    };

    virtual bool empty() const override { return this->fpShotJobList_ == nullptr
        && this->nextPageToken_ == nullptr && this->nonExistIds_ == nullptr && this->requestId_ == nullptr; };
    // fpShotJobList Field Functions 
    bool hasFpShotJobList() const { return this->fpShotJobList_ != nullptr;};
    void deleteFpShotJobList() { this->fpShotJobList_ = nullptr;};
    inline const QueryFpShotJobListResponseBody::FpShotJobList & getFpShotJobList() const { DARABONBA_PTR_GET_CONST(fpShotJobList_, QueryFpShotJobListResponseBody::FpShotJobList) };
    inline QueryFpShotJobListResponseBody::FpShotJobList getFpShotJobList() { DARABONBA_PTR_GET(fpShotJobList_, QueryFpShotJobListResponseBody::FpShotJobList) };
    inline QueryFpShotJobListResponseBody& setFpShotJobList(const QueryFpShotJobListResponseBody::FpShotJobList & fpShotJobList) { DARABONBA_PTR_SET_VALUE(fpShotJobList_, fpShotJobList) };
    inline QueryFpShotJobListResponseBody& setFpShotJobList(QueryFpShotJobListResponseBody::FpShotJobList && fpShotJobList) { DARABONBA_PTR_SET_RVALUE(fpShotJobList_, fpShotJobList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryFpShotJobListResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpShotJobListResponseBody::NonExistIds & getNonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpShotJobListResponseBody::NonExistIds) };
    inline QueryFpShotJobListResponseBody::NonExistIds getNonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpShotJobListResponseBody::NonExistIds) };
    inline QueryFpShotJobListResponseBody& setNonExistIds(const QueryFpShotJobListResponseBody::NonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpShotJobListResponseBody& setNonExistIds(QueryFpShotJobListResponseBody::NonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpShotJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryFpShotJobListResponseBody::FpShotJobList> fpShotJobList_ {};
    // The token that is used to retrieve the next page of the query results. The value is a 32-bit UUID. If the returned query results cannot be displayed within one page, this parameter is returned. The value of this parameter is updated for each query.
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<QueryFpShotJobListResponseBody::NonExistIds> nonExistIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
