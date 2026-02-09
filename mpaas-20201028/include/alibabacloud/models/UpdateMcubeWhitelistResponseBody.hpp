// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateMcubeWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddWhitelistResult, addWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWhitelistResult, addWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    UpdateMcubeWhitelistResponseBody() = default ;
    UpdateMcubeWhitelistResponseBody(const UpdateMcubeWhitelistResponseBody &) = default ;
    UpdateMcubeWhitelistResponseBody(UpdateMcubeWhitelistResponseBody &&) = default ;
    UpdateMcubeWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcubeWhitelistResponseBody() = default ;
    UpdateMcubeWhitelistResponseBody& operator=(const UpdateMcubeWhitelistResponseBody &) = default ;
    UpdateMcubeWhitelistResponseBody& operator=(UpdateMcubeWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddWhitelistResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddWhitelistResult& obj) { 
        DARABONBA_PTR_TO_JSON(AddWhitelistInfo, addWhitelistInfo_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, AddWhitelistResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AddWhitelistInfo, addWhitelistInfo_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      AddWhitelistResult() = default ;
      AddWhitelistResult(const AddWhitelistResult &) = default ;
      AddWhitelistResult(AddWhitelistResult &&) = default ;
      AddWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddWhitelistResult() = default ;
      AddWhitelistResult& operator=(const AddWhitelistResult &) = default ;
      AddWhitelistResult& operator=(AddWhitelistResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddWhitelistInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddWhitelistInfo& obj) { 
          DARABONBA_PTR_TO_JSON(FailNum, failNum_);
          DARABONBA_PTR_TO_JSON(FailUserIds, failUserIds_);
          DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
        };
        friend void from_json(const Darabonba::Json& j, AddWhitelistInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FailNum, failNum_);
          DARABONBA_PTR_FROM_JSON(FailUserIds, failUserIds_);
          DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
        };
        AddWhitelistInfo() = default ;
        AddWhitelistInfo(const AddWhitelistInfo &) = default ;
        AddWhitelistInfo(AddWhitelistInfo &&) = default ;
        AddWhitelistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddWhitelistInfo() = default ;
        AddWhitelistInfo& operator=(const AddWhitelistInfo &) = default ;
        AddWhitelistInfo& operator=(AddWhitelistInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failNum_ == nullptr
        && this->failUserIds_ == nullptr && this->successNum_ == nullptr; };
        // failNum Field Functions 
        bool hasFailNum() const { return this->failNum_ != nullptr;};
        void deleteFailNum() { this->failNum_ = nullptr;};
        inline int64_t getFailNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0L) };
        inline AddWhitelistInfo& setFailNum(int64_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


        // failUserIds Field Functions 
        bool hasFailUserIds() const { return this->failUserIds_ != nullptr;};
        void deleteFailUserIds() { this->failUserIds_ = nullptr;};
        inline string getFailUserIds() const { DARABONBA_PTR_GET_DEFAULT(failUserIds_, "") };
        inline AddWhitelistInfo& setFailUserIds(string failUserIds) { DARABONBA_PTR_SET_VALUE(failUserIds_, failUserIds) };


        // successNum Field Functions 
        bool hasSuccessNum() const { return this->successNum_ != nullptr;};
        void deleteSuccessNum() { this->successNum_ = nullptr;};
        inline int64_t getSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0L) };
        inline AddWhitelistInfo& setSuccessNum(int64_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


      protected:
        shared_ptr<int64_t> failNum_ {};
        shared_ptr<string> failUserIds_ {};
        shared_ptr<int64_t> successNum_ {};
      };

      virtual bool empty() const override { return this->addWhitelistInfo_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // addWhitelistInfo Field Functions 
      bool hasAddWhitelistInfo() const { return this->addWhitelistInfo_ != nullptr;};
      void deleteAddWhitelistInfo() { this->addWhitelistInfo_ = nullptr;};
      inline const AddWhitelistResult::AddWhitelistInfo & getAddWhitelistInfo() const { DARABONBA_PTR_GET_CONST(addWhitelistInfo_, AddWhitelistResult::AddWhitelistInfo) };
      inline AddWhitelistResult::AddWhitelistInfo getAddWhitelistInfo() { DARABONBA_PTR_GET(addWhitelistInfo_, AddWhitelistResult::AddWhitelistInfo) };
      inline AddWhitelistResult& setAddWhitelistInfo(const AddWhitelistResult::AddWhitelistInfo & addWhitelistInfo) { DARABONBA_PTR_SET_VALUE(addWhitelistInfo_, addWhitelistInfo) };
      inline AddWhitelistResult& setAddWhitelistInfo(AddWhitelistResult::AddWhitelistInfo && addWhitelistInfo) { DARABONBA_PTR_SET_RVALUE(addWhitelistInfo_, addWhitelistInfo) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline AddWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline AddWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<AddWhitelistResult::AddWhitelistInfo> addWhitelistInfo_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->addWhitelistResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // addWhitelistResult Field Functions 
    bool hasAddWhitelistResult() const { return this->addWhitelistResult_ != nullptr;};
    void deleteAddWhitelistResult() { this->addWhitelistResult_ = nullptr;};
    inline const UpdateMcubeWhitelistResponseBody::AddWhitelistResult & getAddWhitelistResult() const { DARABONBA_PTR_GET_CONST(addWhitelistResult_, UpdateMcubeWhitelistResponseBody::AddWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBody::AddWhitelistResult getAddWhitelistResult() { DARABONBA_PTR_GET(addWhitelistResult_, UpdateMcubeWhitelistResponseBody::AddWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBody& setAddWhitelistResult(const UpdateMcubeWhitelistResponseBody::AddWhitelistResult & addWhitelistResult) { DARABONBA_PTR_SET_VALUE(addWhitelistResult_, addWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBody& setAddWhitelistResult(UpdateMcubeWhitelistResponseBody::AddWhitelistResult && addWhitelistResult) { DARABONBA_PTR_SET_RVALUE(addWhitelistResult_, addWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMcubeWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UpdateMcubeWhitelistResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UpdateMcubeWhitelistResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<UpdateMcubeWhitelistResponseBody::AddWhitelistResult> addWhitelistResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
