// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostGroupsResponseBody() = default ;
    ListHostGroupsResponseBody(const ListHostGroupsResponseBody &) = default ;
    ListHostGroupsResponseBody(ListHostGroupsResponseBody &&) = default ;
    ListHostGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsResponseBody() = default ;
    ListHostGroupsResponseBody& operator=(const ListHostGroupsResponseBody &) = default ;
    ListHostGroupsResponseBody& operator=(ListHostGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
        DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
      };
      friend void from_json(const Darabonba::Json& j, HostGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
        DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
      };
      HostGroups() = default ;
      HostGroups(const HostGroups &) = default ;
      HostGroups(HostGroups &&) = default ;
      HostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostGroups() = default ;
      HostGroups& operator=(const HostGroups &) = default ;
      HostGroups& operator=(HostGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->hostGroupId_ == nullptr && this->hostGroupName_ == nullptr && this->memberCount_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline HostGroups& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline HostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


      // hostGroupName Field Functions 
      bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
      void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
      inline string getHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
      inline HostGroups& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


      // memberCount Field Functions 
      bool hasMemberCount() const { return this->memberCount_ != nullptr;};
      void deleteMemberCount() { this->memberCount_ = nullptr;};
      inline int32_t getMemberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0) };
      inline HostGroups& setMemberCount(int32_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


    protected:
      // The remarks of the asset group.
      shared_ptr<string> comment_ {};
      // The asset group ID.
      shared_ptr<string> hostGroupId_ {};
      // The name of the asset group.
      shared_ptr<string> hostGroupName_ {};
      // The number of hosts in the asset group.
      shared_ptr<int32_t> memberCount_ {};
    };

    virtual bool empty() const override { return this->hostGroups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<ListHostGroupsResponseBody::HostGroups> & getHostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<ListHostGroupsResponseBody::HostGroups>) };
    inline vector<ListHostGroupsResponseBody::HostGroups> getHostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<ListHostGroupsResponseBody::HostGroups>) };
    inline ListHostGroupsResponseBody& setHostGroups(const vector<ListHostGroupsResponseBody::HostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline ListHostGroupsResponseBody& setHostGroups(vector<ListHostGroupsResponseBody::HostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The asset groups returned.
    shared_ptr<vector<ListHostGroupsResponseBody::HostGroups>> hostGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of asset groups returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
