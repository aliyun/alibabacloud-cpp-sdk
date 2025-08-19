// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILEDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, MobileDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    MobileDetectRequest() = default ;
    MobileDetectRequest(const MobileDetectRequest &) = default ;
    MobileDetectRequest(MobileDetectRequest &&) = default ;
    MobileDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileDetectRequest() = default ;
    MobileDetectRequest& operator=(const MobileDetectRequest &) = default ;
    MobileDetectRequest& operator=(MobileDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobiles_ != nullptr
        && this->paramType_ != nullptr; };
    // mobiles Field Functions 
    bool hasMobiles() const { return this->mobiles_ != nullptr;};
    void deleteMobiles() { this->mobiles_ = nullptr;};
    inline string mobiles() const { DARABONBA_PTR_GET_DEFAULT(mobiles_, "") };
    inline MobileDetectRequest& setMobiles(string mobiles) { DARABONBA_PTR_SET_VALUE(mobiles_, mobiles) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline MobileDetectRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    // List of phone numbers.
    std::shared_ptr<string> mobiles_ = nullptr;
    // Encryption method:
    // - normal: plaintext, no encryption
    // - md5: MD5 encryption
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
