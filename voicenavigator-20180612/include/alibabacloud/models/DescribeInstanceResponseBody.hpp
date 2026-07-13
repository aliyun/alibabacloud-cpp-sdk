// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
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
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_TO_JSON(ApplicableOperations, applicableOperations_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_FROM_JSON(ApplicableOperations, applicableOperations_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abilityType_ == nullptr
        && this->applicableOperations_ == nullptr && this->concurrency_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->modifyTime_ == nullptr
        && this->modifyUserName_ == nullptr && this->name_ == nullptr && this->nluServiceParamsJson_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->unionInstanceId_ == nullptr && this->unionSource_ == nullptr; };
    // abilityType Field Functions 
    bool hasAbilityType() const { return this->abilityType_ != nullptr;};
    void deleteAbilityType() { this->abilityType_ = nullptr;};
    inline string getAbilityType() const { DARABONBA_PTR_GET_DEFAULT(abilityType_, "") };
    inline DescribeInstanceResponseBody& setAbilityType(string abilityType) { DARABONBA_PTR_SET_VALUE(abilityType_, abilityType) };


    // applicableOperations Field Functions 
    bool hasApplicableOperations() const { return this->applicableOperations_ != nullptr;};
    void deleteApplicableOperations() { this->applicableOperations_ = nullptr;};
    inline const vector<string> & getApplicableOperations() const { DARABONBA_PTR_GET_CONST(applicableOperations_, vector<string>) };
    inline vector<string> getApplicableOperations() { DARABONBA_PTR_GET(applicableOperations_, vector<string>) };
    inline DescribeInstanceResponseBody& setApplicableOperations(const vector<string> & applicableOperations) { DARABONBA_PTR_SET_VALUE(applicableOperations_, applicableOperations) };
    inline DescribeInstanceResponseBody& setApplicableOperations(vector<string> && applicableOperations) { DARABONBA_PTR_SET_RVALUE(applicableOperations_, applicableOperations) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline DescribeInstanceResponseBody& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DescribeInstanceResponseBody& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeInstanceResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nluServiceParamsJson Field Functions 
    bool hasNluServiceParamsJson() const { return this->nluServiceParamsJson_ != nullptr;};
    void deleteNluServiceParamsJson() { this->nluServiceParamsJson_ = nullptr;};
    inline string getNluServiceParamsJson() const { DARABONBA_PTR_GET_DEFAULT(nluServiceParamsJson_, "") };
    inline DescribeInstanceResponseBody& setNluServiceParamsJson(string nluServiceParamsJson) { DARABONBA_PTR_SET_VALUE(nluServiceParamsJson_, nluServiceParamsJson) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unionInstanceId Field Functions 
    bool hasUnionInstanceId() const { return this->unionInstanceId_ != nullptr;};
    void deleteUnionInstanceId() { this->unionInstanceId_ = nullptr;};
    inline string getUnionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unionInstanceId_, "") };
    inline DescribeInstanceResponseBody& setUnionInstanceId(string unionInstanceId) { DARABONBA_PTR_SET_VALUE(unionInstanceId_, unionInstanceId) };


    // unionSource Field Functions 
    bool hasUnionSource() const { return this->unionSource_ != nullptr;};
    void deleteUnionSource() { this->unionSource_ = nullptr;};
    inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
    inline DescribeInstanceResponseBody& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


  protected:
    // The instance ability type.<br>
    // DEFAULT: full abilities.<br>
    // VOICE_ONLY: only voice abilities, without dialog intervention.
    shared_ptr<string> abilityType_ {};
    // The list of applicable operations.
    shared_ptr<vector<string>> applicableOperations_ {};
    // The instance concurrency.
    shared_ptr<int64_t> concurrency_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The update time.
    shared_ptr<int64_t> modifyTime_ {};
    // The user who last updated the instance.
    shared_ptr<string> modifyUserName_ {};
    // The instance name.
    shared_ptr<string> name_ {};
    shared_ptr<string> nluServiceParamsJson_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status.
    shared_ptr<string> status_ {};
    shared_ptr<string> unionInstanceId_ {};
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
