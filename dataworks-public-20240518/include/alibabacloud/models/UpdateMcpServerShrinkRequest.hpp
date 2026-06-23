// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMcpServerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeaders, customHeadersShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Transport, transport_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Transport, transport_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    UpdateMcpServerShrinkRequest() = default ;
    UpdateMcpServerShrinkRequest(const UpdateMcpServerShrinkRequest &) = default ;
    UpdateMcpServerShrinkRequest(UpdateMcpServerShrinkRequest &&) = default ;
    UpdateMcpServerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerShrinkRequest() = default ;
    UpdateMcpServerShrinkRequest& operator=(const UpdateMcpServerShrinkRequest &) = default ;
    UpdateMcpServerShrinkRequest& operator=(UpdateMcpServerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customHeadersShrink_ == nullptr
        && this->name_ == nullptr && this->transport_ == nullptr && this->url_ == nullptr && this->visibility_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
    // customHeadersShrink Field Functions 
    bool hasCustomHeadersShrink() const { return this->customHeadersShrink_ != nullptr;};
    void deleteCustomHeadersShrink() { this->customHeadersShrink_ = nullptr;};
    inline string getCustomHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(customHeadersShrink_, "") };
    inline UpdateMcpServerShrinkRequest& setCustomHeadersShrink(string customHeadersShrink) { DARABONBA_PTR_SET_VALUE(customHeadersShrink_, customHeadersShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMcpServerShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transport Field Functions 
    bool hasTransport() const { return this->transport_ != nullptr;};
    void deleteTransport() { this->transport_ = nullptr;};
    inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
    inline UpdateMcpServerShrinkRequest& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateMcpServerShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateMcpServerShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScopeShrink Field Functions 
    bool hasVisibilityScopeShrink() const { return this->visibilityScopeShrink_ != nullptr;};
    void deleteVisibilityScopeShrink() { this->visibilityScopeShrink_ = nullptr;};
    inline string getVisibilityScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityScopeShrink_, "") };
    inline UpdateMcpServerShrinkRequest& setVisibilityScopeShrink(string visibilityScopeShrink) { DARABONBA_PTR_SET_VALUE(visibilityScopeShrink_, visibilityScopeShrink) };


  protected:
    // The new custom request headers, specified as key-value pairs.
    shared_ptr<string> customHeadersShrink_ {};
    // The name of the MCP Server to update.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The new transport protocol.
    shared_ptr<string> transport_ {};
    // The new service address. The address must start with`https://`.
    shared_ptr<string> url_ {};
    // The new visibility level.
    shared_ptr<string> visibility_ {};
    // The new visibility scope. The fields in this object depend on the value of the `Visibility` parameter.
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
