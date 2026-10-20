// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class UpdateDisplayKnowledgeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(Records, recordsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(Records, recordsShrink_);
    };
    UpdateDisplayKnowledgeShrinkRequest() = default ;
    UpdateDisplayKnowledgeShrinkRequest(const UpdateDisplayKnowledgeShrinkRequest &) = default ;
    UpdateDisplayKnowledgeShrinkRequest(UpdateDisplayKnowledgeShrinkRequest &&) = default ;
    UpdateDisplayKnowledgeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDisplayKnowledgeShrinkRequest() = default ;
    UpdateDisplayKnowledgeShrinkRequest& operator=(const UpdateDisplayKnowledgeShrinkRequest &) = default ;
    UpdateDisplayKnowledgeShrinkRequest& operator=(UpdateDisplayKnowledgeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ragId_ == nullptr
        && this->recordsShrink_ == nullptr; };
    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline UpdateDisplayKnowledgeShrinkRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // recordsShrink Field Functions 
    bool hasRecordsShrink() const { return this->recordsShrink_ != nullptr;};
    void deleteRecordsShrink() { this->recordsShrink_ = nullptr;};
    inline string getRecordsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordsShrink_, "") };
    inline UpdateDisplayKnowledgeShrinkRequest& setRecordsShrink(string recordsShrink) { DARABONBA_PTR_SET_VALUE(recordsShrink_, recordsShrink) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The records to update. A maximum of 500 records can be specified.
    // 
    // This parameter is required.
    shared_ptr<string> recordsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
