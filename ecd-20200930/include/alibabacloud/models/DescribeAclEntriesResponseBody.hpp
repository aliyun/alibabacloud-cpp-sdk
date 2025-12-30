// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAclEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclEntriesResponseBody() = default ;
    DescribeAclEntriesResponseBody(const DescribeAclEntriesResponseBody &) = default ;
    DescribeAclEntriesResponseBody(DescribeAclEntriesResponseBody &&) = default ;
    DescribeAclEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclEntriesResponseBody() = default ;
    DescribeAclEntriesResponseBody& operator=(const DescribeAclEntriesResponseBody &) = default ;
    DescribeAclEntriesResponseBody& operator=(DescribeAclEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      AclEntries() = default ;
      AclEntries(const AclEntries &) = default ;
      AclEntries(AclEntries &&) = default ;
      AclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntries() = default ;
      AclEntries& operator=(const AclEntries &) = default ;
      AclEntries& operator=(AclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->policy_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr; };
      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline AclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline AclEntries& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline AclEntries& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The ACL type.
      // 
      // Valid values:
      // 
      // *   allow: whitelist
      // *   disable: blacklist
      shared_ptr<string> policy_ {};
      // The ID of the instance to which the ACL applies. You can specify an office network ID or a cloud computer ID.
      shared_ptr<string> sourceId_ {};
      // The granularity of the ACL.
      // 
      // Valid values:
      // 
      // *   desktop: cloud computer
      // *   vpc: office network
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->aclEntries_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<DescribeAclEntriesResponseBody::AclEntries> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<DescribeAclEntriesResponseBody::AclEntries>) };
    inline vector<DescribeAclEntriesResponseBody::AclEntries> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<DescribeAclEntriesResponseBody::AclEntries>) };
    inline DescribeAclEntriesResponseBody& setAclEntries(const vector<DescribeAclEntriesResponseBody::AclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline DescribeAclEntriesResponseBody& setAclEntries(vector<DescribeAclEntriesResponseBody::AclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAclEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ACL entries.
    shared_ptr<vector<DescribeAclEntriesResponseBody::AclEntries>> aclEntries_ {};
    // The token that is used to start the next query. If the value of this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
