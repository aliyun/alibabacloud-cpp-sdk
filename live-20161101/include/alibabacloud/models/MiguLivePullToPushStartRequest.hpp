// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGULIVEPULLTOPUSHSTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGULIVEPULLTOPUSHSTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MiguLivePullToPushStartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MiguLivePullToPushStartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(MiguData, miguData_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, MiguLivePullToPushStartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(MiguData, miguData_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    MiguLivePullToPushStartRequest() = default ;
    MiguLivePullToPushStartRequest(const MiguLivePullToPushStartRequest &) = default ;
    MiguLivePullToPushStartRequest(MiguLivePullToPushStartRequest &&) = default ;
    MiguLivePullToPushStartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MiguLivePullToPushStartRequest() = default ;
    MiguLivePullToPushStartRequest& operator=(const MiguLivePullToPushStartRequest &) = default ;
    MiguLivePullToPushStartRequest& operator=(MiguLivePullToPushStartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->miguData_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline MiguLivePullToPushStartRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // miguData Field Functions 
    bool hasMiguData() const { return this->miguData_ != nullptr;};
    void deleteMiguData() { this->miguData_ = nullptr;};
    inline string getMiguData() const { DARABONBA_PTR_GET_DEFAULT(miguData_, "") };
    inline MiguLivePullToPushStartRequest& setMiguData(string miguData) { DARABONBA_PTR_SET_VALUE(miguData_, miguData) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MiguLivePullToPushStartRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MiguLivePullToPushStartRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> miguData_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
