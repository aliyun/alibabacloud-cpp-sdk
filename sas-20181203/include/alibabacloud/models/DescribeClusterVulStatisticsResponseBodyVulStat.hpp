// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSRESPONSEBODYVULSTAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSRESPONSEBODYVULSTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterVulStatisticsResponseBodyVulStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulStatisticsResponseBodyVulStat& obj) { 
      DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulStatisticsResponseBodyVulStat& obj) { 
      DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
    };
    DescribeClusterVulStatisticsResponseBodyVulStat() = default ;
    DescribeClusterVulStatisticsResponseBodyVulStat(const DescribeClusterVulStatisticsResponseBodyVulStat &) = default ;
    DescribeClusterVulStatisticsResponseBodyVulStat(DescribeClusterVulStatisticsResponseBodyVulStat &&) = default ;
    DescribeClusterVulStatisticsResponseBodyVulStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulStatisticsResponseBodyVulStat() = default ;
    DescribeClusterVulStatisticsResponseBodyVulStat& operator=(const DescribeClusterVulStatisticsResponseBodyVulStat &) = default ;
    DescribeClusterVulStatisticsResponseBodyVulStat& operator=(DescribeClusterVulStatisticsResponseBodyVulStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asapCount_ != nullptr
        && this->laterCount_ != nullptr && this->nntfCount_ != nullptr; };
    // asapCount Field Functions 
    bool hasAsapCount() const { return this->asapCount_ != nullptr;};
    void deleteAsapCount() { this->asapCount_ = nullptr;};
    inline string asapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, "") };
    inline DescribeClusterVulStatisticsResponseBodyVulStat& setAsapCount(string asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


    // laterCount Field Functions 
    bool hasLaterCount() const { return this->laterCount_ != nullptr;};
    void deleteLaterCount() { this->laterCount_ = nullptr;};
    inline string laterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, "") };
    inline DescribeClusterVulStatisticsResponseBodyVulStat& setLaterCount(string laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


    // nntfCount Field Functions 
    bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
    void deleteNntfCount() { this->nntfCount_ = nullptr;};
    inline string nntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, "") };
    inline DescribeClusterVulStatisticsResponseBodyVulStat& setNntfCount(string nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


  protected:
    // The number of high-risk vulnerabilities.
    std::shared_ptr<string> asapCount_ = nullptr;
    // The number of medium-risk vulnerabilities.
    std::shared_ptr<string> laterCount_ = nullptr;
    // The number of low-risk vulnerabilities.
    std::shared_ptr<string> nntfCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
