// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDISPLAYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDISPLAYKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class AddDisplayKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(Records, records_);
    };
    friend void from_json(const Darabonba::Json& j, AddDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
    };
    AddDisplayKnowledgeRequest() = default ;
    AddDisplayKnowledgeRequest(const AddDisplayKnowledgeRequest &) = default ;
    AddDisplayKnowledgeRequest(AddDisplayKnowledgeRequest &&) = default ;
    AddDisplayKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDisplayKnowledgeRequest() = default ;
    AddDisplayKnowledgeRequest& operator=(const AddDisplayKnowledgeRequest &) = default ;
    AddDisplayKnowledgeRequest& operator=(AddDisplayKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(SkuId, skuId_);
        DARABONBA_PTR_TO_JSON(SkuName, skuName_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
        DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->skuId_ == nullptr && this->skuName_ == nullptr; };
      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Records& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // skuId Field Functions 
      bool hasSkuId() const { return this->skuId_ != nullptr;};
      void deleteSkuId() { this->skuId_ = nullptr;};
      inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
      inline Records& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


      // skuName Field Functions 
      bool hasSkuName() const { return this->skuName_ != nullptr;};
      void deleteSkuName() { this->skuName_ = nullptr;};
      inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
      inline Records& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


    protected:
      // The HTTP(S) URL of the product image.
      shared_ptr<string> imageUrl_ {};
      // The SKU ID. If this parameter is left empty, the platform generates the ID.
      shared_ptr<string> skuId_ {};
      // The SKU name.
      shared_ptr<string> skuName_ {};
    };

    virtual bool empty() const override { return this->ragId_ == nullptr
        && this->records_ == nullptr; };
    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline AddDisplayKnowledgeRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<AddDisplayKnowledgeRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<AddDisplayKnowledgeRequest::Records>) };
    inline vector<AddDisplayKnowledgeRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<AddDisplayKnowledgeRequest::Records>) };
    inline AddDisplayKnowledgeRequest& setRecords(const vector<AddDisplayKnowledgeRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline AddDisplayKnowledgeRequest& setRecords(vector<AddDisplayKnowledgeRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The records to add. A maximum of 500 records are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<AddDisplayKnowledgeRequest::Records>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
