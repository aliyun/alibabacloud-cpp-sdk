// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(day, day_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(day, day_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeGroupTrendRequest() = default ;
    DescribeGroupTrendRequest(const DescribeGroupTrendRequest &) = default ;
    DescribeGroupTrendRequest(DescribeGroupTrendRequest &&) = default ;
    DescribeGroupTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupTrendRequest() = default ;
    DescribeGroupTrendRequest& operator=(const DescribeGroupTrendRequest &) = default ;
    DescribeGroupTrendRequest& operator=(DescribeGroupTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->day_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // day Field Functions 
    bool hasDay() const { return this->day_ != nullptr;};
    void deleteDay() { this->day_ = nullptr;};
    inline string getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, "") };
    inline DescribeGroupTrendRequest& setDay(string day) { DARABONBA_PTR_SET_VALUE(day_, day) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeGroupTrendRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // day
    shared_ptr<string> day_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
