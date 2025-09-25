// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetDialogLogRequest() = default ;
    GetDialogLogRequest(const GetDialogLogRequest &) = default ;
    GetDialogLogRequest(GetDialogLogRequest &&) = default ;
    GetDialogLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogLogRequest() = default ;
    GetDialogLogRequest& operator=(const GetDialogLogRequest &) = default ;
    GetDialogLogRequest& operator=(GetDialogLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->sessionId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDialogLogRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetDialogLogRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
