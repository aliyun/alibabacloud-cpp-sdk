// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODYDATAGOVERNANCEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODYDATAGOVERNANCEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetGovernanceMetricsResponseBodyDataGovernanceMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceMetricsResponseBodyDataGovernanceMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_TO_JSON(GovernanceScore, governanceScore_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceMetricsResponseBodyDataGovernanceMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_FROM_JSON(GovernanceScore, governanceScore_);
    };
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics() = default ;
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics(const GetGovernanceMetricsResponseBodyDataGovernanceMetrics &) = default ;
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics(GetGovernanceMetricsResponseBodyDataGovernanceMetrics &&) = default ;
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceMetricsResponseBodyDataGovernanceMetrics() = default ;
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics& operator=(const GetGovernanceMetricsResponseBodyDataGovernanceMetrics &) = default ;
    GetGovernanceMetricsResponseBodyDataGovernanceMetrics& operator=(GetGovernanceMetricsResponseBodyDataGovernanceMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnsSchema_ != nullptr
        && this->governanceItem_ != nullptr && this->governanceScore_ != nullptr; };
    // columnsSchema Field Functions 
    bool hasColumnsSchema() const { return this->columnsSchema_ != nullptr;};
    void deleteColumnsSchema() { this->columnsSchema_ = nullptr;};
    inline string columnsSchema() const { DARABONBA_PTR_GET_DEFAULT(columnsSchema_, "") };
    inline GetGovernanceMetricsResponseBodyDataGovernanceMetrics& setColumnsSchema(string columnsSchema) { DARABONBA_PTR_SET_VALUE(columnsSchema_, columnsSchema) };


    // governanceItem Field Functions 
    bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
    void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
    inline string governanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
    inline GetGovernanceMetricsResponseBodyDataGovernanceMetrics& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


    // governanceScore Field Functions 
    bool hasGovernanceScore() const { return this->governanceScore_ != nullptr;};
    void deleteGovernanceScore() { this->governanceScore_ = nullptr;};
    inline string governanceScore() const { DARABONBA_PTR_GET_DEFAULT(governanceScore_, "") };
    inline GetGovernanceMetricsResponseBodyDataGovernanceMetrics& setGovernanceScore(string governanceScore) { DARABONBA_PTR_SET_VALUE(governanceScore_, governanceScore) };


  protected:
    std::shared_ptr<string> columnsSchema_ = nullptr;
    std::shared_ptr<string> governanceItem_ = nullptr;
    std::shared_ptr<string> governanceScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
