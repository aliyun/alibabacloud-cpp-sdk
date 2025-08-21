// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataDistResultResponseBodyDistResultsDistResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBodyDistResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBodyDistResults& obj) { 
      DARABONBA_PTR_TO_JSON(DistResult, distResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBodyDistResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DistResult, distResult_);
    };
    DescribeDataDistResultResponseBodyDistResults() = default ;
    DescribeDataDistResultResponseBodyDistResults(const DescribeDataDistResultResponseBodyDistResults &) = default ;
    DescribeDataDistResultResponseBodyDistResults(DescribeDataDistResultResponseBodyDistResults &&) = default ;
    DescribeDataDistResultResponseBodyDistResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBodyDistResults() = default ;
    DescribeDataDistResultResponseBodyDistResults& operator=(const DescribeDataDistResultResponseBodyDistResults &) = default ;
    DescribeDataDistResultResponseBodyDistResults& operator=(DescribeDataDistResultResponseBodyDistResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distResult_ != nullptr; };
    // distResult Field Functions 
    bool hasDistResult() const { return this->distResult_ != nullptr;};
    void deleteDistResult() { this->distResult_ = nullptr;};
    inline const vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult> & distResult() const { DARABONBA_PTR_GET_CONST(distResult_, vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult>) };
    inline vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult> distResult() { DARABONBA_PTR_GET(distResult_, vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult>) };
    inline DescribeDataDistResultResponseBodyDistResults& setDistResult(const vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult> & distResult) { DARABONBA_PTR_SET_VALUE(distResult_, distResult) };
    inline DescribeDataDistResultResponseBodyDistResults& setDistResult(vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult> && distResult) { DARABONBA_PTR_SET_RVALUE(distResult_, distResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResult>> distResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
