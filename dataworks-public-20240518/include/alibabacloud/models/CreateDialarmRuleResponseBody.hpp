// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIAlarmRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDIAlarmRuleResponseBody() = default ;
    CreateDIAlarmRuleResponseBody(const CreateDIAlarmRuleResponseBody &) = default ;
    CreateDIAlarmRuleResponseBody(CreateDIAlarmRuleResponseBody &&) = default ;
    CreateDIAlarmRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleResponseBody() = default ;
    CreateDIAlarmRuleResponseBody& operator=(const CreateDIAlarmRuleResponseBody &) = default ;
    CreateDIAlarmRuleResponseBody& operator=(CreateDIAlarmRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRuleId_ != nullptr
        && this->id_ != nullptr && this->requestId_ != nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline string DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, "") };
    inline CreateDIAlarmRuleResponseBody& setDIAlarmRuleId(string DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateDIAlarmRuleResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDIAlarmRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is deprecated and is replaced by the Id parameter.
    std::shared_ptr<string> DIAlarmRuleId_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
