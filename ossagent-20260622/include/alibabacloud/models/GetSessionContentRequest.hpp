// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
namespace Models
{
  class GetSessionContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetSessionContentRequest() = default ;
    GetSessionContentRequest(const GetSessionContentRequest &) = default ;
    GetSessionContentRequest(GetSessionContentRequest &&) = default ;
    GetSessionContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionContentRequest() = default ;
    GetSessionContentRequest& operator=(const GetSessionContentRequest &) = default ;
    GetSessionContentRequest& operator=(GetSessionContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetSessionContentRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
