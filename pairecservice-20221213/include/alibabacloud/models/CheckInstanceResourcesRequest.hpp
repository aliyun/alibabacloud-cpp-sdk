// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckInstanceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CheckInstanceResourcesRequest() = default ;
    CheckInstanceResourcesRequest(const CheckInstanceResourcesRequest &) = default ;
    CheckInstanceResourcesRequest(CheckInstanceResourcesRequest &&) = default ;
    CheckInstanceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceResourcesRequest() = default ;
    CheckInstanceResourcesRequest& operator=(const CheckInstanceResourcesRequest &) = default ;
    CheckInstanceResourcesRequest& operator=(CheckInstanceResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->type_ != nullptr && this->uri_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CheckInstanceResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckInstanceResourcesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CheckInstanceResourcesRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
