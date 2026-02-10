// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetConsoleFuncGrayStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsoleFuncGrayStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsoleFuncGrayStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetConsoleFuncGrayStatusRequest() = default ;
    GetConsoleFuncGrayStatusRequest(const GetConsoleFuncGrayStatusRequest &) = default ;
    GetConsoleFuncGrayStatusRequest(GetConsoleFuncGrayStatusRequest &&) = default ;
    GetConsoleFuncGrayStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsoleFuncGrayStatusRequest() = default ;
    GetConsoleFuncGrayStatusRequest& operator=(const GetConsoleFuncGrayStatusRequest &) = default ;
    GetConsoleFuncGrayStatusRequest& operator=(GetConsoleFuncGrayStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->lang_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetConsoleFuncGrayStatusRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetConsoleFuncGrayStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // Name of the function module.
    shared_ptr<string> condition_ {};
    // Set the language type for request and response messages. Default value: **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
