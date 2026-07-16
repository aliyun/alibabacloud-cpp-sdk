// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHUNKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHUNKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddChunkShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddChunkShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(field, fieldShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddChunkShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(field, fieldShrink_);
    };
    AddChunkShrinkRequest() = default ;
    AddChunkShrinkRequest(const AddChunkShrinkRequest &) = default ;
    AddChunkShrinkRequest(AddChunkShrinkRequest &&) = default ;
    AddChunkShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddChunkShrinkRequest() = default ;
    AddChunkShrinkRequest& operator=(const AddChunkShrinkRequest &) = default ;
    AddChunkShrinkRequest& operator=(AddChunkShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->dataId_ == nullptr && this->fieldShrink_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline AddChunkShrinkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline AddChunkShrinkRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // fieldShrink Field Functions 
    bool hasFieldShrink() const { return this->fieldShrink_ != nullptr;};
    void deleteFieldShrink() { this->fieldShrink_ = nullptr;};
    inline string getFieldShrink() const { DARABONBA_PTR_GET_DEFAULT(fieldShrink_, "") };
    inline AddChunkShrinkRequest& setFieldShrink(string fieldShrink) { DARABONBA_PTR_SET_VALUE(fieldShrink_, fieldShrink) };


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
    shared_ptr<string> fieldShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
