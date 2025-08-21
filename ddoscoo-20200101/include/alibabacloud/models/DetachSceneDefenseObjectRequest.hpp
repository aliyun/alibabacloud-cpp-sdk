// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHSCENEDEFENSEOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHSCENEDEFENSEOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DetachSceneDefenseObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachSceneDefenseObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachSceneDefenseObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DetachSceneDefenseObjectRequest() = default ;
    DetachSceneDefenseObjectRequest(const DetachSceneDefenseObjectRequest &) = default ;
    DetachSceneDefenseObjectRequest(DetachSceneDefenseObjectRequest &&) = default ;
    DetachSceneDefenseObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachSceneDefenseObjectRequest() = default ;
    DetachSceneDefenseObjectRequest& operator=(const DetachSceneDefenseObjectRequest &) = default ;
    DetachSceneDefenseObjectRequest& operator=(DetachSceneDefenseObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objectType_ != nullptr
        && this->objects_ != nullptr && this->policyId_ != nullptr; };
    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DetachSceneDefenseObjectRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline string objects() const { DARABONBA_PTR_GET_DEFAULT(objects_, "") };
    inline DetachSceneDefenseObjectRequest& setObjects(string objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DetachSceneDefenseObjectRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The type of the object. Set the value to **Domain**, which indicates a domain name.
    std::shared_ptr<string> objectType_ = nullptr;
    // The protection asset that you want to remove from a policy. Separate multiple protection assets with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> objects_ = nullptr;
    // The ID of the policy.
    // 
    // > You can call the [DescribeSceneDefensePolicies](https://help.aliyun.com/document_detail/159382.html) operation to query the IDs of all policies.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
