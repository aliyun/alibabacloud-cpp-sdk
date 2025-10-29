// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetMessageAppRequest() = default ;
    GetMessageAppRequest(const GetMessageAppRequest &) = default ;
    GetMessageAppRequest(GetMessageAppRequest &&) = default ;
    GetMessageAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageAppRequest() = default ;
    GetMessageAppRequest& operator=(const GetMessageAppRequest &) = default ;
    GetMessageAppRequest& operator=(GetMessageAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMessageAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
