// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetDialogDetailRequest() = default ;
    GetDialogDetailRequest(const GetDialogDetailRequest &) = default ;
    GetDialogDetailRequest(GetDialogDetailRequest &&) = default ;
    GetDialogDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogDetailRequest() = default ;
    GetDialogDetailRequest& operator=(const GetDialogDetailRequest &) = default ;
    GetDialogDetailRequest& operator=(GetDialogDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetDialogDetailRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
