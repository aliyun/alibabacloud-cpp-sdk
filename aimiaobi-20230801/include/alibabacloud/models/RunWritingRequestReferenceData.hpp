// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGREQUESTREFERENCEDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGREQUESTREFERENCEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingRequestReferenceDataArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingRequestReferenceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingRequestReferenceData& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingRequestReferenceData& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
    };
    RunWritingRequestReferenceData() = default ;
    RunWritingRequestReferenceData(const RunWritingRequestReferenceData &) = default ;
    RunWritingRequestReferenceData(RunWritingRequestReferenceData &&) = default ;
    RunWritingRequestReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingRequestReferenceData() = default ;
    RunWritingRequestReferenceData& operator=(const RunWritingRequestReferenceData &) = default ;
    RunWritingRequestReferenceData& operator=(RunWritingRequestReferenceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunWritingRequestReferenceDataArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunWritingRequestReferenceDataArticles>) };
    inline vector<Models::RunWritingRequestReferenceDataArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunWritingRequestReferenceDataArticles>) };
    inline RunWritingRequestReferenceData& setArticles(const vector<Models::RunWritingRequestReferenceDataArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingRequestReferenceData& setArticles(vector<Models::RunWritingRequestReferenceDataArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


  protected:
    std::shared_ptr<vector<Models::RunWritingRequestReferenceDataArticles>> articles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
