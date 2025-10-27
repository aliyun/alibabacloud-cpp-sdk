// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGEVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGEVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteImageVulWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageVulWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageVulWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteImageVulWhitelistRequest() = default ;
    DeleteImageVulWhitelistRequest(const DeleteImageVulWhitelistRequest &) = default ;
    DeleteImageVulWhitelistRequest(DeleteImageVulWhitelistRequest &&) = default ;
    DeleteImageVulWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageVulWhitelistRequest() = default ;
    DeleteImageVulWhitelistRequest& operator=(const DeleteImageVulWhitelistRequest &) = default ;
    DeleteImageVulWhitelistRequest& operator=(DeleteImageVulWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->lang_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteImageVulWhitelistRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteImageVulWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the whitelist. Separate multiple IDs with commas (,).
    std::shared_ptr<string> ids_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
