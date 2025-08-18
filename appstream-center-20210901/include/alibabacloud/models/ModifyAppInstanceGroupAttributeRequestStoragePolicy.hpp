// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile.hpp>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestStoragePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestStoragePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
      DARABONBA_PTR_TO_JSON(UserProfile, userProfile_);
      DARABONBA_PTR_TO_JSON(UserProfileFollow, userProfileFollow_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestStoragePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
      DARABONBA_PTR_FROM_JSON(UserProfile, userProfile_);
      DARABONBA_PTR_FROM_JSON(UserProfileFollow, userProfileFollow_);
    };
    ModifyAppInstanceGroupAttributeRequestStoragePolicy() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicy(const ModifyAppInstanceGroupAttributeRequestStoragePolicy &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicy(ModifyAppInstanceGroupAttributeRequestStoragePolicy &&) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicy() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicy& operator=(const ModifyAppInstanceGroupAttributeRequestStoragePolicy &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicy& operator=(ModifyAppInstanceGroupAttributeRequestStoragePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageTypeList_ != nullptr
        && this->userProfile_ != nullptr && this->userProfileFollow_ != nullptr; };
    // storageTypeList Field Functions 
    bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
    void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
    inline const vector<string> & storageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, vector<string>) };
    inline vector<string> storageTypeList() { DARABONBA_PTR_GET(storageTypeList_, vector<string>) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setStorageTypeList(const vector<string> & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setStorageTypeList(vector<string> && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


    // userProfile Field Functions 
    bool hasUserProfile() const { return this->userProfile_ != nullptr;};
    void deleteUserProfile() { this->userProfile_ = nullptr;};
    inline const Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile & userProfile() const { DARABONBA_PTR_GET_CONST(userProfile_, Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile) };
    inline Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile userProfile() { DARABONBA_PTR_GET(userProfile_, Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setUserProfile(const Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile & userProfile) { DARABONBA_PTR_SET_VALUE(userProfile_, userProfile) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setUserProfile(Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile && userProfile) { DARABONBA_PTR_SET_RVALUE(userProfile_, userProfile) };


    // userProfileFollow Field Functions 
    bool hasUserProfileFollow() const { return this->userProfileFollow_ != nullptr;};
    void deleteUserProfileFollow() { this->userProfileFollow_ = nullptr;};
    inline const Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow & userProfileFollow() const { DARABONBA_PTR_GET_CONST(userProfileFollow_, Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow) };
    inline Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow userProfileFollow() { DARABONBA_PTR_GET(userProfileFollow_, Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setUserProfileFollow(const Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow & userProfileFollow) { DARABONBA_PTR_SET_VALUE(userProfileFollow_, userProfileFollow) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy& setUserProfileFollow(Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow && userProfileFollow) { DARABONBA_PTR_SET_RVALUE(userProfileFollow_, userProfileFollow) };


  protected:
    // The storage types.
    std::shared_ptr<vector<string>> storageTypeList_ = nullptr;
    // The configurations of user data roaming.
    std::shared_ptr<Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile> userProfile_ = nullptr;
    std::shared_ptr<Models::ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow> userProfileFollow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
