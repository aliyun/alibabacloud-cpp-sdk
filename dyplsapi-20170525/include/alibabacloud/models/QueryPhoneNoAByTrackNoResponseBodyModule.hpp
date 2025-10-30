// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryPhoneNoAByTrackNoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneNoAByTrackNoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneNoAByTrackNoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
    };
    QueryPhoneNoAByTrackNoResponseBodyModule() = default ;
    QueryPhoneNoAByTrackNoResponseBodyModule(const QueryPhoneNoAByTrackNoResponseBodyModule &) = default ;
    QueryPhoneNoAByTrackNoResponseBodyModule(QueryPhoneNoAByTrackNoResponseBodyModule &&) = default ;
    QueryPhoneNoAByTrackNoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneNoAByTrackNoResponseBodyModule() = default ;
    QueryPhoneNoAByTrackNoResponseBodyModule& operator=(const QueryPhoneNoAByTrackNoResponseBodyModule &) = default ;
    QueryPhoneNoAByTrackNoResponseBodyModule& operator=(QueryPhoneNoAByTrackNoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extension_ == nullptr
        && return this->phoneNoA_ == nullptr && return this->phoneNoX_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline QueryPhoneNoAByTrackNoResponseBodyModule& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline QueryPhoneNoAByTrackNoResponseBodyModule& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string phoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline QueryPhoneNoAByTrackNoResponseBodyModule& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


  protected:
    // The extension of phone number X.
    std::shared_ptr<string> extension_ = nullptr;
    // Phone number A.
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // The private number, that is, phone number X.
    std::shared_ptr<string> phoneNoX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
