// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTRICTEVENTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTRICTEVENTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateStrictEventNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStrictEventNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStrictEventNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    UpdateStrictEventNameRequest() = default ;
    UpdateStrictEventNameRequest(const UpdateStrictEventNameRequest &) = default ;
    UpdateStrictEventNameRequest(UpdateStrictEventNameRequest &&) = default ;
    UpdateStrictEventNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStrictEventNameRequest() = default ;
    UpdateStrictEventNameRequest& operator=(const UpdateStrictEventNameRequest &) = default ;
    UpdateStrictEventNameRequest& operator=(UpdateStrictEventNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventNameList_ != nullptr
        && this->lang_ != nullptr && this->operator_ != nullptr; };
    // eventNameList Field Functions 
    bool hasEventNameList() const { return this->eventNameList_ != nullptr;};
    void deleteEventNameList() { this->eventNameList_ = nullptr;};
    inline const vector<string> & eventNameList() const { DARABONBA_PTR_GET_CONST(eventNameList_, vector<string>) };
    inline vector<string> eventNameList() { DARABONBA_PTR_GET(eventNameList_, vector<string>) };
    inline UpdateStrictEventNameRequest& setEventNameList(const vector<string> & eventNameList) { DARABONBA_PTR_SET_VALUE(eventNameList_, eventNameList) };
    inline UpdateStrictEventNameRequest& setEventNameList(vector<string> && eventNameList) { DARABONBA_PTR_SET_RVALUE(eventNameList_, eventNameList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateStrictEventNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateStrictEventNameRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // List of strict alarms to be operated on. This list is a complete list, and any strict alarms not included in this list will have the opposite operation performed.
    // > You can call [DescribeStrictEventName](~~DescribeStrictEventName~~) to get the list of all strict mode alarms.
    // > -
    std::shared_ptr<vector<string>> eventNameList_ = nullptr;
    // Sets the language type for requests and received messages, default is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Operation rule determination operator:
    // - *on*: Turn on the alarm
    // - *off*: Turn off the alarm
    // 
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
