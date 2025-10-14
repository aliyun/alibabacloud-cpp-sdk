// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeDohUserInfoRequest() = default ;
    DescribeDohUserInfoRequest(const DescribeDohUserInfoRequest &) = default ;
    DescribeDohUserInfoRequest(DescribeDohUserInfoRequest &&) = default ;
    DescribeDohUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohUserInfoRequest() = default ;
    DescribeDohUserInfoRequest& operator=(const DescribeDohUserInfoRequest &) = default ;
    DescribeDohUserInfoRequest& operator=(DescribeDohUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->lang_ == nullptr && return this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDohUserInfoRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDohUserInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDohUserInfoRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end time for the query. Format: YYYY-MM-DD
    // 
    // If you do not specify this parameter, the default value is the time when you perform the query.
    std::shared_ptr<string> endDate_ = nullptr;
    // The language in which you want the values of some response parameters to be returned. These response parameters support multiple languages.
    std::shared_ptr<string> lang_ = nullptr;
    // The start time for the query. Format: YYYY-MM-DD
    // 
    // You can query the user information of the last 90 days only. `Set the parameter to a value no earlier than 90 days from the current time`.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
