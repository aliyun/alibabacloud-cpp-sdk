// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYBINDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYBINDINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeletePolicyBindingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyBindingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyBindingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DeletePolicyBindingShrinkRequest() = default ;
    DeletePolicyBindingShrinkRequest(const DeletePolicyBindingShrinkRequest &) = default ;
    DeletePolicyBindingShrinkRequest(DeletePolicyBindingShrinkRequest &&) = default ;
    DeletePolicyBindingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyBindingShrinkRequest() = default ;
    DeletePolicyBindingShrinkRequest& operator=(const DeletePolicyBindingShrinkRequest &) = default ;
    DeletePolicyBindingShrinkRequest& operator=(DeletePolicyBindingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceIdsShrink_ == nullptr
        && this->policyId_ == nullptr && this->sourceType_ == nullptr; };
    // dataSourceIdsShrink Field Functions 
    bool hasDataSourceIdsShrink() const { return this->dataSourceIdsShrink_ != nullptr;};
    void deleteDataSourceIdsShrink() { this->dataSourceIdsShrink_ = nullptr;};
    inline string getDataSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceIdsShrink_, "") };
    inline DeletePolicyBindingShrinkRequest& setDataSourceIdsShrink(string dataSourceIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceIdsShrink_, dataSourceIdsShrink) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DeletePolicyBindingShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeletePolicyBindingShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The IDs of the data sources that you want to disassociate from the backup policy.
    shared_ptr<string> dataSourceIdsShrink_ {};
    // The ID of the backup policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
