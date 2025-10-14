// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotInOrgList, notInOrgList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotInOrgList, notInOrgList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AddWorkspaceMembersResponseBody() = default ;
    AddWorkspaceMembersResponseBody(const AddWorkspaceMembersResponseBody &) = default ;
    AddWorkspaceMembersResponseBody(AddWorkspaceMembersResponseBody &&) = default ;
    AddWorkspaceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceMembersResponseBody() = default ;
    AddWorkspaceMembersResponseBody& operator=(const AddWorkspaceMembersResponseBody &) = default ;
    AddWorkspaceMembersResponseBody& operator=(AddWorkspaceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notInOrgList_ == nullptr
        && return this->requestId_ == nullptr; };
    // notInOrgList Field Functions 
    bool hasNotInOrgList() const { return this->notInOrgList_ != nullptr;};
    void deleteNotInOrgList() { this->notInOrgList_ = nullptr;};
    inline const vector<string> & notInOrgList() const { DARABONBA_PTR_GET_CONST(notInOrgList_, vector<string>) };
    inline vector<string> notInOrgList() { DARABONBA_PTR_GET(notInOrgList_, vector<string>) };
    inline AddWorkspaceMembersResponseBody& setNotInOrgList(const vector<string> & notInOrgList) { DARABONBA_PTR_SET_VALUE(notInOrgList_, notInOrgList) };
    inline AddWorkspaceMembersResponseBody& setNotInOrgList(vector<string> && notInOrgList) { DARABONBA_PTR_SET_RVALUE(notInOrgList_, notInOrgList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddWorkspaceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> notInOrgList_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
