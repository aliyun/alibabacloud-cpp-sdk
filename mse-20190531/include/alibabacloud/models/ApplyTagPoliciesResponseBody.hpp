// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTAGPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYTAGPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ApplyTagPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTagPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTagPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ApplyTagPoliciesResponseBody() = default ;
    ApplyTagPoliciesResponseBody(const ApplyTagPoliciesResponseBody &) = default ;
    ApplyTagPoliciesResponseBody(ApplyTagPoliciesResponseBody &&) = default ;
    ApplyTagPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTagPoliciesResponseBody() = default ;
    ApplyTagPoliciesResponseBody& operator=(const ApplyTagPoliciesResponseBody &) = default ;
    ApplyTagPoliciesResponseBody& operator=(ApplyTagPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CarryData, carryData_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Rate, rate_);
        DARABONBA_PTR_TO_JSON(Remove, remove_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CarryData, carryData_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Rate, rate_);
        DARABONBA_PTR_FROM_JSON(Remove, remove_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      virtual bool empty() const override { return this->carryData_ == nullptr
        && this->enable_ == nullptr && this->id_ == nullptr && this->instanceNum_ == nullptr && this->name_ == nullptr && this->rate_ == nullptr
        && this->remove_ == nullptr && this->rules_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
      // carryData Field Functions 
      bool hasCarryData() const { return this->carryData_ != nullptr;};
      void deleteCarryData() { this->carryData_ = nullptr;};
      inline bool getCarryData() const { DARABONBA_PTR_GET_DEFAULT(carryData_, false) };
      inline Data& setCarryData(bool carryData) { DARABONBA_PTR_SET_VALUE(carryData_, carryData) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceNum Field Functions 
      bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
      void deleteInstanceNum() { this->instanceNum_ = nullptr;};
      inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
      inline Data& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rate Field Functions 
      bool hasRate() const { return this->rate_ != nullptr;};
      void deleteRate() { this->rate_ = nullptr;};
      inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
      inline Data& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


      // remove Field Functions 
      bool hasRemove() const { return this->remove_ != nullptr;};
      void deleteRemove() { this->remove_ = nullptr;};
      inline bool getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, false) };
      inline Data& setRemove(bool remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
      inline Data& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // Indicates whether the field is the primary key.
      shared_ptr<bool> carryData_ {};
      // Indicates whether the rule is enabled. Valid values:
      // 
      // *   `true`: The rule is enabled.
      // *   `false`: The rule is disabled.
      shared_ptr<bool> enable_ {};
      // The ID of the primary key.
      shared_ptr<int64_t> id_ {};
      // The number of instances.
      shared_ptr<int32_t> instanceNum_ {};
      // The policy name.
      shared_ptr<string> name_ {};
      // The rate.
      shared_ptr<int32_t> rate_ {};
      // Indicates whether the routing rule was deleted.
      shared_ptr<bool> remove_ {};
      // The details of the routing rule.
      shared_ptr<string> rules_ {};
      // The status.
      shared_ptr<int32_t> status_ {};
      // The tag.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ApplyTagPoliciesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ApplyTagPoliciesResponseBody::Data>) };
    inline vector<ApplyTagPoliciesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ApplyTagPoliciesResponseBody::Data>) };
    inline ApplyTagPoliciesResponseBody& setData(const vector<ApplyTagPoliciesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ApplyTagPoliciesResponseBody& setData(vector<ApplyTagPoliciesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyTagPoliciesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyTagPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyTagPoliciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<ApplyTagPoliciesResponseBody::Data>> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
