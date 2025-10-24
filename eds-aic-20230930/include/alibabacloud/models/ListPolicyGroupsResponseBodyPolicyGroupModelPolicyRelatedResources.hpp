// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODELPOLICYRELATEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODELPOLICYRELATEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceGroupIds, androidInstanceGroupIds_);
      DARABONBA_PTR_TO_JSON(CloudPhoneMatrixIds, cloudPhoneMatrixIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceGroupIds, androidInstanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(CloudPhoneMatrixIds, cloudPhoneMatrixIds_);
    };
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources(const ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources(ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources &&) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& operator=(const ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& operator=(ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceGroupIds_ == nullptr
        && return this->cloudPhoneMatrixIds_ == nullptr; };
    // androidInstanceGroupIds Field Functions 
    bool hasAndroidInstanceGroupIds() const { return this->androidInstanceGroupIds_ != nullptr;};
    void deleteAndroidInstanceGroupIds() { this->androidInstanceGroupIds_ = nullptr;};
    inline const vector<string> & androidInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(androidInstanceGroupIds_, vector<string>) };
    inline vector<string> androidInstanceGroupIds() { DARABONBA_PTR_GET(androidInstanceGroupIds_, vector<string>) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& setAndroidInstanceGroupIds(const vector<string> & androidInstanceGroupIds) { DARABONBA_PTR_SET_VALUE(androidInstanceGroupIds_, androidInstanceGroupIds) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& setAndroidInstanceGroupIds(vector<string> && androidInstanceGroupIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceGroupIds_, androidInstanceGroupIds) };


    // cloudPhoneMatrixIds Field Functions 
    bool hasCloudPhoneMatrixIds() const { return this->cloudPhoneMatrixIds_ != nullptr;};
    void deleteCloudPhoneMatrixIds() { this->cloudPhoneMatrixIds_ = nullptr;};
    inline const vector<string> & cloudPhoneMatrixIds() const { DARABONBA_PTR_GET_CONST(cloudPhoneMatrixIds_, vector<string>) };
    inline vector<string> cloudPhoneMatrixIds() { DARABONBA_PTR_GET(cloudPhoneMatrixIds_, vector<string>) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& setCloudPhoneMatrixIds(const vector<string> & cloudPhoneMatrixIds) { DARABONBA_PTR_SET_VALUE(cloudPhoneMatrixIds_, cloudPhoneMatrixIds) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources& setCloudPhoneMatrixIds(vector<string> && cloudPhoneMatrixIds) { DARABONBA_PTR_SET_RVALUE(cloudPhoneMatrixIds_, cloudPhoneMatrixIds) };


  protected:
    std::shared_ptr<vector<string>> androidInstanceGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> cloudPhoneMatrixIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
