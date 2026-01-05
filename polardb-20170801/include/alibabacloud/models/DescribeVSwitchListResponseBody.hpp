// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeVSwitchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchs, vSwitchs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchs, vSwitchs_);
    };
    DescribeVSwitchListResponseBody() = default ;
    DescribeVSwitchListResponseBody(const DescribeVSwitchListResponseBody &) = default ;
    DescribeVSwitchListResponseBody(DescribeVSwitchListResponseBody &&) = default ;
    DescribeVSwitchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchListResponseBody() = default ;
    DescribeVSwitchListResponseBody& operator=(const DescribeVSwitchListResponseBody &) = default ;
    DescribeVSwitchListResponseBody& operator=(DescribeVSwitchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchs& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(IzNo, izNo_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchs& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      VSwitchs() = default ;
      VSwitchs(const VSwitchs &) = default ;
      VSwitchs(VSwitchs &&) = default ;
      VSwitchs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchs() = default ;
      VSwitchs& operator=(const VSwitchs &) = default ;
      VSwitchs& operator=(VSwitchs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->description_ == nullptr && this->isDefault_ == nullptr && this->izNo_ == nullptr && this->ownerId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr
        && this->vpcId_ == nullptr; };
      // availableIpAddressCount Field Functions 
      bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
      void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
      inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
      inline VSwitchs& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VSwitchs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline VSwitchs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline VSwitchs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // izNo Field Functions 
      bool hasIzNo() const { return this->izNo_ != nullptr;};
      void deleteIzNo() { this->izNo_ = nullptr;};
      inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
      inline VSwitchs& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline VSwitchs& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline VSwitchs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline VSwitchs& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VSwitchs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline VSwitchs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchName Field Functions 
      bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
      void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
      inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
      inline VSwitchs& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VSwitchs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<int64_t> availableIpAddressCount_ {};
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> isDefault_ {};
      shared_ptr<string> izNo_ {};
      shared_ptr<string> ownerId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> shareType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vSwitchName_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vSwitchs_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVSwitchListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVSwitchListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVSwitchListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchs Field Functions 
    bool hasVSwitchs() const { return this->vSwitchs_ != nullptr;};
    void deleteVSwitchs() { this->vSwitchs_ = nullptr;};
    inline const vector<DescribeVSwitchListResponseBody::VSwitchs> & getVSwitchs() const { DARABONBA_PTR_GET_CONST(vSwitchs_, vector<DescribeVSwitchListResponseBody::VSwitchs>) };
    inline vector<DescribeVSwitchListResponseBody::VSwitchs> getVSwitchs() { DARABONBA_PTR_GET(vSwitchs_, vector<DescribeVSwitchListResponseBody::VSwitchs>) };
    inline DescribeVSwitchListResponseBody& setVSwitchs(const vector<DescribeVSwitchListResponseBody::VSwitchs> & vSwitchs) { DARABONBA_PTR_SET_VALUE(vSwitchs_, vSwitchs) };
    inline DescribeVSwitchListResponseBody& setVSwitchs(vector<DescribeVSwitchListResponseBody::VSwitchs> && vSwitchs) { DARABONBA_PTR_SET_RVALUE(vSwitchs_, vSwitchs) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeVSwitchListResponseBody::VSwitchs>> vSwitchs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
