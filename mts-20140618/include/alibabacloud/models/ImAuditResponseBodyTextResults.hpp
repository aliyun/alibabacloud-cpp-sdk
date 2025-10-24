// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyTextResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyTextResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyTextResults& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyTextResults& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ImAuditResponseBodyTextResults() = default ;
    ImAuditResponseBodyTextResults(const ImAuditResponseBodyTextResults &) = default ;
    ImAuditResponseBodyTextResults(ImAuditResponseBodyTextResults &&) = default ;
    ImAuditResponseBodyTextResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyTextResults() = default ;
    ImAuditResponseBodyTextResults& operator=(const ImAuditResponseBodyTextResults &) = default ;
    ImAuditResponseBodyTextResults& operator=(ImAuditResponseBodyTextResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyTextResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImAuditResponseBodyTextResultsResult>) };
    inline vector<Models::ImAuditResponseBodyTextResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImAuditResponseBodyTextResultsResult>) };
    inline ImAuditResponseBodyTextResults& setResult(const vector<Models::ImAuditResponseBodyTextResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImAuditResponseBodyTextResults& setResult(vector<Models::ImAuditResponseBodyTextResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The text moderation results.
    std::shared_ptr<vector<Models::ImAuditResponseBodyTextResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
