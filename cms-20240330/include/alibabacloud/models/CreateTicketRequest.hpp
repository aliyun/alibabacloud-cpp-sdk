// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessTokenExpirationTime, accessTokenExpirationTime_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessTokenExpirationTime, accessTokenExpirationTime_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
    };
    CreateTicketRequest() = default ;
    CreateTicketRequest(const CreateTicketRequest &) = default ;
    CreateTicketRequest(CreateTicketRequest &&) = default ;
    CreateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequest() = default ;
    CreateTicketRequest& operator=(const CreateTicketRequest &) = default ;
    CreateTicketRequest& operator=(CreateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenExpirationTime_ != nullptr
        && this->expirationTime_ != nullptr; };
    // accessTokenExpirationTime Field Functions 
    bool hasAccessTokenExpirationTime() const { return this->accessTokenExpirationTime_ != nullptr;};
    void deleteAccessTokenExpirationTime() { this->accessTokenExpirationTime_ = nullptr;};
    inline int64_t accessTokenExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpirationTime_, 0L) };
    inline CreateTicketRequest& setAccessTokenExpirationTime(int64_t accessTokenExpirationTime) { DARABONBA_PTR_SET_VALUE(accessTokenExpirationTime_, accessTokenExpirationTime) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline CreateTicketRequest& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


  protected:
    std::shared_ptr<int64_t> accessTokenExpirationTime_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
