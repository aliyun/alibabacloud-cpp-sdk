// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddChunkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddChunkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_ANY_TO_JSON(field, field_);
    };
    friend void from_json(const Darabonba::Json& j, AddChunkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_ANY_FROM_JSON(field, field_);
    };
    AddChunkRequest() = default ;
    AddChunkRequest(const AddChunkRequest &) = default ;
    AddChunkRequest(AddChunkRequest &&) = default ;
    AddChunkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddChunkRequest() = default ;
    AddChunkRequest& operator=(const AddChunkRequest &) = default ;
    AddChunkRequest& operator=(AddChunkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->dataId_ == nullptr && this->field_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline AddChunkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline AddChunkRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline     const Darabonba::Json & getField() const { DARABONBA_GET(field_) };
    Darabonba::Json & getField() { DARABONBA_GET(field_) };
    inline AddChunkRequest& setField(const Darabonba::Json & field) { DARABONBA_SET_VALUE(field_, field) };
    inline AddChunkRequest& setField(Darabonba::Json && field) { DARABONBA_SET_RVALUE(field_, field) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineId_ {};
    // The file ID.
    shared_ptr<string> dataId_ {};
    // The chunk content to insert, passed as key-value pairs. For document search knowledge bases, use the following fixed key list:
    // - content (**String**): **Required**. The body content of the chunk.
    // - title (**String**): **Optional**. The title of the chunk.
    // - image_urls (**Array**): **Optional**. Image URLs contained in the chunk. A maximum of 10 images are supported.
    // 
    // For data query and image Q&A knowledge bases, the keys are not fixed and are determined by the data source spreadsheet of the knowledge base. The key is the Excel column header, and the value is the corresponding column value.
    Darabonba::Json field_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
