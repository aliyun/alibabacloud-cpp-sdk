// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DeleteDisplayKnowledgeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIdsShrink_);
    };
    DeleteDisplayKnowledgeShrinkRequest() = default ;
    DeleteDisplayKnowledgeShrinkRequest(const DeleteDisplayKnowledgeShrinkRequest &) = default ;
    DeleteDisplayKnowledgeShrinkRequest(DeleteDisplayKnowledgeShrinkRequest &&) = default ;
    DeleteDisplayKnowledgeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDisplayKnowledgeShrinkRequest() = default ;
    DeleteDisplayKnowledgeShrinkRequest& operator=(const DeleteDisplayKnowledgeShrinkRequest &) = default ;
    DeleteDisplayKnowledgeShrinkRequest& operator=(DeleteDisplayKnowledgeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ragId_ == nullptr
        && this->recordIdsShrink_ == nullptr; };
    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline DeleteDisplayKnowledgeShrinkRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // recordIdsShrink Field Functions 
    bool hasRecordIdsShrink() const { return this->recordIdsShrink_ != nullptr;};
    void deleteRecordIdsShrink() { this->recordIdsShrink_ = nullptr;};
    inline string getRecordIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordIdsShrink_, "") };
    inline DeleteDisplayKnowledgeShrinkRequest& setRecordIdsShrink(string recordIdsShrink) { DARABONBA_PTR_SET_VALUE(recordIdsShrink_, recordIdsShrink) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The IDs of the records to delete. You can specify up to 500 record IDs.
    // 
    // This parameter is required.
    shared_ptr<string> recordIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
