// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetYikeUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetYikeUserRequest() = default ;
    GetYikeUserRequest(const GetYikeUserRequest &) = default ;
    GetYikeUserRequest(GetYikeUserRequest &&) = default ;
    GetYikeUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeUserRequest() = default ;
    GetYikeUserRequest& operator=(const GetYikeUserRequest &) = default ;
    GetYikeUserRequest& operator=(GetYikeUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userName_ == nullptr; };
    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetYikeUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
