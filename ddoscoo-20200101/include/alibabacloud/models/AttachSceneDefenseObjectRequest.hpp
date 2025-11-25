// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHSCENEDEFENSEOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHSCENEDEFENSEOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class AttachSceneDefenseObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachSceneDefenseObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachSceneDefenseObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    AttachSceneDefenseObjectRequest() = default ;
    AttachSceneDefenseObjectRequest(const AttachSceneDefenseObjectRequest &) = default ;
    AttachSceneDefenseObjectRequest(AttachSceneDefenseObjectRequest &&) = default ;
    AttachSceneDefenseObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachSceneDefenseObjectRequest() = default ;
    AttachSceneDefenseObjectRequest& operator=(const AttachSceneDefenseObjectRequest &) = default ;
    AttachSceneDefenseObjectRequest& operator=(AttachSceneDefenseObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectType_ == nullptr
        && return this->objects_ == nullptr && return this->policyId_ == nullptr; };
    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline AttachSceneDefenseObjectRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline string objects() const { DARABONBA_PTR_GET_DEFAULT(objects_, "") };
    inline AttachSceneDefenseObjectRequest& setObjects(string objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline AttachSceneDefenseObjectRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The type of the object. Set the value to **Domain**, which indicates a domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectType_ = nullptr;
    // The object that you want to add to the policy. Separate multiple objects with commas (,).
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
