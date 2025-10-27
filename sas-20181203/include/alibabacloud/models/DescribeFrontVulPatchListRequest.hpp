// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFrontVulPatchListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrontVulPatchListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrontVulPatchListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeFrontVulPatchListRequest() = default ;
    DescribeFrontVulPatchListRequest(const DescribeFrontVulPatchListRequest &) = default ;
    DescribeFrontVulPatchListRequest(DescribeFrontVulPatchListRequest &&) = default ;
    DescribeFrontVulPatchListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrontVulPatchListRequest() = default ;
    DescribeFrontVulPatchListRequest& operator=(const DescribeFrontVulPatchListRequest &) = default ;
    DescribeFrontVulPatchListRequest& operator=(DescribeFrontVulPatchListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->info_ == nullptr
        && return this->lang_ == nullptr && return this->operateType_ == nullptr && return this->type_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline DescribeFrontVulPatchListRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFrontVulPatchListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline DescribeFrontVulPatchListRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeFrontVulPatchListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The information about the Windows system vulnerability. The value is a JSON string that contains the following fields:
    // 
    // *   **name**: the name of the vulnerability.
    // *   **uuid**: the UUID of the server on which the vulnerability is detected.
    // *   **tag**: the tag that is added to the vulnerability. Set this field to **system**, which indicates Windows system vulnerabilities.
    // 
    // This parameter is required.
    std::shared_ptr<string> info_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The operation that you want to perform on the vulnerability. Set the value to **vul_fix**, which indicates vulnerability fixing.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // The type of the vulnerability. Set the value to **sys**, which indicates Windows system vulnerabilities.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
