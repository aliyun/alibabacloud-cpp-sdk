// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOSESRESPONSEBODY_HPP_
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
  class DescribeQosesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQosesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Qoses, qoses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQosesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Qoses, qoses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeQosesResponseBody() = default ;
    DescribeQosesResponseBody(const DescribeQosesResponseBody &) = default ;
    DescribeQosesResponseBody(DescribeQosesResponseBody &&) = default ;
    DescribeQosesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQosesResponseBody() = default ;
    DescribeQosesResponseBody& operator=(const DescribeQosesResponseBody &) = default ;
    DescribeQosesResponseBody& operator=(DescribeQosesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Qoses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Qoses& obj) { 
        DARABONBA_PTR_TO_JSON(Qos, qos_);
      };
      friend void from_json(const Darabonba::Json& j, Qoses& obj) { 
        DARABONBA_PTR_FROM_JSON(Qos, qos_);
      };
      Qoses() = default ;
      Qoses(const Qoses &) = default ;
      Qoses(Qoses &&) = default ;
      Qoses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Qoses() = default ;
      Qoses& operator=(const Qoses &) = default ;
      Qoses& operator=(Qoses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Qos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Qos& obj) { 
          DARABONBA_PTR_TO_JSON(QosDescription, qosDescription_);
          DARABONBA_PTR_TO_JSON(QosId, qosId_);
          DARABONBA_PTR_TO_JSON(QosName, qosName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SagCount, sagCount_);
          DARABONBA_PTR_TO_JSON(SmartAGIds, smartAGIds_);
        };
        friend void from_json(const Darabonba::Json& j, Qos& obj) { 
          DARABONBA_PTR_FROM_JSON(QosDescription, qosDescription_);
          DARABONBA_PTR_FROM_JSON(QosId, qosId_);
          DARABONBA_PTR_FROM_JSON(QosName, qosName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SagCount, sagCount_);
          DARABONBA_PTR_FROM_JSON(SmartAGIds, smartAGIds_);
        };
        Qos() = default ;
        Qos(const Qos &) = default ;
        Qos(Qos &&) = default ;
        Qos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Qos() = default ;
        Qos& operator=(const Qos &) = default ;
        Qos& operator=(Qos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->qosDescription_ == nullptr
        && this->qosId_ == nullptr && this->qosName_ == nullptr && this->resourceGroupId_ == nullptr && this->sagCount_ == nullptr && this->smartAGIds_ == nullptr; };
        // qosDescription Field Functions 
        bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
        void deleteQosDescription() { this->qosDescription_ = nullptr;};
        inline string getQosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
        inline Qos& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


        // qosId Field Functions 
        bool hasQosId() const { return this->qosId_ != nullptr;};
        void deleteQosId() { this->qosId_ = nullptr;};
        inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
        inline Qos& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


        // qosName Field Functions 
        bool hasQosName() const { return this->qosName_ != nullptr;};
        void deleteQosName() { this->qosName_ = nullptr;};
        inline string getQosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
        inline Qos& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Qos& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sagCount Field Functions 
        bool hasSagCount() const { return this->sagCount_ != nullptr;};
        void deleteSagCount() { this->sagCount_ = nullptr;};
        inline string getSagCount() const { DARABONBA_PTR_GET_DEFAULT(sagCount_, "") };
        inline Qos& setSagCount(string sagCount) { DARABONBA_PTR_SET_VALUE(sagCount_, sagCount) };


        // smartAGIds Field Functions 
        bool hasSmartAGIds() const { return this->smartAGIds_ != nullptr;};
        void deleteSmartAGIds() { this->smartAGIds_ = nullptr;};
        inline string getSmartAGIds() const { DARABONBA_PTR_GET_DEFAULT(smartAGIds_, "") };
        inline Qos& setSmartAGIds(string smartAGIds) { DARABONBA_PTR_SET_VALUE(smartAGIds_, smartAGIds) };


      protected:
        shared_ptr<string> qosDescription_ {};
        shared_ptr<string> qosId_ {};
        shared_ptr<string> qosName_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> sagCount_ {};
        shared_ptr<string> smartAGIds_ {};
      };

      virtual bool empty() const override { return this->qos_ == nullptr; };
      // qos Field Functions 
      bool hasQos() const { return this->qos_ != nullptr;};
      void deleteQos() { this->qos_ = nullptr;};
      inline const vector<Qoses::Qos> & getQos() const { DARABONBA_PTR_GET_CONST(qos_, vector<Qoses::Qos>) };
      inline vector<Qoses::Qos> getQos() { DARABONBA_PTR_GET(qos_, vector<Qoses::Qos>) };
      inline Qoses& setQos(const vector<Qoses::Qos> & qos) { DARABONBA_PTR_SET_VALUE(qos_, qos) };
      inline Qoses& setQos(vector<Qoses::Qos> && qos) { DARABONBA_PTR_SET_RVALUE(qos_, qos) };


    protected:
      shared_ptr<vector<Qoses::Qos>> qos_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->qoses_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeQosesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeQosesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qoses Field Functions 
    bool hasQoses() const { return this->qoses_ != nullptr;};
    void deleteQoses() { this->qoses_ = nullptr;};
    inline const DescribeQosesResponseBody::Qoses & getQoses() const { DARABONBA_PTR_GET_CONST(qoses_, DescribeQosesResponseBody::Qoses) };
    inline DescribeQosesResponseBody::Qoses getQoses() { DARABONBA_PTR_GET(qoses_, DescribeQosesResponseBody::Qoses) };
    inline DescribeQosesResponseBody& setQoses(const DescribeQosesResponseBody::Qoses & qoses) { DARABONBA_PTR_SET_VALUE(qoses_, qoses) };
    inline DescribeQosesResponseBody& setQoses(DescribeQosesResponseBody::Qoses && qoses) { DARABONBA_PTR_SET_RVALUE(qoses_, qoses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQosesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeQosesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribeQosesResponseBody::Qoses> qoses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of QoS polices.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
