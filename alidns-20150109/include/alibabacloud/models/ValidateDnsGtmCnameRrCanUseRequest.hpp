// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDNSGTMCNAMERRCANUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDNSGTMCNAMERRCANUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ValidateDnsGtmCnameRrCanUseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDnsGtmCnameRrCanUseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_TO_JSON(CnameRr, cnameRr_);
      DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
      DARABONBA_PTR_TO_JSON(CnameZone, cnameZone_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDnsGtmCnameRrCanUseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameMode, cnameMode_);
      DARABONBA_PTR_FROM_JSON(CnameRr, cnameRr_);
      DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
      DARABONBA_PTR_FROM_JSON(CnameZone, cnameZone_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ValidateDnsGtmCnameRrCanUseRequest() = default ;
    ValidateDnsGtmCnameRrCanUseRequest(const ValidateDnsGtmCnameRrCanUseRequest &) = default ;
    ValidateDnsGtmCnameRrCanUseRequest(ValidateDnsGtmCnameRrCanUseRequest &&) = default ;
    ValidateDnsGtmCnameRrCanUseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDnsGtmCnameRrCanUseRequest() = default ;
    ValidateDnsGtmCnameRrCanUseRequest& operator=(const ValidateDnsGtmCnameRrCanUseRequest &) = default ;
    ValidateDnsGtmCnameRrCanUseRequest& operator=(ValidateDnsGtmCnameRrCanUseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameMode_ != nullptr
        && this->cnameRr_ != nullptr && this->cnameType_ != nullptr && this->cnameZone_ != nullptr && this->instanceId_ != nullptr && this->lang_ != nullptr; };
    // cnameMode Field Functions 
    bool hasCnameMode() const { return this->cnameMode_ != nullptr;};
    void deleteCnameMode() { this->cnameMode_ = nullptr;};
    inline string cnameMode() const { DARABONBA_PTR_GET_DEFAULT(cnameMode_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setCnameMode(string cnameMode) { DARABONBA_PTR_SET_VALUE(cnameMode_, cnameMode) };


    // cnameRr Field Functions 
    bool hasCnameRr() const { return this->cnameRr_ != nullptr;};
    void deleteCnameRr() { this->cnameRr_ = nullptr;};
    inline string cnameRr() const { DARABONBA_PTR_GET_DEFAULT(cnameRr_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setCnameRr(string cnameRr) { DARABONBA_PTR_SET_VALUE(cnameRr_, cnameRr) };


    // cnameType Field Functions 
    bool hasCnameType() const { return this->cnameType_ != nullptr;};
    void deleteCnameType() { this->cnameType_ = nullptr;};
    inline string cnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


    // cnameZone Field Functions 
    bool hasCnameZone() const { return this->cnameZone_ != nullptr;};
    void deleteCnameZone() { this->cnameZone_ = nullptr;};
    inline string cnameZone() const { DARABONBA_PTR_GET_DEFAULT(cnameZone_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setCnameZone(string cnameZone) { DARABONBA_PTR_SET_VALUE(cnameZone_, cnameZone) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ValidateDnsGtmCnameRrCanUseRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cnameMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cnameRr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cnameType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cnameZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
