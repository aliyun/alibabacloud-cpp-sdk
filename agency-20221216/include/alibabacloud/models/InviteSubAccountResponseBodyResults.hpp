// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InviteSubAccountResponseBodyResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    InviteSubAccountResponseBodyResults() = default ;
    InviteSubAccountResponseBodyResults(const InviteSubAccountResponseBodyResults &) = default ;
    InviteSubAccountResponseBodyResults(InviteSubAccountResponseBodyResults &&) = default ;
    InviteSubAccountResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountResponseBodyResults() = default ;
    InviteSubAccountResponseBodyResults& operator=(const InviteSubAccountResponseBodyResults &) = default ;
    InviteSubAccountResponseBodyResults& operator=(InviteSubAccountResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::InviteSubAccountResponseBodyResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::InviteSubAccountResponseBodyResultsResult>) };
    inline vector<Models::InviteSubAccountResponseBodyResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::InviteSubAccountResponseBodyResultsResult>) };
    inline InviteSubAccountResponseBodyResults& setResult(const vector<Models::InviteSubAccountResponseBodyResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline InviteSubAccountResponseBodyResults& setResult(vector<Models::InviteSubAccountResponseBodyResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::InviteSubAccountResponseBodyResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
