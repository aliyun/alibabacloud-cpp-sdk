// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODYDATALIVYCOMPUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODYDATALIVYCOMPUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeResponseBodyDataLivyComputes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeResponseBodyDataLivyComputes& obj) { 
      DARABONBA_PTR_TO_JSON(computeId, computeId_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(endpointInner, endpointInner_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeResponseBodyDataLivyComputes& obj) { 
      DARABONBA_PTR_FROM_JSON(computeId, computeId_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(endpointInner, endpointInner_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListLivyComputeResponseBodyDataLivyComputes() = default ;
    ListLivyComputeResponseBodyDataLivyComputes(const ListLivyComputeResponseBodyDataLivyComputes &) = default ;
    ListLivyComputeResponseBodyDataLivyComputes(ListLivyComputeResponseBodyDataLivyComputes &&) = default ;
    ListLivyComputeResponseBodyDataLivyComputes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeResponseBodyDataLivyComputes() = default ;
    ListLivyComputeResponseBodyDataLivyComputes& operator=(const ListLivyComputeResponseBodyDataLivyComputes &) = default ;
    ListLivyComputeResponseBodyDataLivyComputes& operator=(ListLivyComputeResponseBodyDataLivyComputes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeId_ != nullptr
        && this->createdBy_ != nullptr && this->endpoint_ != nullptr && this->endpointInner_ != nullptr && this->gmtCreate_ != nullptr && this->name_ != nullptr
        && this->queueName_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // computeId Field Functions 
    bool hasComputeId() const { return this->computeId_ != nullptr;};
    void deleteComputeId() { this->computeId_ = nullptr;};
    inline string computeId() const { DARABONBA_PTR_GET_DEFAULT(computeId_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setComputeId(string computeId) { DARABONBA_PTR_SET_VALUE(computeId_, computeId) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointInner Field Functions 
    bool hasEndpointInner() const { return this->endpointInner_ != nullptr;};
    void deleteEndpointInner() { this->endpointInner_ = nullptr;};
    inline string endpointInner() const { DARABONBA_PTR_GET_DEFAULT(endpointInner_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setEndpointInner(string endpointInner) { DARABONBA_PTR_SET_VALUE(endpointInner_, endpointInner) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListLivyComputeResponseBodyDataLivyComputes& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListLivyComputeResponseBodyDataLivyComputes& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLivyComputeResponseBodyDataLivyComputes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> computeId_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> endpointInner_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
