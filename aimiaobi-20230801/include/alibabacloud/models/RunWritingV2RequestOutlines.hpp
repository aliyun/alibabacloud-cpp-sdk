// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTOUTLINES_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTOUTLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingV2RequestOutlinesArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2RequestOutlines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2RequestOutlines& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Outline, outline_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2RequestOutlines& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
    };
    RunWritingV2RequestOutlines() = default ;
    RunWritingV2RequestOutlines(const RunWritingV2RequestOutlines &) = default ;
    RunWritingV2RequestOutlines(RunWritingV2RequestOutlines &&) = default ;
    RunWritingV2RequestOutlines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2RequestOutlines() = default ;
    RunWritingV2RequestOutlines& operator=(const RunWritingV2RequestOutlines &) = default ;
    RunWritingV2RequestOutlines& operator=(RunWritingV2RequestOutlines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->outline_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunWritingV2RequestOutlinesArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunWritingV2RequestOutlinesArticles>) };
    inline vector<Models::RunWritingV2RequestOutlinesArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunWritingV2RequestOutlinesArticles>) };
    inline RunWritingV2RequestOutlines& setArticles(const vector<Models::RunWritingV2RequestOutlinesArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingV2RequestOutlines& setArticles(vector<Models::RunWritingV2RequestOutlinesArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string outline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline RunWritingV2RequestOutlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


  protected:
    std::shared_ptr<vector<Models::RunWritingV2RequestOutlinesArticles>> articles_ = nullptr;
    std::shared_ptr<string> outline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
