// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCUSTVARIABLELIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCUSTVARIABLELIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckCustVariableLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCustVariableLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCustVariableLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    CheckCustVariableLimitRequest() = default ;
    CheckCustVariableLimitRequest(const CheckCustVariableLimitRequest &) = default ;
    CheckCustVariableLimitRequest(CheckCustVariableLimitRequest &&) = default ;
    CheckCustVariableLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCustVariableLimitRequest() = default ;
    CheckCustVariableLimitRequest& operator=(const CheckCustVariableLimitRequest &) = default ;
    CheckCustVariableLimitRequest& operator=(CheckCustVariableLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckCustVariableLimitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CheckCustVariableLimitRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CheckCustVariableLimitRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
