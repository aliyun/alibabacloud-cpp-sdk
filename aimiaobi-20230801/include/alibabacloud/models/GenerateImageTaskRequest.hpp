// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateImageTaskRequestParagraphList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateImageTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_TO_JSON(ParagraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Style, style_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_FROM_JSON(ParagraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
    };
    GenerateImageTaskRequest() = default ;
    GenerateImageTaskRequest(const GenerateImageTaskRequest &) = default ;
    GenerateImageTaskRequest(GenerateImageTaskRequest &&) = default ;
    GenerateImageTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageTaskRequest() = default ;
    GenerateImageTaskRequest& operator=(const GenerateImageTaskRequest &) = default ;
    GenerateImageTaskRequest& operator=(GenerateImageTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->articleTaskId_ != nullptr && this->paragraphList_ != nullptr && this->size_ != nullptr && this->style_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateImageTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // articleTaskId Field Functions 
    bool hasArticleTaskId() const { return this->articleTaskId_ != nullptr;};
    void deleteArticleTaskId() { this->articleTaskId_ = nullptr;};
    inline string articleTaskId() const { DARABONBA_PTR_GET_DEFAULT(articleTaskId_, "") };
    inline GenerateImageTaskRequest& setArticleTaskId(string articleTaskId) { DARABONBA_PTR_SET_VALUE(articleTaskId_, articleTaskId) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<GenerateImageTaskRequestParagraphList> & paragraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<GenerateImageTaskRequestParagraphList>) };
    inline vector<GenerateImageTaskRequestParagraphList> paragraphList() { DARABONBA_PTR_GET(paragraphList_, vector<GenerateImageTaskRequestParagraphList>) };
    inline GenerateImageTaskRequest& setParagraphList(const vector<GenerateImageTaskRequestParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline GenerateImageTaskRequest& setParagraphList(vector<GenerateImageTaskRequestParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GenerateImageTaskRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline GenerateImageTaskRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> articleTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<GenerateImageTaskRequestParagraphList>> paragraphList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> size_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> style_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
