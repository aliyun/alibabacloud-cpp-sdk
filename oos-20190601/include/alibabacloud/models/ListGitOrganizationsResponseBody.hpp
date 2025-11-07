// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGitOrganizationsResponseBodyGitOrgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitOrganizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GitOrgs, gitOrgs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GitOrgs, gitOrgs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitOrganizationsResponseBody() = default ;
    ListGitOrganizationsResponseBody(const ListGitOrganizationsResponseBody &) = default ;
    ListGitOrganizationsResponseBody(ListGitOrganizationsResponseBody &&) = default ;
    ListGitOrganizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitOrganizationsResponseBody() = default ;
    ListGitOrganizationsResponseBody& operator=(const ListGitOrganizationsResponseBody &) = default ;
    ListGitOrganizationsResponseBody& operator=(ListGitOrganizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->gitOrgs_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitOrganizationsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitOrgs Field Functions 
    bool hasGitOrgs() const { return this->gitOrgs_ != nullptr;};
    void deleteGitOrgs() { this->gitOrgs_ = nullptr;};
    inline const vector<ListGitOrganizationsResponseBodyGitOrgs> & gitOrgs() const { DARABONBA_PTR_GET_CONST(gitOrgs_, vector<ListGitOrganizationsResponseBodyGitOrgs>) };
    inline vector<ListGitOrganizationsResponseBodyGitOrgs> gitOrgs() { DARABONBA_PTR_GET(gitOrgs_, vector<ListGitOrganizationsResponseBodyGitOrgs>) };
    inline ListGitOrganizationsResponseBody& setGitOrgs(const vector<ListGitOrganizationsResponseBodyGitOrgs> & gitOrgs) { DARABONBA_PTR_SET_VALUE(gitOrgs_, gitOrgs) };
    inline ListGitOrganizationsResponseBody& setGitOrgs(vector<ListGitOrganizationsResponseBodyGitOrgs> && gitOrgs) { DARABONBA_PTR_SET_RVALUE(gitOrgs_, gitOrgs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitOrganizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<ListGitOrganizationsResponseBodyGitOrgs>> gitOrgs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
