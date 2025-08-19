// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEONLINESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILEONLINESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileOnlineStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileOnlineStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, MobileOnlineStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    MobileOnlineStatusRequest() = default ;
    MobileOnlineStatusRequest(const MobileOnlineStatusRequest &) = default ;
    MobileOnlineStatusRequest(MobileOnlineStatusRequest &&) = default ;
    MobileOnlineStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileOnlineStatusRequest() = default ;
    MobileOnlineStatusRequest& operator=(const MobileOnlineStatusRequest &) = default ;
    MobileOnlineStatusRequest& operator=(MobileOnlineStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobile_ != nullptr
        && this->paramType_ != nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline MobileOnlineStatusRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline MobileOnlineStatusRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    // Mobile number:
    // 
    // - When `paramType` is `normal`: provide the plaintext mobile number.
    // - When `paramType` is `md5`: provide the encrypted mobile number.
    std::shared_ptr<string> mobile_ = nullptr;
    // Parameter type:
    // 
    // - normal: unencrypted.
    // - md5: md5 encrypted.
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
