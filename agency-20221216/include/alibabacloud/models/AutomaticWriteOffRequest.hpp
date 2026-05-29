// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOMATICWRITEOFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTOMATICWRITEOFFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class AutomaticWriteOffRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutomaticWriteOffRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticWriteOffAmount, automaticWriteOffAmount_);
      DARABONBA_PTR_TO_JSON(AutomaticWriteOffEnabled, automaticWriteOffEnabled_);
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, AutomaticWriteOffRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticWriteOffAmount, automaticWriteOffAmount_);
      DARABONBA_PTR_FROM_JSON(AutomaticWriteOffEnabled, automaticWriteOffEnabled_);
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    AutomaticWriteOffRequest() = default ;
    AutomaticWriteOffRequest(const AutomaticWriteOffRequest &) = default ;
    AutomaticWriteOffRequest(AutomaticWriteOffRequest &&) = default ;
    AutomaticWriteOffRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutomaticWriteOffRequest() = default ;
    AutomaticWriteOffRequest& operator=(const AutomaticWriteOffRequest &) = default ;
    AutomaticWriteOffRequest& operator=(AutomaticWriteOffRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->automaticWriteOffAmount_ == nullptr
        && this->automaticWriteOffEnabled_ == nullptr && this->customerUid_ == nullptr && this->language_ == nullptr; };
    // automaticWriteOffAmount Field Functions 
    bool hasAutomaticWriteOffAmount() const { return this->automaticWriteOffAmount_ != nullptr;};
    void deleteAutomaticWriteOffAmount() { this->automaticWriteOffAmount_ = nullptr;};
    inline int64_t getAutomaticWriteOffAmount() const { DARABONBA_PTR_GET_DEFAULT(automaticWriteOffAmount_, 0L) };
    inline AutomaticWriteOffRequest& setAutomaticWriteOffAmount(int64_t automaticWriteOffAmount) { DARABONBA_PTR_SET_VALUE(automaticWriteOffAmount_, automaticWriteOffAmount) };


    // automaticWriteOffEnabled Field Functions 
    bool hasAutomaticWriteOffEnabled() const { return this->automaticWriteOffEnabled_ != nullptr;};
    void deleteAutomaticWriteOffEnabled() { this->automaticWriteOffEnabled_ = nullptr;};
    inline bool getAutomaticWriteOffEnabled() const { DARABONBA_PTR_GET_DEFAULT(automaticWriteOffEnabled_, false) };
    inline AutomaticWriteOffRequest& setAutomaticWriteOffEnabled(bool automaticWriteOffEnabled) { DARABONBA_PTR_SET_VALUE(automaticWriteOffEnabled_, automaticWriteOffEnabled) };


    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline int64_t getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, 0L) };
    inline AutomaticWriteOffRequest& setCustomerUid(int64_t customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AutomaticWriteOffRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    shared_ptr<int64_t> automaticWriteOffAmount_ {};
    // This parameter is required.
    shared_ptr<bool> automaticWriteOffEnabled_ {};
    // This parameter is required.
    shared_ptr<int64_t> customerUid_ {};
    shared_ptr<string> language_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
