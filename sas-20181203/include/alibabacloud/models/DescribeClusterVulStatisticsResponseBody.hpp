// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterVulStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulStat, vulStat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulStat, vulStat_);
    };
    DescribeClusterVulStatisticsResponseBody() = default ;
    DescribeClusterVulStatisticsResponseBody(const DescribeClusterVulStatisticsResponseBody &) = default ;
    DescribeClusterVulStatisticsResponseBody(DescribeClusterVulStatisticsResponseBody &&) = default ;
    DescribeClusterVulStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulStatisticsResponseBody() = default ;
    DescribeClusterVulStatisticsResponseBody& operator=(const DescribeClusterVulStatisticsResponseBody &) = default ;
    DescribeClusterVulStatisticsResponseBody& operator=(DescribeClusterVulStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulStat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulStat& obj) { 
        DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
      };
      friend void from_json(const Darabonba::Json& j, VulStat& obj) { 
        DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
      };
      VulStat() = default ;
      VulStat(const VulStat &) = default ;
      VulStat(VulStat &&) = default ;
      VulStat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulStat() = default ;
      VulStat& operator=(const VulStat &) = default ;
      VulStat& operator=(VulStat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asapCount_ == nullptr
        && this->laterCount_ == nullptr && this->nntfCount_ == nullptr; };
      // asapCount Field Functions 
      bool hasAsapCount() const { return this->asapCount_ != nullptr;};
      void deleteAsapCount() { this->asapCount_ = nullptr;};
      inline string getAsapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, "") };
      inline VulStat& setAsapCount(string asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


      // laterCount Field Functions 
      bool hasLaterCount() const { return this->laterCount_ != nullptr;};
      void deleteLaterCount() { this->laterCount_ = nullptr;};
      inline string getLaterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, "") };
      inline VulStat& setLaterCount(string laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


      // nntfCount Field Functions 
      bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
      void deleteNntfCount() { this->nntfCount_ = nullptr;};
      inline string getNntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, "") };
      inline VulStat& setNntfCount(string nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


    protected:
      // The number of high-risk vulnerabilities.
      shared_ptr<string> asapCount_ {};
      // The number of medium-risk vulnerabilities.
      shared_ptr<string> laterCount_ {};
      // The number of low-risk vulnerabilities.
      shared_ptr<string> nntfCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulStat_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterVulStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulStat Field Functions 
    bool hasVulStat() const { return this->vulStat_ != nullptr;};
    void deleteVulStat() { this->vulStat_ = nullptr;};
    inline const DescribeClusterVulStatisticsResponseBody::VulStat & getVulStat() const { DARABONBA_PTR_GET_CONST(vulStat_, DescribeClusterVulStatisticsResponseBody::VulStat) };
    inline DescribeClusterVulStatisticsResponseBody::VulStat getVulStat() { DARABONBA_PTR_GET(vulStat_, DescribeClusterVulStatisticsResponseBody::VulStat) };
    inline DescribeClusterVulStatisticsResponseBody& setVulStat(const DescribeClusterVulStatisticsResponseBody::VulStat & vulStat) { DARABONBA_PTR_SET_VALUE(vulStat_, vulStat) };
    inline DescribeClusterVulStatisticsResponseBody& setVulStat(DescribeClusterVulStatisticsResponseBody::VulStat && vulStat) { DARABONBA_PTR_SET_RVALUE(vulStat_, vulStat) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics of the vulnerabilities.
    shared_ptr<DescribeClusterVulStatisticsResponseBody::VulStat> vulStat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
