// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGREYTAGROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGREYTAGROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateGreyTagRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_TO_JSON(ScRules, scRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
      DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
    };
    UpdateGreyTagRouteRequest() = default ;
    UpdateGreyTagRouteRequest(const UpdateGreyTagRouteRequest &) = default ;
    UpdateGreyTagRouteRequest(UpdateGreyTagRouteRequest &&) = default ;
    UpdateGreyTagRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGreyTagRouteRequest() = default ;
    UpdateGreyTagRouteRequest& operator=(const UpdateGreyTagRouteRequest &) = default ;
    UpdateGreyTagRouteRequest& operator=(UpdateGreyTagRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albRules_ != nullptr
        && this->description_ != nullptr && this->dubboRules_ != nullptr && this->greyTagRouteId_ != nullptr && this->scRules_ != nullptr; };
    // albRules Field Functions 
    bool hasAlbRules() const { return this->albRules_ != nullptr;};
    void deleteAlbRules() { this->albRules_ = nullptr;};
    inline string albRules() const { DARABONBA_PTR_GET_DEFAULT(albRules_, "") };
    inline UpdateGreyTagRouteRequest& setAlbRules(string albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGreyTagRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dubboRules Field Functions 
    bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
    void deleteDubboRules() { this->dubboRules_ = nullptr;};
    inline string dubboRules() const { DARABONBA_PTR_GET_DEFAULT(dubboRules_, "") };
    inline UpdateGreyTagRouteRequest& setDubboRules(string dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };


    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t greyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline UpdateGreyTagRouteRequest& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


    // scRules Field Functions 
    bool hasScRules() const { return this->scRules_ != nullptr;};
    void deleteScRules() { this->scRules_ = nullptr;};
    inline string scRules() const { DARABONBA_PTR_GET_DEFAULT(scRules_, "") };
    inline UpdateGreyTagRouteRequest& setScRules(string scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };


  protected:
    // The canary release rule of the application for which ALB gateway routing is configured.
    std::shared_ptr<string> albRules_ = nullptr;
    // The description of the canary release rule.
    std::shared_ptr<string> description_ = nullptr;
    // The canary release rule of the Dubbo application.
    std::shared_ptr<string> dubboRules_ = nullptr;
    // The ID of the canary release rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> greyTagRouteId_ = nullptr;
    // The canary release rule of the Spring Cloud application.
    std::shared_ptr<string> scRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
