// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTSDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyTextResultsResultResultsDetailsContexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyTextResultsResultResultsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyTextResultsResultResultsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(contexts, contexts_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyTextResultsResultResultsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(contexts, contexts_);
    };
    ImAuditResponseBodyTextResultsResultResultsDetails() = default ;
    ImAuditResponseBodyTextResultsResultResultsDetails(const ImAuditResponseBodyTextResultsResultResultsDetails &) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetails(ImAuditResponseBodyTextResultsResultResultsDetails &&) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyTextResultsResultResultsDetails() = default ;
    ImAuditResponseBodyTextResultsResultResultsDetails& operator=(const ImAuditResponseBodyTextResultsResultResultsDetails &) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetails& operator=(ImAuditResponseBodyTextResultsResultResultsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->contexts_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImAuditResponseBodyTextResultsResultResultsDetails& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // contexts Field Functions 
    bool hasContexts() const { return this->contexts_ != nullptr;};
    void deleteContexts() { this->contexts_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts> & contexts() const { DARABONBA_PTR_GET_CONST(contexts_, vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts>) };
    inline vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts> contexts() { DARABONBA_PTR_GET(contexts_, vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts>) };
    inline ImAuditResponseBodyTextResultsResultResultsDetails& setContexts(const vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts> & contexts) { DARABONBA_PTR_SET_VALUE(contexts_, contexts) };
    inline ImAuditResponseBodyTextResultsResultResultsDetails& setContexts(vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts> && contexts) { DARABONBA_PTR_SET_RVALUE(contexts_, contexts) };


  protected:
    // The category of the risky content that the moderated text hits. Valid values:
    // 
    // *   spam: spam
    // *   ad: ad
    // *   politics: political content
    // *   terrorism: terrorist content
    // *   abuse: abuse
    // *   porn: pornographic content
    // *   flood: excessive junk content
    // *   contraband: prohibited content
    // *   meaningless: meaningless content
    // *   customized: custom content, such as a custom keyword
    std::shared_ptr<string> label_ = nullptr;
    // The context information of the risky content that the moderated text hits.
    std::shared_ptr<vector<Models::ImAuditResponseBodyTextResultsResultResultsDetailsContexts>> contexts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
