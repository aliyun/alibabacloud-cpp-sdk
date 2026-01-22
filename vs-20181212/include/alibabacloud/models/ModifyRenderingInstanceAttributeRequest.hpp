// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyRenderingInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRenderingInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRenderingInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    ModifyRenderingInstanceAttributeRequest() = default ;
    ModifyRenderingInstanceAttributeRequest(const ModifyRenderingInstanceAttributeRequest &) = default ;
    ModifyRenderingInstanceAttributeRequest(ModifyRenderingInstanceAttributeRequest &&) = default ;
    ModifyRenderingInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRenderingInstanceAttributeRequest() = default ;
    ModifyRenderingInstanceAttributeRequest& operator=(const ModifyRenderingInstanceAttributeRequest &) = default ;
    ModifyRenderingInstanceAttributeRequest& operator=(ModifyRenderingInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyRenderingInstanceAttributeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ModifyRenderingInstanceAttributeRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
