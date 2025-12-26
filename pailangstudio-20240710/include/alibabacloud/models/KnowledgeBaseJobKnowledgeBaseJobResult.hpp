// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOBKNOWLEDGEBASEJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOBKNOWLEDGEBASEJOBRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseJobKnowledgeBaseJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseJobKnowledgeBaseJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(AddChunkCount, addChunkCount_);
      DARABONBA_PTR_TO_JSON(DeleteChunkCount, deleteChunkCount_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseJobKnowledgeBaseJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AddChunkCount, addChunkCount_);
      DARABONBA_PTR_FROM_JSON(DeleteChunkCount, deleteChunkCount_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
    };
    KnowledgeBaseJobKnowledgeBaseJobResult() = default ;
    KnowledgeBaseJobKnowledgeBaseJobResult(const KnowledgeBaseJobKnowledgeBaseJobResult &) = default ;
    KnowledgeBaseJobKnowledgeBaseJobResult(KnowledgeBaseJobKnowledgeBaseJobResult &&) = default ;
    KnowledgeBaseJobKnowledgeBaseJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseJobKnowledgeBaseJobResult() = default ;
    KnowledgeBaseJobKnowledgeBaseJobResult& operator=(const KnowledgeBaseJobKnowledgeBaseJobResult &) = default ;
    KnowledgeBaseJobKnowledgeBaseJobResult& operator=(KnowledgeBaseJobKnowledgeBaseJobResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addChunkCount_ == nullptr
        && return this->deleteChunkCount_ == nullptr && return this->totalFileCount_ == nullptr; };
    // addChunkCount Field Functions 
    bool hasAddChunkCount() const { return this->addChunkCount_ != nullptr;};
    void deleteAddChunkCount() { this->addChunkCount_ = nullptr;};
    inline int32_t addChunkCount() const { DARABONBA_PTR_GET_DEFAULT(addChunkCount_, 0) };
    inline KnowledgeBaseJobKnowledgeBaseJobResult& setAddChunkCount(int32_t addChunkCount) { DARABONBA_PTR_SET_VALUE(addChunkCount_, addChunkCount) };


    // deleteChunkCount Field Functions 
    bool hasDeleteChunkCount() const { return this->deleteChunkCount_ != nullptr;};
    void deleteDeleteChunkCount() { this->deleteChunkCount_ = nullptr;};
    inline int32_t deleteChunkCount() const { DARABONBA_PTR_GET_DEFAULT(deleteChunkCount_, 0) };
    inline KnowledgeBaseJobKnowledgeBaseJobResult& setDeleteChunkCount(int32_t deleteChunkCount) { DARABONBA_PTR_SET_VALUE(deleteChunkCount_, deleteChunkCount) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int32_t totalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0) };
    inline KnowledgeBaseJobKnowledgeBaseJobResult& setTotalFileCount(int32_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


  protected:
    // 增加Chunk数量
    std::shared_ptr<int32_t> addChunkCount_ = nullptr;
    // 删除Chunk数量
    std::shared_ptr<int32_t> deleteChunkCount_ = nullptr;
    // 总处理文件数
    std::shared_ptr<int32_t> totalFileCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
