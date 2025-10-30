// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountByRowPermissionIdResponseBodyDataUserMappingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAccountByRowPermissionIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UserMappingList, userMappingList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UserMappingList, userMappingList_);
    };
    GetAccountByRowPermissionIdResponseBodyData() = default ;
    GetAccountByRowPermissionIdResponseBodyData(const GetAccountByRowPermissionIdResponseBodyData &) = default ;
    GetAccountByRowPermissionIdResponseBodyData(GetAccountByRowPermissionIdResponseBodyData &&) = default ;
    GetAccountByRowPermissionIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdResponseBodyData() = default ;
    GetAccountByRowPermissionIdResponseBodyData& operator=(const GetAccountByRowPermissionIdResponseBodyData &) = default ;
    GetAccountByRowPermissionIdResponseBodyData& operator=(GetAccountByRowPermissionIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->userMappingList_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAccountByRowPermissionIdResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // userMappingList Field Functions 
    bool hasUserMappingList() const { return this->userMappingList_ != nullptr;};
    void deleteUserMappingList() { this->userMappingList_ = nullptr;};
    inline const vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList> & userMappingList() const { DARABONBA_PTR_GET_CONST(userMappingList_, vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList>) };
    inline vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList> userMappingList() { DARABONBA_PTR_GET(userMappingList_, vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList>) };
    inline GetAccountByRowPermissionIdResponseBodyData& setUserMappingList(const vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList> & userMappingList) { DARABONBA_PTR_SET_VALUE(userMappingList_, userMappingList) };
    inline GetAccountByRowPermissionIdResponseBodyData& setUserMappingList(vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList> && userMappingList) { DARABONBA_PTR_SET_RVALUE(userMappingList_, userMappingList) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::GetAccountByRowPermissionIdResponseBodyDataUserMappingList>> userMappingList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
