// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachKeyPairResponseBodyResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachKeyPairResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKeyPairResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKeyPairResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    AttachKeyPairResponseBodyResults() = default ;
    AttachKeyPairResponseBodyResults(const AttachKeyPairResponseBodyResults &) = default ;
    AttachKeyPairResponseBodyResults(AttachKeyPairResponseBodyResults &&) = default ;
    AttachKeyPairResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKeyPairResponseBodyResults() = default ;
    AttachKeyPairResponseBodyResults& operator=(const AttachKeyPairResponseBodyResults &) = default ;
    AttachKeyPairResponseBodyResults& operator=(AttachKeyPairResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::AttachKeyPairResponseBodyResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::AttachKeyPairResponseBodyResultsResult>) };
    inline vector<Models::AttachKeyPairResponseBodyResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::AttachKeyPairResponseBodyResultsResult>) };
    inline AttachKeyPairResponseBodyResults& setResult(const vector<Models::AttachKeyPairResponseBodyResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AttachKeyPairResponseBodyResults& setResult(vector<Models::AttachKeyPairResponseBodyResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::AttachKeyPairResponseBodyResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
