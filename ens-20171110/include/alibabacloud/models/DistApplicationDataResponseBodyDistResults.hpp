// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DistApplicationDataResponseBodyDistResultsDistResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DistApplicationDataResponseBodyDistResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataResponseBodyDistResults& obj) { 
      DARABONBA_PTR_TO_JSON(DistResult, distResult_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataResponseBodyDistResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DistResult, distResult_);
    };
    DistApplicationDataResponseBodyDistResults() = default ;
    DistApplicationDataResponseBodyDistResults(const DistApplicationDataResponseBodyDistResults &) = default ;
    DistApplicationDataResponseBodyDistResults(DistApplicationDataResponseBodyDistResults &&) = default ;
    DistApplicationDataResponseBodyDistResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataResponseBodyDistResults() = default ;
    DistApplicationDataResponseBodyDistResults& operator=(const DistApplicationDataResponseBodyDistResults &) = default ;
    DistApplicationDataResponseBodyDistResults& operator=(DistApplicationDataResponseBodyDistResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distResult_ == nullptr; };
    // distResult Field Functions 
    bool hasDistResult() const { return this->distResult_ != nullptr;};
    void deleteDistResult() { this->distResult_ = nullptr;};
    inline const vector<Models::DistApplicationDataResponseBodyDistResultsDistResult> & distResult() const { DARABONBA_PTR_GET_CONST(distResult_, vector<Models::DistApplicationDataResponseBodyDistResultsDistResult>) };
    inline vector<Models::DistApplicationDataResponseBodyDistResultsDistResult> distResult() { DARABONBA_PTR_GET(distResult_, vector<Models::DistApplicationDataResponseBodyDistResultsDistResult>) };
    inline DistApplicationDataResponseBodyDistResults& setDistResult(const vector<Models::DistApplicationDataResponseBodyDistResultsDistResult> & distResult) { DARABONBA_PTR_SET_VALUE(distResult_, distResult) };
    inline DistApplicationDataResponseBodyDistResults& setDistResult(vector<Models::DistApplicationDataResponseBodyDistResultsDistResult> && distResult) { DARABONBA_PTR_SET_RVALUE(distResult_, distResult) };


  protected:
    std::shared_ptr<vector<Models::DistApplicationDataResponseBodyDistResultsDistResult>> distResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
