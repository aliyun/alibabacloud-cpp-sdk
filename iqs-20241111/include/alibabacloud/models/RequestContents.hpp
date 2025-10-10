// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_REQUESTCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class RequestContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestContents& obj) { 
      DARABONBA_PTR_TO_JSON(mainText, mainText_);
      DARABONBA_PTR_TO_JSON(markdownText, markdownText_);
      DARABONBA_PTR_TO_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_TO_JSON(richMainBody, richMainBody_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, RequestContents& obj) { 
      DARABONBA_PTR_FROM_JSON(mainText, mainText_);
      DARABONBA_PTR_FROM_JSON(markdownText, markdownText_);
      DARABONBA_PTR_FROM_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_FROM_JSON(richMainBody, richMainBody_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    RequestContents() = default ;
    RequestContents(const RequestContents &) = default ;
    RequestContents(RequestContents &&) = default ;
    RequestContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestContents() = default ;
    RequestContents& operator=(const RequestContents &) = default ;
    RequestContents& operator=(RequestContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mainText_ != nullptr
        && this->markdownText_ != nullptr && this->rerankScore_ != nullptr && this->richMainBody_ != nullptr && this->summary_ != nullptr; };
    // mainText Field Functions 
    bool hasMainText() const { return this->mainText_ != nullptr;};
    void deleteMainText() { this->mainText_ = nullptr;};
    inline bool mainText() const { DARABONBA_PTR_GET_DEFAULT(mainText_, false) };
    inline RequestContents& setMainText(bool mainText) { DARABONBA_PTR_SET_VALUE(mainText_, mainText) };


    // markdownText Field Functions 
    bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
    void deleteMarkdownText() { this->markdownText_ = nullptr;};
    inline bool markdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, false) };
    inline RequestContents& setMarkdownText(bool markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


    // rerankScore Field Functions 
    bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
    void deleteRerankScore() { this->rerankScore_ = nullptr;};
    inline bool rerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, false) };
    inline RequestContents& setRerankScore(bool rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


    // richMainBody Field Functions 
    bool hasRichMainBody() const { return this->richMainBody_ != nullptr;};
    void deleteRichMainBody() { this->richMainBody_ = nullptr;};
    inline bool richMainBody() const { DARABONBA_PTR_GET_DEFAULT(richMainBody_, false) };
    inline RequestContents& setRichMainBody(bool richMainBody) { DARABONBA_PTR_SET_VALUE(richMainBody_, richMainBody) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline bool summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, false) };
    inline RequestContents& setSummary(bool summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<bool> mainText_ = nullptr;
    std::shared_ptr<bool> markdownText_ = nullptr;
    std::shared_ptr<bool> rerankScore_ = nullptr;
    std::shared_ptr<bool> richMainBody_ = nullptr;
    std::shared_ptr<bool> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
