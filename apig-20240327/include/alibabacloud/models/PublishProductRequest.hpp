// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PublishProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(portalId, portalId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(portalId, portalId_);
    };
    PublishProductRequest() = default ;
    PublishProductRequest(const PublishProductRequest &) = default ;
    PublishProductRequest(PublishProductRequest &&) = default ;
    PublishProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishProductRequest() = default ;
    PublishProductRequest& operator=(const PublishProductRequest &) = default ;
    PublishProductRequest& operator=(PublishProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portalId_ == nullptr; };
    // portalId Field Functions 
    bool hasPortalId() const { return this->portalId_ != nullptr;};
    void deletePortalId() { this->portalId_ = nullptr;};
    inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
    inline PublishProductRequest& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


  protected:
    // The ID of the HiMarket portal to which the API product is published. This parameter specifies the target portal for the publication. You can query the publication record by portal dimension by calling ListPortalPublications. This ID also appears in the publication record details and is paired with portalName.
    shared_ptr<string> portalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
