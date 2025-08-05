// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYRESOURCESPECSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODYRESOURCESPECSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetStatisticResponseBodyResourceSpecStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetStatisticResponseBodyResourceSpecStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(IpNumSpec, ipNumSpec_);
      DARABONBA_PTR_TO_JSON(IpNumUsed, ipNumUsed_);
      DARABONBA_PTR_TO_JSON(SensitiveDataIpNumSpec, sensitiveDataIpNumSpec_);
      DARABONBA_PTR_TO_JSON(SensitiveDataIpNumUsed, sensitiveDataIpNumUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetStatisticResponseBodyResourceSpecStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(IpNumSpec, ipNumSpec_);
      DARABONBA_PTR_FROM_JSON(IpNumUsed, ipNumUsed_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataIpNumSpec, sensitiveDataIpNumSpec_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataIpNumUsed, sensitiveDataIpNumUsed_);
    };
    DescribeAssetStatisticResponseBodyResourceSpecStatistic() = default ;
    DescribeAssetStatisticResponseBodyResourceSpecStatistic(const DescribeAssetStatisticResponseBodyResourceSpecStatistic &) = default ;
    DescribeAssetStatisticResponseBodyResourceSpecStatistic(DescribeAssetStatisticResponseBodyResourceSpecStatistic &&) = default ;
    DescribeAssetStatisticResponseBodyResourceSpecStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetStatisticResponseBodyResourceSpecStatistic() = default ;
    DescribeAssetStatisticResponseBodyResourceSpecStatistic& operator=(const DescribeAssetStatisticResponseBodyResourceSpecStatistic &) = default ;
    DescribeAssetStatisticResponseBodyResourceSpecStatistic& operator=(DescribeAssetStatisticResponseBodyResourceSpecStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipNumSpec_ != nullptr
        && this->ipNumUsed_ != nullptr && this->sensitiveDataIpNumSpec_ != nullptr && this->sensitiveDataIpNumUsed_ != nullptr; };
    // ipNumSpec Field Functions 
    bool hasIpNumSpec() const { return this->ipNumSpec_ != nullptr;};
    void deleteIpNumSpec() { this->ipNumSpec_ = nullptr;};
    inline int32_t ipNumSpec() const { DARABONBA_PTR_GET_DEFAULT(ipNumSpec_, 0) };
    inline DescribeAssetStatisticResponseBodyResourceSpecStatistic& setIpNumSpec(int32_t ipNumSpec) { DARABONBA_PTR_SET_VALUE(ipNumSpec_, ipNumSpec) };


    // ipNumUsed Field Functions 
    bool hasIpNumUsed() const { return this->ipNumUsed_ != nullptr;};
    void deleteIpNumUsed() { this->ipNumUsed_ = nullptr;};
    inline int32_t ipNumUsed() const { DARABONBA_PTR_GET_DEFAULT(ipNumUsed_, 0) };
    inline DescribeAssetStatisticResponseBodyResourceSpecStatistic& setIpNumUsed(int32_t ipNumUsed) { DARABONBA_PTR_SET_VALUE(ipNumUsed_, ipNumUsed) };


    // sensitiveDataIpNumSpec Field Functions 
    bool hasSensitiveDataIpNumSpec() const { return this->sensitiveDataIpNumSpec_ != nullptr;};
    void deleteSensitiveDataIpNumSpec() { this->sensitiveDataIpNumSpec_ = nullptr;};
    inline int64_t sensitiveDataIpNumSpec() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataIpNumSpec_, 0L) };
    inline DescribeAssetStatisticResponseBodyResourceSpecStatistic& setSensitiveDataIpNumSpec(int64_t sensitiveDataIpNumSpec) { DARABONBA_PTR_SET_VALUE(sensitiveDataIpNumSpec_, sensitiveDataIpNumSpec) };


    // sensitiveDataIpNumUsed Field Functions 
    bool hasSensitiveDataIpNumUsed() const { return this->sensitiveDataIpNumUsed_ != nullptr;};
    void deleteSensitiveDataIpNumUsed() { this->sensitiveDataIpNumUsed_ = nullptr;};
    inline int64_t sensitiveDataIpNumUsed() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataIpNumUsed_, 0L) };
    inline DescribeAssetStatisticResponseBodyResourceSpecStatistic& setSensitiveDataIpNumUsed(int64_t sensitiveDataIpNumUsed) { DARABONBA_PTR_SET_VALUE(sensitiveDataIpNumUsed_, sensitiveDataIpNumUsed) };


  protected:
    // The number of public IP addresses that can be protected.
    std::shared_ptr<int32_t> ipNumSpec_ = nullptr;
    // The number of public IP addresses that are protected.
    std::shared_ptr<int32_t> ipNumUsed_ = nullptr;
    // The number of public IP addresses that can enable data leakage detection.
    std::shared_ptr<int64_t> sensitiveDataIpNumSpec_ = nullptr;
    // The number of public IP addresses that enabled data leakage detection.
    std::shared_ptr<int64_t> sensitiveDataIpNumUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
