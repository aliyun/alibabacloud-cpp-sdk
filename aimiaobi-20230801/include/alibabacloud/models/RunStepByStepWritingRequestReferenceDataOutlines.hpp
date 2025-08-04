// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTREFERENCEDATAOUTLINES_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTREFERENCEDATAOUTLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunStepByStepWritingRequestReferenceDataOutlinesArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingRequestReferenceDataOutlines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingRequestReferenceDataOutlines& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Outline, outline_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingRequestReferenceDataOutlines& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
    };
    RunStepByStepWritingRequestReferenceDataOutlines() = default ;
    RunStepByStepWritingRequestReferenceDataOutlines(const RunStepByStepWritingRequestReferenceDataOutlines &) = default ;
    RunStepByStepWritingRequestReferenceDataOutlines(RunStepByStepWritingRequestReferenceDataOutlines &&) = default ;
    RunStepByStepWritingRequestReferenceDataOutlines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingRequestReferenceDataOutlines() = default ;
    RunStepByStepWritingRequestReferenceDataOutlines& operator=(const RunStepByStepWritingRequestReferenceDataOutlines &) = default ;
    RunStepByStepWritingRequestReferenceDataOutlines& operator=(RunStepByStepWritingRequestReferenceDataOutlines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->outline_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles>) };
    inline vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles>) };
    inline RunStepByStepWritingRequestReferenceDataOutlines& setArticles(const vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunStepByStepWritingRequestReferenceDataOutlines& setArticles(vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string outline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline RunStepByStepWritingRequestReferenceDataOutlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


  protected:
    std::shared_ptr<vector<Models::RunStepByStepWritingRequestReferenceDataOutlinesArticles>> articles_ = nullptr;
    std::shared_ptr<string> outline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
