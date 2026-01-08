// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddVirtualNodePoolStatusList, addVirtualNodePoolStatusList_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_TO_JSON(WuyingServerIdList, wuyingServerIdList_);
      DARABONBA_PTR_TO_JSON(WuyingServerNameOrId, wuyingServerNameOrId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddVirtualNodePoolStatusList, addVirtualNodePoolStatusList_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerIdList, wuyingServerIdList_);
      DARABONBA_PTR_FROM_JSON(WuyingServerNameOrId, wuyingServerNameOrId_);
    };
    ListWuyingServerRequest() = default ;
    ListWuyingServerRequest(const ListWuyingServerRequest &) = default ;
    ListWuyingServerRequest(ListWuyingServerRequest &&) = default ;
    ListWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerRequest() = default ;
    ListWuyingServerRequest& operator=(const ListWuyingServerRequest &) = default ;
    ListWuyingServerRequest& operator=(ListWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addVirtualNodePoolStatusList_ == nullptr
        && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->imageId_ == nullptr && this->officeSiteId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->serverInstanceType_ == nullptr && this->status_ == nullptr && this->virtualNodePoolId_ == nullptr && this->wuyingServerIdList_ == nullptr
        && this->wuyingServerNameOrId_ == nullptr; };
    // addVirtualNodePoolStatusList Field Functions 
    bool hasAddVirtualNodePoolStatusList() const { return this->addVirtualNodePoolStatusList_ != nullptr;};
    void deleteAddVirtualNodePoolStatusList() { this->addVirtualNodePoolStatusList_ = nullptr;};
    inline const vector<string> & getAddVirtualNodePoolStatusList() const { DARABONBA_PTR_GET_CONST(addVirtualNodePoolStatusList_, vector<string>) };
    inline vector<string> getAddVirtualNodePoolStatusList() { DARABONBA_PTR_GET(addVirtualNodePoolStatusList_, vector<string>) };
    inline ListWuyingServerRequest& setAddVirtualNodePoolStatusList(const vector<string> & addVirtualNodePoolStatusList) { DARABONBA_PTR_SET_VALUE(addVirtualNodePoolStatusList_, addVirtualNodePoolStatusList) };
    inline ListWuyingServerRequest& setAddVirtualNodePoolStatusList(vector<string> && addVirtualNodePoolStatusList) { DARABONBA_PTR_SET_RVALUE(addVirtualNodePoolStatusList_, addVirtualNodePoolStatusList) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListWuyingServerRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListWuyingServerRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListWuyingServerRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListWuyingServerRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWuyingServerRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWuyingServerRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serverInstanceType Field Functions 
    bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
    void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
    inline string getServerInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
    inline ListWuyingServerRequest& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWuyingServerRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // virtualNodePoolId Field Functions 
    bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
    void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
    inline string getVirtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
    inline ListWuyingServerRequest& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


    // wuyingServerIdList Field Functions 
    bool hasWuyingServerIdList() const { return this->wuyingServerIdList_ != nullptr;};
    void deleteWuyingServerIdList() { this->wuyingServerIdList_ = nullptr;};
    inline const vector<string> & getWuyingServerIdList() const { DARABONBA_PTR_GET_CONST(wuyingServerIdList_, vector<string>) };
    inline vector<string> getWuyingServerIdList() { DARABONBA_PTR_GET(wuyingServerIdList_, vector<string>) };
    inline ListWuyingServerRequest& setWuyingServerIdList(const vector<string> & wuyingServerIdList) { DARABONBA_PTR_SET_VALUE(wuyingServerIdList_, wuyingServerIdList) };
    inline ListWuyingServerRequest& setWuyingServerIdList(vector<string> && wuyingServerIdList) { DARABONBA_PTR_SET_RVALUE(wuyingServerIdList_, wuyingServerIdList) };


    // wuyingServerNameOrId Field Functions 
    bool hasWuyingServerNameOrId() const { return this->wuyingServerNameOrId_ != nullptr;};
    void deleteWuyingServerNameOrId() { this->wuyingServerNameOrId_ = nullptr;};
    inline string getWuyingServerNameOrId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerNameOrId_, "") };
    inline ListWuyingServerRequest& setWuyingServerNameOrId(string wuyingServerNameOrId) { DARABONBA_PTR_SET_VALUE(wuyingServerNameOrId_, wuyingServerNameOrId) };


  protected:
    shared_ptr<vector<string>> addVirtualNodePoolStatusList_ {};
    // The region ID.
    shared_ptr<string> bizRegionId_ {};
    // The billing method of the Internet access package.
    shared_ptr<string> chargeType_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The office network IDs.
    shared_ptr<string> officeSiteId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Workstation specifications.
    shared_ptr<string> serverInstanceType_ {};
    // The status of the workstation.
    shared_ptr<string> status_ {};
    shared_ptr<string> virtualNodePoolId_ {};
    // The list of workstation IDs.
    shared_ptr<vector<string>> wuyingServerIdList_ {};
    // The workstation name or workstation ID.
    shared_ptr<string> wuyingServerNameOrId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
