// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateQosRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateQosRuleResponseBody() = default ;
    CreateQosRuleResponseBody(const CreateQosRuleResponseBody &) = default ;
    CreateQosRuleResponseBody(CreateQosRuleResponseBody &&) = default ;
    CreateQosRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosRuleResponseBody() = default ;
    CreateQosRuleResponseBody& operator=(const CreateQosRuleResponseBody &) = default ;
    CreateQosRuleResponseBody& operator=(CreateQosRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qosRuleId_ == nullptr
        && this->requestId_ == nullptr; };
    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline CreateQosRuleResponseBody& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQosRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> qosRuleId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
