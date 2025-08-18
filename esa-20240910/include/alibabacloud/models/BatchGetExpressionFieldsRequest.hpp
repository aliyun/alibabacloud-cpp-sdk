// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetExpressionFieldsRequestExpressions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchGetExpressionFieldsRequest() = default ;
    BatchGetExpressionFieldsRequest(const BatchGetExpressionFieldsRequest &) = default ;
    BatchGetExpressionFieldsRequest(BatchGetExpressionFieldsRequest &&) = default ;
    BatchGetExpressionFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsRequest() = default ;
    BatchGetExpressionFieldsRequest& operator=(const BatchGetExpressionFieldsRequest &) = default ;
    BatchGetExpressionFieldsRequest& operator=(BatchGetExpressionFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressions_ != nullptr
        && this->phase_ != nullptr && this->siteId_ != nullptr; };
    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<BatchGetExpressionFieldsRequestExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<BatchGetExpressionFieldsRequestExpressions>) };
    inline vector<BatchGetExpressionFieldsRequestExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<BatchGetExpressionFieldsRequestExpressions>) };
    inline BatchGetExpressionFieldsRequest& setExpressions(const vector<BatchGetExpressionFieldsRequestExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline BatchGetExpressionFieldsRequest& setExpressions(vector<BatchGetExpressionFieldsRequestExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchGetExpressionFieldsRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchGetExpressionFieldsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // List of expressions.
    std::shared_ptr<vector<BatchGetExpressionFieldsRequestExpressions>> expressions_ = nullptr;
    // WAF Phase
    std::shared_ptr<string> phase_ = nullptr;
    // Site ID
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
