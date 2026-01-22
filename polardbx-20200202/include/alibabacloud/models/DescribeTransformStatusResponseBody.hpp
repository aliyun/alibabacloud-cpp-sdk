// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTransformStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransformStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransformStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTransformStatusResponseBody() = default ;
    DescribeTransformStatusResponseBody(const DescribeTransformStatusResponseBody &) = default ;
    DescribeTransformStatusResponseBody(DescribeTransformStatusResponseBody &&) = default ;
    DescribeTransformStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransformStatusResponseBody() = default ;
    DescribeTransformStatusResponseBody& operator=(const DescribeTransformStatusResponseBody &) = default ;
    DescribeTransformStatusResponseBody& operator=(DescribeTransformStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanCancel, canCancel_);
        DARABONBA_PTR_TO_JSON(CanFinish, canFinish_);
        DARABONBA_PTR_TO_JSON(CanSwitch, canSwitch_);
        DARABONBA_PTR_TO_JSON(CanUndoSwitch, canUndoSwitch_);
        DARABONBA_PTR_TO_JSON(EnterpriseInsName, enterpriseInsName_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_ANY_TO_JSON(ReportSummary, reportSummary_);
        DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(StandardInsName, standardInsName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanCancel, canCancel_);
        DARABONBA_PTR_FROM_JSON(CanFinish, canFinish_);
        DARABONBA_PTR_FROM_JSON(CanSwitch, canSwitch_);
        DARABONBA_PTR_FROM_JSON(CanUndoSwitch, canUndoSwitch_);
        DARABONBA_PTR_FROM_JSON(EnterpriseInsName, enterpriseInsName_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_ANY_FROM_JSON(ReportSummary, reportSummary_);
        DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(StandardInsName, standardInsName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->canCancel_ == nullptr
        && this->canFinish_ == nullptr && this->canSwitch_ == nullptr && this->canUndoSwitch_ == nullptr && this->enterpriseInsName_ == nullptr && this->phase_ == nullptr
        && this->reportSummary_ == nullptr && this->reportTime_ == nullptr && this->standardInsName_ == nullptr; };
      // canCancel Field Functions 
      bool hasCanCancel() const { return this->canCancel_ != nullptr;};
      void deleteCanCancel() { this->canCancel_ = nullptr;};
      inline bool getCanCancel() const { DARABONBA_PTR_GET_DEFAULT(canCancel_, false) };
      inline Data& setCanCancel(bool canCancel) { DARABONBA_PTR_SET_VALUE(canCancel_, canCancel) };


      // canFinish Field Functions 
      bool hasCanFinish() const { return this->canFinish_ != nullptr;};
      void deleteCanFinish() { this->canFinish_ = nullptr;};
      inline bool getCanFinish() const { DARABONBA_PTR_GET_DEFAULT(canFinish_, false) };
      inline Data& setCanFinish(bool canFinish) { DARABONBA_PTR_SET_VALUE(canFinish_, canFinish) };


      // canSwitch Field Functions 
      bool hasCanSwitch() const { return this->canSwitch_ != nullptr;};
      void deleteCanSwitch() { this->canSwitch_ = nullptr;};
      inline bool getCanSwitch() const { DARABONBA_PTR_GET_DEFAULT(canSwitch_, false) };
      inline Data& setCanSwitch(bool canSwitch) { DARABONBA_PTR_SET_VALUE(canSwitch_, canSwitch) };


      // canUndoSwitch Field Functions 
      bool hasCanUndoSwitch() const { return this->canUndoSwitch_ != nullptr;};
      void deleteCanUndoSwitch() { this->canUndoSwitch_ = nullptr;};
      inline bool getCanUndoSwitch() const { DARABONBA_PTR_GET_DEFAULT(canUndoSwitch_, false) };
      inline Data& setCanUndoSwitch(bool canUndoSwitch) { DARABONBA_PTR_SET_VALUE(canUndoSwitch_, canUndoSwitch) };


      // enterpriseInsName Field Functions 
      bool hasEnterpriseInsName() const { return this->enterpriseInsName_ != nullptr;};
      void deleteEnterpriseInsName() { this->enterpriseInsName_ = nullptr;};
      inline string getEnterpriseInsName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseInsName_, "") };
      inline Data& setEnterpriseInsName(string enterpriseInsName) { DARABONBA_PTR_SET_VALUE(enterpriseInsName_, enterpriseInsName) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Data& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // reportSummary Field Functions 
      bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
      void deleteReportSummary() { this->reportSummary_ = nullptr;};
      inline       const Darabonba::Json & getReportSummary() const { DARABONBA_GET(reportSummary_) };
      Darabonba::Json & getReportSummary() { DARABONBA_GET(reportSummary_) };
      inline Data& setReportSummary(const Darabonba::Json & reportSummary) { DARABONBA_SET_VALUE(reportSummary_, reportSummary) };
      inline Data& setReportSummary(Darabonba::Json && reportSummary) { DARABONBA_SET_RVALUE(reportSummary_, reportSummary) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline int64_t getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, 0L) };
      inline Data& setReportTime(int64_t reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      // standardInsName Field Functions 
      bool hasStandardInsName() const { return this->standardInsName_ != nullptr;};
      void deleteStandardInsName() { this->standardInsName_ = nullptr;};
      inline string getStandardInsName() const { DARABONBA_PTR_GET_DEFAULT(standardInsName_, "") };
      inline Data& setStandardInsName(string standardInsName) { DARABONBA_PTR_SET_VALUE(standardInsName_, standardInsName) };


    protected:
      shared_ptr<bool> canCancel_ {};
      shared_ptr<bool> canFinish_ {};
      shared_ptr<bool> canSwitch_ {};
      shared_ptr<bool> canUndoSwitch_ {};
      shared_ptr<string> enterpriseInsName_ {};
      shared_ptr<string> phase_ {};
      Darabonba::Json reportSummary_ {};
      shared_ptr<int64_t> reportTime_ {};
      shared_ptr<string> standardInsName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTransformStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTransformStatusResponseBody::Data) };
    inline DescribeTransformStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTransformStatusResponseBody::Data) };
    inline DescribeTransformStatusResponseBody& setData(const DescribeTransformStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTransformStatusResponseBody& setData(DescribeTransformStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransformStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeTransformStatusResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
