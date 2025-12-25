// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEHOTSPOTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEHOTSPOTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class SaveHotspotConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveHotspotConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamTag, paramTag_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
    };
    friend void from_json(const Darabonba::Json& j, SaveHotspotConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamTag, paramTag_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
    };
    SaveHotspotConfigRequest() = default ;
    SaveHotspotConfigRequest(const SaveHotspotConfigRequest &) = default ;
    SaveHotspotConfigRequest(SaveHotspotConfigRequest &&) = default ;
    SaveHotspotConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveHotspotConfigRequest() = default ;
    SaveHotspotConfigRequest& operator=(const SaveHotspotConfigRequest &) = default ;
    SaveHotspotConfigRequest& operator=(SaveHotspotConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramTag_ == nullptr
        && return this->previewToken_ == nullptr; };
    // paramTag Field Functions 
    bool hasParamTag() const { return this->paramTag_ != nullptr;};
    void deleteParamTag() { this->paramTag_ = nullptr;};
    inline string paramTag() const { DARABONBA_PTR_GET_DEFAULT(paramTag_, "") };
    inline SaveHotspotConfigRequest& setParamTag(string paramTag) { DARABONBA_PTR_SET_VALUE(paramTag_, paramTag) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline SaveHotspotConfigRequest& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


  protected:
    std::shared_ptr<string> paramTag_ = nullptr;
    std::shared_ptr<string> previewToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
