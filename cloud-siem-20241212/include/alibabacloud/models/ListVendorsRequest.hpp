// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVENDORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVENDORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListVendorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVendorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorIds, vendorIds_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVendorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorIds, vendorIds_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
    };
    ListVendorsRequest() = default ;
    ListVendorsRequest(const ListVendorsRequest &) = default ;
    ListVendorsRequest(ListVendorsRequest &&) = default ;
    ListVendorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVendorsRequest() = default ;
    ListVendorsRequest& operator=(const ListVendorsRequest &) = default ;
    ListVendorsRequest& operator=(ListVendorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->vendorIds_ == nullptr
        && this->vendorName_ == nullptr && this->vendorType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListVendorsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVendorsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVendorsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVendorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListVendorsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorIds Field Functions 
    bool hasVendorIds() const { return this->vendorIds_ != nullptr;};
    void deleteVendorIds() { this->vendorIds_ = nullptr;};
    inline const vector<string> & getVendorIds() const { DARABONBA_PTR_GET_CONST(vendorIds_, vector<string>) };
    inline vector<string> getVendorIds() { DARABONBA_PTR_GET(vendorIds_, vector<string>) };
    inline ListVendorsRequest& setVendorIds(const vector<string> & vendorIds) { DARABONBA_PTR_SET_VALUE(vendorIds_, vendorIds) };
    inline ListVendorsRequest& setVendorIds(vector<string> && vendorIds) { DARABONBA_PTR_SET_RVALUE(vendorIds_, vendorIds) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListVendorsRequest& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListVendorsRequest& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    // The language of the response message. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. If this is your first query or if no next page exists, you do not need to specify this parameter. If a next page exists, set the value to the NextToken value that is returned in the last response.
    shared_ptr<string> nextToken_ {};
    // The region where the Data Management center for threat analysis is located. Select a region for the Management Hub based on the region where your asset resides. Valid values:
    // 
    // - cn-hangzhou: Your asset is in the Chinese mainland.
    // 
    // - ap-southeast-1: Your asset is outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of a member. An administrator can use this ID to switch to the member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
    // A list of vendors.
    shared_ptr<vector<string>> vendorIds_ {};
    // The vendor name.
    shared_ptr<string> vendorName_ {};
    // The vendor type. Valid values:
    // 
    // - preset
    // 
    // - custom
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
