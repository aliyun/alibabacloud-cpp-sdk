// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAIANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAIANALYSISRESPONSEBODY_HPP_
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
  class GetMediaAiAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAiAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiAnalysisResultList, aiAnalysisResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAiAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiAnalysisResultList, aiAnalysisResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAiAnalysisResponseBody() = default ;
    GetMediaAiAnalysisResponseBody(const GetMediaAiAnalysisResponseBody &) = default ;
    GetMediaAiAnalysisResponseBody(GetMediaAiAnalysisResponseBody &&) = default ;
    GetMediaAiAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAiAnalysisResponseBody() = default ;
    GetMediaAiAnalysisResponseBody& operator=(const GetMediaAiAnalysisResponseBody &) = default ;
    GetMediaAiAnalysisResponseBody& operator=(GetMediaAiAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AiAnalysisResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AiAnalysisResultList& obj) { 
        DARABONBA_PTR_TO_JSON(AiAnalysisResult, aiAnalysisResult_);
      };
      friend void from_json(const Darabonba::Json& j, AiAnalysisResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(AiAnalysisResult, aiAnalysisResult_);
      };
      AiAnalysisResultList() = default ;
      AiAnalysisResultList(const AiAnalysisResultList &) = default ;
      AiAnalysisResultList(AiAnalysisResultList &&) = default ;
      AiAnalysisResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AiAnalysisResultList() = default ;
      AiAnalysisResultList& operator=(const AiAnalysisResultList &) = default ;
      AiAnalysisResultList& operator=(AiAnalysisResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AiAnalysisResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiAnalysisResult& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(ResultType, resultType_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, AiAnalysisResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        AiAnalysisResult() = default ;
        AiAnalysisResult(const AiAnalysisResult &) = default ;
        AiAnalysisResult(AiAnalysisResult &&) = default ;
        AiAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiAnalysisResult() = default ;
        AiAnalysisResult& operator=(const AiAnalysisResult &) = default ;
        AiAnalysisResult& operator=(AiAnalysisResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->extra_ == nullptr && this->resultType_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline AiAnalysisResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
        inline AiAnalysisResult& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


        // resultType Field Functions 
        bool hasResultType() const { return this->resultType_ != nullptr;};
        void deleteResultType() { this->resultType_ = nullptr;};
        inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
        inline AiAnalysisResult& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline AiAnalysisResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline AiAnalysisResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> extra_ {};
        shared_ptr<string> resultType_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->aiAnalysisResult_ == nullptr; };
      // aiAnalysisResult Field Functions 
      bool hasAiAnalysisResult() const { return this->aiAnalysisResult_ != nullptr;};
      void deleteAiAnalysisResult() { this->aiAnalysisResult_ = nullptr;};
      inline const vector<AiAnalysisResultList::AiAnalysisResult> & getAiAnalysisResult() const { DARABONBA_PTR_GET_CONST(aiAnalysisResult_, vector<AiAnalysisResultList::AiAnalysisResult>) };
      inline vector<AiAnalysisResultList::AiAnalysisResult> getAiAnalysisResult() { DARABONBA_PTR_GET(aiAnalysisResult_, vector<AiAnalysisResultList::AiAnalysisResult>) };
      inline AiAnalysisResultList& setAiAnalysisResult(const vector<AiAnalysisResultList::AiAnalysisResult> & aiAnalysisResult) { DARABONBA_PTR_SET_VALUE(aiAnalysisResult_, aiAnalysisResult) };
      inline AiAnalysisResultList& setAiAnalysisResult(vector<AiAnalysisResultList::AiAnalysisResult> && aiAnalysisResult) { DARABONBA_PTR_SET_RVALUE(aiAnalysisResult_, aiAnalysisResult) };


    protected:
      shared_ptr<vector<AiAnalysisResultList::AiAnalysisResult>> aiAnalysisResult_ {};
    };

    virtual bool empty() const override { return this->aiAnalysisResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // aiAnalysisResultList Field Functions 
    bool hasAiAnalysisResultList() const { return this->aiAnalysisResultList_ != nullptr;};
    void deleteAiAnalysisResultList() { this->aiAnalysisResultList_ = nullptr;};
    inline const GetMediaAiAnalysisResponseBody::AiAnalysisResultList & getAiAnalysisResultList() const { DARABONBA_PTR_GET_CONST(aiAnalysisResultList_, GetMediaAiAnalysisResponseBody::AiAnalysisResultList) };
    inline GetMediaAiAnalysisResponseBody::AiAnalysisResultList getAiAnalysisResultList() { DARABONBA_PTR_GET(aiAnalysisResultList_, GetMediaAiAnalysisResponseBody::AiAnalysisResultList) };
    inline GetMediaAiAnalysisResponseBody& setAiAnalysisResultList(const GetMediaAiAnalysisResponseBody::AiAnalysisResultList & aiAnalysisResultList) { DARABONBA_PTR_SET_VALUE(aiAnalysisResultList_, aiAnalysisResultList) };
    inline GetMediaAiAnalysisResponseBody& setAiAnalysisResultList(GetMediaAiAnalysisResponseBody::AiAnalysisResultList && aiAnalysisResultList) { DARABONBA_PTR_SET_RVALUE(aiAnalysisResultList_, aiAnalysisResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAiAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMediaAiAnalysisResponseBody::AiAnalysisResultList> aiAnalysisResultList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
