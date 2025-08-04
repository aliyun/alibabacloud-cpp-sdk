// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTREFERENCEDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTREFERENCEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunStepByStepWritingRequestReferenceDataArticles.hpp>
#include <alibabacloud/models/RunStepByStepWritingRequestReferenceDataOutlines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingRequestReferenceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingRequestReferenceData& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(Summarization, summarization_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingRequestReferenceData& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
    };
    RunStepByStepWritingRequestReferenceData() = default ;
    RunStepByStepWritingRequestReferenceData(const RunStepByStepWritingRequestReferenceData &) = default ;
    RunStepByStepWritingRequestReferenceData(RunStepByStepWritingRequestReferenceData &&) = default ;
    RunStepByStepWritingRequestReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingRequestReferenceData() = default ;
    RunStepByStepWritingRequestReferenceData& operator=(const RunStepByStepWritingRequestReferenceData &) = default ;
    RunStepByStepWritingRequestReferenceData& operator=(RunStepByStepWritingRequestReferenceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->miniDoc_ != nullptr && this->outlines_ != nullptr && this->summarization_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunStepByStepWritingRequestReferenceDataArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunStepByStepWritingRequestReferenceDataArticles>) };
    inline vector<Models::RunStepByStepWritingRequestReferenceDataArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunStepByStepWritingRequestReferenceDataArticles>) };
    inline RunStepByStepWritingRequestReferenceData& setArticles(const vector<Models::RunStepByStepWritingRequestReferenceDataArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunStepByStepWritingRequestReferenceData& setArticles(vector<Models::RunStepByStepWritingRequestReferenceDataArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline RunStepByStepWritingRequestReferenceData& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline RunStepByStepWritingRequestReferenceData& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<Models::RunStepByStepWritingRequestReferenceDataOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<Models::RunStepByStepWritingRequestReferenceDataOutlines>) };
    inline vector<Models::RunStepByStepWritingRequestReferenceDataOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<Models::RunStepByStepWritingRequestReferenceDataOutlines>) };
    inline RunStepByStepWritingRequestReferenceData& setOutlines(const vector<Models::RunStepByStepWritingRequestReferenceDataOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline RunStepByStepWritingRequestReferenceData& setOutlines(vector<Models::RunStepByStepWritingRequestReferenceDataOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const vector<string> & summarization() const { DARABONBA_PTR_GET_CONST(summarization_, vector<string>) };
    inline vector<string> summarization() { DARABONBA_PTR_GET(summarization_, vector<string>) };
    inline RunStepByStepWritingRequestReferenceData& setSummarization(const vector<string> & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline RunStepByStepWritingRequestReferenceData& setSummarization(vector<string> && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


  protected:
    std::shared_ptr<vector<Models::RunStepByStepWritingRequestReferenceDataArticles>> articles_ = nullptr;
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
    std::shared_ptr<vector<Models::RunStepByStepWritingRequestReferenceDataOutlines>> outlines_ = nullptr;
    std::shared_ptr<vector<string>> summarization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
