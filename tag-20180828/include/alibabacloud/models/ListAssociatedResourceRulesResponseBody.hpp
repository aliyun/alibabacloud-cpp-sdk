// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDRESOURCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListAssociatedResourceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ListAssociatedResourceRulesResponseBody() = default ;
    ListAssociatedResourceRulesResponseBody(const ListAssociatedResourceRulesResponseBody &) = default ;
    ListAssociatedResourceRulesResponseBody(ListAssociatedResourceRulesResponseBody &&) = default ;
    ListAssociatedResourceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedResourceRulesResponseBody() = default ;
    ListAssociatedResourceRulesResponseBody& operator=(const ListAssociatedResourceRulesResponseBody &) = default ;
    ListAssociatedResourceRulesResponseBody& operator=(ListAssociatedResourceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ExistingStatus, existingStatus_);
        DARABONBA_PTR_TO_JSON(SettingName, settingName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ExistingStatus, existingStatus_);
        DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->existingStatus_ == nullptr
        && this->settingName_ == nullptr && this->status_ == nullptr && this->tagKeys_ == nullptr; };
      // existingStatus Field Functions 
      bool hasExistingStatus() const { return this->existingStatus_ != nullptr;};
      void deleteExistingStatus() { this->existingStatus_ = nullptr;};
      inline string getExistingStatus() const { DARABONBA_PTR_GET_DEFAULT(existingStatus_, "") };
      inline Rules& setExistingStatus(string existingStatus) { DARABONBA_PTR_SET_VALUE(existingStatus_, existingStatus) };


      // settingName Field Functions 
      bool hasSettingName() const { return this->settingName_ != nullptr;};
      void deleteSettingName() { this->settingName_ = nullptr;};
      inline string getSettingName() const { DARABONBA_PTR_GET_DEFAULT(settingName_, "") };
      inline Rules& setSettingName(string settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Rules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tagKeys Field Functions 
      bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
      void deleteTagKeys() { this->tagKeys_ = nullptr;};
      inline const vector<string> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
      inline vector<string> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
      inline Rules& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
      inline Rules& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    protected:
      shared_ptr<string> existingStatus_ {};
      // The name of the associated resource rule.
      shared_ptr<string> settingName_ {};
      // The status of the associated resource rule. Valid values: `Enable` and `Disable`.
      shared_ptr<string> status_ {};
      // The Tag Keys to which the rule applies.
      shared_ptr<vector<string>> tagKeys_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAssociatedResourceRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssociatedResourceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListAssociatedResourceRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListAssociatedResourceRulesResponseBody::Rules>) };
    inline vector<ListAssociatedResourceRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ListAssociatedResourceRulesResponseBody::Rules>) };
    inline ListAssociatedResourceRulesResponseBody& setRules(const vector<ListAssociatedResourceRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListAssociatedResourceRulesResponseBody& setRules(vector<ListAssociatedResourceRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // You can use the `NextToken` parameter to determine whether there is a token that can be used to start the next query. Valid values:
    // 
    // - If `NextToken` is empty, no next query is performed.
    // 
    // - If a value is returned for `NextToken`, the value is the token that is used for the next query.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The Request ID.
    shared_ptr<string> requestId_ {};
    // A list of associated resource rules.
    shared_ptr<vector<ListAssociatedResourceRulesResponseBody::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
