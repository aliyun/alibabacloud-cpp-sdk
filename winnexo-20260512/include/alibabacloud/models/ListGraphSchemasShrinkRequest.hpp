// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHSCHEMASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListGraphSchemasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphSchemasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(semanticTags, semanticTagsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphSchemasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(semanticTags, semanticTagsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListGraphSchemasShrinkRequest() = default ;
    ListGraphSchemasShrinkRequest(const ListGraphSchemasShrinkRequest &) = default ;
    ListGraphSchemasShrinkRequest(ListGraphSchemasShrinkRequest &&) = default ;
    ListGraphSchemasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphSchemasShrinkRequest() = default ;
    ListGraphSchemasShrinkRequest& operator=(const ListGraphSchemasShrinkRequest &) = default ;
    ListGraphSchemasShrinkRequest& operator=(ListGraphSchemasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->semanticTagsShrink_ == nullptr && this->tenantId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListGraphSchemasShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // semanticTagsShrink Field Functions 
    bool hasSemanticTagsShrink() const { return this->semanticTagsShrink_ != nullptr;};
    void deleteSemanticTagsShrink() { this->semanticTagsShrink_ = nullptr;};
    inline string getSemanticTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(semanticTagsShrink_, "") };
    inline ListGraphSchemasShrinkRequest& setSemanticTagsShrink(string semanticTagsShrink) { DARABONBA_PTR_SET_VALUE(semanticTagsShrink_, semanticTagsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListGraphSchemasShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The keyword for fuzzy match of component data in the form.
    shared_ptr<string> keyword_ {};
    // The semantic tags used for filtering. A graph is retained if any tag matches.
    shared_ptr<string> semanticTagsShrink_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
