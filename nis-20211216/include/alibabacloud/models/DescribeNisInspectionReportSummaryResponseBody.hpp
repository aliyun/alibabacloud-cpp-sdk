// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    DescribeNisInspectionReportSummaryResponseBody() = default ;
    DescribeNisInspectionReportSummaryResponseBody(const DescribeNisInspectionReportSummaryResponseBody &) = default ;
    DescribeNisInspectionReportSummaryResponseBody(DescribeNisInspectionReportSummaryResponseBody &&) = default ;
    DescribeNisInspectionReportSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportSummaryResponseBody() = default ;
    DescribeNisInspectionReportSummaryResponseBody& operator=(const DescribeNisInspectionReportSummaryResponseBody &) = default ;
    DescribeNisInspectionReportSummaryResponseBody& operator=(DescribeNisInspectionReportSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(CheckItemCount, checkItemCount_);
        DARABONBA_PTR_TO_JSON(CheckResourceCount, checkResourceCount_);
        DARABONBA_PTR_TO_JSON(PassRateSummary, passRateSummary_);
        DARABONBA_PTR_TO_JSON(RiskSummary, riskSummary_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckItemCount, checkItemCount_);
        DARABONBA_PTR_FROM_JSON(CheckResourceCount, checkResourceCount_);
        DARABONBA_PTR_FROM_JSON(PassRateSummary, passRateSummary_);
        DARABONBA_PTR_FROM_JSON(RiskSummary, riskSummary_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskSummary& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        };
        friend void from_json(const Darabonba::Json& j, RiskSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        };
        RiskSummary() = default ;
        RiskSummary(const RiskSummary &) = default ;
        RiskSummary(RiskSummary &&) = default ;
        RiskSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskSummary() = default ;
        RiskSummary& operator=(const RiskSummary &) = default ;
        RiskSummary& operator=(RiskSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceCount_ == nullptr
        && this->riskCount_ == nullptr && this->riskLevel_ == nullptr && this->riskType_ == nullptr; };
        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
        inline RiskSummary& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
        inline RiskSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline RiskSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // riskType Field Functions 
        bool hasRiskType() const { return this->riskType_ != nullptr;};
        void deleteRiskType() { this->riskType_ = nullptr;};
        inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
        inline RiskSummary& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      protected:
        shared_ptr<int32_t> resourceCount_ {};
        shared_ptr<int32_t> riskCount_ {};
        shared_ptr<string> riskLevel_ {};
        shared_ptr<string> riskType_ {};
      };

      class PassRateSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassRateSummary& obj) { 
          DARABONBA_PTR_TO_JSON(PassRate, passRate_);
          DARABONBA_PTR_TO_JSON(PassRateScope, passRateScope_);
        };
        friend void from_json(const Darabonba::Json& j, PassRateSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
          DARABONBA_PTR_FROM_JSON(PassRateScope, passRateScope_);
        };
        PassRateSummary() = default ;
        PassRateSummary(const PassRateSummary &) = default ;
        PassRateSummary(PassRateSummary &&) = default ;
        PassRateSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassRateSummary() = default ;
        PassRateSummary& operator=(const PassRateSummary &) = default ;
        PassRateSummary& operator=(PassRateSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passRate_ == nullptr
        && this->passRateScope_ == nullptr; };
        // passRate Field Functions 
        bool hasPassRate() const { return this->passRate_ != nullptr;};
        void deletePassRate() { this->passRate_ = nullptr;};
        inline double getPassRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, 0.0) };
        inline PassRateSummary& setPassRate(double passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


        // passRateScope Field Functions 
        bool hasPassRateScope() const { return this->passRateScope_ != nullptr;};
        void deletePassRateScope() { this->passRateScope_ = nullptr;};
        inline string getPassRateScope() const { DARABONBA_PTR_GET_DEFAULT(passRateScope_, "") };
        inline PassRateSummary& setPassRateScope(string passRateScope) { DARABONBA_PTR_SET_VALUE(passRateScope_, passRateScope) };


      protected:
        shared_ptr<double> passRate_ {};
        shared_ptr<string> passRateScope_ {};
      };

      virtual bool empty() const override { return this->checkItemCount_ == nullptr
        && this->checkResourceCount_ == nullptr && this->passRateSummary_ == nullptr && this->riskSummary_ == nullptr; };
      // checkItemCount Field Functions 
      bool hasCheckItemCount() const { return this->checkItemCount_ != nullptr;};
      void deleteCheckItemCount() { this->checkItemCount_ = nullptr;};
      inline int32_t getCheckItemCount() const { DARABONBA_PTR_GET_DEFAULT(checkItemCount_, 0) };
      inline Summary& setCheckItemCount(int32_t checkItemCount) { DARABONBA_PTR_SET_VALUE(checkItemCount_, checkItemCount) };


      // checkResourceCount Field Functions 
      bool hasCheckResourceCount() const { return this->checkResourceCount_ != nullptr;};
      void deleteCheckResourceCount() { this->checkResourceCount_ = nullptr;};
      inline int32_t getCheckResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkResourceCount_, 0) };
      inline Summary& setCheckResourceCount(int32_t checkResourceCount) { DARABONBA_PTR_SET_VALUE(checkResourceCount_, checkResourceCount) };


      // passRateSummary Field Functions 
      bool hasPassRateSummary() const { return this->passRateSummary_ != nullptr;};
      void deletePassRateSummary() { this->passRateSummary_ = nullptr;};
      inline const vector<Summary::PassRateSummary> & getPassRateSummary() const { DARABONBA_PTR_GET_CONST(passRateSummary_, vector<Summary::PassRateSummary>) };
      inline vector<Summary::PassRateSummary> getPassRateSummary() { DARABONBA_PTR_GET(passRateSummary_, vector<Summary::PassRateSummary>) };
      inline Summary& setPassRateSummary(const vector<Summary::PassRateSummary> & passRateSummary) { DARABONBA_PTR_SET_VALUE(passRateSummary_, passRateSummary) };
      inline Summary& setPassRateSummary(vector<Summary::PassRateSummary> && passRateSummary) { DARABONBA_PTR_SET_RVALUE(passRateSummary_, passRateSummary) };


      // riskSummary Field Functions 
      bool hasRiskSummary() const { return this->riskSummary_ != nullptr;};
      void deleteRiskSummary() { this->riskSummary_ = nullptr;};
      inline const vector<Summary::RiskSummary> & getRiskSummary() const { DARABONBA_PTR_GET_CONST(riskSummary_, vector<Summary::RiskSummary>) };
      inline vector<Summary::RiskSummary> getRiskSummary() { DARABONBA_PTR_GET(riskSummary_, vector<Summary::RiskSummary>) };
      inline Summary& setRiskSummary(const vector<Summary::RiskSummary> & riskSummary) { DARABONBA_PTR_SET_VALUE(riskSummary_, riskSummary) };
      inline Summary& setRiskSummary(vector<Summary::RiskSummary> && riskSummary) { DARABONBA_PTR_SET_RVALUE(riskSummary_, riskSummary) };


    protected:
      shared_ptr<int32_t> checkItemCount_ {};
      shared_ptr<int32_t> checkResourceCount_ {};
      shared_ptr<vector<Summary::PassRateSummary>> passRateSummary_ {};
      shared_ptr<vector<Summary::RiskSummary>> riskSummary_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->inspectionReportId_ == nullptr && this->inspectionTaskId_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->summary_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string getInspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNisInspectionReportSummaryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const DescribeNisInspectionReportSummaryResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DescribeNisInspectionReportSummaryResponseBody::Summary) };
    inline DescribeNisInspectionReportSummaryResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, DescribeNisInspectionReportSummaryResponseBody::Summary) };
    inline DescribeNisInspectionReportSummaryResponseBody& setSummary(const DescribeNisInspectionReportSummaryResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DescribeNisInspectionReportSummaryResponseBody& setSummary(DescribeNisInspectionReportSummaryResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> inspectionReportId_ {};
    shared_ptr<string> inspectionTaskId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<DescribeNisInspectionReportSummaryResponseBody::Summary> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
