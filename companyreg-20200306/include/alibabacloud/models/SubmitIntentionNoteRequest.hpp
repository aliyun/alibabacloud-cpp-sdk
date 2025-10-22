// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINTENTIONNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINTENTIONNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class SubmitIntentionNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIntentionNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIntentionNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    SubmitIntentionNoteRequest() = default ;
    SubmitIntentionNoteRequest(const SubmitIntentionNoteRequest &) = default ;
    SubmitIntentionNoteRequest(SubmitIntentionNoteRequest &&) = default ;
    SubmitIntentionNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIntentionNoteRequest() = default ;
    SubmitIntentionNoteRequest& operator=(const SubmitIntentionNoteRequest &) = default ;
    SubmitIntentionNoteRequest& operator=(SubmitIntentionNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->intentionBizId_ == nullptr && return this->note_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline SubmitIntentionNoteRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string intentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline SubmitIntentionNoteRequest& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline SubmitIntentionNoteRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentionBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> note_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
