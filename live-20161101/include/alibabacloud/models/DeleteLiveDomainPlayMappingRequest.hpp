// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEDOMAINPLAYMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEDOMAINPLAYMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveDomainPlayMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveDomainPlayMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_TO_JSON(PullDomain, pullDomain_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveDomainPlayMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_FROM_JSON(PullDomain, pullDomain_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteLiveDomainPlayMappingRequest() = default ;
    DeleteLiveDomainPlayMappingRequest(const DeleteLiveDomainPlayMappingRequest &) = default ;
    DeleteLiveDomainPlayMappingRequest(DeleteLiveDomainPlayMappingRequest &&) = default ;
    DeleteLiveDomainPlayMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveDomainPlayMappingRequest() = default ;
    DeleteLiveDomainPlayMappingRequest& operator=(const DeleteLiveDomainPlayMappingRequest &) = default ;
    DeleteLiveDomainPlayMappingRequest& operator=(DeleteLiveDomainPlayMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->playDomain_ != nullptr && this->pullDomain_ != nullptr && this->regionId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveDomainPlayMappingRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string playDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline DeleteLiveDomainPlayMappingRequest& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // pullDomain Field Functions 
    bool hasPullDomain() const { return this->pullDomain_ != nullptr;};
    void deletePullDomain() { this->pullDomain_ = nullptr;};
    inline string pullDomain() const { DARABONBA_PTR_GET_DEFAULT(pullDomain_, "") };
    inline DeleteLiveDomainPlayMappingRequest& setPullDomain(string pullDomain) { DARABONBA_PTR_SET_VALUE(pullDomain_, pullDomain) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveDomainPlayMappingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The sub-streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> playDomain_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> pullDomain_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
