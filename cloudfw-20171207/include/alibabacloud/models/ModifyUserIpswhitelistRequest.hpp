// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERIPSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERIPSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyUserIPSWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(ListValue, listValue_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
    };
    ModifyUserIPSWhitelistRequest() = default ;
    ModifyUserIPSWhitelistRequest(const ModifyUserIPSWhitelistRequest &) = default ;
    ModifyUserIPSWhitelistRequest(ModifyUserIPSWhitelistRequest &&) = default ;
    ModifyUserIPSWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserIPSWhitelistRequest() = default ;
    ModifyUserIPSWhitelistRequest& operator=(const ModifyUserIPSWhitelistRequest &) = default ;
    ModifyUserIPSWhitelistRequest& operator=(ModifyUserIPSWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->ipVersion_ != nullptr && this->lang_ != nullptr && this->listType_ != nullptr && this->listValue_ != nullptr && this->sourceIp_ != nullptr
        && this->whiteType_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline int64_t direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
    inline ModifyUserIPSWhitelistRequest& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ModifyUserIPSWhitelistRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyUserIPSWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline int64_t listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
    inline ModifyUserIPSWhitelistRequest& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // listValue Field Functions 
    bool hasListValue() const { return this->listValue_ != nullptr;};
    void deleteListValue() { this->listValue_ = nullptr;};
    inline string listValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
    inline ModifyUserIPSWhitelistRequest& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyUserIPSWhitelistRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // whiteType Field Functions 
    bool hasWhiteType() const { return this->whiteType_ != nullptr;};
    void deleteWhiteType() { this->whiteType_ = nullptr;};
    inline int64_t whiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
    inline ModifyUserIPSWhitelistRequest& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


  protected:
    std::shared_ptr<int64_t> direction_ = nullptr;
    std::shared_ptr<string> ipVersion_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int64_t> listType_ = nullptr;
    std::shared_ptr<string> listValue_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<int64_t> whiteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
