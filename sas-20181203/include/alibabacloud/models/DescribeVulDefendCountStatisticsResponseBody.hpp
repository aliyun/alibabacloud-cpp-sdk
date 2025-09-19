// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDEFENDCOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDEFENDCOUNTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDefendCountStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDefendCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RaspDefendedCount, raspDefendedCount_);
      DARABONBA_PTR_TO_JSON(RaspDefensibleCount, raspDefensibleCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDefendCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RaspDefendedCount, raspDefendedCount_);
      DARABONBA_PTR_FROM_JSON(RaspDefensibleCount, raspDefensibleCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVulDefendCountStatisticsResponseBody() = default ;
    DescribeVulDefendCountStatisticsResponseBody(const DescribeVulDefendCountStatisticsResponseBody &) = default ;
    DescribeVulDefendCountStatisticsResponseBody(DescribeVulDefendCountStatisticsResponseBody &&) = default ;
    DescribeVulDefendCountStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDefendCountStatisticsResponseBody() = default ;
    DescribeVulDefendCountStatisticsResponseBody& operator=(const DescribeVulDefendCountStatisticsResponseBody &) = default ;
    DescribeVulDefendCountStatisticsResponseBody& operator=(DescribeVulDefendCountStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->raspDefendedCount_ != nullptr
        && this->raspDefensibleCount_ != nullptr && this->requestId_ != nullptr; };
    // raspDefendedCount Field Functions 
    bool hasRaspDefendedCount() const { return this->raspDefendedCount_ != nullptr;};
    void deleteRaspDefendedCount() { this->raspDefendedCount_ = nullptr;};
    inline int32_t raspDefendedCount() const { DARABONBA_PTR_GET_DEFAULT(raspDefendedCount_, 0) };
    inline DescribeVulDefendCountStatisticsResponseBody& setRaspDefendedCount(int32_t raspDefendedCount) { DARABONBA_PTR_SET_VALUE(raspDefendedCount_, raspDefendedCount) };


    // raspDefensibleCount Field Functions 
    bool hasRaspDefensibleCount() const { return this->raspDefensibleCount_ != nullptr;};
    void deleteRaspDefensibleCount() { this->raspDefensibleCount_ = nullptr;};
    inline int32_t raspDefensibleCount() const { DARABONBA_PTR_GET_DEFAULT(raspDefensibleCount_, 0) };
    inline DescribeVulDefendCountStatisticsResponseBody& setRaspDefensibleCount(int32_t raspDefensibleCount) { DARABONBA_PTR_SET_VALUE(raspDefensibleCount_, raspDefensibleCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulDefendCountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of defended vulnerabilities.
    std::shared_ptr<int32_t> raspDefendedCount_ = nullptr;
    // The number of supported vulnerabilities.
    std::shared_ptr<int32_t> raspDefensibleCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
