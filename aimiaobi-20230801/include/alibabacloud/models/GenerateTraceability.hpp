// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRACEABILITY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRACEABILITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateTraceabilityNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateTraceability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTraceability& obj) { 
      DARABONBA_PTR_TO_JSON(News, news_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTraceability& obj) { 
      DARABONBA_PTR_FROM_JSON(News, news_);
    };
    GenerateTraceability() = default ;
    GenerateTraceability(const GenerateTraceability &) = default ;
    GenerateTraceability(GenerateTraceability &&) = default ;
    GenerateTraceability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTraceability() = default ;
    GenerateTraceability& operator=(const GenerateTraceability &) = default ;
    GenerateTraceability& operator=(GenerateTraceability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->news_ == nullptr; };
    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<GenerateTraceabilityNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<GenerateTraceabilityNews>) };
    inline vector<GenerateTraceabilityNews> news() { DARABONBA_PTR_GET(news_, vector<GenerateTraceabilityNews>) };
    inline GenerateTraceability& setNews(const vector<GenerateTraceabilityNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline GenerateTraceability& setNews(vector<GenerateTraceabilityNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


  protected:
    std::shared_ptr<vector<GenerateTraceabilityNews>> news_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
