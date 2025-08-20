// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODESNODECONFIGDENYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODESNODECONFIGDENYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(BaselineList, baselineList_);
      DARABONBA_PTR_TO_JSON(IssueCount, issueCount_);
      DARABONBA_PTR_TO_JSON(IssueLevel, issueLevel_);
      DARABONBA_PTR_TO_JSON(IssueList, issueList_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MaliciousList, maliciousList_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(BaselineList, baselineList_);
      DARABONBA_PTR_FROM_JSON(IssueCount, issueCount_);
      DARABONBA_PTR_FROM_JSON(IssueLevel, issueLevel_);
      DARABONBA_PTR_FROM_JSON(IssueList, issueList_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MaliciousList, maliciousList_);
    };
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy() = default ;
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy(const GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy &) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy(GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy &&) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy() = default ;
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& operator=(const GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy &) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& operator=(GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->baselineList_ != nullptr && this->issueCount_ != nullptr && this->issueLevel_ != nullptr && this->issueList_ != nullptr && this->logic_ != nullptr
        && this->maliciousList_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // baselineList Field Functions 
    bool hasBaselineList() const { return this->baselineList_ != nullptr;};
    void deleteBaselineList() { this->baselineList_ = nullptr;};
    inline string baselineList() const { DARABONBA_PTR_GET_DEFAULT(baselineList_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setBaselineList(string baselineList) { DARABONBA_PTR_SET_VALUE(baselineList_, baselineList) };


    // issueCount Field Functions 
    bool hasIssueCount() const { return this->issueCount_ != nullptr;};
    void deleteIssueCount() { this->issueCount_ = nullptr;};
    inline string issueCount() const { DARABONBA_PTR_GET_DEFAULT(issueCount_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setIssueCount(string issueCount) { DARABONBA_PTR_SET_VALUE(issueCount_, issueCount) };


    // issueLevel Field Functions 
    bool hasIssueLevel() const { return this->issueLevel_ != nullptr;};
    void deleteIssueLevel() { this->issueLevel_ = nullptr;};
    inline string issueLevel() const { DARABONBA_PTR_GET_DEFAULT(issueLevel_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setIssueLevel(string issueLevel) { DARABONBA_PTR_SET_VALUE(issueLevel_, issueLevel) };


    // issueList Field Functions 
    bool hasIssueList() const { return this->issueList_ != nullptr;};
    void deleteIssueList() { this->issueList_ = nullptr;};
    inline string issueList() const { DARABONBA_PTR_GET_DEFAULT(issueList_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setIssueList(string issueList) { DARABONBA_PTR_SET_VALUE(issueList_, issueList) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // maliciousList Field Functions 
    bool hasMaliciousList() const { return this->maliciousList_ != nullptr;};
    void deleteMaliciousList() { this->maliciousList_ = nullptr;};
    inline string maliciousList() const { DARABONBA_PTR_GET_DEFAULT(maliciousList_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy& setMaliciousList(string maliciousList) { DARABONBA_PTR_SET_VALUE(maliciousList_, maliciousList) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> baselineList_ = nullptr;
    std::shared_ptr<string> issueCount_ = nullptr;
    std::shared_ptr<string> issueLevel_ = nullptr;
    std::shared_ptr<string> issueList_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<string> maliciousList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
