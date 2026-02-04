// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class GetStsTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStsTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStsTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
    };
    GetStsTokenRequest() = default ;
    GetStsTokenRequest(const GetStsTokenRequest &) = default ;
    GetStsTokenRequest(GetStsTokenRequest &&) = default ;
    GetStsTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStsTokenRequest() = default ;
    GetStsTokenRequest& operator=(const GetStsTokenRequest &) = default ;
    GetStsTokenRequest& operator=(GetStsTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->expiration_ == nullptr && this->externalId_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetStsTokenRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline GetStsTokenRequest& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline GetStsTokenRequest& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


  protected:
    shared_ptr<string> endUserId_ {};
    shared_ptr<int64_t> expiration_ {};
    shared_ptr<string> externalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
