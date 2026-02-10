// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddBaselineCheckWhiteRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddBaselineCheckWhiteRecordResponseBody() = default ;
    AddBaselineCheckWhiteRecordResponseBody(const AddBaselineCheckWhiteRecordResponseBody &) = default ;
    AddBaselineCheckWhiteRecordResponseBody(AddBaselineCheckWhiteRecordResponseBody &&) = default ;
    AddBaselineCheckWhiteRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBaselineCheckWhiteRecordResponseBody() = default ;
    AddBaselineCheckWhiteRecordResponseBody& operator=(const AddBaselineCheckWhiteRecordResponseBody &) = default ;
    AddBaselineCheckWhiteRecordResponseBody& operator=(AddBaselineCheckWhiteRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
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
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->lang_ == nullptr && this->reason_ == nullptr && this->recordId_ == nullptr && this->source_ == nullptr && this->target_ == nullptr
        && this->targetType_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline Data& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline Data& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline Data& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Data& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the check item.
      // 
      // >  You can call the [ListCheckItemWarningSummary](~~ListCheckItemWarningSummary~~) operation to query the IDs of check items.
      shared_ptr<int64_t> checkId_ {};
      // The language of the content within the request and response. Default value: **zh**. Valid values:
      // 
      // *   **zh**: Chinese
      // *   **en**: English
      shared_ptr<string> lang_ {};
      // The reason why the check item is added to the whitelist.
      shared_ptr<string> reason_ {};
      // The ID of the whitelist rule.
      shared_ptr<int64_t> recordId_ {};
      // The data source. Valid values:
      // 
      // *   **default**: server
      // *   **agentless**: agentless detection
      shared_ptr<string> source_ {};
      // The object that is added to the whitelist.
      shared_ptr<string> target_ {};
      // The type of the assets on which the whitelist rule takes effect. Valid values:
      // 
      // *   **all_instance**: all servers
      // *   **instance**: specific servers
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddBaselineCheckWhiteRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddBaselineCheckWhiteRecordResponseBody::Data) };
    inline AddBaselineCheckWhiteRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddBaselineCheckWhiteRecordResponseBody::Data) };
    inline AddBaselineCheckWhiteRecordResponseBody& setData(const AddBaselineCheckWhiteRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddBaselineCheckWhiteRecordResponseBody& setData(AddBaselineCheckWhiteRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddBaselineCheckWhiteRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<AddBaselineCheckWhiteRecordResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
