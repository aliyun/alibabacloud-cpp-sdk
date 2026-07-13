// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicableOperations, applicableOperations_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NluServiceParamsJson, nluServiceParamsJson_);
        DARABONBA_PTR_TO_JSON(Numbers, numbers_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnionInstanceId, unionInstanceId_);
        DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicableOperations, applicableOperations_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NluServiceParamsJson, nluServiceParamsJson_);
        DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnionInstanceId, unionInstanceId_);
        DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicableOperations_ == nullptr
        && this->concurrency_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->modifyTime_ == nullptr
        && this->modifyUserName_ == nullptr && this->name_ == nullptr && this->nluServiceParamsJson_ == nullptr && this->numbers_ == nullptr && this->status_ == nullptr
        && this->unionInstanceId_ == nullptr && this->unionSource_ == nullptr; };
      // applicableOperations Field Functions 
      bool hasApplicableOperations() const { return this->applicableOperations_ != nullptr;};
      void deleteApplicableOperations() { this->applicableOperations_ = nullptr;};
      inline const vector<string> & getApplicableOperations() const { DARABONBA_PTR_GET_CONST(applicableOperations_, vector<string>) };
      inline vector<string> getApplicableOperations() { DARABONBA_PTR_GET(applicableOperations_, vector<string>) };
      inline Instances& setApplicableOperations(const vector<string> & applicableOperations) { DARABONBA_PTR_SET_VALUE(applicableOperations_, applicableOperations) };
      inline Instances& setApplicableOperations(vector<string> && applicableOperations) { DARABONBA_PTR_SET_RVALUE(applicableOperations_, applicableOperations) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
      inline Instances& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Instances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Instances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Instances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline Instances& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Instances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nluServiceParamsJson Field Functions 
      bool hasNluServiceParamsJson() const { return this->nluServiceParamsJson_ != nullptr;};
      void deleteNluServiceParamsJson() { this->nluServiceParamsJson_ = nullptr;};
      inline string getNluServiceParamsJson() const { DARABONBA_PTR_GET_DEFAULT(nluServiceParamsJson_, "") };
      inline Instances& setNluServiceParamsJson(string nluServiceParamsJson) { DARABONBA_PTR_SET_VALUE(nluServiceParamsJson_, nluServiceParamsJson) };


      // numbers Field Functions 
      bool hasNumbers() const { return this->numbers_ != nullptr;};
      void deleteNumbers() { this->numbers_ = nullptr;};
      inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
      inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
      inline Instances& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
      inline Instances& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unionInstanceId Field Functions 
      bool hasUnionInstanceId() const { return this->unionInstanceId_ != nullptr;};
      void deleteUnionInstanceId() { this->unionInstanceId_ = nullptr;};
      inline string getUnionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unionInstanceId_, "") };
      inline Instances& setUnionInstanceId(string unionInstanceId) { DARABONBA_PTR_SET_VALUE(unionInstanceId_, unionInstanceId) };


      // unionSource Field Functions 
      bool hasUnionSource() const { return this->unionSource_ != nullptr;};
      void deleteUnionSource() { this->unionSource_ = nullptr;};
      inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
      inline Instances& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


    protected:
      // The list of applicable operations for the instance.
      shared_ptr<vector<string>> applicableOperations_ {};
      // The concurrency.
      shared_ptr<int64_t> concurrency_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The modification time.
      shared_ptr<int64_t> modifyTime_ {};
      // The operator who performed the operation.
      shared_ptr<string> modifyUserName_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The large language model service parameters in JSON format.
      shared_ptr<string> nluServiceParamsJson_ {};
      // The list of inbound numbers.
      shared_ptr<vector<string>> numbers_ {};
      // The instance status.
      shared_ptr<string> status_ {};
      // The instance ID.
      // 
      // 
      // > When UnionSource is set to CCC, UnionInstanceId is set to the instance ID of Cloud Call Center.
      shared_ptr<string> unionInstanceId_ {};
      // The source.
      // 
      // - CCC: Cloud Call Center.
      shared_ptr<string> unionSource_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline vector<ListInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline ListInstancesResponseBody& setInstances(const vector<ListInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBody& setInstances(vector<ListInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The array of instances.
    shared_ptr<vector<ListInstancesResponseBody::Instances>> instances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
