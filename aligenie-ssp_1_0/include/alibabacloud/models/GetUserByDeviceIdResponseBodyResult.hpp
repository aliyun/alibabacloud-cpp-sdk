// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserByDeviceIdResponseBodyResultUserUnionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUserByDeviceIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserByDeviceIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      DARABONBA_PTR_TO_JSON(UserUnionIds, userUnionIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserByDeviceIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
      DARABONBA_PTR_FROM_JSON(UserUnionIds, userUnionIds_);
    };
    GetUserByDeviceIdResponseBodyResult() = default ;
    GetUserByDeviceIdResponseBodyResult(const GetUserByDeviceIdResponseBodyResult &) = default ;
    GetUserByDeviceIdResponseBodyResult(GetUserByDeviceIdResponseBodyResult &&) = default ;
    GetUserByDeviceIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserByDeviceIdResponseBodyResult() = default ;
    GetUserByDeviceIdResponseBodyResult& operator=(const GetUserByDeviceIdResponseBodyResult &) = default ;
    GetUserByDeviceIdResponseBodyResult& operator=(GetUserByDeviceIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userOpenId_ != nullptr
        && this->userUnionIds_ != nullptr; };
    // userOpenId Field Functions 
    bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
    void deleteUserOpenId() { this->userOpenId_ = nullptr;};
    inline string userOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
    inline GetUserByDeviceIdResponseBodyResult& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    // userUnionIds Field Functions 
    bool hasUserUnionIds() const { return this->userUnionIds_ != nullptr;};
    void deleteUserUnionIds() { this->userUnionIds_ = nullptr;};
    inline const vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds> & userUnionIds() const { DARABONBA_PTR_GET_CONST(userUnionIds_, vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds>) };
    inline vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds> userUnionIds() { DARABONBA_PTR_GET(userUnionIds_, vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds>) };
    inline GetUserByDeviceIdResponseBodyResult& setUserUnionIds(const vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds> & userUnionIds) { DARABONBA_PTR_SET_VALUE(userUnionIds_, userUnionIds) };
    inline GetUserByDeviceIdResponseBodyResult& setUserUnionIds(vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds> && userUnionIds) { DARABONBA_PTR_SET_RVALUE(userUnionIds_, userUnionIds) };


  protected:
    std::shared_ptr<string> userOpenId_ = nullptr;
    std::shared_ptr<vector<Models::GetUserByDeviceIdResponseBodyResultUserUnionIds>> userUnionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
