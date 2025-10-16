// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSTORAGEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSTORAGEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppInstanceGroupRequestStoragePolicyUserProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestStoragePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestStoragePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
      DARABONBA_PTR_TO_JSON(UserProfile, userProfile_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestStoragePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
      DARABONBA_PTR_FROM_JSON(UserProfile, userProfile_);
    };
    CreateAppInstanceGroupRequestStoragePolicy() = default ;
    CreateAppInstanceGroupRequestStoragePolicy(const CreateAppInstanceGroupRequestStoragePolicy &) = default ;
    CreateAppInstanceGroupRequestStoragePolicy(CreateAppInstanceGroupRequestStoragePolicy &&) = default ;
    CreateAppInstanceGroupRequestStoragePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestStoragePolicy() = default ;
    CreateAppInstanceGroupRequestStoragePolicy& operator=(const CreateAppInstanceGroupRequestStoragePolicy &) = default ;
    CreateAppInstanceGroupRequestStoragePolicy& operator=(CreateAppInstanceGroupRequestStoragePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->storageTypeList_ == nullptr
        && return this->userProfile_ == nullptr; };
    // storageTypeList Field Functions 
    bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
    void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
    inline const vector<string> & storageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, vector<string>) };
    inline vector<string> storageTypeList() { DARABONBA_PTR_GET(storageTypeList_, vector<string>) };
    inline CreateAppInstanceGroupRequestStoragePolicy& setStorageTypeList(const vector<string> & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
    inline CreateAppInstanceGroupRequestStoragePolicy& setStorageTypeList(vector<string> && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


    // userProfile Field Functions 
    bool hasUserProfile() const { return this->userProfile_ != nullptr;};
    void deleteUserProfile() { this->userProfile_ = nullptr;};
    inline const Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile & userProfile() const { DARABONBA_PTR_GET_CONST(userProfile_, Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile) };
    inline Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile userProfile() { DARABONBA_PTR_GET(userProfile_, Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile) };
    inline CreateAppInstanceGroupRequestStoragePolicy& setUserProfile(const Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile & userProfile) { DARABONBA_PTR_SET_VALUE(userProfile_, userProfile) };
    inline CreateAppInstanceGroupRequestStoragePolicy& setUserProfile(Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile && userProfile) { DARABONBA_PTR_SET_RVALUE(userProfile_, userProfile) };


  protected:
    std::shared_ptr<vector<string>> storageTypeList_ = nullptr;
    std::shared_ptr<Models::CreateAppInstanceGroupRequestStoragePolicyUserProfile> userProfile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
