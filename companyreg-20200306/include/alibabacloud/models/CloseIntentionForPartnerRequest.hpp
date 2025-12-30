// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEINTENTIONFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEINTENTIONFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class CloseIntentionForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseIntentionForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, CloseIntentionForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    CloseIntentionForPartnerRequest() = default ;
    CloseIntentionForPartnerRequest(const CloseIntentionForPartnerRequest &) = default ;
    CloseIntentionForPartnerRequest(CloseIntentionForPartnerRequest &&) = default ;
    CloseIntentionForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseIntentionForPartnerRequest() = default ;
    CloseIntentionForPartnerRequest& operator=(const CloseIntentionForPartnerRequest &) = default ;
    CloseIntentionForPartnerRequest& operator=(CloseIntentionForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->intentionBizId_ == nullptr && this->note_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CloseIntentionForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string getIntentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline CloseIntentionForPartnerRequest& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CloseIntentionForPartnerRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<string> intentionBizId_ {};
    // This parameter is required.
    shared_ptr<string> note_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
