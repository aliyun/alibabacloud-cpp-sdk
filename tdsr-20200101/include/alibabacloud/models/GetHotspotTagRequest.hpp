// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetHotspotTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_TO_JSON(SubSceneUuid, subSceneUuid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_FROM_JSON(SubSceneUuid, subSceneUuid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetHotspotTagRequest() = default ;
    GetHotspotTagRequest(const GetHotspotTagRequest &) = default ;
    GetHotspotTagRequest(GetHotspotTagRequest &&) = default ;
    GetHotspotTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotTagRequest() = default ;
    GetHotspotTagRequest& operator=(const GetHotspotTagRequest &) = default ;
    GetHotspotTagRequest& operator=(GetHotspotTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->enabled_ == nullptr && return this->previewToken_ == nullptr && return this->subSceneUuid_ == nullptr && return this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetHotspotTagRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetHotspotTagRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline GetHotspotTagRequest& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


    // subSceneUuid Field Functions 
    bool hasSubSceneUuid() const { return this->subSceneUuid_ != nullptr;};
    void deleteSubSceneUuid() { this->subSceneUuid_ = nullptr;};
    inline string subSceneUuid() const { DARABONBA_PTR_GET_DEFAULT(subSceneUuid_, "") };
    inline GetHotspotTagRequest& setSubSceneUuid(string subSceneUuid) { DARABONBA_PTR_SET_VALUE(subSceneUuid_, subSceneUuid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetHotspotTagRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> previewToken_ = nullptr;
    std::shared_ptr<string> subSceneUuid_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
