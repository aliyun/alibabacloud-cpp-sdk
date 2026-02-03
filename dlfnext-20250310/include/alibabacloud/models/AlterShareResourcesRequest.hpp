// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERSHARERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERSHARERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ShareResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterShareResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterShareResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(shareResourceList, shareResourceList_);
    };
    friend void from_json(const Darabonba::Json& j, AlterShareResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(shareResourceList, shareResourceList_);
    };
    AlterShareResourcesRequest() = default ;
    AlterShareResourcesRequest(const AlterShareResourcesRequest &) = default ;
    AlterShareResourcesRequest(AlterShareResourcesRequest &&) = default ;
    AlterShareResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterShareResourcesRequest() = default ;
    AlterShareResourcesRequest& operator=(const AlterShareResourcesRequest &) = default ;
    AlterShareResourcesRequest& operator=(AlterShareResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && this->shareResourceList_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline AlterShareResourcesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // shareResourceList Field Functions 
    bool hasShareResourceList() const { return this->shareResourceList_ != nullptr;};
    void deleteShareResourceList() { this->shareResourceList_ = nullptr;};
    inline const vector<ShareResource> & getShareResourceList() const { DARABONBA_PTR_GET_CONST(shareResourceList_, vector<ShareResource>) };
    inline vector<ShareResource> getShareResourceList() { DARABONBA_PTR_GET(shareResourceList_, vector<ShareResource>) };
    inline AlterShareResourcesRequest& setShareResourceList(const vector<ShareResource> & shareResourceList) { DARABONBA_PTR_SET_VALUE(shareResourceList_, shareResourceList) };
    inline AlterShareResourcesRequest& setShareResourceList(vector<ShareResource> && shareResourceList) { DARABONBA_PTR_SET_RVALUE(shareResourceList_, shareResourceList) };


  protected:
    shared_ptr<string> catalogId_ {};
    shared_ptr<vector<ShareResource>> shareResourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
