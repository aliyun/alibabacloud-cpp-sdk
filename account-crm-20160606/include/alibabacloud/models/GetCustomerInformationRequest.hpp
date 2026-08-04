// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetCustomerInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetCustomerInformationRequest() = default ;
    GetCustomerInformationRequest(const GetCustomerInformationRequest &) = default ;
    GetCustomerInformationRequest(GetCustomerInformationRequest &&) = default ;
    GetCustomerInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerInformationRequest() = default ;
    GetCustomerInformationRequest& operator=(const GetCustomerInformationRequest &) = default ;
    GetCustomerInformationRequest& operator=(GetCustomerInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetCustomerInformationRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
