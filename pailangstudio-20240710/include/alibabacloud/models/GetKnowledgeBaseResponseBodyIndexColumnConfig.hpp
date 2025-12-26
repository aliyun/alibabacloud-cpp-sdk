// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASERESPONSEBODYINDEXCOLUMNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASERESPONSEBODYINDEXCOLUMNCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions.hpp>
#include <alibabacloud/models/GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns.hpp>
#include <alibabacloud/models/GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseResponseBodyIndexColumnConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseResponseBodyIndexColumnConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_TO_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_TO_JSON(EmbeddingColumns, embeddingColumns_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseResponseBodyIndexColumnConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDefinitions, columnDefinitions_);
      DARABONBA_PTR_FROM_JSON(ContentColumns, contentColumns_);
      DARABONBA_PTR_FROM_JSON(EmbeddingColumns, embeddingColumns_);
    };
    GetKnowledgeBaseResponseBodyIndexColumnConfig() = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfig(const GetKnowledgeBaseResponseBodyIndexColumnConfig &) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfig(GetKnowledgeBaseResponseBodyIndexColumnConfig &&) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseResponseBodyIndexColumnConfig() = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfig& operator=(const GetKnowledgeBaseResponseBodyIndexColumnConfig &) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfig& operator=(GetKnowledgeBaseResponseBodyIndexColumnConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnDefinitions_ == nullptr
        && return this->contentColumns_ == nullptr && return this->embeddingColumns_ == nullptr; };
    // columnDefinitions Field Functions 
    bool hasColumnDefinitions() const { return this->columnDefinitions_ != nullptr;};
    void deleteColumnDefinitions() { this->columnDefinitions_ = nullptr;};
    inline const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions> & columnDefinitions() const { DARABONBA_PTR_GET_CONST(columnDefinitions_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions>) };
    inline vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions> columnDefinitions() { DARABONBA_PTR_GET(columnDefinitions_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions>) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setColumnDefinitions(const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions> & columnDefinitions) { DARABONBA_PTR_SET_VALUE(columnDefinitions_, columnDefinitions) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setColumnDefinitions(vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions> && columnDefinitions) { DARABONBA_PTR_SET_RVALUE(columnDefinitions_, columnDefinitions) };


    // contentColumns Field Functions 
    bool hasContentColumns() const { return this->contentColumns_ != nullptr;};
    void deleteContentColumns() { this->contentColumns_ = nullptr;};
    inline const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns> & contentColumns() const { DARABONBA_PTR_GET_CONST(contentColumns_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns>) };
    inline vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns> contentColumns() { DARABONBA_PTR_GET(contentColumns_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns>) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setContentColumns(const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns> & contentColumns) { DARABONBA_PTR_SET_VALUE(contentColumns_, contentColumns) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setContentColumns(vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns> && contentColumns) { DARABONBA_PTR_SET_RVALUE(contentColumns_, contentColumns) };


    // embeddingColumns Field Functions 
    bool hasEmbeddingColumns() const { return this->embeddingColumns_ != nullptr;};
    void deleteEmbeddingColumns() { this->embeddingColumns_ = nullptr;};
    inline const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns> & embeddingColumns() const { DARABONBA_PTR_GET_CONST(embeddingColumns_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns>) };
    inline vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns> embeddingColumns() { DARABONBA_PTR_GET(embeddingColumns_, vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns>) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setEmbeddingColumns(const vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns> & embeddingColumns) { DARABONBA_PTR_SET_VALUE(embeddingColumns_, embeddingColumns) };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfig& setEmbeddingColumns(vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns> && embeddingColumns) { DARABONBA_PTR_SET_RVALUE(embeddingColumns_, embeddingColumns) };


  protected:
    // 所有列名
    std::shared_ptr<vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigColumnDefinitions>> columnDefinitions_ = nullptr;
    // 内容检索列
    std::shared_ptr<vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns>> contentColumns_ = nullptr;
    // Embedding列
    std::shared_ptr<vector<Models::GetKnowledgeBaseResponseBodyIndexColumnConfigEmbeddingColumns>> embeddingColumns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
