// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATELLMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATELLMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class BatchCreateLlmTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchCreateLlmTemplatesResponseBody() = default ;
    BatchCreateLlmTemplatesResponseBody(const BatchCreateLlmTemplatesResponseBody &) = default ;
    BatchCreateLlmTemplatesResponseBody(BatchCreateLlmTemplatesResponseBody &&) = default ;
    BatchCreateLlmTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateLlmTemplatesResponseBody() = default ;
    BatchCreateLlmTemplatesResponseBody& operator=(const BatchCreateLlmTemplatesResponseBody &) = default ;
    BatchCreateLlmTemplatesResponseBody& operator=(BatchCreateLlmTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LlmTemplateIds, llmTemplateIds_);
        DARABONBA_PTR_TO_JSON(SkippedItems, skippedItems_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LlmTemplateIds, llmTemplateIds_);
        DARABONBA_PTR_FROM_JSON(SkippedItems, skippedItems_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SkippedItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkippedItems& obj) { 
          DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, SkippedItems& obj) { 
          DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        SkippedItems() = default ;
        SkippedItems(const SkippedItems &) = default ;
        SkippedItems(SkippedItems &&) = default ;
        SkippedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkippedItems() = default ;
        SkippedItems& operator=(const SkippedItems &) = default ;
        SkippedItems& operator=(SkippedItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->llmCode_ == nullptr
        && this->reason_ == nullptr; };
        // llmCode Field Functions 
        bool hasLlmCode() const { return this->llmCode_ != nullptr;};
        void deleteLlmCode() { this->llmCode_ = nullptr;};
        inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
        inline SkippedItems& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline SkippedItems& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // The model code that is skipped.
        shared_ptr<string> llmCode_ {};
        // The reason why the model is skipped.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->llmTemplateIds_ == nullptr
        && this->skippedItems_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
      // llmTemplateIds Field Functions 
      bool hasLlmTemplateIds() const { return this->llmTemplateIds_ != nullptr;};
      void deleteLlmTemplateIds() { this->llmTemplateIds_ = nullptr;};
      inline const vector<string> & getLlmTemplateIds() const { DARABONBA_PTR_GET_CONST(llmTemplateIds_, vector<string>) };
      inline vector<string> getLlmTemplateIds() { DARABONBA_PTR_GET(llmTemplateIds_, vector<string>) };
      inline Data& setLlmTemplateIds(const vector<string> & llmTemplateIds) { DARABONBA_PTR_SET_VALUE(llmTemplateIds_, llmTemplateIds) };
      inline Data& setLlmTemplateIds(vector<string> && llmTemplateIds) { DARABONBA_PTR_SET_RVALUE(llmTemplateIds_, llmTemplateIds) };


      // skippedItems Field Functions 
      bool hasSkippedItems() const { return this->skippedItems_ != nullptr;};
      void deleteSkippedItems() { this->skippedItems_ = nullptr;};
      inline const vector<Data::SkippedItems> & getSkippedItems() const { DARABONBA_PTR_GET_CONST(skippedItems_, vector<Data::SkippedItems>) };
      inline vector<Data::SkippedItems> getSkippedItems() { DARABONBA_PTR_GET(skippedItems_, vector<Data::SkippedItems>) };
      inline Data& setSkippedItems(const vector<Data::SkippedItems> & skippedItems) { DARABONBA_PTR_SET_VALUE(skippedItems_, skippedItems) };
      inline Data& setSkippedItems(vector<Data::SkippedItems> && skippedItems) { DARABONBA_PTR_SET_RVALUE(skippedItems_, skippedItems) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of IDs of the model templates that are created.
      shared_ptr<vector<string>> llmTemplateIds_ {};
      // The list of skipped model configuration items.
      shared_ptr<vector<Data::SkippedItems>> skippedItems_ {};
      // The number of model templates that are created.
      shared_ptr<int32_t> successCount_ {};
      // The total number of requests.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchCreateLlmTemplatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchCreateLlmTemplatesResponseBody::Data) };
    inline BatchCreateLlmTemplatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchCreateLlmTemplatesResponseBody::Data) };
    inline BatchCreateLlmTemplatesResponseBody& setData(const BatchCreateLlmTemplatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchCreateLlmTemplatesResponseBody& setData(BatchCreateLlmTemplatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateLlmTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    shared_ptr<BatchCreateLlmTemplatesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
