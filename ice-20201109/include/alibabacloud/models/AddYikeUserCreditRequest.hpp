// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDYIKEUSERCREDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDYIKEUSERCREDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddYikeUserCreditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddYikeUserCreditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Credit, credit_);
      DARABONBA_PTR_TO_JSON(YikeUserId, yikeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AddYikeUserCreditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Credit, credit_);
      DARABONBA_PTR_FROM_JSON(YikeUserId, yikeUserId_);
    };
    AddYikeUserCreditRequest() = default ;
    AddYikeUserCreditRequest(const AddYikeUserCreditRequest &) = default ;
    AddYikeUserCreditRequest(AddYikeUserCreditRequest &&) = default ;
    AddYikeUserCreditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddYikeUserCreditRequest() = default ;
    AddYikeUserCreditRequest& operator=(const AddYikeUserCreditRequest &) = default ;
    AddYikeUserCreditRequest& operator=(AddYikeUserCreditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credit_ == nullptr
        && this->yikeUserId_ == nullptr; };
    // credit Field Functions 
    bool hasCredit() const { return this->credit_ != nullptr;};
    void deleteCredit() { this->credit_ = nullptr;};
    inline int32_t getCredit() const { DARABONBA_PTR_GET_DEFAULT(credit_, 0) };
    inline AddYikeUserCreditRequest& setCredit(int32_t credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };


    // yikeUserId Field Functions 
    bool hasYikeUserId() const { return this->yikeUserId_ != nullptr;};
    void deleteYikeUserId() { this->yikeUserId_ = nullptr;};
    inline string getYikeUserId() const { DARABONBA_PTR_GET_DEFAULT(yikeUserId_, "") };
    inline AddYikeUserCreditRequest& setYikeUserId(string yikeUserId) { DARABONBA_PTR_SET_VALUE(yikeUserId_, yikeUserId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> credit_ {};
    // This parameter is required.
    shared_ptr<string> yikeUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
