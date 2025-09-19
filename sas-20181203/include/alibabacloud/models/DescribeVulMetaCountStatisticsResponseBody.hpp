// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULMETACOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULMETACOUNTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulMetaCountStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulMetaCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(CveCount, cveCount_);
      DARABONBA_PTR_TO_JSON(RaspDefendCount, raspDefendCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SysCount, sysCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulMetaCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(CveCount, cveCount_);
      DARABONBA_PTR_FROM_JSON(RaspDefendCount, raspDefendCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SysCount, sysCount_);
    };
    DescribeVulMetaCountStatisticsResponseBody() = default ;
    DescribeVulMetaCountStatisticsResponseBody(const DescribeVulMetaCountStatisticsResponseBody &) = default ;
    DescribeVulMetaCountStatisticsResponseBody(DescribeVulMetaCountStatisticsResponseBody &&) = default ;
    DescribeVulMetaCountStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulMetaCountStatisticsResponseBody() = default ;
    DescribeVulMetaCountStatisticsResponseBody& operator=(const DescribeVulMetaCountStatisticsResponseBody &) = default ;
    DescribeVulMetaCountStatisticsResponseBody& operator=(DescribeVulMetaCountStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCount_ != nullptr
        && this->cveCount_ != nullptr && this->raspDefendCount_ != nullptr && this->requestId_ != nullptr && this->sysCount_ != nullptr; };
    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int32_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
    inline DescribeVulMetaCountStatisticsResponseBody& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // cveCount Field Functions 
    bool hasCveCount() const { return this->cveCount_ != nullptr;};
    void deleteCveCount() { this->cveCount_ = nullptr;};
    inline int32_t cveCount() const { DARABONBA_PTR_GET_DEFAULT(cveCount_, 0) };
    inline DescribeVulMetaCountStatisticsResponseBody& setCveCount(int32_t cveCount) { DARABONBA_PTR_SET_VALUE(cveCount_, cveCount) };


    // raspDefendCount Field Functions 
    bool hasRaspDefendCount() const { return this->raspDefendCount_ != nullptr;};
    void deleteRaspDefendCount() { this->raspDefendCount_ = nullptr;};
    inline int32_t raspDefendCount() const { DARABONBA_PTR_GET_DEFAULT(raspDefendCount_, 0) };
    inline DescribeVulMetaCountStatisticsResponseBody& setRaspDefendCount(int32_t raspDefendCount) { DARABONBA_PTR_SET_VALUE(raspDefendCount_, raspDefendCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulMetaCountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sysCount Field Functions 
    bool hasSysCount() const { return this->sysCount_ != nullptr;};
    void deleteSysCount() { this->sysCount_ = nullptr;};
    inline int32_t sysCount() const { DARABONBA_PTR_GET_DEFAULT(sysCount_, 0) };
    inline DescribeVulMetaCountStatisticsResponseBody& setSysCount(int32_t sysCount) { DARABONBA_PTR_SET_VALUE(sysCount_, sysCount) };


  protected:
    // The number of application vulnerabilities.
    std::shared_ptr<int32_t> appCount_ = nullptr;
    // The number of Linux software vulnerabilities.
    std::shared_ptr<int32_t> cveCount_ = nullptr;
    // The number of vulnerabilities that can be defended by the application protection feature.
    std::shared_ptr<int32_t> raspDefendCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of Windows system vulnerabilities.
    std::shared_ptr<int32_t> sysCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
