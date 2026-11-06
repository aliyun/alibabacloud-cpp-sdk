// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVENDORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVENDORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListVendorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVendorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorIds, vendorIdsShrink_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVendorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorIds, vendorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
    };
    ListVendorsShrinkRequest() = default ;
    ListVendorsShrinkRequest(const ListVendorsShrinkRequest &) = default ;
    ListVendorsShrinkRequest(ListVendorsShrinkRequest &&) = default ;
    ListVendorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVendorsShrinkRequest() = default ;
    ListVendorsShrinkRequest& operator=(const ListVendorsShrinkRequest &) = default ;
    ListVendorsShrinkRequest& operator=(ListVendorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->vendorIdsShrink_ == nullptr
        && this->vendorName_ == nullptr && this->vendorType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListVendorsShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVendorsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVendorsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVendorsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListVendorsShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorIdsShrink Field Functions 
    bool hasVendorIdsShrink() const { return this->vendorIdsShrink_ != nullptr;};
    void deleteVendorIdsShrink() { this->vendorIdsShrink_ = nullptr;};
    inline string getVendorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vendorIdsShrink_, "") };
    inline ListVendorsShrinkRequest& setVendorIdsShrink(string vendorIdsShrink) { DARABONBA_PTR_SET_VALUE(vendorIdsShrink_, vendorIdsShrink) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListVendorsShrinkRequest& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListVendorsShrinkRequest& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
    shared_ptr<string> vendorIdsShrink_ {};
    shared_ptr<string> vendorName_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
