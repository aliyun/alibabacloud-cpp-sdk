// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCONSTANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCONSTANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowConstantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowConstantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagConstants, dagConstants_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowConstantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagConstants, dagConstants_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskFlowConstantsResponseBody() = default ;
    ListTaskFlowConstantsResponseBody(const ListTaskFlowConstantsResponseBody &) = default ;
    ListTaskFlowConstantsResponseBody(ListTaskFlowConstantsResponseBody &&) = default ;
    ListTaskFlowConstantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowConstantsResponseBody() = default ;
    ListTaskFlowConstantsResponseBody& operator=(const ListTaskFlowConstantsResponseBody &) = default ;
    ListTaskFlowConstantsResponseBody& operator=(ListTaskFlowConstantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DagConstants : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DagConstants& obj) { 
        DARABONBA_PTR_TO_JSON(DagConstant, dagConstant_);
      };
      friend void from_json(const Darabonba::Json& j, DagConstants& obj) { 
        DARABONBA_PTR_FROM_JSON(DagConstant, dagConstant_);
      };
      DagConstants() = default ;
      DagConstants(const DagConstants &) = default ;
      DagConstants(DagConstants &&) = default ;
      DagConstants(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DagConstants() = default ;
      DagConstants& operator=(const DagConstants &) = default ;
      DagConstants& operator=(DagConstants &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DagConstant : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DagConstant& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DagConstant& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DagConstant() = default ;
        DagConstant(const DagConstant &) = default ;
        DagConstant(DagConstant &&) = default ;
        DagConstant(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DagConstant() = default ;
        DagConstant& operator=(const DagConstant &) = default ;
        DagConstant& operator=(DagConstant &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline DagConstant& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DagConstant& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The constant key.
        shared_ptr<string> key_ {};
        // The constant value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dagConstant_ == nullptr; };
      // dagConstant Field Functions 
      bool hasDagConstant() const { return this->dagConstant_ != nullptr;};
      void deleteDagConstant() { this->dagConstant_ = nullptr;};
      inline const vector<DagConstants::DagConstant> & getDagConstant() const { DARABONBA_PTR_GET_CONST(dagConstant_, vector<DagConstants::DagConstant>) };
      inline vector<DagConstants::DagConstant> getDagConstant() { DARABONBA_PTR_GET(dagConstant_, vector<DagConstants::DagConstant>) };
      inline DagConstants& setDagConstant(const vector<DagConstants::DagConstant> & dagConstant) { DARABONBA_PTR_SET_VALUE(dagConstant_, dagConstant) };
      inline DagConstants& setDagConstant(vector<DagConstants::DagConstant> && dagConstant) { DARABONBA_PTR_SET_RVALUE(dagConstant_, dagConstant) };


    protected:
      shared_ptr<vector<DagConstants::DagConstant>> dagConstant_ {};
    };

    virtual bool empty() const override { return this->dagConstants_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dagConstants Field Functions 
    bool hasDagConstants() const { return this->dagConstants_ != nullptr;};
    void deleteDagConstants() { this->dagConstants_ = nullptr;};
    inline const ListTaskFlowConstantsResponseBody::DagConstants & getDagConstants() const { DARABONBA_PTR_GET_CONST(dagConstants_, ListTaskFlowConstantsResponseBody::DagConstants) };
    inline ListTaskFlowConstantsResponseBody::DagConstants getDagConstants() { DARABONBA_PTR_GET(dagConstants_, ListTaskFlowConstantsResponseBody::DagConstants) };
    inline ListTaskFlowConstantsResponseBody& setDagConstants(const ListTaskFlowConstantsResponseBody::DagConstants & dagConstants) { DARABONBA_PTR_SET_VALUE(dagConstants_, dagConstants) };
    inline ListTaskFlowConstantsResponseBody& setDagConstants(ListTaskFlowConstantsResponseBody::DagConstants && dagConstants) { DARABONBA_PTR_SET_RVALUE(dagConstants_, dagConstants) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowConstantsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowConstantsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowConstantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowConstantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // A list of constant key-value pairs for the task flow.
    shared_ptr<ListTaskFlowConstantsResponseBody::DagConstants> dagConstants_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
