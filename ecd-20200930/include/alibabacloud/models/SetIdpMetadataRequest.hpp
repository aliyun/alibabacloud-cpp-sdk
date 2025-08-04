// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDPMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDPMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetIdpMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdpMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdpMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetIdpMetadataRequest() = default ;
    SetIdpMetadataRequest(const SetIdpMetadataRequest &) = default ;
    SetIdpMetadataRequest(SetIdpMetadataRequest &&) = default ;
    SetIdpMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdpMetadataRequest() = default ;
    SetIdpMetadataRequest& operator=(const SetIdpMetadataRequest &) = default ;
    SetIdpMetadataRequest& operator=(SetIdpMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directoryId_ != nullptr
        && this->idpMetadata_ != nullptr && this->officeSiteId_ != nullptr && this->regionId_ != nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetIdpMetadataRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // idpMetadata Field Functions 
    bool hasIdpMetadata() const { return this->idpMetadata_ != nullptr;};
    void deleteIdpMetadata() { this->idpMetadata_ = nullptr;};
    inline string idpMetadata() const { DARABONBA_PTR_GET_DEFAULT(idpMetadata_, "") };
    inline SetIdpMetadataRequest& setIdpMetadata(string idpMetadata) { DARABONBA_PTR_SET_VALUE(idpMetadata_, idpMetadata) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline SetIdpMetadataRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetIdpMetadataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The workspace ID. This parameter is the same as `OfficeSiteId`. We recommend that you use `OfficeSiteId` to replace `DirectoryId`. You can specify only `DirectoryId` or `OfficeSiteId`.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The metadata of the IdP.
    // 
    // This parameter is required.
    std::shared_ptr<string> idpMetadata_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
