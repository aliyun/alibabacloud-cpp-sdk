// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATION_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->remediationType_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions>) };
    inline vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions>) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& setActions(const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& setActions(vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string remediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


  protected:
    // The fixing operations.
    std::shared_ptr<vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions>> actions_ = nullptr;
    // The type of the fixing method. Valid values:
    // 
    // *   Manual: manual fixing
    // *   QuickFix: quick fixing
    // *   Analysis: auxiliary decision-making
    std::shared_ptr<string> remediationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
