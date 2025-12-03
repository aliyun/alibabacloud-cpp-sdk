// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYMODELRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYMODELRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImportOASTaskResponseBodyModelResultsModelResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBodyModelResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBodyModelResults& obj) { 
      DARABONBA_PTR_TO_JSON(ModelResult, modelResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBodyModelResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelResult, modelResult_);
    };
    DescribeImportOASTaskResponseBodyModelResults() = default ;
    DescribeImportOASTaskResponseBodyModelResults(const DescribeImportOASTaskResponseBodyModelResults &) = default ;
    DescribeImportOASTaskResponseBodyModelResults(DescribeImportOASTaskResponseBodyModelResults &&) = default ;
    DescribeImportOASTaskResponseBodyModelResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBodyModelResults() = default ;
    DescribeImportOASTaskResponseBodyModelResults& operator=(const DescribeImportOASTaskResponseBodyModelResults &) = default ;
    DescribeImportOASTaskResponseBodyModelResults& operator=(DescribeImportOASTaskResponseBodyModelResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelResult_ == nullptr; };
    // modelResult Field Functions 
    bool hasModelResult() const { return this->modelResult_ != nullptr;};
    void deleteModelResult() { this->modelResult_ = nullptr;};
    inline const vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult> & modelResult() const { DARABONBA_PTR_GET_CONST(modelResult_, vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult>) };
    inline vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult> modelResult() { DARABONBA_PTR_GET(modelResult_, vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult>) };
    inline DescribeImportOASTaskResponseBodyModelResults& setModelResult(const vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult> & modelResult) { DARABONBA_PTR_SET_VALUE(modelResult_, modelResult) };
    inline DescribeImportOASTaskResponseBodyModelResults& setModelResult(vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult> && modelResult) { DARABONBA_PTR_SET_RVALUE(modelResult_, modelResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeImportOASTaskResponseBodyModelResultsModelResult>> modelResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
