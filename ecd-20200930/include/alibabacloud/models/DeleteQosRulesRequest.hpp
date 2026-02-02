// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQOSRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQOSRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteQosRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQosRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQosRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
    };
    DeleteQosRulesRequest() = default ;
    DeleteQosRulesRequest(const DeleteQosRulesRequest &) = default ;
    DeleteQosRulesRequest(DeleteQosRulesRequest &&) = default ;
    DeleteQosRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQosRulesRequest() = default ;
    DeleteQosRulesRequest& operator=(const DeleteQosRulesRequest &) = default ;
    DeleteQosRulesRequest& operator=(DeleteQosRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qosRuleId_ == nullptr; };
    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline const vector<string> & getQosRuleId() const { DARABONBA_PTR_GET_CONST(qosRuleId_, vector<string>) };
    inline vector<string> getQosRuleId() { DARABONBA_PTR_GET(qosRuleId_, vector<string>) };
    inline DeleteQosRulesRequest& setQosRuleId(const vector<string> & qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };
    inline DeleteQosRulesRequest& setQosRuleId(vector<string> && qosRuleId) { DARABONBA_PTR_SET_RVALUE(qosRuleId_, qosRuleId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> qosRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
