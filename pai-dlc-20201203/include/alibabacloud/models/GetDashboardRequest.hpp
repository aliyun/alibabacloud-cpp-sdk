// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASHBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDASHBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetDashboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDashboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isShared, isShared_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetDashboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isShared, isShared_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    GetDashboardRequest() = default ;
    GetDashboardRequest(const GetDashboardRequest &) = default ;
    GetDashboardRequest(GetDashboardRequest &&) = default ;
    GetDashboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDashboardRequest() = default ;
    GetDashboardRequest& operator=(const GetDashboardRequest &) = default ;
    GetDashboardRequest& operator=(GetDashboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isShared_ == nullptr
        && return this->token_ == nullptr; };
    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool isShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline GetDashboardRequest& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetDashboardRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<bool> isShared_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
