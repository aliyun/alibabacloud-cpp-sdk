// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCONTENTWITHOPTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCONTENTWITHOPTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertContentWithOptionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertContentWithOptionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Path, pathShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InsertContentWithOptionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Path, pathShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    InsertContentWithOptionsShrinkRequest() = default ;
    InsertContentWithOptionsShrinkRequest(const InsertContentWithOptionsShrinkRequest &) = default ;
    InsertContentWithOptionsShrinkRequest(InsertContentWithOptionsShrinkRequest &&) = default ;
    InsertContentWithOptionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertContentWithOptionsShrinkRequest() = default ;
    InsertContentWithOptionsShrinkRequest& operator=(const InsertContentWithOptionsShrinkRequest &) = default ;
    InsertContentWithOptionsShrinkRequest& operator=(InsertContentWithOptionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && return this->documentId_ == nullptr && return this->index_ == nullptr && return this->pathShrink_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string contentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline InsertContentWithOptionsShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline InsertContentWithOptionsShrinkRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline InsertContentWithOptionsShrinkRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // pathShrink Field Functions 
    bool hasPathShrink() const { return this->pathShrink_ != nullptr;};
    void deletePathShrink() { this->pathShrink_ = nullptr;};
    inline string pathShrink() const { DARABONBA_PTR_GET_DEFAULT(pathShrink_, "") };
    inline InsertContentWithOptionsShrinkRequest& setPathShrink(string pathShrink) { DARABONBA_PTR_SET_VALUE(pathShrink_, pathShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline InsertContentWithOptionsShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contentShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> documentId_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> pathShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
