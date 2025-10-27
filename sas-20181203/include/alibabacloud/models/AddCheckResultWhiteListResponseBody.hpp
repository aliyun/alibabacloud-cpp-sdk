// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTRESPONSEBODY_HPP_
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
  class AddCheckResultWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckResultWhiteListResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckResultWhiteListResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    AddCheckResultWhiteListResponseBody() = default ;
    AddCheckResultWhiteListResponseBody(const AddCheckResultWhiteListResponseBody &) = default ;
    AddCheckResultWhiteListResponseBody(AddCheckResultWhiteListResponseBody &&) = default ;
    AddCheckResultWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckResultWhiteListResponseBody() = default ;
    AddCheckResultWhiteListResponseBody& operator=(const AddCheckResultWhiteListResponseBody &) = default ;
    AddCheckResultWhiteListResponseBody& operator=(AddCheckResultWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->ruleIds_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline AddCheckResultWhiteListResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AddCheckResultWhiteListResponseBody& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCheckResultWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<int64_t> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
    inline vector<int64_t> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
    inline AddCheckResultWhiteListResponseBody& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline AddCheckResultWhiteListResponseBody& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The data returned. This parameter is deprecated.
    Darabonba::Json data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the whitelist rules that are generated.
    std::shared_ptr<vector<int64_t>> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
