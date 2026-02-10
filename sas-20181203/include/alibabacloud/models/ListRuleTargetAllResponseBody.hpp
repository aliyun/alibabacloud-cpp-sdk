// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRuleTargetAllResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuleTargetAllResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTargetList, ruleTargetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuleTargetAllResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTargetList, ruleTargetList_);
    };
    ListRuleTargetAllResponseBody() = default ;
    ListRuleTargetAllResponseBody(const ListRuleTargetAllResponseBody &) = default ;
    ListRuleTargetAllResponseBody(ListRuleTargetAllResponseBody &&) = default ;
    ListRuleTargetAllResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuleTargetAllResponseBody() = default ;
    ListRuleTargetAllResponseBody& operator=(const ListRuleTargetAllResponseBody &) = default ;
    ListRuleTargetAllResponseBody& operator=(ListRuleTargetAllResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleTargetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleTargetList& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, RuleTargetList& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      RuleTargetList() = default ;
      RuleTargetList(const RuleTargetList &) = default ;
      RuleTargetList(RuleTargetList &&) = default ;
      RuleTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleTargetList() = default ;
      RuleTargetList& operator=(const RuleTargetList &) = default ;
      RuleTargetList& operator=(RuleTargetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline int64_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
      inline RuleTargetList& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline RuleTargetList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline RuleTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the network object.
      shared_ptr<int64_t> targetId_ {};
      // The name of the network object.
      shared_ptr<string> targetName_ {};
      // The type of the object. Valid values:
      // 
      // *   IMAGE
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleTargetList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRuleTargetAllResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTargetList Field Functions 
    bool hasRuleTargetList() const { return this->ruleTargetList_ != nullptr;};
    void deleteRuleTargetList() { this->ruleTargetList_ = nullptr;};
    inline const vector<ListRuleTargetAllResponseBody::RuleTargetList> & getRuleTargetList() const { DARABONBA_PTR_GET_CONST(ruleTargetList_, vector<ListRuleTargetAllResponseBody::RuleTargetList>) };
    inline vector<ListRuleTargetAllResponseBody::RuleTargetList> getRuleTargetList() { DARABONBA_PTR_GET(ruleTargetList_, vector<ListRuleTargetAllResponseBody::RuleTargetList>) };
    inline ListRuleTargetAllResponseBody& setRuleTargetList(const vector<ListRuleTargetAllResponseBody::RuleTargetList> & ruleTargetList) { DARABONBA_PTR_SET_VALUE(ruleTargetList_, ruleTargetList) };
    inline ListRuleTargetAllResponseBody& setRuleTargetList(vector<ListRuleTargetAllResponseBody::RuleTargetList> && ruleTargetList) { DARABONBA_PTR_SET_RVALUE(ruleTargetList_, ruleTargetList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the network objects.
    shared_ptr<vector<ListRuleTargetAllResponseBody::RuleTargetList>> ruleTargetList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
