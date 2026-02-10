// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetStats, targetStats_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetStats, targetStats_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulTargetStatisticsResponseBody() = default ;
    DescribeVulTargetStatisticsResponseBody(const DescribeVulTargetStatisticsResponseBody &) = default ;
    DescribeVulTargetStatisticsResponseBody(DescribeVulTargetStatisticsResponseBody &&) = default ;
    DescribeVulTargetStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetStatisticsResponseBody() = default ;
    DescribeVulTargetStatisticsResponseBody& operator=(const DescribeVulTargetStatisticsResponseBody &) = default ;
    DescribeVulTargetStatisticsResponseBody& operator=(DescribeVulTargetStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetStats& obj) { 
        DARABONBA_PTR_TO_JSON(Targets, targets_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UuidCount, uuidCount_);
        DARABONBA_PTR_TO_JSON(VulType, vulType_);
      };
      friend void from_json(const Darabonba::Json& j, TargetStats& obj) { 
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UuidCount, uuidCount_);
        DARABONBA_PTR_FROM_JSON(VulType, vulType_);
      };
      TargetStats() = default ;
      TargetStats(const TargetStats &) = default ;
      TargetStats(TargetStats &&) = default ;
      TargetStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetStats() = default ;
      TargetStats& operator=(const TargetStats &) = default ;
      TargetStats& operator=(TargetStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Flag, flag_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Flag, flag_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flag_ == nullptr
        && this->target_ == nullptr && this->targetType_ == nullptr; };
        // flag Field Functions 
        bool hasFlag() const { return this->flag_ != nullptr;};
        void deleteFlag() { this->flag_ = nullptr;};
        inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
        inline Targets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline Targets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline Targets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // Indicates whether the configurations are applied to the server. Valid values:
        // 
        // *   **add**: yes
        // *   **del**: no
        shared_ptr<string> flag_ {};
        // The group ID or UUID of the server to which the configurations are applied.
        shared_ptr<string> target_ {};
        // The condition by which the configurations are applied to the server. Valid values:
        // 
        // *   **uuid**: the UUID of the server
        // *   **groupId**: the ID of the server group
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->targets_ == nullptr
        && this->totalCount_ == nullptr && this->uuidCount_ == nullptr && this->vulType_ == nullptr; };
      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<TargetStats::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<TargetStats::Targets>) };
      inline vector<TargetStats::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<TargetStats::Targets>) };
      inline TargetStats& setTargets(const vector<TargetStats::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline TargetStats& setTargets(vector<TargetStats::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline TargetStats& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // uuidCount Field Functions 
      bool hasUuidCount() const { return this->uuidCount_ != nullptr;};
      void deleteUuidCount() { this->uuidCount_ = nullptr;};
      inline int32_t getUuidCount() const { DARABONBA_PTR_GET_DEFAULT(uuidCount_, 0) };
      inline TargetStats& setUuidCount(int32_t uuidCount) { DARABONBA_PTR_SET_VALUE(uuidCount_, uuidCount) };


      // vulType Field Functions 
      bool hasVulType() const { return this->vulType_ != nullptr;};
      void deleteVulType() { this->vulType_ = nullptr;};
      inline string getVulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
      inline TargetStats& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


    protected:
      // An array that consists of available servers.
      shared_ptr<vector<TargetStats::Targets>> targets_ {};
      // The total number of servers.
      shared_ptr<int32_t> totalCount_ {};
      // The number of servers to which the configurations are applied.
      shared_ptr<int32_t> uuidCount_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   cve: Linux software vulnerabilities
      // *   sys: Windows system vulnerabilities
      // *   cms: Web-CMS vulnerabilities
      // *   emg: urgent vulnerabilities
      shared_ptr<string> vulType_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->targetStats_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulTargetStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetStats Field Functions 
    bool hasTargetStats() const { return this->targetStats_ != nullptr;};
    void deleteTargetStats() { this->targetStats_ = nullptr;};
    inline const vector<DescribeVulTargetStatisticsResponseBody::TargetStats> & getTargetStats() const { DARABONBA_PTR_GET_CONST(targetStats_, vector<DescribeVulTargetStatisticsResponseBody::TargetStats>) };
    inline vector<DescribeVulTargetStatisticsResponseBody::TargetStats> getTargetStats() { DARABONBA_PTR_GET(targetStats_, vector<DescribeVulTargetStatisticsResponseBody::TargetStats>) };
    inline DescribeVulTargetStatisticsResponseBody& setTargetStats(const vector<DescribeVulTargetStatisticsResponseBody::TargetStats> & targetStats) { DARABONBA_PTR_SET_VALUE(targetStats_, targetStats) };
    inline DescribeVulTargetStatisticsResponseBody& setTargetStats(vector<DescribeVulTargetStatisticsResponseBody::TargetStats> && targetStats) { DARABONBA_PTR_SET_RVALUE(targetStats_, targetStats) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulTargetStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the configurations of the vulnerability scan feature.
    shared_ptr<vector<DescribeVulTargetStatisticsResponseBody::TargetStats>> targetStats_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
