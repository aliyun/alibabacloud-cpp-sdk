// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteRenderingInstanceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeNames, attributeNames_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRenderingInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeNames, attributeNames_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DeleteRenderingInstanceSettingsRequest() = default ;
    DeleteRenderingInstanceSettingsRequest(const DeleteRenderingInstanceSettingsRequest &) = default ;
    DeleteRenderingInstanceSettingsRequest(DeleteRenderingInstanceSettingsRequest &&) = default ;
    DeleteRenderingInstanceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRenderingInstanceSettingsRequest() = default ;
    DeleteRenderingInstanceSettingsRequest& operator=(const DeleteRenderingInstanceSettingsRequest &) = default ;
    DeleteRenderingInstanceSettingsRequest& operator=(DeleteRenderingInstanceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeNames_ != nullptr
        && this->renderingInstanceId_ != nullptr; };
    // attributeNames Field Functions 
    bool hasAttributeNames() const { return this->attributeNames_ != nullptr;};
    void deleteAttributeNames() { this->attributeNames_ = nullptr;};
    inline const vector<string> & attributeNames() const { DARABONBA_PTR_GET_CONST(attributeNames_, vector<string>) };
    inline vector<string> attributeNames() { DARABONBA_PTR_GET(attributeNames_, vector<string>) };
    inline DeleteRenderingInstanceSettingsRequest& setAttributeNames(const vector<string> & attributeNames) { DARABONBA_PTR_SET_VALUE(attributeNames_, attributeNames) };
    inline DeleteRenderingInstanceSettingsRequest& setAttributeNames(vector<string> && attributeNames) { DARABONBA_PTR_SET_RVALUE(attributeNames_, attributeNames) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DeleteRenderingInstanceSettingsRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<vector<string>> attributeNames_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
