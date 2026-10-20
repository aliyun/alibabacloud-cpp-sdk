// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISPLAYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISPLAYKNOWLEDGEREQUEST_HPP_
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
  class UpdateDisplayKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(Records, records_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
    };
    UpdateDisplayKnowledgeRequest() = default ;
    UpdateDisplayKnowledgeRequest(const UpdateDisplayKnowledgeRequest &) = default ;
    UpdateDisplayKnowledgeRequest(UpdateDisplayKnowledgeRequest &&) = default ;
    UpdateDisplayKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDisplayKnowledgeRequest() = default ;
    UpdateDisplayKnowledgeRequest& operator=(const UpdateDisplayKnowledgeRequest &) = default ;
    UpdateDisplayKnowledgeRequest& operator=(UpdateDisplayKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(SkuId, skuId_);
        DARABONBA_PTR_TO_JSON(SkuName, skuName_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
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
        && this->recordId_ == nullptr && this->skuId_ == nullptr && this->skuName_ == nullptr; };
      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Records& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline Records& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


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
      // The HTTP or HTTPS URL of the product image.
      shared_ptr<string> imageUrl_ {};
      // The record ID.
      shared_ptr<int64_t> recordId_ {};
      // The SKU ID. If this parameter is not empty, the original value is overwritten.
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
    inline UpdateDisplayKnowledgeRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<UpdateDisplayKnowledgeRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<UpdateDisplayKnowledgeRequest::Records>) };
    inline vector<UpdateDisplayKnowledgeRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<UpdateDisplayKnowledgeRequest::Records>) };
    inline UpdateDisplayKnowledgeRequest& setRecords(const vector<UpdateDisplayKnowledgeRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline UpdateDisplayKnowledgeRequest& setRecords(vector<UpdateDisplayKnowledgeRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The records to update. A maximum of 500 records can be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateDisplayKnowledgeRequest::Records>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
