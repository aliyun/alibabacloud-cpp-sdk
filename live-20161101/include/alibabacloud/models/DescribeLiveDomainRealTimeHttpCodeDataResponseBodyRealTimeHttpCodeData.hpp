// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(const DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(const vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
