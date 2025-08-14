// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUESTCREATESHARERULELIST_HPP_
#define ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUESTCREATESHARERULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SaveCostCenterShareRuleRequestCreateShareRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCostCenterShareRuleRequestCreateShareRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(FromCostCenterList, fromCostCenterList_);
      DARABONBA_PTR_TO_JSON(ShareRatioList, shareRatioList_);
      DARABONBA_PTR_TO_JSON(ShareRuleName, shareRuleName_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(ToCostCenterList, toCostCenterList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCostCenterShareRuleRequestCreateShareRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCostCenterList, fromCostCenterList_);
      DARABONBA_PTR_FROM_JSON(ShareRatioList, shareRatioList_);
      DARABONBA_PTR_FROM_JSON(ShareRuleName, shareRuleName_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(ToCostCenterList, toCostCenterList_);
    };
    SaveCostCenterShareRuleRequestCreateShareRuleList() = default ;
    SaveCostCenterShareRuleRequestCreateShareRuleList(const SaveCostCenterShareRuleRequestCreateShareRuleList &) = default ;
    SaveCostCenterShareRuleRequestCreateShareRuleList(SaveCostCenterShareRuleRequestCreateShareRuleList &&) = default ;
    SaveCostCenterShareRuleRequestCreateShareRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCostCenterShareRuleRequestCreateShareRuleList() = default ;
    SaveCostCenterShareRuleRequestCreateShareRuleList& operator=(const SaveCostCenterShareRuleRequestCreateShareRuleList &) = default ;
    SaveCostCenterShareRuleRequestCreateShareRuleList& operator=(SaveCostCenterShareRuleRequestCreateShareRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromCostCenterList_ != nullptr
        && this->shareRatioList_ != nullptr && this->shareRuleName_ != nullptr && this->shareType_ != nullptr && this->toCostCenterList_ != nullptr; };
    // fromCostCenterList Field Functions 
    bool hasFromCostCenterList() const { return this->fromCostCenterList_ != nullptr;};
    void deleteFromCostCenterList() { this->fromCostCenterList_ = nullptr;};
    inline const vector<int64_t> & fromCostCenterList() const { DARABONBA_PTR_GET_CONST(fromCostCenterList_, vector<int64_t>) };
    inline vector<int64_t> fromCostCenterList() { DARABONBA_PTR_GET(fromCostCenterList_, vector<int64_t>) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setFromCostCenterList(const vector<int64_t> & fromCostCenterList) { DARABONBA_PTR_SET_VALUE(fromCostCenterList_, fromCostCenterList) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setFromCostCenterList(vector<int64_t> && fromCostCenterList) { DARABONBA_PTR_SET_RVALUE(fromCostCenterList_, fromCostCenterList) };


    // shareRatioList Field Functions 
    bool hasShareRatioList() const { return this->shareRatioList_ != nullptr;};
    void deleteShareRatioList() { this->shareRatioList_ = nullptr;};
    inline const vector<double> & shareRatioList() const { DARABONBA_PTR_GET_CONST(shareRatioList_, vector<double>) };
    inline vector<double> shareRatioList() { DARABONBA_PTR_GET(shareRatioList_, vector<double>) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setShareRatioList(const vector<double> & shareRatioList) { DARABONBA_PTR_SET_VALUE(shareRatioList_, shareRatioList) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setShareRatioList(vector<double> && shareRatioList) { DARABONBA_PTR_SET_RVALUE(shareRatioList_, shareRatioList) };


    // shareRuleName Field Functions 
    bool hasShareRuleName() const { return this->shareRuleName_ != nullptr;};
    void deleteShareRuleName() { this->shareRuleName_ = nullptr;};
    inline string shareRuleName() const { DARABONBA_PTR_GET_DEFAULT(shareRuleName_, "") };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setShareRuleName(string shareRuleName) { DARABONBA_PTR_SET_VALUE(shareRuleName_, shareRuleName) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // toCostCenterList Field Functions 
    bool hasToCostCenterList() const { return this->toCostCenterList_ != nullptr;};
    void deleteToCostCenterList() { this->toCostCenterList_ = nullptr;};
    inline const vector<int64_t> & toCostCenterList() const { DARABONBA_PTR_GET_CONST(toCostCenterList_, vector<int64_t>) };
    inline vector<int64_t> toCostCenterList() { DARABONBA_PTR_GET(toCostCenterList_, vector<int64_t>) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setToCostCenterList(const vector<int64_t> & toCostCenterList) { DARABONBA_PTR_SET_VALUE(toCostCenterList_, toCostCenterList) };
    inline SaveCostCenterShareRuleRequestCreateShareRuleList& setToCostCenterList(vector<int64_t> && toCostCenterList) { DARABONBA_PTR_SET_RVALUE(toCostCenterList_, toCostCenterList) };


  protected:
    std::shared_ptr<vector<int64_t>> fromCostCenterList_ = nullptr;
    std::shared_ptr<vector<double>> shareRatioList_ = nullptr;
    std::shared_ptr<string> shareRuleName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> shareType_ = nullptr;
    std::shared_ptr<vector<int64_t>> toCostCenterList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
