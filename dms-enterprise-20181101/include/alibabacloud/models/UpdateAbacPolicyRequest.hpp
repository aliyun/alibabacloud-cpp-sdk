// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABACPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABACPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateAbacPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAbacPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_TO_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_TO_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_TO_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAbacPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateAbacPolicyRequest() = default ;
    UpdateAbacPolicyRequest(const UpdateAbacPolicyRequest &) = default ;
    UpdateAbacPolicyRequest(UpdateAbacPolicyRequest &&) = default ;
    UpdateAbacPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAbacPolicyRequest() = default ;
    UpdateAbacPolicyRequest& operator=(const UpdateAbacPolicyRequest &) = default ;
    UpdateAbacPolicyRequest& operator=(UpdateAbacPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abacPolicyContent_ == nullptr
        && this->abacPolicyDesc_ == nullptr && this->abacPolicyId_ == nullptr && this->abacPolicyName_ == nullptr && this->tid_ == nullptr; };
    // abacPolicyContent Field Functions 
    bool hasAbacPolicyContent() const { return this->abacPolicyContent_ != nullptr;};
    void deleteAbacPolicyContent() { this->abacPolicyContent_ = nullptr;};
    inline string getAbacPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyContent_, "") };
    inline UpdateAbacPolicyRequest& setAbacPolicyContent(string abacPolicyContent) { DARABONBA_PTR_SET_VALUE(abacPolicyContent_, abacPolicyContent) };


    // abacPolicyDesc Field Functions 
    bool hasAbacPolicyDesc() const { return this->abacPolicyDesc_ != nullptr;};
    void deleteAbacPolicyDesc() { this->abacPolicyDesc_ = nullptr;};
    inline string getAbacPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyDesc_, "") };
    inline UpdateAbacPolicyRequest& setAbacPolicyDesc(string abacPolicyDesc) { DARABONBA_PTR_SET_VALUE(abacPolicyDesc_, abacPolicyDesc) };


    // abacPolicyId Field Functions 
    bool hasAbacPolicyId() const { return this->abacPolicyId_ != nullptr;};
    void deleteAbacPolicyId() { this->abacPolicyId_ = nullptr;};
    inline int64_t getAbacPolicyId() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyId_, 0L) };
    inline UpdateAbacPolicyRequest& setAbacPolicyId(int64_t abacPolicyId) { DARABONBA_PTR_SET_VALUE(abacPolicyId_, abacPolicyId) };


    // abacPolicyName Field Functions 
    bool hasAbacPolicyName() const { return this->abacPolicyName_ != nullptr;};
    void deleteAbacPolicyName() { this->abacPolicyName_ = nullptr;};
    inline string getAbacPolicyName() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyName_, "") };
    inline UpdateAbacPolicyRequest& setAbacPolicyName(string abacPolicyName) { DARABONBA_PTR_SET_VALUE(abacPolicyName_, abacPolicyName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateAbacPolicyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The content of the policy.
    shared_ptr<string> abacPolicyContent_ {};
    // The description of the policy.
    shared_ptr<string> abacPolicyDesc_ {};
    // The ID of the policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> abacPolicyId_ {};
    // The name of the permission policy.
    shared_ptr<string> abacPolicyName_ {};
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the DMS console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
