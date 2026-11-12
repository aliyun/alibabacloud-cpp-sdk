// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLCASHIERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PULLCASHIERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PullCashierResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullCashierResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
    };
    friend void from_json(const Darabonba::Json& j, PullCashierResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
    };
    PullCashierResponseBody() = default ;
    PullCashierResponseBody(const PullCashierResponseBody &) = default ;
    PullCashierResponseBody(PullCashierResponseBody &&) = default ;
    PullCashierResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullCashierResponseBody() = default ;
    PullCashierResponseBody& operator=(const PullCashierResponseBody &) = default ;
    PullCashierResponseBody& operator=(PullCashierResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->retCode_ == nullptr
        && this->retMsg_ == nullptr && this->retValue_ == nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline PullCashierResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string getRetMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline PullCashierResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline bool getRetValue() const { DARABONBA_PTR_GET_DEFAULT(retValue_, false) };
    inline PullCashierResponseBody& setRetValue(bool retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };


  protected:
    // The returned error code. `0` indicates success.
    shared_ptr<int32_t> retCode_ {};
    // The returned error message. No message is returned upon success.
    shared_ptr<string> retMsg_ {};
    // The result of pulling up the checkout page. true indicates success, and false indicates failure.
    shared_ptr<bool> retValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
