// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTINDEXCOLUMNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTINDEXCOLUMNCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestIndexColumnConfigContentColumns.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestIndexColumnConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestIndexColumnConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_TO_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_TO_JSON(EmbeddingColumns, embeddingColumns_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestIndexColumnConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_FROM_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_FROM_JSON(EmbeddingColumns, embeddingColumns_);
    };
    CreateKnowledgeBaseRequestIndexColumnConfig() = default ;
    CreateKnowledgeBaseRequestIndexColumnConfig(const CreateKnowledgeBaseRequestIndexColumnConfig &) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfig(CreateKnowledgeBaseRequestIndexColumnConfig &&) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestIndexColumnConfig() = default ;
    CreateKnowledgeBaseRequestIndexColumnConfig& operator=(const CreateKnowledgeBaseRequestIndexColumnConfig &) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfig& operator=(CreateKnowledgeBaseRequestIndexColumnConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnDefinitions_ == nullptr
        && return this->contentColumns_ == nullptr && return this->embeddingColumns_ == nullptr; };
    // columnDefinitions Field Functions 
    bool hasColumnDefinitions() const { return this->columnDefinitions_ != nullptr;};
    void deleteColumnDefinitions() { this->columnDefinitions_ = nullptr;};
    inline const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions> & columnDefinitions() const { DARABONBA_PTR_GET_CONST(columnDefinitions_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions>) };
    inline vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions> columnDefinitions() { DARABONBA_PTR_GET(columnDefinitions_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions>) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setColumnDefinitions(const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions> & columnDefinitions) { DARABONBA_PTR_SET_VALUE(columnDefinitions_, columnDefinitions) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setColumnDefinitions(vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions> && columnDefinitions) { DARABONBA_PTR_SET_RVALUE(columnDefinitions_, columnDefinitions) };


    // contentColumns Field Functions 
    bool hasContentColumns() const { return this->contentColumns_ != nullptr;};
    void deleteContentColumns() { this->contentColumns_ = nullptr;};
    inline const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns> & contentColumns() const { DARABONBA_PTR_GET_CONST(contentColumns_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns>) };
    inline vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns> contentColumns() { DARABONBA_PTR_GET(contentColumns_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns>) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setContentColumns(const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns> & contentColumns) { DARABONBA_PTR_SET_VALUE(contentColumns_, contentColumns) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setContentColumns(vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns> && contentColumns) { DARABONBA_PTR_SET_RVALUE(contentColumns_, contentColumns) };


    // embeddingColumns Field Functions 
    bool hasEmbeddingColumns() const { return this->embeddingColumns_ != nullptr;};
    void deleteEmbeddingColumns() { this->embeddingColumns_ = nullptr;};
    inline const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns> & embeddingColumns() const { DARABONBA_PTR_GET_CONST(embeddingColumns_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns>) };
    inline vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns> embeddingColumns() { DARABONBA_PTR_GET(embeddingColumns_, vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns>) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setEmbeddingColumns(const vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns> & embeddingColumns) { DARABONBA_PTR_SET_VALUE(embeddingColumns_, embeddingColumns) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig& setEmbeddingColumns(vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns> && embeddingColumns) { DARABONBA_PTR_SET_RVALUE(embeddingColumns_, embeddingColumns) };


  protected:
    // 所有列名
    std::shared_ptr<vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions>> columnDefinitions_ = nullptr;
    // 内容检索列
    std::shared_ptr<vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigContentColumns>> contentColumns_ = nullptr;
    // Embedding列
    std::shared_ptr<vector<Models::CreateKnowledgeBaseRequestIndexColumnConfigEmbeddingColumns>> embeddingColumns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
