// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKEYWORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDKEYWORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddKeywordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKeywordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(KeywordsObject, keywordsObject_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(KeywordsObject, keywordsObject_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddKeywordsRequest() = default ;
    AddKeywordsRequest(const AddKeywordsRequest &) = default ;
    AddKeywordsRequest(AddKeywordsRequest &&) = default ;
    AddKeywordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKeywordsRequest() = default ;
    AddKeywordsRequest& operator=(const AddKeywordsRequest &) = default ;
    AddKeywordsRequest& operator=(AddKeywordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywords_ == nullptr
        && this->keywordsObject_ == nullptr && this->libId_ == nullptr && this->regionId_ == nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline AddKeywordsRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // keywordsObject Field Functions 
    bool hasKeywordsObject() const { return this->keywordsObject_ != nullptr;};
    void deleteKeywordsObject() { this->keywordsObject_ = nullptr;};
    inline string getKeywordsObject() const { DARABONBA_PTR_GET_DEFAULT(keywordsObject_, "") };
    inline AddKeywordsRequest& setKeywordsObject(string keywordsObject) { DARABONBA_PTR_SET_VALUE(keywordsObject_, keywordsObject) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline AddKeywordsRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddKeywordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The keywords to be added.
    shared_ptr<string> keywords_ {};
    // The name of the keyword file.
    shared_ptr<string> keywordsObject_ {};
    // The id of keyword library.
    shared_ptr<string> libId_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
