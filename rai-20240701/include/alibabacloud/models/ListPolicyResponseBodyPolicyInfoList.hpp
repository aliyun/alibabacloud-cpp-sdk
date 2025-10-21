// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYRESPONSEBODYPOLICYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYRESPONSEBODYPOLICYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListPolicyResponseBodyPolicyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyResponseBodyPolicyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyResponseBodyPolicyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
    };
    ListPolicyResponseBodyPolicyInfoList() = default ;
    ListPolicyResponseBodyPolicyInfoList(const ListPolicyResponseBodyPolicyInfoList &) = default ;
    ListPolicyResponseBodyPolicyInfoList(ListPolicyResponseBodyPolicyInfoList &&) = default ;
    ListPolicyResponseBodyPolicyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyResponseBodyPolicyInfoList() = default ;
    ListPolicyResponseBodyPolicyInfoList& operator=(const ListPolicyResponseBodyPolicyInfoList &) = default ;
    ListPolicyResponseBodyPolicyInfoList& operator=(ListPolicyResponseBodyPolicyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtModified_ == nullptr
        && return this->isSidecarPolicy_ == nullptr && return this->policyId_ == nullptr && return this->policyIdentifier_ == nullptr && return this->policyName_ == nullptr && return this->sceneType_ == nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListPolicyResponseBodyPolicyInfoList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isSidecarPolicy Field Functions 
    bool hasIsSidecarPolicy() const { return this->isSidecarPolicy_ != nullptr;};
    void deleteIsSidecarPolicy() { this->isSidecarPolicy_ = nullptr;};
    inline int32_t isSidecarPolicy() const { DARABONBA_PTR_GET_DEFAULT(isSidecarPolicy_, 0) };
    inline ListPolicyResponseBodyPolicyInfoList& setIsSidecarPolicy(int32_t isSidecarPolicy) { DARABONBA_PTR_SET_VALUE(isSidecarPolicy_, isSidecarPolicy) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ListPolicyResponseBodyPolicyInfoList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline ListPolicyResponseBodyPolicyInfoList& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListPolicyResponseBodyPolicyInfoList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline int32_t sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, 0) };
    inline ListPolicyResponseBodyPolicyInfoList& setSceneType(int32_t sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


  protected:
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int32_t> isSidecarPolicy_ = nullptr;
    // Tag policy ID.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Policy identifier.
    std::shared_ptr<string> policyIdentifier_ = nullptr;
    // Permission policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<int32_t> sceneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
