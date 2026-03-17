// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOSCARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOSCARSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeQosCarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQosCarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QosCars, qosCars_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQosCarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QosCars, qosCars_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeQosCarsResponseBody() = default ;
    DescribeQosCarsResponseBody(const DescribeQosCarsResponseBody &) = default ;
    DescribeQosCarsResponseBody(DescribeQosCarsResponseBody &&) = default ;
    DescribeQosCarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQosCarsResponseBody() = default ;
    DescribeQosCarsResponseBody& operator=(const DescribeQosCarsResponseBody &) = default ;
    DescribeQosCarsResponseBody& operator=(DescribeQosCarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosCars : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosCars& obj) { 
        DARABONBA_PTR_TO_JSON(QosCar, qosCar_);
      };
      friend void from_json(const Darabonba::Json& j, QosCars& obj) { 
        DARABONBA_PTR_FROM_JSON(QosCar, qosCar_);
      };
      QosCars() = default ;
      QosCars(const QosCars &) = default ;
      QosCars(QosCars &&) = default ;
      QosCars(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosCars() = default ;
      QosCars& operator=(const QosCars &) = default ;
      QosCars& operator=(QosCars &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QosCar : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QosCar& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LimitType, limitType_);
          DARABONBA_PTR_TO_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
          DARABONBA_PTR_TO_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
          DARABONBA_PTR_TO_JSON(MinBandwidthAbs, minBandwidthAbs_);
          DARABONBA_PTR_TO_JSON(MinBandwidthPercent, minBandwidthPercent_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PercentSourceType, percentSourceType_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(QosCarId, qosCarId_);
          DARABONBA_PTR_TO_JSON(QosId, qosId_);
        };
        friend void from_json(const Darabonba::Json& j, QosCar& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
          DARABONBA_PTR_FROM_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
          DARABONBA_PTR_FROM_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
          DARABONBA_PTR_FROM_JSON(MinBandwidthAbs, minBandwidthAbs_);
          DARABONBA_PTR_FROM_JSON(MinBandwidthPercent, minBandwidthPercent_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PercentSourceType, percentSourceType_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(QosCarId, qosCarId_);
          DARABONBA_PTR_FROM_JSON(QosId, qosId_);
        };
        QosCar() = default ;
        QosCar(const QosCar &) = default ;
        QosCar(QosCar &&) = default ;
        QosCar(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QosCar() = default ;
        QosCar& operator=(const QosCar &) = default ;
        QosCar& operator=(QosCar &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->limitType_ == nullptr && this->maxBandwidthAbs_ == nullptr && this->maxBandwidthPercent_ == nullptr && this->minBandwidthAbs_ == nullptr && this->minBandwidthPercent_ == nullptr
        && this->name_ == nullptr && this->percentSourceType_ == nullptr && this->priority_ == nullptr && this->qosCarId_ == nullptr && this->qosId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline QosCar& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // limitType Field Functions 
        bool hasLimitType() const { return this->limitType_ != nullptr;};
        void deleteLimitType() { this->limitType_ = nullptr;};
        inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
        inline QosCar& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


        // maxBandwidthAbs Field Functions 
        bool hasMaxBandwidthAbs() const { return this->maxBandwidthAbs_ != nullptr;};
        void deleteMaxBandwidthAbs() { this->maxBandwidthAbs_ = nullptr;};
        inline int32_t getMaxBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthAbs_, 0) };
        inline QosCar& setMaxBandwidthAbs(int32_t maxBandwidthAbs) { DARABONBA_PTR_SET_VALUE(maxBandwidthAbs_, maxBandwidthAbs) };


        // maxBandwidthPercent Field Functions 
        bool hasMaxBandwidthPercent() const { return this->maxBandwidthPercent_ != nullptr;};
        void deleteMaxBandwidthPercent() { this->maxBandwidthPercent_ = nullptr;};
        inline int32_t getMaxBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthPercent_, 0) };
        inline QosCar& setMaxBandwidthPercent(int32_t maxBandwidthPercent) { DARABONBA_PTR_SET_VALUE(maxBandwidthPercent_, maxBandwidthPercent) };


        // minBandwidthAbs Field Functions 
        bool hasMinBandwidthAbs() const { return this->minBandwidthAbs_ != nullptr;};
        void deleteMinBandwidthAbs() { this->minBandwidthAbs_ = nullptr;};
        inline int32_t getMinBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthAbs_, 0) };
        inline QosCar& setMinBandwidthAbs(int32_t minBandwidthAbs) { DARABONBA_PTR_SET_VALUE(minBandwidthAbs_, minBandwidthAbs) };


        // minBandwidthPercent Field Functions 
        bool hasMinBandwidthPercent() const { return this->minBandwidthPercent_ != nullptr;};
        void deleteMinBandwidthPercent() { this->minBandwidthPercent_ = nullptr;};
        inline int32_t getMinBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthPercent_, 0) };
        inline QosCar& setMinBandwidthPercent(int32_t minBandwidthPercent) { DARABONBA_PTR_SET_VALUE(minBandwidthPercent_, minBandwidthPercent) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QosCar& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // percentSourceType Field Functions 
        bool hasPercentSourceType() const { return this->percentSourceType_ != nullptr;};
        void deletePercentSourceType() { this->percentSourceType_ = nullptr;};
        inline string getPercentSourceType() const { DARABONBA_PTR_GET_DEFAULT(percentSourceType_, "") };
        inline QosCar& setPercentSourceType(string percentSourceType) { DARABONBA_PTR_SET_VALUE(percentSourceType_, percentSourceType) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline QosCar& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // qosCarId Field Functions 
        bool hasQosCarId() const { return this->qosCarId_ != nullptr;};
        void deleteQosCarId() { this->qosCarId_ = nullptr;};
        inline string getQosCarId() const { DARABONBA_PTR_GET_DEFAULT(qosCarId_, "") };
        inline QosCar& setQosCarId(string qosCarId) { DARABONBA_PTR_SET_VALUE(qosCarId_, qosCarId) };


        // qosId Field Functions 
        bool hasQosId() const { return this->qosId_ != nullptr;};
        void deleteQosId() { this->qosId_ = nullptr;};
        inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
        inline QosCar& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> limitType_ {};
        shared_ptr<int32_t> maxBandwidthAbs_ {};
        shared_ptr<int32_t> maxBandwidthPercent_ {};
        shared_ptr<int32_t> minBandwidthAbs_ {};
        shared_ptr<int32_t> minBandwidthPercent_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> percentSourceType_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> qosCarId_ {};
        shared_ptr<string> qosId_ {};
      };

      virtual bool empty() const override { return this->qosCar_ == nullptr; };
      // qosCar Field Functions 
      bool hasQosCar() const { return this->qosCar_ != nullptr;};
      void deleteQosCar() { this->qosCar_ = nullptr;};
      inline const vector<QosCars::QosCar> & getQosCar() const { DARABONBA_PTR_GET_CONST(qosCar_, vector<QosCars::QosCar>) };
      inline vector<QosCars::QosCar> getQosCar() { DARABONBA_PTR_GET(qosCar_, vector<QosCars::QosCar>) };
      inline QosCars& setQosCar(const vector<QosCars::QosCar> & qosCar) { DARABONBA_PTR_SET_VALUE(qosCar_, qosCar) };
      inline QosCars& setQosCar(vector<QosCars::QosCar> && qosCar) { DARABONBA_PTR_SET_RVALUE(qosCar_, qosCar) };


    protected:
      shared_ptr<vector<QosCars::QosCar>> qosCar_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->qosCars_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeQosCarsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeQosCarsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qosCars Field Functions 
    bool hasQosCars() const { return this->qosCars_ != nullptr;};
    void deleteQosCars() { this->qosCars_ = nullptr;};
    inline const DescribeQosCarsResponseBody::QosCars & getQosCars() const { DARABONBA_PTR_GET_CONST(qosCars_, DescribeQosCarsResponseBody::QosCars) };
    inline DescribeQosCarsResponseBody::QosCars getQosCars() { DARABONBA_PTR_GET(qosCars_, DescribeQosCarsResponseBody::QosCars) };
    inline DescribeQosCarsResponseBody& setQosCars(const DescribeQosCarsResponseBody::QosCars & qosCars) { DARABONBA_PTR_SET_VALUE(qosCars_, qosCars) };
    inline DescribeQosCarsResponseBody& setQosCars(DescribeQosCarsResponseBody::QosCars && qosCars) { DARABONBA_PTR_SET_RVALUE(qosCars_, qosCars) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQosCarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeQosCarsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribeQosCarsResponseBody::QosCars> qosCars_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
