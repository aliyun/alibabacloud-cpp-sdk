// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteCostRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedModelApiIds, affectedModelApiIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedModelApiIds, affectedModelApiIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteCostRuleResponseBody() = default ;
    DeleteCostRuleResponseBody(const DeleteCostRuleResponseBody &) = default ;
    DeleteCostRuleResponseBody(DeleteCostRuleResponseBody &&) = default ;
    DeleteCostRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostRuleResponseBody() = default ;
    DeleteCostRuleResponseBody& operator=(const DeleteCostRuleResponseBody &) = default ;
    DeleteCostRuleResponseBody& operator=(DeleteCostRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedModelApiIds_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // affectedModelApiIds Field Functions 
    bool hasAffectedModelApiIds() const { return this->affectedModelApiIds_ != nullptr;};
    void deleteAffectedModelApiIds() { this->affectedModelApiIds_ = nullptr;};
    inline const vector<string> & getAffectedModelApiIds() const { DARABONBA_PTR_GET_CONST(affectedModelApiIds_, vector<string>) };
    inline vector<string> getAffectedModelApiIds() { DARABONBA_PTR_GET(affectedModelApiIds_, vector<string>) };
    inline DeleteCostRuleResponseBody& setAffectedModelApiIds(const vector<string> & affectedModelApiIds) { DARABONBA_PTR_SET_VALUE(affectedModelApiIds_, affectedModelApiIds) };
    inline DeleteCostRuleResponseBody& setAffectedModelApiIds(vector<string> && affectedModelApiIds) { DARABONBA_PTR_SET_RVALUE(affectedModelApiIds_, affectedModelApiIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCostRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteCostRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of model API IDs affected by the deletion.
    shared_ptr<vector<string>> affectedModelApiIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the deletion was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
