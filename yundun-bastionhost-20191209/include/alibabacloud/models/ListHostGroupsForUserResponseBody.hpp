// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHostGroupsForUserResponseBodyHostGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostGroupsForUserResponseBody() = default ;
    ListHostGroupsForUserResponseBody(const ListHostGroupsForUserResponseBody &) = default ;
    ListHostGroupsForUserResponseBody(ListHostGroupsForUserResponseBody &&) = default ;
    ListHostGroupsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsForUserResponseBody() = default ;
    ListHostGroupsForUserResponseBody& operator=(const ListHostGroupsForUserResponseBody &) = default ;
    ListHostGroupsForUserResponseBody& operator=(ListHostGroupsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroups_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<ListHostGroupsForUserResponseBodyHostGroups> & hostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<ListHostGroupsForUserResponseBodyHostGroups>) };
    inline vector<ListHostGroupsForUserResponseBodyHostGroups> hostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<ListHostGroupsForUserResponseBodyHostGroups>) };
    inline ListHostGroupsForUserResponseBody& setHostGroups(const vector<ListHostGroupsForUserResponseBodyHostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline ListHostGroupsForUserResponseBody& setHostGroups(vector<ListHostGroupsForUserResponseBodyHostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostGroupsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostGroupsForUserResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The host groups returned.
    std::shared_ptr<vector<ListHostGroupsForUserResponseBodyHostGroups>> hostGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of host groups returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
