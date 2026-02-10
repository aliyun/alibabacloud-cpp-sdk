// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VendorRegionList, vendorRegionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VendorRegionList, vendorRegionList_);
    };
    ListAgentlessRegionResponseBody() = default ;
    ListAgentlessRegionResponseBody(const ListAgentlessRegionResponseBody &) = default ;
    ListAgentlessRegionResponseBody(ListAgentlessRegionResponseBody &&) = default ;
    ListAgentlessRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRegionResponseBody() = default ;
    ListAgentlessRegionResponseBody& operator=(const ListAgentlessRegionResponseBody &) = default ;
    ListAgentlessRegionResponseBody& operator=(ListAgentlessRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VendorRegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VendorRegionList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, VendorRegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      VendorRegionList() = default ;
      VendorRegionList(const VendorRegionList &) = default ;
      VendorRegionList(VendorRegionList &&) = default ;
      VendorRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VendorRegionList() = default ;
      VendorRegionList& operator=(const VendorRegionList &) = default ;
      VendorRegionList& operator=(VendorRegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vendor_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VendorRegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline VendorRegionList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The type of the server. Valid values:
      // 
      // - **0**: Alibaba Cloud
      // - **3**: Tencent Cloud
      // - **4**: Huawei Cloud
      // - **5**: Azure
      // - **7**: AWS
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->regionList_ == nullptr
        && this->requestId_ == nullptr && this->vendorRegionList_ == nullptr; };
    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline ListAgentlessRegionResponseBody& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline ListAgentlessRegionResponseBody& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRegionList Field Functions 
    bool hasVendorRegionList() const { return this->vendorRegionList_ != nullptr;};
    void deleteVendorRegionList() { this->vendorRegionList_ = nullptr;};
    inline const vector<ListAgentlessRegionResponseBody::VendorRegionList> & getVendorRegionList() const { DARABONBA_PTR_GET_CONST(vendorRegionList_, vector<ListAgentlessRegionResponseBody::VendorRegionList>) };
    inline vector<ListAgentlessRegionResponseBody::VendorRegionList> getVendorRegionList() { DARABONBA_PTR_GET(vendorRegionList_, vector<ListAgentlessRegionResponseBody::VendorRegionList>) };
    inline ListAgentlessRegionResponseBody& setVendorRegionList(const vector<ListAgentlessRegionResponseBody::VendorRegionList> & vendorRegionList) { DARABONBA_PTR_SET_VALUE(vendorRegionList_, vendorRegionList) };
    inline ListAgentlessRegionResponseBody& setVendorRegionList(vector<ListAgentlessRegionResponseBody::VendorRegionList> && vendorRegionList) { DARABONBA_PTR_SET_RVALUE(vendorRegionList_, vendorRegionList) };


  protected:
    // The information about the regions.
    shared_ptr<vector<string>> regionList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the regions.
    shared_ptr<vector<ListAgentlessRegionResponseBody::VendorRegionList>> vendorRegionList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
