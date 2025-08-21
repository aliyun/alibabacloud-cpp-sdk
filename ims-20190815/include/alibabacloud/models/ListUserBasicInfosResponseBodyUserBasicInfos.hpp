// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODYUSERBASICINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODYUSERBASICINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUserBasicInfosResponseBodyUserBasicInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBasicInfosResponseBodyUserBasicInfos& obj) { 
      DARABONBA_PTR_TO_JSON(UserBasicInfo, userBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBasicInfosResponseBodyUserBasicInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(UserBasicInfo, userBasicInfo_);
    };
    ListUserBasicInfosResponseBodyUserBasicInfos() = default ;
    ListUserBasicInfosResponseBodyUserBasicInfos(const ListUserBasicInfosResponseBodyUserBasicInfos &) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfos(ListUserBasicInfosResponseBodyUserBasicInfos &&) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBasicInfosResponseBodyUserBasicInfos() = default ;
    ListUserBasicInfosResponseBodyUserBasicInfos& operator=(const ListUserBasicInfosResponseBodyUserBasicInfos &) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfos& operator=(ListUserBasicInfosResponseBodyUserBasicInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userBasicInfo_ != nullptr; };
    // userBasicInfo Field Functions 
    bool hasUserBasicInfo() const { return this->userBasicInfo_ != nullptr;};
    void deleteUserBasicInfo() { this->userBasicInfo_ = nullptr;};
    inline const vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> & userBasicInfo() const { DARABONBA_PTR_GET_CONST(userBasicInfo_, vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>) };
    inline vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> userBasicInfo() { DARABONBA_PTR_GET(userBasicInfo_, vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>) };
    inline ListUserBasicInfosResponseBodyUserBasicInfos& setUserBasicInfo(const vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> & userBasicInfo) { DARABONBA_PTR_SET_VALUE(userBasicInfo_, userBasicInfo) };
    inline ListUserBasicInfosResponseBodyUserBasicInfos& setUserBasicInfo(vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> && userBasicInfo) { DARABONBA_PTR_SET_RVALUE(userBasicInfo_, userBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>> userBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
