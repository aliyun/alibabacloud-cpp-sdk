// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMBERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEMBERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class MemberAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MemberAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
    };
    friend void from_json(const Darabonba::Json& j, MemberAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
    };
    MemberAccountRequest() = default ;
    MemberAccountRequest(const MemberAccountRequest &) = default ;
    MemberAccountRequest(MemberAccountRequest &&) = default ;
    MemberAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MemberAccountRequest() = default ;
    MemberAccountRequest& operator=(const MemberAccountRequest &) = default ;
    MemberAccountRequest& operator=(MemberAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shopId_ == nullptr; };
    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline MemberAccountRequest& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


  protected:
    // This parameter is required.
    shared_ptr<string> shopId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
