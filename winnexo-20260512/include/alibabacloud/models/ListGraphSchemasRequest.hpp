// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListGraphSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(semanticTags, semanticTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(semanticTags, semanticTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListGraphSchemasRequest() = default ;
    ListGraphSchemasRequest(const ListGraphSchemasRequest &) = default ;
    ListGraphSchemasRequest(ListGraphSchemasRequest &&) = default ;
    ListGraphSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphSchemasRequest() = default ;
    ListGraphSchemasRequest& operator=(const ListGraphSchemasRequest &) = default ;
    ListGraphSchemasRequest& operator=(ListGraphSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->semanticTags_ == nullptr && this->tenantId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListGraphSchemasRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // semanticTags Field Functions 
    bool hasSemanticTags() const { return this->semanticTags_ != nullptr;};
    void deleteSemanticTags() { this->semanticTags_ = nullptr;};
    inline const vector<string> & getSemanticTags() const { DARABONBA_PTR_GET_CONST(semanticTags_, vector<string>) };
    inline vector<string> getSemanticTags() { DARABONBA_PTR_GET(semanticTags_, vector<string>) };
    inline ListGraphSchemasRequest& setSemanticTags(const vector<string> & semanticTags) { DARABONBA_PTR_SET_VALUE(semanticTags_, semanticTags) };
    inline ListGraphSchemasRequest& setSemanticTags(vector<string> && semanticTags) { DARABONBA_PTR_SET_RVALUE(semanticTags_, semanticTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListGraphSchemasRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 关键词，匹配 graphName / displayName（可选，忽略大小写）
    shared_ptr<string> keyword_ {};
    // 语义标签过滤（可选，命中任一标签即保留）
    shared_ptr<vector<string>> semanticTags_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
