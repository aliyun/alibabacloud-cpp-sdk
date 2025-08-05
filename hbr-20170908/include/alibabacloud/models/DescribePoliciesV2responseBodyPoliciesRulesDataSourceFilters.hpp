// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIESRULESDATASOURCEFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIESRULESDATASOURCEFILTERS_HPP_
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
  class DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters() = default ;
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters(const DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters &) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters(DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters &&) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters() = default ;
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& operator=(const DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters &) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& operator=(DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceIds_ != nullptr
        && this->sourceType_ != nullptr; };
    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & dataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> dataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Deprecated.
    std::shared_ptr<vector<string>> dataSourceIds_ = nullptr;
    // Data source type. The value range is as follows: 
    // - **UDM_ECS**: Indicates ECS server backup. 
    // - **OSS**: Indicates OSS backup. 
    // - **NAS**: Indicates Alibaba Cloud NAS backup. 
    // - **ECS_FILE**: Indicates ECS file backup. 
    // - **OTS**: Indicates Tablestore backup.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
