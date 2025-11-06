// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODYLISTMAPPCENTERWORKSPACERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODYLISTMAPPCENTERWORKSPACERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& obj) { 
      DARABONBA_PTR_TO_JSON(MappCenterWorkspaceList, mappCenterWorkspaceList_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MappCenterWorkspaceList, mappCenterWorkspaceList_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult() = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult(const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult &) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult(ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult &&) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult() = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& operator=(const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult &) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& operator=(ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mappCenterWorkspaceList_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr && return this->userId_ == nullptr; };
    // mappCenterWorkspaceList Field Functions 
    bool hasMappCenterWorkspaceList() const { return this->mappCenterWorkspaceList_ != nullptr;};
    void deleteMappCenterWorkspaceList() { this->mappCenterWorkspaceList_ = nullptr;};
    inline const vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList> & mappCenterWorkspaceList() const { DARABONBA_PTR_GET_CONST(mappCenterWorkspaceList_, vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList>) };
    inline vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList> mappCenterWorkspaceList() { DARABONBA_PTR_GET(mappCenterWorkspaceList_, vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList>) };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& setMappCenterWorkspaceList(const vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList> & mappCenterWorkspaceList) { DARABONBA_PTR_SET_VALUE(mappCenterWorkspaceList_, mappCenterWorkspaceList) };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& setMappCenterWorkspaceList(vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList> && mappCenterWorkspaceList) { DARABONBA_PTR_SET_RVALUE(mappCenterWorkspaceList_, mappCenterWorkspaceList) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList>> mappCenterWorkspaceList_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
