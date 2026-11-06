// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDataProcessJobTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataProcessJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataProcessJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDataProcessJobTemplatesResponseBody() = default ;
    DescribeDataProcessJobTemplatesResponseBody(const DescribeDataProcessJobTemplatesResponseBody &) = default ;
    DescribeDataProcessJobTemplatesResponseBody(DescribeDataProcessJobTemplatesResponseBody &&) = default ;
    DescribeDataProcessJobTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataProcessJobTemplatesResponseBody() = default ;
    DescribeDataProcessJobTemplatesResponseBody& operator=(const DescribeDataProcessJobTemplatesResponseBody &) = default ;
    DescribeDataProcessJobTemplatesResponseBody& operator=(DescribeDataProcessJobTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Captioning, captioning_);
        DARABONBA_PTR_TO_JSON(CaptioningPrompt, captioningPrompt_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Embedding, embedding_);
        DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Captioning, captioning_);
        DARABONBA_PTR_FROM_JSON(CaptioningPrompt, captioningPrompt_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
        DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->captioning_ == nullptr
        && this->captioningPrompt_ == nullptr && this->creationTime_ == nullptr && this->embedding_ == nullptr && this->embeddingDimension_ == nullptr && this->status_ == nullptr
        && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // captioning Field Functions 
      bool hasCaptioning() const { return this->captioning_ != nullptr;};
      void deleteCaptioning() { this->captioning_ = nullptr;};
      inline bool getCaptioning() const { DARABONBA_PTR_GET_DEFAULT(captioning_, false) };
      inline Items& setCaptioning(bool captioning) { DARABONBA_PTR_SET_VALUE(captioning_, captioning) };


      // captioningPrompt Field Functions 
      bool hasCaptioningPrompt() const { return this->captioningPrompt_ != nullptr;};
      void deleteCaptioningPrompt() { this->captioningPrompt_ = nullptr;};
      inline string getCaptioningPrompt() const { DARABONBA_PTR_GET_DEFAULT(captioningPrompt_, "") };
      inline Items& setCaptioningPrompt(string captioningPrompt) { DARABONBA_PTR_SET_VALUE(captioningPrompt_, captioningPrompt) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Items& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // embedding Field Functions 
      bool hasEmbedding() const { return this->embedding_ != nullptr;};
      void deleteEmbedding() { this->embedding_ = nullptr;};
      inline bool getEmbedding() const { DARABONBA_PTR_GET_DEFAULT(embedding_, false) };
      inline Items& setEmbedding(bool embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };


      // embeddingDimension Field Functions 
      bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
      void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
      inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
      inline Items& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline Items& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Items& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Items& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Items& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // Specifies whether it is to fetch the image summary or video synopsis.
      shared_ptr<bool> captioning_ {};
      // The prompt used when extracting captions.
      shared_ptr<string> captioningPrompt_ {};
      // The time when the task template was created, in RFC 3339 format.
      shared_ptr<string> creationTime_ {};
      // Indicates whether content is converted into vectors.
      shared_ptr<bool> embedding_ {};
      // The vector output dimensions.
      shared_ptr<int32_t> embeddingDimension_ {};
      // The task template status.
      shared_ptr<string> status_ {};
      // The JSON configuration string of the template.
      shared_ptr<string> templateConfig_ {};
      // The task template ID.
      shared_ptr<string> templateId_ {};
      // The task template name.
      shared_ptr<string> templateName_ {};
      // The node templatetype. Valid value: image.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataProcessJobTemplatesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataProcessJobTemplatesResponseBody::Items>) };
    inline vector<DescribeDataProcessJobTemplatesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataProcessJobTemplatesResponseBody::Items>) };
    inline DescribeDataProcessJobTemplatesResponseBody& setItems(const vector<DescribeDataProcessJobTemplatesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataProcessJobTemplatesResponseBody& setItems(vector<DescribeDataProcessJobTemplatesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataProcessJobTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDataProcessJobTemplatesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataProcessJobTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDataProcessJobTemplatesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of data processing task templates.
    shared_ptr<vector<DescribeDataProcessJobTemplatesResponseBody::Items>> items_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of templates returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of templates that meet the specified conditions.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
