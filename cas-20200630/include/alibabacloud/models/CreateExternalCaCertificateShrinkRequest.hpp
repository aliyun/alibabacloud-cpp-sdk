// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthroughShrink_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthroughShrink_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
    };
    CreateExternalCACertificateShrinkRequest() = default ;
    CreateExternalCACertificateShrinkRequest(const CreateExternalCACertificateShrinkRequest &) = default ;
    CreateExternalCACertificateShrinkRequest(CreateExternalCACertificateShrinkRequest &&) = default ;
    CreateExternalCACertificateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateShrinkRequest() = default ;
    CreateExternalCACertificateShrinkRequest& operator=(const CreateExternalCACertificateShrinkRequest &) = default ;
    CreateExternalCACertificateShrinkRequest& operator=(CreateExternalCACertificateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->apiPassthroughShrink_ == nullptr
        && this->csr_ == nullptr && this->instanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->validity_ == nullptr; };
    // apiPassthroughShrink Field Functions 
    bool hasApiPassthroughShrink() const { return this->apiPassthroughShrink_ != nullptr;};
    void deleteApiPassthroughShrink() { this->apiPassthroughShrink_ = nullptr;};
    inline string getApiPassthroughShrink() const { DARABONBA_PTR_GET_DEFAULT(apiPassthroughShrink_, "") };
    inline CreateExternalCACertificateShrinkRequest& setApiPassthroughShrink(string apiPassthroughShrink) { DARABONBA_PTR_SET_VALUE(apiPassthroughShrink_, apiPassthroughShrink) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateExternalCACertificateShrinkRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExternalCACertificateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateExternalCACertificateShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateExternalCACertificateShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateExternalCACertificateShrinkRequest::Tags>) };
    inline vector<CreateExternalCACertificateShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateExternalCACertificateShrinkRequest::Tags>) };
    inline CreateExternalCACertificateShrinkRequest& setTags(const vector<CreateExternalCACertificateShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateExternalCACertificateShrinkRequest& setTags(vector<CreateExternalCACertificateShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string getValidity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateExternalCACertificateShrinkRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    shared_ptr<string> apiPassthroughShrink_ {};
    shared_ptr<string> csr_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateExternalCACertificateShrinkRequest::Tags>> tags_ {};
    shared_ptr<string> validity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
