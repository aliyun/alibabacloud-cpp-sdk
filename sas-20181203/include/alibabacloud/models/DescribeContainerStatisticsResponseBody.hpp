// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerStatisticsResponseBody() = default ;
    DescribeContainerStatisticsResponseBody(const DescribeContainerStatisticsResponseBody &) = default ;
    DescribeContainerStatisticsResponseBody(DescribeContainerStatisticsResponseBody &&) = default ;
    DescribeContainerStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerStatisticsResponseBody() = default ;
    DescribeContainerStatisticsResponseBody& operator=(const DescribeContainerStatisticsResponseBody &) = default ;
    DescribeContainerStatisticsResponseBody& operator=(DescribeContainerStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RemindAlarmCount, remindAlarmCount_);
        DARABONBA_PTR_TO_JSON(SeriousAlarmCount, seriousAlarmCount_);
        DARABONBA_PTR_TO_JSON(SuspiciousAlarmCount, suspiciousAlarmCount_);
        DARABONBA_PTR_TO_JSON(TotalAlarmCount, totalAlarmCount_);
        DARABONBA_PTR_TO_JSON(TotalNode, totalNode_);
        DARABONBA_PTR_TO_JSON(hasRiskNode, hasRiskNode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RemindAlarmCount, remindAlarmCount_);
        DARABONBA_PTR_FROM_JSON(SeriousAlarmCount, seriousAlarmCount_);
        DARABONBA_PTR_FROM_JSON(SuspiciousAlarmCount, suspiciousAlarmCount_);
        DARABONBA_PTR_FROM_JSON(TotalAlarmCount, totalAlarmCount_);
        DARABONBA_PTR_FROM_JSON(TotalNode, totalNode_);
        DARABONBA_PTR_FROM_JSON(hasRiskNode, hasRiskNode_);
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
      virtual bool empty() const override { return this->remindAlarmCount_ == nullptr
        && this->seriousAlarmCount_ == nullptr && this->suspiciousAlarmCount_ == nullptr && this->totalAlarmCount_ == nullptr && this->totalNode_ == nullptr && this->hasRiskNode_ == nullptr; };
      // remindAlarmCount Field Functions 
      bool hasRemindAlarmCount() const { return this->remindAlarmCount_ != nullptr;};
      void deleteRemindAlarmCount() { this->remindAlarmCount_ = nullptr;};
      inline int32_t getRemindAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(remindAlarmCount_, 0) };
      inline Data& setRemindAlarmCount(int32_t remindAlarmCount) { DARABONBA_PTR_SET_VALUE(remindAlarmCount_, remindAlarmCount) };


      // seriousAlarmCount Field Functions 
      bool hasSeriousAlarmCount() const { return this->seriousAlarmCount_ != nullptr;};
      void deleteSeriousAlarmCount() { this->seriousAlarmCount_ = nullptr;};
      inline int32_t getSeriousAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(seriousAlarmCount_, 0) };
      inline Data& setSeriousAlarmCount(int32_t seriousAlarmCount) { DARABONBA_PTR_SET_VALUE(seriousAlarmCount_, seriousAlarmCount) };


      // suspiciousAlarmCount Field Functions 
      bool hasSuspiciousAlarmCount() const { return this->suspiciousAlarmCount_ != nullptr;};
      void deleteSuspiciousAlarmCount() { this->suspiciousAlarmCount_ = nullptr;};
      inline int32_t getSuspiciousAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousAlarmCount_, 0) };
      inline Data& setSuspiciousAlarmCount(int32_t suspiciousAlarmCount) { DARABONBA_PTR_SET_VALUE(suspiciousAlarmCount_, suspiciousAlarmCount) };


      // totalAlarmCount Field Functions 
      bool hasTotalAlarmCount() const { return this->totalAlarmCount_ != nullptr;};
      void deleteTotalAlarmCount() { this->totalAlarmCount_ = nullptr;};
      inline int32_t getTotalAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(totalAlarmCount_, 0) };
      inline Data& setTotalAlarmCount(int32_t totalAlarmCount) { DARABONBA_PTR_SET_VALUE(totalAlarmCount_, totalAlarmCount) };


      // totalNode Field Functions 
      bool hasTotalNode() const { return this->totalNode_ != nullptr;};
      void deleteTotalNode() { this->totalNode_ = nullptr;};
      inline int32_t getTotalNode() const { DARABONBA_PTR_GET_DEFAULT(totalNode_, 0) };
      inline Data& setTotalNode(int32_t totalNode) { DARABONBA_PTR_SET_VALUE(totalNode_, totalNode) };


      // hasRiskNode Field Functions 
      bool hasHasRiskNode() const { return this->hasRiskNode_ != nullptr;};
      void deleteHasRiskNode() { this->hasRiskNode_ = nullptr;};
      inline int32_t getHasRiskNode() const { DARABONBA_PTR_GET_DEFAULT(hasRiskNode_, 0) };
      inline Data& setHasRiskNode(int32_t hasRiskNode) { DARABONBA_PTR_SET_VALUE(hasRiskNode_, hasRiskNode) };


    protected:
      // The number of alerts whose risk level is **Reminder**.
      shared_ptr<int32_t> remindAlarmCount_ {};
      // The number of alerts whose risk level is **Urgent**.
      shared_ptr<int32_t> seriousAlarmCount_ {};
      // The number of alerts whose risk level is **Suspicious**.
      shared_ptr<int32_t> suspiciousAlarmCount_ {};
      // The total number of alerts that are generated in the current container cluster.
      shared_ptr<int32_t> totalAlarmCount_ {};
      // The total number of nodes in the current container cluster.
      shared_ptr<int32_t> totalNode_ {};
      // The number of nodes on which alerts are generated in the current container cluster.
      shared_ptr<int32_t> hasRiskNode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContainerStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeContainerStatisticsResponseBody::Data) };
    inline DescribeContainerStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeContainerStatisticsResponseBody::Data) };
    inline DescribeContainerStatisticsResponseBody& setData(const DescribeContainerStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContainerStatisticsResponseBody& setData(DescribeContainerStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert statistics of container assets.
    shared_ptr<DescribeContainerStatisticsResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
