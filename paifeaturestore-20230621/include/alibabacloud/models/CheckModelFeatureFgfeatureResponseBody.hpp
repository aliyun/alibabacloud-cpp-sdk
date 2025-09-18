// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckModelFeatureFGFeatureResponseBodyFGCheckResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CheckModelFeatureFGFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FGCheckResults, FGCheckResults_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FGCheckResults, FGCheckResults_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CheckModelFeatureFGFeatureResponseBody() = default ;
    CheckModelFeatureFGFeatureResponseBody(const CheckModelFeatureFGFeatureResponseBody &) = default ;
    CheckModelFeatureFGFeatureResponseBody(CheckModelFeatureFGFeatureResponseBody &&) = default ;
    CheckModelFeatureFGFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckModelFeatureFGFeatureResponseBody() = default ;
    CheckModelFeatureFGFeatureResponseBody& operator=(const CheckModelFeatureFGFeatureResponseBody &) = default ;
    CheckModelFeatureFGFeatureResponseBody& operator=(CheckModelFeatureFGFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->FGCheckResults_ != nullptr
        && this->requestId_ != nullptr; };
    // FGCheckResults Field Functions 
    bool hasFGCheckResults() const { return this->FGCheckResults_ != nullptr;};
    void deleteFGCheckResults() { this->FGCheckResults_ = nullptr;};
    inline const vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults> & FGCheckResults() const { DARABONBA_PTR_GET_CONST(FGCheckResults_, vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults>) };
    inline vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults> FGCheckResults() { DARABONBA_PTR_GET(FGCheckResults_, vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults>) };
    inline CheckModelFeatureFGFeatureResponseBody& setFGCheckResults(const vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults> & FGCheckResults) { DARABONBA_PTR_SET_VALUE(FGCheckResults_, FGCheckResults) };
    inline CheckModelFeatureFGFeatureResponseBody& setFGCheckResults(vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults> && FGCheckResults) { DARABONBA_PTR_SET_RVALUE(FGCheckResults_, FGCheckResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckModelFeatureFGFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CheckModelFeatureFGFeatureResponseBodyFGCheckResults>> FGCheckResults_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
