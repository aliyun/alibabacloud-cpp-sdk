// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTSDETAILSCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTSDETAILSCONTEXTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyTextResultsResultResultsDetailsContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyTextResultsResultResultsDetailsContexts& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(libCode, libCode_);
      DARABONBA_PTR_TO_JSON(libName, libName_);
      DARABONBA_PTR_TO_JSON(positions, positions_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyTextResultsResultResultsDetailsContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(libCode, libCode_);
      DARABONBA_PTR_FROM_JSON(libName, libName_);
      DARABONBA_PTR_FROM_JSON(positions, positions_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
    };
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts() = default ;
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts(const ImAuditResponseBodyTextResultsResultResultsDetailsContexts &) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts(ImAuditResponseBodyTextResultsResultResultsDetailsContexts &&) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyTextResultsResultResultsDetailsContexts() = default ;
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts& operator=(const ImAuditResponseBodyTextResultsResultResultsDetailsContexts &) = default ;
    ImAuditResponseBodyTextResultsResultResultsDetailsContexts& operator=(ImAuditResponseBodyTextResultsResultResultsDetailsContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->libCode_ == nullptr && return this->libName_ == nullptr && return this->positions_ == nullptr && return this->ruleType_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // libCode Field Functions 
    bool hasLibCode() const { return this->libCode_ != nullptr;};
    void deleteLibCode() { this->libCode_ = nullptr;};
    inline string libCode() const { DARABONBA_PTR_GET_DEFAULT(libCode_, "") };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setLibCode(string libCode) { DARABONBA_PTR_SET_VALUE(libCode_, libCode) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // positions Field Functions 
    bool hasPositions() const { return this->positions_ != nullptr;};
    void deletePositions() { this->positions_ = nullptr;};
    inline const vector<string> & positions() const { DARABONBA_PTR_GET_CONST(positions_, vector<string>) };
    inline vector<string> positions() { DARABONBA_PTR_GET(positions_, vector<string>) };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setPositions(const vector<string> & positions) { DARABONBA_PTR_SET_VALUE(positions_, positions) };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setPositions(vector<string> && positions) { DARABONBA_PTR_SET_RVALUE(positions_, positions) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ImAuditResponseBodyTextResultsResultResultsDetailsContexts& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The term that the moderated text hits. If the text hits a term, the term is returned. If the text hits the algorithmic model, this parameter is not returned.
    std::shared_ptr<string> context_ = nullptr;
    // The code of the custom text library. This parameter is returned if the moderated text hits a term in the custom text library.
    std::shared_ptr<string> libCode_ = nullptr;
    // The name of the custom text library. This parameter is returned if the moderated text hits a term in the custom text library.
    std::shared_ptr<string> libName_ = nullptr;
    // The position of the term that the moderated text hits in the original text.
    std::shared_ptr<vector<string>> positions_ = nullptr;
    // The behavior rule. This parameter is returned if the moderated text hits the behavior rule. Valid values:
    // 
    // *   user_id
    // *   ip
    // *   umid
    // *   content
    // *   similar_content
    // *   imei
    // *   imsi
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
