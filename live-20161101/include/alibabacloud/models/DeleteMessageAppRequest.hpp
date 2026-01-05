// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMESSAGEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMESSAGEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteMessageAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMessageAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMessageAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeleteMessageAppRequest() = default ;
    DeleteMessageAppRequest(const DeleteMessageAppRequest &) = default ;
    DeleteMessageAppRequest(DeleteMessageAppRequest &&) = default ;
    DeleteMessageAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMessageAppRequest() = default ;
    DeleteMessageAppRequest& operator=(const DeleteMessageAppRequest &) = default ;
    DeleteMessageAppRequest& operator=(DeleteMessageAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMessageAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the interactive messaging application that you want to delete. You can specify only one ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
