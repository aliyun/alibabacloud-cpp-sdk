// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ModelToken, modelToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ModelToken, modelToken_);
    };
    GetScenePreviewInfoRequest() = default ;
    GetScenePreviewInfoRequest(const GetScenePreviewInfoRequest &) = default ;
    GetScenePreviewInfoRequest(GetScenePreviewInfoRequest &&) = default ;
    GetScenePreviewInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewInfoRequest() = default ;
    GetScenePreviewInfoRequest& operator=(const GetScenePreviewInfoRequest &) = default ;
    GetScenePreviewInfoRequest& operator=(GetScenePreviewInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->enabled_ == nullptr && return this->modelToken_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetScenePreviewInfoRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetScenePreviewInfoRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // modelToken Field Functions 
    bool hasModelToken() const { return this->modelToken_ != nullptr;};
    void deleteModelToken() { this->modelToken_ = nullptr;};
    inline string modelToken() const { DARABONBA_PTR_GET_DEFAULT(modelToken_, "") };
    inline GetScenePreviewInfoRequest& setModelToken(string modelToken) { DARABONBA_PTR_SET_VALUE(modelToken_, modelToken) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
