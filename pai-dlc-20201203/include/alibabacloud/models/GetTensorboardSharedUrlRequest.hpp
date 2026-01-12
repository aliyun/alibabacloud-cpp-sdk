// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENSORBOARDSHAREDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTENSORBOARDSHAREDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetTensorboardSharedUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTensorboardSharedUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTimeSeconds, expireTimeSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, GetTensorboardSharedUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTimeSeconds, expireTimeSeconds_);
    };
    GetTensorboardSharedUrlRequest() = default ;
    GetTensorboardSharedUrlRequest(const GetTensorboardSharedUrlRequest &) = default ;
    GetTensorboardSharedUrlRequest(GetTensorboardSharedUrlRequest &&) = default ;
    GetTensorboardSharedUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTensorboardSharedUrlRequest() = default ;
    GetTensorboardSharedUrlRequest& operator=(const GetTensorboardSharedUrlRequest &) = default ;
    GetTensorboardSharedUrlRequest& operator=(GetTensorboardSharedUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTimeSeconds_ == nullptr; };
    // expireTimeSeconds Field Functions 
    bool hasExpireTimeSeconds() const { return this->expireTimeSeconds_ != nullptr;};
    void deleteExpireTimeSeconds() { this->expireTimeSeconds_ = nullptr;};
    inline string getExpireTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireTimeSeconds_, "") };
    inline GetTensorboardSharedUrlRequest& setExpireTimeSeconds(string expireTimeSeconds) { DARABONBA_PTR_SET_VALUE(expireTimeSeconds_, expireTimeSeconds) };


  protected:
    // The validity period of the shareable link. Unit: seconds. Maximum value: 604800.
    shared_ptr<string> expireTimeSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
