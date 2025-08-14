// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAllPublicMediaTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPublicMediaTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPublicMediaTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
    };
    ListAllPublicMediaTagsRequest() = default ;
    ListAllPublicMediaTagsRequest(const ListAllPublicMediaTagsRequest &) = default ;
    ListAllPublicMediaTagsRequest(ListAllPublicMediaTagsRequest &&) = default ;
    ListAllPublicMediaTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPublicMediaTagsRequest() = default ;
    ListAllPublicMediaTagsRequest& operator=(const ListAllPublicMediaTagsRequest &) = default ;
    ListAllPublicMediaTagsRequest& operator=(ListAllPublicMediaTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->entityId_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListAllPublicMediaTagsRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListAllPublicMediaTagsRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


  protected:
    // The business type of the media asset.
    std::shared_ptr<string> businessType_ = nullptr;
    // The entity ID, which is used to distinguish between media assets of different types in the public domain.
    // 
    // Set this parameter to Copyright_Music, which indicates music in the public domain.
    std::shared_ptr<string> entityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
