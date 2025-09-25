// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonReleasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(parentAddonReleaseId, parentAddonReleaseId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(parentAddonReleaseId, parentAddonReleaseId_);
    };
    ListAddonReleasesRequest() = default ;
    ListAddonReleasesRequest(const ListAddonReleasesRequest &) = default ;
    ListAddonReleasesRequest(ListAddonReleasesRequest &&) = default ;
    ListAddonReleasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesRequest() = default ;
    ListAddonReleasesRequest& operator=(const ListAddonReleasesRequest &) = default ;
    ListAddonReleasesRequest& operator=(ListAddonReleasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->parentAddonReleaseId_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListAddonReleasesRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // parentAddonReleaseId Field Functions 
    bool hasParentAddonReleaseId() const { return this->parentAddonReleaseId_ != nullptr;};
    void deleteParentAddonReleaseId() { this->parentAddonReleaseId_ = nullptr;};
    inline string parentAddonReleaseId() const { DARABONBA_PTR_GET_DEFAULT(parentAddonReleaseId_, "") };
    inline ListAddonReleasesRequest& setParentAddonReleaseId(string parentAddonReleaseId) { DARABONBA_PTR_SET_VALUE(parentAddonReleaseId_, parentAddonReleaseId) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<string> parentAddonReleaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
