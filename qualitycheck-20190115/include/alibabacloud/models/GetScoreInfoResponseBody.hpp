// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetScoreInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScoreInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetScoreInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetScoreInfoResponseBody() = default ;
    GetScoreInfoResponseBody(const GetScoreInfoResponseBody &) = default ;
    GetScoreInfoResponseBody(GetScoreInfoResponseBody &&) = default ;
    GetScoreInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScoreInfoResponseBody() = default ;
    GetScoreInfoResponseBody& operator=(const GetScoreInfoResponseBody &) = default ;
    GetScoreInfoResponseBody& operator=(GetScoreInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ScorePo, scorePo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ScorePo, scorePo_);
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
      class ScorePo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScorePo& obj) { 
          DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
          DARABONBA_PTR_TO_JSON(ScoreInfos, scoreInfos_);
          DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
        };
        friend void from_json(const Darabonba::Json& j, ScorePo& obj) { 
          DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
          DARABONBA_PTR_FROM_JSON(ScoreInfos, scoreInfos_);
          DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
        };
        ScorePo() = default ;
        ScorePo(const ScorePo &) = default ;
        ScorePo(ScorePo &&) = default ;
        ScorePo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScorePo() = default ;
        ScorePo& operator=(const ScorePo &) = default ;
        ScorePo& operator=(ScorePo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScoreInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScoreInfos& obj) { 
            DARABONBA_PTR_TO_JSON(ScoreParam, scoreParam_);
          };
          friend void from_json(const Darabonba::Json& j, ScoreInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(ScoreParam, scoreParam_);
          };
          ScoreInfos() = default ;
          ScoreInfos(const ScoreInfos &) = default ;
          ScoreInfos(ScoreInfos &&) = default ;
          ScoreInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScoreInfos() = default ;
          ScoreInfos& operator=(const ScoreInfos &) = default ;
          ScoreInfos& operator=(ScoreInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScoreParam : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScoreParam& obj) { 
              DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
              DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
              DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
              DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
            };
            friend void from_json(const Darabonba::Json& j, ScoreParam& obj) { 
              DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
              DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
              DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
              DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
            };
            ScoreParam() = default ;
            ScoreParam(const ScoreParam &) = default ;
            ScoreParam(ScoreParam &&) = default ;
            ScoreParam(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScoreParam() = default ;
            ScoreParam& operator=(const ScoreParam &) = default ;
            ScoreParam& operator=(ScoreParam &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->scoreNum_ == nullptr
        && this->scoreSubId_ == nullptr && this->scoreSubName_ == nullptr && this->scoreType_ == nullptr; };
            // scoreNum Field Functions 
            bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
            void deleteScoreNum() { this->scoreNum_ = nullptr;};
            inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
            inline ScoreParam& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


            // scoreSubId Field Functions 
            bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
            void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
            inline int32_t getScoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0) };
            inline ScoreParam& setScoreSubId(int32_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


            // scoreSubName Field Functions 
            bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
            void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
            inline string getScoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
            inline ScoreParam& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


            // scoreType Field Functions 
            bool hasScoreType() const { return this->scoreType_ != nullptr;};
            void deleteScoreType() { this->scoreType_ = nullptr;};
            inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
            inline ScoreParam& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


          protected:
            shared_ptr<int32_t> scoreNum_ {};
            shared_ptr<int32_t> scoreSubId_ {};
            shared_ptr<string> scoreSubName_ {};
            shared_ptr<int32_t> scoreType_ {};
          };

          virtual bool empty() const override { return this->scoreParam_ == nullptr; };
          // scoreParam Field Functions 
          bool hasScoreParam() const { return this->scoreParam_ != nullptr;};
          void deleteScoreParam() { this->scoreParam_ = nullptr;};
          inline const vector<ScoreInfos::ScoreParam> & getScoreParam() const { DARABONBA_PTR_GET_CONST(scoreParam_, vector<ScoreInfos::ScoreParam>) };
          inline vector<ScoreInfos::ScoreParam> getScoreParam() { DARABONBA_PTR_GET(scoreParam_, vector<ScoreInfos::ScoreParam>) };
          inline ScoreInfos& setScoreParam(const vector<ScoreInfos::ScoreParam> & scoreParam) { DARABONBA_PTR_SET_VALUE(scoreParam_, scoreParam) };
          inline ScoreInfos& setScoreParam(vector<ScoreInfos::ScoreParam> && scoreParam) { DARABONBA_PTR_SET_RVALUE(scoreParam_, scoreParam) };


        protected:
          shared_ptr<vector<ScoreInfos::ScoreParam>> scoreParam_ {};
        };

        virtual bool empty() const override { return this->scoreId_ == nullptr
        && this->scoreInfos_ == nullptr && this->scoreName_ == nullptr; };
        // scoreId Field Functions 
        bool hasScoreId() const { return this->scoreId_ != nullptr;};
        void deleteScoreId() { this->scoreId_ = nullptr;};
        inline int32_t getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0) };
        inline ScorePo& setScoreId(int32_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


        // scoreInfos Field Functions 
        bool hasScoreInfos() const { return this->scoreInfos_ != nullptr;};
        void deleteScoreInfos() { this->scoreInfos_ = nullptr;};
        inline const ScorePo::ScoreInfos & getScoreInfos() const { DARABONBA_PTR_GET_CONST(scoreInfos_, ScorePo::ScoreInfos) };
        inline ScorePo::ScoreInfos getScoreInfos() { DARABONBA_PTR_GET(scoreInfos_, ScorePo::ScoreInfos) };
        inline ScorePo& setScoreInfos(const ScorePo::ScoreInfos & scoreInfos) { DARABONBA_PTR_SET_VALUE(scoreInfos_, scoreInfos) };
        inline ScorePo& setScoreInfos(ScorePo::ScoreInfos && scoreInfos) { DARABONBA_PTR_SET_RVALUE(scoreInfos_, scoreInfos) };


        // scoreName Field Functions 
        bool hasScoreName() const { return this->scoreName_ != nullptr;};
        void deleteScoreName() { this->scoreName_ = nullptr;};
        inline string getScoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
        inline ScorePo& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


      protected:
        shared_ptr<int32_t> scoreId_ {};
        shared_ptr<ScorePo::ScoreInfos> scoreInfos_ {};
        shared_ptr<string> scoreName_ {};
      };

      virtual bool empty() const override { return this->scorePo_ == nullptr; };
      // scorePo Field Functions 
      bool hasScorePo() const { return this->scorePo_ != nullptr;};
      void deleteScorePo() { this->scorePo_ = nullptr;};
      inline const vector<Data::ScorePo> & getScorePo() const { DARABONBA_PTR_GET_CONST(scorePo_, vector<Data::ScorePo>) };
      inline vector<Data::ScorePo> getScorePo() { DARABONBA_PTR_GET(scorePo_, vector<Data::ScorePo>) };
      inline Data& setScorePo(const vector<Data::ScorePo> & scorePo) { DARABONBA_PTR_SET_VALUE(scorePo_, scorePo) };
      inline Data& setScorePo(vector<Data::ScorePo> && scorePo) { DARABONBA_PTR_SET_RVALUE(scorePo_, scorePo) };


    protected:
      shared_ptr<vector<Data::ScorePo>> scorePo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScoreInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetScoreInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetScoreInfoResponseBody::Data) };
    inline GetScoreInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetScoreInfoResponseBody::Data) };
    inline GetScoreInfoResponseBody& setData(const GetScoreInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScoreInfoResponseBody& setData(GetScoreInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScoreInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScoreInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetScoreInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetScoreInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
