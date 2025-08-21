// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDREQUESTBINDREQ_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDREQUESTBINDREQ_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindRequestBindReq : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindRequestBindReq& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindRequestBindReq& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
    };
    ScanCodeBindRequestBindReq() = default ;
    ScanCodeBindRequestBindReq(const ScanCodeBindRequestBindReq &) = default ;
    ScanCodeBindRequestBindReq(ScanCodeBindRequestBindReq &&) = default ;
    ScanCodeBindRequestBindReq(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindRequestBindReq() = default ;
    ScanCodeBindRequestBindReq& operator=(const ScanCodeBindRequestBindReq &) = default ;
    ScanCodeBindRequestBindReq& operator=(ScanCodeBindRequestBindReq &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->code_ != nullptr && this->extInfo_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ScanCodeBindRequestBindReq& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ScanCodeBindRequestBindReq& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline ScanCodeBindRequestBindReq& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // authCode
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
