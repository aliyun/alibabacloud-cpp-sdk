// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecommendTemplatesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RecommendTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    RecommendTemplatesResponseBody() = default ;
    RecommendTemplatesResponseBody(const RecommendTemplatesResponseBody &) = default ;
    RecommendTemplatesResponseBody(RecommendTemplatesResponseBody &&) = default ;
    RecommendTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendTemplatesResponseBody() = default ;
    RecommendTemplatesResponseBody& operator=(const RecommendTemplatesResponseBody &) = default ;
    RecommendTemplatesResponseBody& operator=(RecommendTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecommendTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<RecommendTemplatesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<RecommendTemplatesResponseBodyResult>) };
    inline vector<RecommendTemplatesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<RecommendTemplatesResponseBodyResult>) };
    inline RecommendTemplatesResponseBody& setResult(const vector<RecommendTemplatesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RecommendTemplatesResponseBody& setResult(vector<RecommendTemplatesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<RecommendTemplatesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
