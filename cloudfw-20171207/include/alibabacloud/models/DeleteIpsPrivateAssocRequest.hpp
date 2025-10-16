// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPSPRIVATEASSOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPSPRIVATEASSOCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteIpsPrivateAssocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpsPrivateAssocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpsPrivateAssocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DeleteIpsPrivateAssocRequest() = default ;
    DeleteIpsPrivateAssocRequest(const DeleteIpsPrivateAssocRequest &) = default ;
    DeleteIpsPrivateAssocRequest(DeleteIpsPrivateAssocRequest &&) = default ;
    DeleteIpsPrivateAssocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpsPrivateAssocRequest() = default ;
    DeleteIpsPrivateAssocRequest& operator=(const DeleteIpsPrivateAssocRequest &) = default ;
    DeleteIpsPrivateAssocRequest& operator=(DeleteIpsPrivateAssocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->resourceId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteIpsPrivateAssocRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DeleteIpsPrivateAssocRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
