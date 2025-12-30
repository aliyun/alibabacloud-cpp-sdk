// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHSCOPEASYNCTASKFINISHEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DASHSCOPEASYNCTASKFINISHEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class DashscopeAsyncTaskFinishEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashscopeAsyncTaskFinishEventRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DashscopeAsyncTaskFinishEventRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    DashscopeAsyncTaskFinishEventRequest() = default ;
    DashscopeAsyncTaskFinishEventRequest(const DashscopeAsyncTaskFinishEventRequest &) = default ;
    DashscopeAsyncTaskFinishEventRequest(DashscopeAsyncTaskFinishEventRequest &&) = default ;
    DashscopeAsyncTaskFinishEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashscopeAsyncTaskFinishEventRequest() = default ;
    DashscopeAsyncTaskFinishEventRequest& operator=(const DashscopeAsyncTaskFinishEventRequest &) = default ;
    DashscopeAsyncTaskFinishEventRequest& operator=(DashscopeAsyncTaskFinishEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline DashscopeAsyncTaskFinishEventRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline DashscopeAsyncTaskFinishEventRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
