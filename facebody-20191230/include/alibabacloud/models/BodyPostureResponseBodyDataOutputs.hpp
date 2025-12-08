// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATAOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BodyPostureResponseBodyDataOutputsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureResponseBodyDataOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureResponseBodyDataOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(HumanCount, humanCount_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureResponseBodyDataOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(HumanCount, humanCount_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BodyPostureResponseBodyDataOutputs() = default ;
    BodyPostureResponseBodyDataOutputs(const BodyPostureResponseBodyDataOutputs &) = default ;
    BodyPostureResponseBodyDataOutputs(BodyPostureResponseBodyDataOutputs &&) = default ;
    BodyPostureResponseBodyDataOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureResponseBodyDataOutputs() = default ;
    BodyPostureResponseBodyDataOutputs& operator=(const BodyPostureResponseBodyDataOutputs &) = default ;
    BodyPostureResponseBodyDataOutputs& operator=(BodyPostureResponseBodyDataOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->humanCount_ == nullptr
        && return this->results_ == nullptr; };
    // humanCount Field Functions 
    bool hasHumanCount() const { return this->humanCount_ != nullptr;};
    void deleteHumanCount() { this->humanCount_ = nullptr;};
    inline int32_t humanCount() const { DARABONBA_PTR_GET_DEFAULT(humanCount_, 0) };
    inline BodyPostureResponseBodyDataOutputs& setHumanCount(int32_t humanCount) { DARABONBA_PTR_SET_VALUE(humanCount_, humanCount) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::BodyPostureResponseBodyDataOutputsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::BodyPostureResponseBodyDataOutputsResults>) };
    inline vector<Models::BodyPostureResponseBodyDataOutputsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::BodyPostureResponseBodyDataOutputsResults>) };
    inline BodyPostureResponseBodyDataOutputs& setResults(const vector<Models::BodyPostureResponseBodyDataOutputsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BodyPostureResponseBodyDataOutputs& setResults(vector<Models::BodyPostureResponseBodyDataOutputsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<int32_t> humanCount_ = nullptr;
    std::shared_ptr<vector<Models::BodyPostureResponseBodyDataOutputsResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
