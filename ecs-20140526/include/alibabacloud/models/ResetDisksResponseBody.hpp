// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResetDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResetDisksResponseBody() = default ;
    ResetDisksResponseBody(const ResetDisksResponseBody &) = default ;
    ResetDisksResponseBody(ResetDisksResponseBody &&) = default ;
    ResetDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDisksResponseBody() = default ;
    ResetDisksResponseBody& operator=(const ResetDisksResponseBody &) = default ;
    ResetDisksResponseBody& operator=(ResetDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationProgressSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationProgressSet& obj) { 
        DARABONBA_PTR_TO_JSON(OperationProgress, operationProgress_);
      };
      friend void from_json(const Darabonba::Json& j, OperationProgressSet& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationProgress, operationProgress_);
      };
      OperationProgressSet() = default ;
      OperationProgressSet(const OperationProgressSet &) = default ;
      OperationProgressSet(OperationProgressSet &&) = default ;
      OperationProgressSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationProgressSet() = default ;
      OperationProgressSet& operator=(const OperationProgressSet &) = default ;
      OperationProgressSet& operator=(OperationProgressSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperationProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationProgress& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
          DARABONBA_PTR_TO_JSON(RelatedItemSet, relatedItemSet_);
        };
        friend void from_json(const Darabonba::Json& j, OperationProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
          DARABONBA_PTR_FROM_JSON(RelatedItemSet, relatedItemSet_);
        };
        OperationProgress() = default ;
        OperationProgress(const OperationProgress &) = default ;
        OperationProgress(OperationProgress &&) = default ;
        OperationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationProgress() = default ;
        OperationProgress& operator=(const OperationProgress &) = default ;
        OperationProgress& operator=(OperationProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelatedItemSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedItemSet& obj) { 
            DARABONBA_PTR_TO_JSON(RelatedItem, relatedItem_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedItemSet& obj) { 
            DARABONBA_PTR_FROM_JSON(RelatedItem, relatedItem_);
          };
          RelatedItemSet() = default ;
          RelatedItemSet(const RelatedItemSet &) = default ;
          RelatedItemSet(RelatedItemSet &&) = default ;
          RelatedItemSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedItemSet() = default ;
          RelatedItemSet& operator=(const RelatedItemSet &) = default ;
          RelatedItemSet& operator=(RelatedItemSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RelatedItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RelatedItem& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, RelatedItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            RelatedItem() = default ;
            RelatedItem(const RelatedItem &) = default ;
            RelatedItem(RelatedItem &&) = default ;
            RelatedItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RelatedItem() = default ;
            RelatedItem& operator=(const RelatedItem &) = default ;
            RelatedItem& operator=(RelatedItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline RelatedItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline RelatedItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The resource name.
            shared_ptr<string> name_ {};
            // The resource ID.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->relatedItem_ == nullptr; };
          // relatedItem Field Functions 
          bool hasRelatedItem() const { return this->relatedItem_ != nullptr;};
          void deleteRelatedItem() { this->relatedItem_ = nullptr;};
          inline const vector<RelatedItemSet::RelatedItem> & getRelatedItem() const { DARABONBA_PTR_GET_CONST(relatedItem_, vector<RelatedItemSet::RelatedItem>) };
          inline vector<RelatedItemSet::RelatedItem> getRelatedItem() { DARABONBA_PTR_GET(relatedItem_, vector<RelatedItemSet::RelatedItem>) };
          inline RelatedItemSet& setRelatedItem(const vector<RelatedItemSet::RelatedItem> & relatedItem) { DARABONBA_PTR_SET_VALUE(relatedItem_, relatedItem) };
          inline RelatedItemSet& setRelatedItem(vector<RelatedItemSet::RelatedItem> && relatedItem) { DARABONBA_PTR_SET_RVALUE(relatedItem_, relatedItem) };


        protected:
          shared_ptr<vector<RelatedItemSet::RelatedItem>> relatedItem_ {};
        };

        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->operationStatus_ == nullptr && this->relatedItemSet_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline OperationProgress& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline OperationProgress& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // operationStatus Field Functions 
        bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
        void deleteOperationStatus() { this->operationStatus_ = nullptr;};
        inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
        inline OperationProgress& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


        // relatedItemSet Field Functions 
        bool hasRelatedItemSet() const { return this->relatedItemSet_ != nullptr;};
        void deleteRelatedItemSet() { this->relatedItemSet_ = nullptr;};
        inline const OperationProgress::RelatedItemSet & getRelatedItemSet() const { DARABONBA_PTR_GET_CONST(relatedItemSet_, OperationProgress::RelatedItemSet) };
        inline OperationProgress::RelatedItemSet getRelatedItemSet() { DARABONBA_PTR_GET(relatedItemSet_, OperationProgress::RelatedItemSet) };
        inline OperationProgress& setRelatedItemSet(const OperationProgress::RelatedItemSet & relatedItemSet) { DARABONBA_PTR_SET_VALUE(relatedItemSet_, relatedItemSet) };
        inline OperationProgress& setRelatedItemSet(OperationProgress::RelatedItemSet && relatedItemSet) { DARABONBA_PTR_SET_RVALUE(relatedItemSet_, relatedItemSet) };


      protected:
        // The error code that is returned if the request failed. This parameter is empty if the request is successful.
        // 
        // For information about error codes and error messages, see [Service error codes](https://error-center.alibabacloud.com/status/product/Ecs).
        shared_ptr<string> errorCode_ {};
        // The error message that is returned if the request failed. This parameter is empty if the request is successful.
        // 
        // For information about error codes and error messages, see [Service error codes](https://error-center.alibabacloud.com/status/product/Ecs).
        shared_ptr<string> errorMsg_ {};
        // Indicates whether the request is successful. If the request is successful, Success is returned. If the request failed, an error code and an error message are returned.
        shared_ptr<string> operationStatus_ {};
        // Details about the resources.
        shared_ptr<OperationProgress::RelatedItemSet> relatedItemSet_ {};
      };

      virtual bool empty() const override { return this->operationProgress_ == nullptr; };
      // operationProgress Field Functions 
      bool hasOperationProgress() const { return this->operationProgress_ != nullptr;};
      void deleteOperationProgress() { this->operationProgress_ = nullptr;};
      inline const vector<OperationProgressSet::OperationProgress> & getOperationProgress() const { DARABONBA_PTR_GET_CONST(operationProgress_, vector<OperationProgressSet::OperationProgress>) };
      inline vector<OperationProgressSet::OperationProgress> getOperationProgress() { DARABONBA_PTR_GET(operationProgress_, vector<OperationProgressSet::OperationProgress>) };
      inline OperationProgressSet& setOperationProgress(const vector<OperationProgressSet::OperationProgress> & operationProgress) { DARABONBA_PTR_SET_VALUE(operationProgress_, operationProgress) };
      inline OperationProgressSet& setOperationProgress(vector<OperationProgressSet::OperationProgress> && operationProgress) { DARABONBA_PTR_SET_RVALUE(operationProgress_, operationProgress) };


    protected:
      shared_ptr<vector<OperationProgressSet::OperationProgress>> operationProgress_ {};
    };

    virtual bool empty() const override { return this->operationProgressSet_ == nullptr
        && this->requestId_ == nullptr; };
    // operationProgressSet Field Functions 
    bool hasOperationProgressSet() const { return this->operationProgressSet_ != nullptr;};
    void deleteOperationProgressSet() { this->operationProgressSet_ = nullptr;};
    inline const ResetDisksResponseBody::OperationProgressSet & getOperationProgressSet() const { DARABONBA_PTR_GET_CONST(operationProgressSet_, ResetDisksResponseBody::OperationProgressSet) };
    inline ResetDisksResponseBody::OperationProgressSet getOperationProgressSet() { DARABONBA_PTR_GET(operationProgressSet_, ResetDisksResponseBody::OperationProgressSet) };
    inline ResetDisksResponseBody& setOperationProgressSet(const ResetDisksResponseBody::OperationProgressSet & operationProgressSet) { DARABONBA_PTR_SET_VALUE(operationProgressSet_, operationProgressSet) };
    inline ResetDisksResponseBody& setOperationProgressSet(ResetDisksResponseBody::OperationProgressSet && operationProgressSet) { DARABONBA_PTR_SET_RVALUE(operationProgressSet_, operationProgressSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the rollback operation.
    shared_ptr<ResetDisksResponseBody::OperationProgressSet> operationProgressSet_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
