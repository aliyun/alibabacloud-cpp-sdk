// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEUSERCREDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEUSERCREDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetYikeUserCreditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeUserCreditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(YikeUserId, yikeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeUserCreditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(YikeUserId, yikeUserId_);
    };
    GetYikeUserCreditRequest() = default ;
    GetYikeUserCreditRequest(const GetYikeUserCreditRequest &) = default ;
    GetYikeUserCreditRequest(GetYikeUserCreditRequest &&) = default ;
    GetYikeUserCreditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeUserCreditRequest() = default ;
    GetYikeUserCreditRequest& operator=(const GetYikeUserCreditRequest &) = default ;
    GetYikeUserCreditRequest& operator=(GetYikeUserCreditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->yikeUserId_ == nullptr; };
    // yikeUserId Field Functions 
    bool hasYikeUserId() const { return this->yikeUserId_ != nullptr;};
    void deleteYikeUserId() { this->yikeUserId_ = nullptr;};
    inline string getYikeUserId() const { DARABONBA_PTR_GET_DEFAULT(yikeUserId_, "") };
    inline GetYikeUserCreditRequest& setYikeUserId(string yikeUserId) { DARABONBA_PTR_SET_VALUE(yikeUserId_, yikeUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> yikeUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
