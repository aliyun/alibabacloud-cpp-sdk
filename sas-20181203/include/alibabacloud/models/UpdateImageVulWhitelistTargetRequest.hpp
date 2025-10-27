// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEVULWHITELISTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEVULWHITELISTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateImageVulWhitelistTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageVulWhitelistTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageVulWhitelistTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    UpdateImageVulWhitelistTargetRequest() = default ;
    UpdateImageVulWhitelistTargetRequest(const UpdateImageVulWhitelistTargetRequest &) = default ;
    UpdateImageVulWhitelistTargetRequest(UpdateImageVulWhitelistTargetRequest &&) = default ;
    UpdateImageVulWhitelistTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageVulWhitelistTargetRequest() = default ;
    UpdateImageVulWhitelistTargetRequest& operator=(const UpdateImageVulWhitelistTargetRequest &) = default ;
    UpdateImageVulWhitelistTargetRequest& operator=(UpdateImageVulWhitelistTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->lang_ == nullptr && return this->reason_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateImageVulWhitelistTargetRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateImageVulWhitelistTargetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateImageVulWhitelistTargetRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateImageVulWhitelistTargetRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline UpdateImageVulWhitelistTargetRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The whitelist ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why you add the vulnerability to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The source of the whitelist. Valid values:
    // 
    // *   **image**
    // *   **agentless**
    std::shared_ptr<string> source_ = nullptr;
    // The vulnerability that you want to add to the whitelist. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: The type of the vulnerability. The value is fixed to repo.
    // *   **target**: The content of the vulnerability. The value is in the format of Namespace/Image repository.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
