// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyImageResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResults& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResults& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ImAuditResponseBodyImageResults() = default ;
    ImAuditResponseBodyImageResults(const ImAuditResponseBodyImageResults &) = default ;
    ImAuditResponseBodyImageResults(ImAuditResponseBodyImageResults &&) = default ;
    ImAuditResponseBodyImageResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResults() = default ;
    ImAuditResponseBodyImageResults& operator=(const ImAuditResponseBodyImageResults &) = default ;
    ImAuditResponseBodyImageResults& operator=(ImAuditResponseBodyImageResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyImageResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImAuditResponseBodyImageResultsResult>) };
    inline vector<Models::ImAuditResponseBodyImageResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImAuditResponseBodyImageResultsResult>) };
    inline ImAuditResponseBodyImageResults& setResult(const vector<Models::ImAuditResponseBodyImageResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImAuditResponseBodyImageResults& setResult(vector<Models::ImAuditResponseBodyImageResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The image moderation results.
    std::shared_ptr<vector<Models::ImAuditResponseBodyImageResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
