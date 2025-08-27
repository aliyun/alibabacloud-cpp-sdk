// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightSegmentAvailableCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightSegmentAvailableCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightSegmentAvailableCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    IntlFlightSegmentAvailableCertRequest() = default ;
    IntlFlightSegmentAvailableCertRequest(const IntlFlightSegmentAvailableCertRequest &) = default ;
    IntlFlightSegmentAvailableCertRequest(IntlFlightSegmentAvailableCertRequest &&) = default ;
    IntlFlightSegmentAvailableCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightSegmentAvailableCertRequest() = default ;
    IntlFlightSegmentAvailableCertRequest& operator=(const IntlFlightSegmentAvailableCertRequest &) = default ;
    IntlFlightSegmentAvailableCertRequest& operator=(IntlFlightSegmentAvailableCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->language_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightSegmentAvailableCertRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline IntlFlightSegmentAvailableCertRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IntlFlightSegmentAvailableCertRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline IntlFlightSegmentAvailableCertRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
