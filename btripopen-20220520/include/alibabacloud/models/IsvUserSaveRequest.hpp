// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVUSERSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVUSERSAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IsvUserSaveRequestUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvUserSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvUserSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(user_list, userList_);
    };
    friend void from_json(const Darabonba::Json& j, IsvUserSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(user_list, userList_);
    };
    IsvUserSaveRequest() = default ;
    IsvUserSaveRequest(const IsvUserSaveRequest &) = default ;
    IsvUserSaveRequest(IsvUserSaveRequest &&) = default ;
    IsvUserSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvUserSaveRequest() = default ;
    IsvUserSaveRequest& operator=(const IsvUserSaveRequest &) = default ;
    IsvUserSaveRequest& operator=(IsvUserSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userList_ != nullptr; };
    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<IsvUserSaveRequestUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<IsvUserSaveRequestUserList>) };
    inline vector<IsvUserSaveRequestUserList> userList() { DARABONBA_PTR_GET(userList_, vector<IsvUserSaveRequestUserList>) };
    inline IsvUserSaveRequest& setUserList(const vector<IsvUserSaveRequestUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline IsvUserSaveRequest& setUserList(vector<IsvUserSaveRequestUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<vector<IsvUserSaveRequestUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
