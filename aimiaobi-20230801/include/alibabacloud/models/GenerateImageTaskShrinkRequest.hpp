// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateImageTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_TO_JSON(ParagraphList, paragraphListShrink_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Style, style_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_FROM_JSON(ParagraphList, paragraphListShrink_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
    };
    GenerateImageTaskShrinkRequest() = default ;
    GenerateImageTaskShrinkRequest(const GenerateImageTaskShrinkRequest &) = default ;
    GenerateImageTaskShrinkRequest(GenerateImageTaskShrinkRequest &&) = default ;
    GenerateImageTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageTaskShrinkRequest() = default ;
    GenerateImageTaskShrinkRequest& operator=(const GenerateImageTaskShrinkRequest &) = default ;
    GenerateImageTaskShrinkRequest& operator=(GenerateImageTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->articleTaskId_ != nullptr && this->paragraphListShrink_ != nullptr && this->size_ != nullptr && this->style_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateImageTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // articleTaskId Field Functions 
    bool hasArticleTaskId() const { return this->articleTaskId_ != nullptr;};
    void deleteArticleTaskId() { this->articleTaskId_ = nullptr;};
    inline string articleTaskId() const { DARABONBA_PTR_GET_DEFAULT(articleTaskId_, "") };
    inline GenerateImageTaskShrinkRequest& setArticleTaskId(string articleTaskId) { DARABONBA_PTR_SET_VALUE(articleTaskId_, articleTaskId) };


    // paragraphListShrink Field Functions 
    bool hasParagraphListShrink() const { return this->paragraphListShrink_ != nullptr;};
    void deleteParagraphListShrink() { this->paragraphListShrink_ = nullptr;};
    inline string paragraphListShrink() const { DARABONBA_PTR_GET_DEFAULT(paragraphListShrink_, "") };
    inline GenerateImageTaskShrinkRequest& setParagraphListShrink(string paragraphListShrink) { DARABONBA_PTR_SET_VALUE(paragraphListShrink_, paragraphListShrink) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GenerateImageTaskShrinkRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline GenerateImageTaskShrinkRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> articleTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paragraphListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> size_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> style_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
