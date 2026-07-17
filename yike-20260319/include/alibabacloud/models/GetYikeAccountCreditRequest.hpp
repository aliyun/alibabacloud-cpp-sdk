// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEACCOUNTCREDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEACCOUNTCREDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeAccountCreditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeAccountCreditRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetYikeAccountCreditRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetYikeAccountCreditRequest() = default ;
    GetYikeAccountCreditRequest(const GetYikeAccountCreditRequest &) = default ;
    GetYikeAccountCreditRequest(GetYikeAccountCreditRequest &&) = default ;
    GetYikeAccountCreditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeAccountCreditRequest() = default ;
    GetYikeAccountCreditRequest& operator=(const GetYikeAccountCreditRequest &) = default ;
    GetYikeAccountCreditRequest& operator=(GetYikeAccountCreditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
