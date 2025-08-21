// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(KnowledgeType, knowledgeType_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(KnowledgeType, knowledgeType_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    ListCategoryRequest() = default ;
    ListCategoryRequest(const ListCategoryRequest &) = default ;
    ListCategoryRequest(ListCategoryRequest &&) = default ;
    ListCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryRequest() = default ;
    ListCategoryRequest& operator=(const ListCategoryRequest &) = default ;
    ListCategoryRequest& operator=(ListCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->knowledgeType_ != nullptr && this->parentCategoryId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListCategoryRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // knowledgeType Field Functions 
    bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
    void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
    inline int32_t knowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, 0) };
    inline ListCategoryRequest& setKnowledgeType(int32_t knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline ListCategoryRequest& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> knowledgeType_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
