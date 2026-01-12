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
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(KeywordsObject, keywordsObject_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        && this->keywordsObject_ == nullptr && this->libName_ == nullptr && this->regionId_ == nullptr; };
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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddKeywordLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Keywords, with multiple keywords separated by \\n.
    shared_ptr<string> keywords_ {};
    // The name of the keywords file.
    shared_ptr<string> keywordsObject_ {};
    // The name of the keyword library.
    shared_ptr<string> libName_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
