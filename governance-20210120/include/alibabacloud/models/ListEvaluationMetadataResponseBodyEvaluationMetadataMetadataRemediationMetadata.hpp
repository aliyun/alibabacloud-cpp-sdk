// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Remediation, remediation_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediation_ == nullptr; };
    // remediation Field Functions 
    bool hasRemediation() const { return this->remediation_ != nullptr;};
    void deleteRemediation() { this->remediation_ = nullptr;};
    inline const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation> & remediation() const { DARABONBA_PTR_GET_CONST(remediation_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation>) };
    inline vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation> remediation() { DARABONBA_PTR_GET(remediation_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation>) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& setRemediation(const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation> & remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata& setRemediation(vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation> && remediation) { DARABONBA_PTR_SET_RVALUE(remediation_, remediation) };


  protected:
    // The fixing items.
    std::shared_ptr<vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation>> remediation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
