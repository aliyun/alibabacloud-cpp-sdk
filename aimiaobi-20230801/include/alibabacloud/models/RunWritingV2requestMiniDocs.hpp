// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTMINIDOCS_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTMINIDOCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2RequestMiniDocs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2RequestMiniDocs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Star, star_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2RequestMiniDocs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Star, star_);
    };
    RunWritingV2RequestMiniDocs() = default ;
    RunWritingV2RequestMiniDocs(const RunWritingV2RequestMiniDocs &) = default ;
    RunWritingV2RequestMiniDocs(RunWritingV2RequestMiniDocs &&) = default ;
    RunWritingV2RequestMiniDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2RequestMiniDocs() = default ;
    RunWritingV2RequestMiniDocs& operator=(const RunWritingV2RequestMiniDocs &) = default ;
    RunWritingV2RequestMiniDocs& operator=(RunWritingV2RequestMiniDocs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->index_ != nullptr && this->star_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunWritingV2RequestMiniDocs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline RunWritingV2RequestMiniDocs& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // star Field Functions 
    bool hasStar() const { return this->star_ != nullptr;};
    void deleteStar() { this->star_ = nullptr;};
    inline bool star() const { DARABONBA_PTR_GET_DEFAULT(star_, false) };
    inline RunWritingV2RequestMiniDocs& setStar(bool star) { DARABONBA_PTR_SET_VALUE(star_, star) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<bool> star_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
