// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULESDATASOURCEFILTERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULESDATASOURCEFILTERS_HPP_
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
  class UpdatePolicyV2RequestRulesDataSourceFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyV2RequestRulesDataSourceFilters& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyV2RequestRulesDataSourceFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdatePolicyV2RequestRulesDataSourceFilters() = default ;
    UpdatePolicyV2RequestRulesDataSourceFilters(const UpdatePolicyV2RequestRulesDataSourceFilters &) = default ;
    UpdatePolicyV2RequestRulesDataSourceFilters(UpdatePolicyV2RequestRulesDataSourceFilters &&) = default ;
    UpdatePolicyV2RequestRulesDataSourceFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyV2RequestRulesDataSourceFilters() = default ;
    UpdatePolicyV2RequestRulesDataSourceFilters& operator=(const UpdatePolicyV2RequestRulesDataSourceFilters &) = default ;
    UpdatePolicyV2RequestRulesDataSourceFilters& operator=(UpdatePolicyV2RequestRulesDataSourceFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceIds_ == nullptr
        && return this->sourceType_ == nullptr; };
    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & dataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> dataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline UpdatePolicyV2RequestRulesDataSourceFilters& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline UpdatePolicyV2RequestRulesDataSourceFilters& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdatePolicyV2RequestRulesDataSourceFilters& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<vector<string>> dataSourceIds_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: Elastic Compute Service (ECS) instance This type of data source is supported only if the **RuleType** parameter is set to **UDM_ECS_ONLY**.
    // *   **OSS**: Object Storage Service (OSS) bucket This type of data source is supported only if the **RuleType** parameter is set to **STANDARD**.
    // *   **NAS**: File Storage NAS (NAS) file system This type of data source is supported only if the **RuleType** parameter is set to **STANDARD**.
    // *   **ECS_FILE**: ECS file This type of data source is supported only if the **RuleType** parameter is set to **STANDARD**.
    // *   **OTS**: Tablestore instance This type of data source is supported only if the **RuleType** parameter is set to **STANDARD**.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
