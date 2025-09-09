// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTaskResponseBodyFlushCacheResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& obj) { 
      DARABONBA_PTR_TO_JSON(DnsNodes, dnsNodes_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsNodes, dnsNodes_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResults &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults(DescribeIspFlushCacheTaskResponseBodyFlushCacheResults &&) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTaskResponseBodyFlushCacheResults() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& operator=(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResults &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& operator=(DescribeIspFlushCacheTaskResponseBodyFlushCacheResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsNodes_ != nullptr
        && this->province_ != nullptr; };
    // dnsNodes Field Functions 
    bool hasDnsNodes() const { return this->dnsNodes_ != nullptr;};
    void deleteDnsNodes() { this->dnsNodes_ = nullptr;};
    inline const vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes> & dnsNodes() const { DARABONBA_PTR_GET_CONST(dnsNodes_, vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes>) };
    inline vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes> dnsNodes() { DARABONBA_PTR_GET(dnsNodes_, vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes>) };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& setDnsNodes(const vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes> & dnsNodes) { DARABONBA_PTR_SET_VALUE(dnsNodes_, dnsNodes) };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& setDnsNodes(vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes> && dnsNodes) { DARABONBA_PTR_SET_RVALUE(dnsNodes_, dnsNodes) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResults& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    std::shared_ptr<vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes>> dnsNodes_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
