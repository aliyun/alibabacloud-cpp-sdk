// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachKeyPairResponseBodyResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachKeyPairResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DetachKeyPairResponseBodyResults() = default ;
    DetachKeyPairResponseBodyResults(const DetachKeyPairResponseBodyResults &) = default ;
    DetachKeyPairResponseBodyResults(DetachKeyPairResponseBodyResults &&) = default ;
    DetachKeyPairResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairResponseBodyResults() = default ;
    DetachKeyPairResponseBodyResults& operator=(const DetachKeyPairResponseBodyResults &) = default ;
    DetachKeyPairResponseBodyResults& operator=(DetachKeyPairResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DetachKeyPairResponseBodyResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DetachKeyPairResponseBodyResultsResult>) };
    inline vector<Models::DetachKeyPairResponseBodyResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DetachKeyPairResponseBodyResultsResult>) };
    inline DetachKeyPairResponseBodyResults& setResult(const vector<Models::DetachKeyPairResponseBodyResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DetachKeyPairResponseBodyResults& setResult(vector<Models::DetachKeyPairResponseBodyResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::DetachKeyPairResponseBodyResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
