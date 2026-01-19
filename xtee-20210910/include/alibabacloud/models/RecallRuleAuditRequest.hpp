// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLRULEAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECALLRULEAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class RecallRuleAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallRuleAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, RecallRuleAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    RecallRuleAuditRequest() = default ;
    RecallRuleAuditRequest(const RecallRuleAuditRequest &) = default ;
    RecallRuleAuditRequest(RecallRuleAuditRequest &&) = default ;
    RecallRuleAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallRuleAuditRequest() = default ;
    RecallRuleAuditRequest& operator=(const RecallRuleAuditRequest &) = default ;
    RecallRuleAuditRequest& operator=(RecallRuleAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->regId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RecallRuleAuditRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline RecallRuleAuditRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Primary key ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
