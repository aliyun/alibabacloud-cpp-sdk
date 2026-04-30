// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGASSETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGASSETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListCatalogAssetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListCatalogAssetsQuery, listCatalogAssetsQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListCatalogAssetsQuery, listCatalogAssetsQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListCatalogAssetsShrinkRequest() = default ;
    ListCatalogAssetsShrinkRequest(const ListCatalogAssetsShrinkRequest &) = default ;
    ListCatalogAssetsShrinkRequest(ListCatalogAssetsShrinkRequest &&) = default ;
    ListCatalogAssetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogAssetsShrinkRequest() = default ;
    ListCatalogAssetsShrinkRequest& operator=(const ListCatalogAssetsShrinkRequest &) = default ;
    ListCatalogAssetsShrinkRequest& operator=(ListCatalogAssetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listCatalogAssetsQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listCatalogAssetsQueryShrink Field Functions 
    bool hasListCatalogAssetsQueryShrink() const { return this->listCatalogAssetsQueryShrink_ != nullptr;};
    void deleteListCatalogAssetsQueryShrink() { this->listCatalogAssetsQueryShrink_ = nullptr;};
    inline string getListCatalogAssetsQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(listCatalogAssetsQueryShrink_, "") };
    inline ListCatalogAssetsShrinkRequest& setListCatalogAssetsQueryShrink(string listCatalogAssetsQueryShrink) { DARABONBA_PTR_SET_VALUE(listCatalogAssetsQueryShrink_, listCatalogAssetsQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListCatalogAssetsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> listCatalogAssetsQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
