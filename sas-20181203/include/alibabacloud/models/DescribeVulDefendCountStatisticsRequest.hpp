// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDEFENDCOUNTSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDEFENDCOUNTSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDefendCountStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDefendCountStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VulType, vulType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDefendCountStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VulType, vulType_);
    };
    DescribeVulDefendCountStatisticsRequest() = default ;
    DescribeVulDefendCountStatisticsRequest(const DescribeVulDefendCountStatisticsRequest &) = default ;
    DescribeVulDefendCountStatisticsRequest(DescribeVulDefendCountStatisticsRequest &&) = default ;
    DescribeVulDefendCountStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDefendCountStatisticsRequest() = default ;
    DescribeVulDefendCountStatisticsRequest& operator=(const DescribeVulDefendCountStatisticsRequest &) = default ;
    DescribeVulDefendCountStatisticsRequest& operator=(DescribeVulDefendCountStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vulType_ == nullptr; };
    // vulType Field Functions 
    bool hasVulType() const { return this->vulType_ != nullptr;};
    void deleteVulType() { this->vulType_ = nullptr;};
    inline string getVulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
    inline DescribeVulDefendCountStatisticsRequest& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


  protected:
    // The type of the vulnerabilities. Valid values:
    // 
    // *   app: application vulnerabilities
    // *   emg: urgent vulnerabilities
    shared_ptr<string> vulType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
