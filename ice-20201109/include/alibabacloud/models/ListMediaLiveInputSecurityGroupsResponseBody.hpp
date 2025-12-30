// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveInputSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveInputSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveInputSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMediaLiveInputSecurityGroupsResponseBody() = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(const ListMediaLiveInputSecurityGroupsResponseBody &) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(ListMediaLiveInputSecurityGroupsResponseBody &&) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveInputSecurityGroupsResponseBody() = default ;
    ListMediaLiveInputSecurityGroupsResponseBody& operator=(const ListMediaLiveInputSecurityGroupsResponseBody &) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody& operator=(ListMediaLiveInputSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InputIds, inputIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRules_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InputIds, inputIds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRules_);
      };
      SecurityGroups() = default ;
      SecurityGroups(const SecurityGroups &) = default ;
      SecurityGroups(SecurityGroups &&) = default ;
      SecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroups() = default ;
      SecurityGroups& operator=(const SecurityGroups &) = default ;
      SecurityGroups& operator=(SecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->inputIds_ == nullptr && this->name_ == nullptr && this->securityGroupId_ == nullptr && this->whitelistRules_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inputIds Field Functions 
      bool hasInputIds() const { return this->inputIds_ != nullptr;};
      void deleteInputIds() { this->inputIds_ = nullptr;};
      inline const vector<string> & getInputIds() const { DARABONBA_PTR_GET_CONST(inputIds_, vector<string>) };
      inline vector<string> getInputIds() { DARABONBA_PTR_GET(inputIds_, vector<string>) };
      inline SecurityGroups& setInputIds(const vector<string> & inputIds) { DARABONBA_PTR_SET_VALUE(inputIds_, inputIds) };
      inline SecurityGroups& setInputIds(vector<string> && inputIds) { DARABONBA_PTR_SET_RVALUE(inputIds_, inputIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // whitelistRules Field Functions 
      bool hasWhitelistRules() const { return this->whitelistRules_ != nullptr;};
      void deleteWhitelistRules() { this->whitelistRules_ = nullptr;};
      inline const vector<string> & getWhitelistRules() const { DARABONBA_PTR_GET_CONST(whitelistRules_, vector<string>) };
      inline vector<string> getWhitelistRules() { DARABONBA_PTR_GET(whitelistRules_, vector<string>) };
      inline SecurityGroups& setWhitelistRules(const vector<string> & whitelistRules) { DARABONBA_PTR_SET_VALUE(whitelistRules_, whitelistRules) };
      inline SecurityGroups& setWhitelistRules(vector<string> && whitelistRules) { DARABONBA_PTR_SET_RVALUE(whitelistRules_, whitelistRules) };


    protected:
      // The time when the security group was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The IDs of the inputs associated with the security group.
      shared_ptr<vector<string>> inputIds_ {};
      // The security group name.
      shared_ptr<string> name_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The security group rules.
      shared_ptr<vector<string>> whitelistRules_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->securityGroups_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups>) };
    inline vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups>) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setSecurityGroups(const vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setSecurityGroups(vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The security groups.
    shared_ptr<vector<ListMediaLiveInputSecurityGroupsResponseBody::SecurityGroups>> securityGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
