// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMULATIONPREDITINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMULATIONPREDITINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSimulationPreditInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimulationPreditInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(rulesStr, rulesStr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimulationPreditInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(rulesStr, rulesStr_);
    };
    DescribeSimulationPreditInfoRequest() = default ;
    DescribeSimulationPreditInfoRequest(const DescribeSimulationPreditInfoRequest &) = default ;
    DescribeSimulationPreditInfoRequest(DescribeSimulationPreditInfoRequest &&) = default ;
    DescribeSimulationPreditInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimulationPreditInfoRequest() = default ;
    DescribeSimulationPreditInfoRequest& operator=(const DescribeSimulationPreditInfoRequest &) = default ;
    DescribeSimulationPreditInfoRequest& operator=(DescribeSimulationPreditInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->eventCode_ == nullptr && this->regId_ == nullptr && this->rulesStr_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSimulationPreditInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSimulationPreditInfoRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSimulationPreditInfoRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // rulesStr Field Functions 
    bool hasRulesStr() const { return this->rulesStr_ != nullptr;};
    void deleteRulesStr() { this->rulesStr_ = nullptr;};
    inline string getRulesStr() const { DARABONBA_PTR_GET_DEFAULT(rulesStr_, "") };
    inline DescribeSimulationPreditInfoRequest& setRulesStr(string rulesStr) { DARABONBA_PTR_SET_VALUE(rulesStr_, rulesStr) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Event code
    // 
    // This parameter is required.
    shared_ptr<string> eventCode_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Policy list
    // 
    // This parameter is required.
    shared_ptr<string> rulesStr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
