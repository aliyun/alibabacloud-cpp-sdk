// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeletePolicyBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DeletePolicyBindingRequest() = default ;
    DeletePolicyBindingRequest(const DeletePolicyBindingRequest &) = default ;
    DeletePolicyBindingRequest(DeletePolicyBindingRequest &&) = default ;
    DeletePolicyBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyBindingRequest() = default ;
    DeletePolicyBindingRequest& operator=(const DeletePolicyBindingRequest &) = default ;
    DeletePolicyBindingRequest& operator=(DeletePolicyBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceIds_ == nullptr
        && return this->policyId_ == nullptr && return this->sourceType_ == nullptr; };
    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & dataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> dataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline DeletePolicyBindingRequest& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline DeletePolicyBindingRequest& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DeletePolicyBindingRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeletePolicyBindingRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The IDs of the data sources that you want to disassociate from the backup policy.
    std::shared_ptr<vector<string>> dataSourceIds_ = nullptr;
    // The ID of the backup policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
