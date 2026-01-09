// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILERECYCLEDMETAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILERECYCLEDMETAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileRecycledMetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileRecycledMetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(RegisterDate, registerDate_);
    };
    friend void from_json(const Darabonba::Json& j, MobileRecycledMetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(RegisterDate, registerDate_);
    };
    MobileRecycledMetaVerifyRequest() = default ;
    MobileRecycledMetaVerifyRequest(const MobileRecycledMetaVerifyRequest &) = default ;
    MobileRecycledMetaVerifyRequest(MobileRecycledMetaVerifyRequest &&) = default ;
    MobileRecycledMetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileRecycledMetaVerifyRequest() = default ;
    MobileRecycledMetaVerifyRequest& operator=(const MobileRecycledMetaVerifyRequest &) = default ;
    MobileRecycledMetaVerifyRequest& operator=(MobileRecycledMetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && this->paramType_ == nullptr && this->registerDate_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline MobileRecycledMetaVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline MobileRecycledMetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // registerDate Field Functions 
    bool hasRegisterDate() const { return this->registerDate_ != nullptr;};
    void deleteRegisterDate() { this->registerDate_ = nullptr;};
    inline string getRegisterDate() const { DARABONBA_PTR_GET_DEFAULT(registerDate_, "") };
    inline MobileRecycledMetaVerifyRequest& setRegisterDate(string registerDate) { DARABONBA_PTR_SET_VALUE(registerDate_, registerDate) };


  protected:
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // This parameter is required.
    shared_ptr<string> paramType_ {};
    // This parameter is required.
    shared_ptr<string> registerDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
