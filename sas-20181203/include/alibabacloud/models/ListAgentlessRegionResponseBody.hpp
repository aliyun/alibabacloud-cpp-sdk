// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentlessRegionResponseBodyVendorRegionList.hpp>
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
    virtual bool empty() const override { return this->regionList_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRegionList_ == nullptr; };
    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> regionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline ListAgentlessRegionResponseBody& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline ListAgentlessRegionResponseBody& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRegionList Field Functions 
    bool hasVendorRegionList() const { return this->vendorRegionList_ != nullptr;};
    void deleteVendorRegionList() { this->vendorRegionList_ = nullptr;};
    inline const vector<ListAgentlessRegionResponseBodyVendorRegionList> & vendorRegionList() const { DARABONBA_PTR_GET_CONST(vendorRegionList_, vector<ListAgentlessRegionResponseBodyVendorRegionList>) };
    inline vector<ListAgentlessRegionResponseBodyVendorRegionList> vendorRegionList() { DARABONBA_PTR_GET(vendorRegionList_, vector<ListAgentlessRegionResponseBodyVendorRegionList>) };
    inline ListAgentlessRegionResponseBody& setVendorRegionList(const vector<ListAgentlessRegionResponseBodyVendorRegionList> & vendorRegionList) { DARABONBA_PTR_SET_VALUE(vendorRegionList_, vendorRegionList) };
    inline ListAgentlessRegionResponseBody& setVendorRegionList(vector<ListAgentlessRegionResponseBodyVendorRegionList> && vendorRegionList) { DARABONBA_PTR_SET_RVALUE(vendorRegionList_, vendorRegionList) };


  protected:
    // The information about the regions.
    std::shared_ptr<vector<string>> regionList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListAgentlessRegionResponseBodyVendorRegionList>> vendorRegionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
