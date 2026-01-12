// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreateCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CryptType, cryptType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CryptType, cryptType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateCallbackRequest() = default ;
    CreateCallbackRequest(const CreateCallbackRequest &) = default ;
    CreateCallbackRequest(CreateCallbackRequest &&) = default ;
    CreateCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCallbackRequest() = default ;
    CreateCallbackRequest& operator=(const CreateCallbackRequest &) = default ;
    CreateCallbackRequest& operator=(CreateCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cryptType_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr && this->url_ == nullptr; };
    // cryptType Field Functions 
    bool hasCryptType() const { return this->cryptType_ != nullptr;};
    void deleteCryptType() { this->cryptType_ = nullptr;};
    inline string getCryptType() const { DARABONBA_PTR_GET_DEFAULT(cryptType_, "") };
    inline CreateCallbackRequest& setCryptType(string cryptType) { DARABONBA_PTR_SET_VALUE(cryptType_, cryptType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCallbackRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCallbackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateCallbackRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateCallbackRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Encryption algorithm.
    shared_ptr<string> cryptType_ {};
    // Plan name.
    shared_ptr<string> name_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Review result.
    shared_ptr<string> scope_ {};
    // Callback URL.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
