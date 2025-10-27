// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONCANCELIGNORESUSPEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONCANCELIGNORESUSPEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperationCancelIgnoreSuspEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationCancelIgnoreSuspEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
    };
    friend void from_json(const Darabonba::Json& j, OperationCancelIgnoreSuspEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
    };
    OperationCancelIgnoreSuspEventRequest() = default ;
    OperationCancelIgnoreSuspEventRequest(const OperationCancelIgnoreSuspEventRequest &) = default ;
    OperationCancelIgnoreSuspEventRequest(OperationCancelIgnoreSuspEventRequest &&) = default ;
    OperationCancelIgnoreSuspEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationCancelIgnoreSuspEventRequest() = default ;
    OperationCancelIgnoreSuspEventRequest& operator=(const OperationCancelIgnoreSuspEventRequest &) = default ;
    OperationCancelIgnoreSuspEventRequest& operator=(OperationCancelIgnoreSuspEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remark_ == nullptr
        && return this->securityEventIds_ == nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline OperationCancelIgnoreSuspEventRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<int64_t> & securityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<int64_t>) };
    inline vector<int64_t> securityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<int64_t>) };
    inline OperationCancelIgnoreSuspEventRequest& setSecurityEventIds(const vector<int64_t> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline OperationCancelIgnoreSuspEventRequest& setSecurityEventIds(vector<int64_t> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


  protected:
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // The IDs of alert events.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> securityEventIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
