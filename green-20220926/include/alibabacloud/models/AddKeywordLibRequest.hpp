// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKEYWORDLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDKEYWORDLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddKeywordLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKeywordLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(KeywordsObject, keywordsObject_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(KeywordsObject, keywordsObject_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
    };
    AddKeywordLibRequest() = default ;
    AddKeywordLibRequest(const AddKeywordLibRequest &) = default ;
    AddKeywordLibRequest(AddKeywordLibRequest &&) = default ;
    AddKeywordLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKeywordLibRequest() = default ;
    AddKeywordLibRequest& operator=(const AddKeywordLibRequest &) = default ;
    AddKeywordLibRequest& operator=(AddKeywordLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywords_ == nullptr
        && this->keywordsObject_ == nullptr && this->libName_ == nullptr && this->properties_ == nullptr && this->regionId_ == nullptr && this->tenantCode_ == nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline AddKeywordLibRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // keywordsObject Field Functions 
    bool hasKeywordsObject() const { return this->keywordsObject_ != nullptr;};
    void deleteKeywordsObject() { this->keywordsObject_ = nullptr;};
    inline string getKeywordsObject() const { DARABONBA_PTR_GET_DEFAULT(keywordsObject_, "") };
    inline AddKeywordLibRequest& setKeywordsObject(string keywordsObject) { DARABONBA_PTR_SET_VALUE(keywordsObject_, keywordsObject) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline AddKeywordLibRequest& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline AddKeywordLibRequest& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddKeywordLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string getTenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline AddKeywordLibRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


  protected:
    // The keywords. Separate multiple keywords with 
    // .
    shared_ptr<string> keywords_ {};
    // The name of the keyword file.
    shared_ptr<string> keywordsObject_ {};
    // The name of the keyword library.
    shared_ptr<string> libName_ {};
    // The properties.
    shared_ptr<string> properties_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The library code.
    // 
    // - desensitize: desensitization library
    shared_ptr<string> tenantCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
