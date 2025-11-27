// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTNETWORK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRestriction, accessRestriction_);
      DARABONBA_PTR_TO_JSON(RemoveRestrictedURLIds, removeRestrictedURLIds_);
      DARABONBA_PTR_TO_JSON(RestrictedURLs, restrictedURLs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRestriction, accessRestriction_);
      DARABONBA_PTR_FROM_JSON(RemoveRestrictedURLIds, removeRestrictedURLIds_);
      DARABONBA_PTR_FROM_JSON(RestrictedURLs, restrictedURLs_);
    };
    ModifyBrowserInstanceGroupRequestNetwork() = default ;
    ModifyBrowserInstanceGroupRequestNetwork(const ModifyBrowserInstanceGroupRequestNetwork &) = default ;
    ModifyBrowserInstanceGroupRequestNetwork(ModifyBrowserInstanceGroupRequestNetwork &&) = default ;
    ModifyBrowserInstanceGroupRequestNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestNetwork() = default ;
    ModifyBrowserInstanceGroupRequestNetwork& operator=(const ModifyBrowserInstanceGroupRequestNetwork &) = default ;
    ModifyBrowserInstanceGroupRequestNetwork& operator=(ModifyBrowserInstanceGroupRequestNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessRestriction_ == nullptr
        && return this->removeRestrictedURLIds_ == nullptr && return this->restrictedURLs_ == nullptr; };
    // accessRestriction Field Functions 
    bool hasAccessRestriction() const { return this->accessRestriction_ != nullptr;};
    void deleteAccessRestriction() { this->accessRestriction_ = nullptr;};
    inline string accessRestriction() const { DARABONBA_PTR_GET_DEFAULT(accessRestriction_, "") };
    inline ModifyBrowserInstanceGroupRequestNetwork& setAccessRestriction(string accessRestriction) { DARABONBA_PTR_SET_VALUE(accessRestriction_, accessRestriction) };


    // removeRestrictedURLIds Field Functions 
    bool hasRemoveRestrictedURLIds() const { return this->removeRestrictedURLIds_ != nullptr;};
    void deleteRemoveRestrictedURLIds() { this->removeRestrictedURLIds_ = nullptr;};
    inline const vector<string> & removeRestrictedURLIds() const { DARABONBA_PTR_GET_CONST(removeRestrictedURLIds_, vector<string>) };
    inline vector<string> removeRestrictedURLIds() { DARABONBA_PTR_GET(removeRestrictedURLIds_, vector<string>) };
    inline ModifyBrowserInstanceGroupRequestNetwork& setRemoveRestrictedURLIds(const vector<string> & removeRestrictedURLIds) { DARABONBA_PTR_SET_VALUE(removeRestrictedURLIds_, removeRestrictedURLIds) };
    inline ModifyBrowserInstanceGroupRequestNetwork& setRemoveRestrictedURLIds(vector<string> && removeRestrictedURLIds) { DARABONBA_PTR_SET_RVALUE(removeRestrictedURLIds_, removeRestrictedURLIds) };


    // restrictedURLs Field Functions 
    bool hasRestrictedURLs() const { return this->restrictedURLs_ != nullptr;};
    void deleteRestrictedURLs() { this->restrictedURLs_ = nullptr;};
    inline const vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs> & restrictedURLs() const { DARABONBA_PTR_GET_CONST(restrictedURLs_, vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs>) };
    inline vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs> restrictedURLs() { DARABONBA_PTR_GET(restrictedURLs_, vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs>) };
    inline ModifyBrowserInstanceGroupRequestNetwork& setRestrictedURLs(const vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs> & restrictedURLs) { DARABONBA_PTR_SET_VALUE(restrictedURLs_, restrictedURLs) };
    inline ModifyBrowserInstanceGroupRequestNetwork& setRestrictedURLs(vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs> && restrictedURLs) { DARABONBA_PTR_SET_RVALUE(restrictedURLs_, restrictedURLs) };


  protected:
    // The type of the access control list.
    // 
    // Valid value:
    // 
    // *   ALLOW_LIST: The whitelist.
    std::shared_ptr<string> accessRestriction_ = nullptr;
    // The domain names to be removed.
    std::shared_ptr<vector<string>> removeRestrictedURLIds_ = nullptr;
    // The domain restriction configurations.
    std::shared_ptr<vector<Models::ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs>> restrictedURLs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
