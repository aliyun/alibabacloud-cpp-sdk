// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPREBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPREBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ConfirmPreBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPreBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(more_page, morePage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result_code, resultCode_);
      DARABONBA_PTR_TO_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPreBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(more_page, morePage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result_code, resultCode_);
      DARABONBA_PTR_FROM_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ConfirmPreBillResponseBody() = default ;
    ConfirmPreBillResponseBody(const ConfirmPreBillResponseBody &) = default ;
    ConfirmPreBillResponseBody(ConfirmPreBillResponseBody &&) = default ;
    ConfirmPreBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPreBillResponseBody() = default ;
    ConfirmPreBillResponseBody& operator=(const ConfirmPreBillResponseBody &) = default ;
    ConfirmPreBillResponseBody& operator=(ConfirmPreBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(batch_id, batchId_);
        DARABONBA_PTR_TO_JSON(forbid_update_bill_count, forbidUpdateBillCount_);
        DARABONBA_PTR_TO_JSON(forbid_update_detail, forbidUpdateDetail_);
        DARABONBA_PTR_TO_JSON(match_count, matchCount_);
        DARABONBA_PTR_TO_JSON(not_match_count, notMatchCount_);
        DARABONBA_PTR_TO_JSON(not_match_detail, notMatchDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(batch_id, batchId_);
        DARABONBA_PTR_FROM_JSON(forbid_update_bill_count, forbidUpdateBillCount_);
        DARABONBA_PTR_FROM_JSON(forbid_update_detail, forbidUpdateDetail_);
        DARABONBA_PTR_FROM_JSON(match_count, matchCount_);
        DARABONBA_PTR_FROM_JSON(not_match_count, notMatchCount_);
        DARABONBA_PTR_FROM_JSON(not_match_detail, notMatchDetail_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ForbidUpdateDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForbidUpdateDetail& obj) { 
          DARABONBA_PTR_TO_JSON(can_not_update_count, canNotUpdateCount_);
          DARABONBA_PTR_TO_JSON(can_update_count, canUpdateCount_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ForbidUpdateDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(can_not_update_count, canNotUpdateCount_);
          DARABONBA_PTR_FROM_JSON(can_update_count, canUpdateCount_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        ForbidUpdateDetail() = default ;
        ForbidUpdateDetail(const ForbidUpdateDetail &) = default ;
        ForbidUpdateDetail(ForbidUpdateDetail &&) = default ;
        ForbidUpdateDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForbidUpdateDetail() = default ;
        ForbidUpdateDetail& operator=(const ForbidUpdateDetail &) = default ;
        ForbidUpdateDetail& operator=(ForbidUpdateDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canNotUpdateCount_ == nullptr
        && this->canUpdateCount_ == nullptr && this->value_ == nullptr; };
        // canNotUpdateCount Field Functions 
        bool hasCanNotUpdateCount() const { return this->canNotUpdateCount_ != nullptr;};
        void deleteCanNotUpdateCount() { this->canNotUpdateCount_ = nullptr;};
        inline int32_t getCanNotUpdateCount() const { DARABONBA_PTR_GET_DEFAULT(canNotUpdateCount_, 0) };
        inline ForbidUpdateDetail& setCanNotUpdateCount(int32_t canNotUpdateCount) { DARABONBA_PTR_SET_VALUE(canNotUpdateCount_, canNotUpdateCount) };


        // canUpdateCount Field Functions 
        bool hasCanUpdateCount() const { return this->canUpdateCount_ != nullptr;};
        void deleteCanUpdateCount() { this->canUpdateCount_ = nullptr;};
        inline int32_t getCanUpdateCount() const { DARABONBA_PTR_GET_DEFAULT(canUpdateCount_, 0) };
        inline ForbidUpdateDetail& setCanUpdateCount(int32_t canUpdateCount) { DARABONBA_PTR_SET_VALUE(canUpdateCount_, canUpdateCount) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ForbidUpdateDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The number of items that cannot be updated.
        shared_ptr<int32_t> canNotUpdateCount_ {};
        // The number of items that can be updated.
        shared_ptr<int32_t> canUpdateCount_ {};
        // The value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->forbidUpdateBillCount_ == nullptr && this->forbidUpdateDetail_ == nullptr && this->matchCount_ == nullptr && this->notMatchCount_ == nullptr && this->notMatchDetail_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline Module& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // forbidUpdateBillCount Field Functions 
      bool hasForbidUpdateBillCount() const { return this->forbidUpdateBillCount_ != nullptr;};
      void deleteForbidUpdateBillCount() { this->forbidUpdateBillCount_ = nullptr;};
      inline int32_t getForbidUpdateBillCount() const { DARABONBA_PTR_GET_DEFAULT(forbidUpdateBillCount_, 0) };
      inline Module& setForbidUpdateBillCount(int32_t forbidUpdateBillCount) { DARABONBA_PTR_SET_VALUE(forbidUpdateBillCount_, forbidUpdateBillCount) };


      // forbidUpdateDetail Field Functions 
      bool hasForbidUpdateDetail() const { return this->forbidUpdateDetail_ != nullptr;};
      void deleteForbidUpdateDetail() { this->forbidUpdateDetail_ = nullptr;};
      inline const vector<Module::ForbidUpdateDetail> & getForbidUpdateDetail() const { DARABONBA_PTR_GET_CONST(forbidUpdateDetail_, vector<Module::ForbidUpdateDetail>) };
      inline vector<Module::ForbidUpdateDetail> getForbidUpdateDetail() { DARABONBA_PTR_GET(forbidUpdateDetail_, vector<Module::ForbidUpdateDetail>) };
      inline Module& setForbidUpdateDetail(const vector<Module::ForbidUpdateDetail> & forbidUpdateDetail) { DARABONBA_PTR_SET_VALUE(forbidUpdateDetail_, forbidUpdateDetail) };
      inline Module& setForbidUpdateDetail(vector<Module::ForbidUpdateDetail> && forbidUpdateDetail) { DARABONBA_PTR_SET_RVALUE(forbidUpdateDetail_, forbidUpdateDetail) };


      // matchCount Field Functions 
      bool hasMatchCount() const { return this->matchCount_ != nullptr;};
      void deleteMatchCount() { this->matchCount_ = nullptr;};
      inline int32_t getMatchCount() const { DARABONBA_PTR_GET_DEFAULT(matchCount_, 0) };
      inline Module& setMatchCount(int32_t matchCount) { DARABONBA_PTR_SET_VALUE(matchCount_, matchCount) };


      // notMatchCount Field Functions 
      bool hasNotMatchCount() const { return this->notMatchCount_ != nullptr;};
      void deleteNotMatchCount() { this->notMatchCount_ = nullptr;};
      inline int32_t getNotMatchCount() const { DARABONBA_PTR_GET_DEFAULT(notMatchCount_, 0) };
      inline Module& setNotMatchCount(int32_t notMatchCount) { DARABONBA_PTR_SET_VALUE(notMatchCount_, notMatchCount) };


      // notMatchDetail Field Functions 
      bool hasNotMatchDetail() const { return this->notMatchDetail_ != nullptr;};
      void deleteNotMatchDetail() { this->notMatchDetail_ = nullptr;};
      inline const vector<string> & getNotMatchDetail() const { DARABONBA_PTR_GET_CONST(notMatchDetail_, vector<string>) };
      inline vector<string> getNotMatchDetail() { DARABONBA_PTR_GET(notMatchDetail_, vector<string>) };
      inline Module& setNotMatchDetail(const vector<string> & notMatchDetail) { DARABONBA_PTR_SET_VALUE(notMatchDetail_, notMatchDetail) };
      inline Module& setNotMatchDetail(vector<string> && notMatchDetail) { DARABONBA_PTR_SET_RVALUE(notMatchDetail_, notMatchDetail) };


    protected:
      // The batch ID.
      shared_ptr<int64_t> batchId_ {};
      // The number of bills that cannot be updated.
      shared_ptr<int32_t> forbidUpdateBillCount_ {};
      // The details of items that cannot be updated.
      shared_ptr<vector<Module::ForbidUpdateDetail>> forbidUpdateDetail_ {};
      // The number of matched items.
      shared_ptr<int32_t> matchCount_ {};
      // The number of unmatched items.
      shared_ptr<int32_t> notMatchCount_ {};
      // The details of unmatched items.
      shared_ptr<vector<string>> notMatchDetail_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->morePage_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ConfirmPreBillResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ConfirmPreBillResponseBody::Module) };
    inline ConfirmPreBillResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ConfirmPreBillResponseBody::Module) };
    inline ConfirmPreBillResponseBody& setModule(const ConfirmPreBillResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ConfirmPreBillResponseBody& setModule(ConfirmPreBillResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // morePage Field Functions 
    bool hasMorePage() const { return this->morePage_ != nullptr;};
    void deleteMorePage() { this->morePage_ = nullptr;};
    inline bool getMorePage() const { DARABONBA_PTR_GET_DEFAULT(morePage_, false) };
    inline ConfirmPreBillResponseBody& setMorePage(bool morePage) { DARABONBA_PTR_SET_VALUE(morePage_, morePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfirmPreBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline ConfirmPreBillResponseBody& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ConfirmPreBillResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ConfirmPreBillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ConfirmPreBillResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The details of the returned result.
    shared_ptr<ConfirmPreBillResponseBody::Module> module_ {};
    // The pagination token set by the server. Indicates whether more data is available on the next page during pagination.
    shared_ptr<bool> morePage_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<int32_t> resultCode_ {};
    // The error message.
    shared_ptr<string> resultMsg_ {};
    // Indicates whether the API call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
