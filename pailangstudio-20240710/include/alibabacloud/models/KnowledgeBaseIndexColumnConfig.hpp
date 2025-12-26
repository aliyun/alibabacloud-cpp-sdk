// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEINDEXCOLUMNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEINDEXCOLUMNCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseIndexColumnConfigColumnDefinitions.hpp>
#include <alibabacloud/models/KnowledgeBaseIndexColumnConfigContentColumns.hpp>
#include <alibabacloud/models/KnowledgeBaseIndexColumnConfigEmbeddingColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseIndexColumnConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseIndexColumnConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_TO_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_TO_JSON(EmbeddingColumns, embeddingColumns_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseIndexColumnConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_FROM_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_FROM_JSON(EmbeddingColumns, embeddingColumns_);
    };
    KnowledgeBaseIndexColumnConfig() = default ;
    KnowledgeBaseIndexColumnConfig(const KnowledgeBaseIndexColumnConfig &) = default ;
    KnowledgeBaseIndexColumnConfig(KnowledgeBaseIndexColumnConfig &&) = default ;
    KnowledgeBaseIndexColumnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseIndexColumnConfig() = default ;
    KnowledgeBaseIndexColumnConfig& operator=(const KnowledgeBaseIndexColumnConfig &) = default ;
    KnowledgeBaseIndexColumnConfig& operator=(KnowledgeBaseIndexColumnConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnDefinitions_ == nullptr
        && return this->contentColumns_ == nullptr && return this->embeddingColumns_ == nullptr; };
    // columnDefinitions Field Functions 
    bool hasColumnDefinitions() const { return this->columnDefinitions_ != nullptr;};
    void deleteColumnDefinitions() { this->columnDefinitions_ = nullptr;};
    inline const vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions> & columnDefinitions() const { DARABONBA_PTR_GET_CONST(columnDefinitions_, vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions>) };
    inline vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions> columnDefinitions() { DARABONBA_PTR_GET(columnDefinitions_, vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions>) };
    inline KnowledgeBaseIndexColumnConfig& setColumnDefinitions(const vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions> & columnDefinitions) { DARABONBA_PTR_SET_VALUE(columnDefinitions_, columnDefinitions) };
    inline KnowledgeBaseIndexColumnConfig& setColumnDefinitions(vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions> && columnDefinitions) { DARABONBA_PTR_SET_RVALUE(columnDefinitions_, columnDefinitions) };


    // contentColumns Field Functions 
    bool hasContentColumns() const { return this->contentColumns_ != nullptr;};
    void deleteContentColumns() { this->contentColumns_ = nullptr;};
    inline const vector<Models::KnowledgeBaseIndexColumnConfigContentColumns> & contentColumns() const { DARABONBA_PTR_GET_CONST(contentColumns_, vector<Models::KnowledgeBaseIndexColumnConfigContentColumns>) };
    inline vector<Models::KnowledgeBaseIndexColumnConfigContentColumns> contentColumns() { DARABONBA_PTR_GET(contentColumns_, vector<Models::KnowledgeBaseIndexColumnConfigContentColumns>) };
    inline KnowledgeBaseIndexColumnConfig& setContentColumns(const vector<Models::KnowledgeBaseIndexColumnConfigContentColumns> & contentColumns) { DARABONBA_PTR_SET_VALUE(contentColumns_, contentColumns) };
    inline KnowledgeBaseIndexColumnConfig& setContentColumns(vector<Models::KnowledgeBaseIndexColumnConfigContentColumns> && contentColumns) { DARABONBA_PTR_SET_RVALUE(contentColumns_, contentColumns) };


    // embeddingColumns Field Functions 
    bool hasEmbeddingColumns() const { return this->embeddingColumns_ != nullptr;};
    void deleteEmbeddingColumns() { this->embeddingColumns_ = nullptr;};
    inline const vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns> & embeddingColumns() const { DARABONBA_PTR_GET_CONST(embeddingColumns_, vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns>) };
    inline vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns> embeddingColumns() { DARABONBA_PTR_GET(embeddingColumns_, vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns>) };
    inline KnowledgeBaseIndexColumnConfig& setEmbeddingColumns(const vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns> & embeddingColumns) { DARABONBA_PTR_SET_VALUE(embeddingColumns_, embeddingColumns) };
    inline KnowledgeBaseIndexColumnConfig& setEmbeddingColumns(vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns> && embeddingColumns) { DARABONBA_PTR_SET_RVALUE(embeddingColumns_, embeddingColumns) };


  protected:
    // 所有列名
    std::shared_ptr<vector<Models::KnowledgeBaseIndexColumnConfigColumnDefinitions>> columnDefinitions_ = nullptr;
    // 内容检索列
    std::shared_ptr<vector<Models::KnowledgeBaseIndexColumnConfigContentColumns>> contentColumns_ = nullptr;
    // Embedding列
    std::shared_ptr<vector<Models::KnowledgeBaseIndexColumnConfigEmbeddingColumns>> embeddingColumns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
