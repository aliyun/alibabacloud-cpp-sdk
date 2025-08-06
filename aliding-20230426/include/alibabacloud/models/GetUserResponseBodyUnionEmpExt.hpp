// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUNIONEMPEXT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUNIONEMPEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserResponseBodyUnionEmpExtUnionEmpMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBodyUnionEmpExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUnionEmpExt& obj) { 
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(unionEmpMapList, unionEmpMapList_);
      DARABONBA_PTR_TO_JSON(userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUnionEmpExt& obj) { 
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(unionEmpMapList, unionEmpMapList_);
      DARABONBA_PTR_FROM_JSON(userid, userid_);
    };
    GetUserResponseBodyUnionEmpExt() = default ;
    GetUserResponseBodyUnionEmpExt(const GetUserResponseBodyUnionEmpExt &) = default ;
    GetUserResponseBodyUnionEmpExt(GetUserResponseBodyUnionEmpExt &&) = default ;
    GetUserResponseBodyUnionEmpExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUnionEmpExt() = default ;
    GetUserResponseBodyUnionEmpExt& operator=(const GetUserResponseBodyUnionEmpExt &) = default ;
    GetUserResponseBodyUnionEmpExt& operator=(GetUserResponseBodyUnionEmpExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->unionEmpMapList_ != nullptr && this->userid_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetUserResponseBodyUnionEmpExt& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // unionEmpMapList Field Functions 
    bool hasUnionEmpMapList() const { return this->unionEmpMapList_ != nullptr;};
    void deleteUnionEmpMapList() { this->unionEmpMapList_ = nullptr;};
    inline const vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList> & unionEmpMapList() const { DARABONBA_PTR_GET_CONST(unionEmpMapList_, vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList>) };
    inline vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList> unionEmpMapList() { DARABONBA_PTR_GET(unionEmpMapList_, vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList>) };
    inline GetUserResponseBodyUnionEmpExt& setUnionEmpMapList(const vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList> & unionEmpMapList) { DARABONBA_PTR_SET_VALUE(unionEmpMapList_, unionEmpMapList) };
    inline GetUserResponseBodyUnionEmpExt& setUnionEmpMapList(vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList> && unionEmpMapList) { DARABONBA_PTR_SET_RVALUE(unionEmpMapList_, unionEmpMapList) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetUserResponseBodyUnionEmpExt& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<vector<Models::GetUserResponseBodyUnionEmpExtUnionEmpMapList>> unionEmpMapList_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
