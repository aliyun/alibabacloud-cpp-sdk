// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreatePropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePropertyResponseBody() = default ;
    CreatePropertyResponseBody(const CreatePropertyResponseBody &) = default ;
    CreatePropertyResponseBody(CreatePropertyResponseBody &&) = default ;
    CreatePropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePropertyResponseBody() = default ;
    CreatePropertyResponseBody& operator=(const CreatePropertyResponseBody &) = default ;
    CreatePropertyResponseBody& operator=(CreatePropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_TO_JSON(SavePropertyValueModel, savePropertyValueModel_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_FROM_JSON(SavePropertyValueModel, savePropertyValueModel_);
      };
      CreateResult() = default ;
      CreateResult(const CreateResult &) = default ;
      CreateResult(CreateResult &&) = default ;
      CreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateResult() = default ;
      CreateResult& operator=(const CreateResult &) = default ;
      CreateResult& operator=(CreateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SavePropertyValueModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SavePropertyValueModel& obj) { 
          DARABONBA_PTR_TO_JSON(FailedPropertyValues, failedPropertyValues_);
          DARABONBA_PTR_TO_JSON(SavePropertyValues, savePropertyValues_);
        };
        friend void from_json(const Darabonba::Json& j, SavePropertyValueModel& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedPropertyValues, failedPropertyValues_);
          DARABONBA_PTR_FROM_JSON(SavePropertyValues, savePropertyValues_);
        };
        SavePropertyValueModel() = default ;
        SavePropertyValueModel(const SavePropertyValueModel &) = default ;
        SavePropertyValueModel(SavePropertyValueModel &&) = default ;
        SavePropertyValueModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SavePropertyValueModel() = default ;
        SavePropertyValueModel& operator=(const SavePropertyValueModel &) = default ;
        SavePropertyValueModel& operator=(SavePropertyValueModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SavePropertyValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SavePropertyValues& obj) { 
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
          };
          friend void from_json(const Darabonba::Json& j, SavePropertyValues& obj) { 
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
          };
          SavePropertyValues() = default ;
          SavePropertyValues(const SavePropertyValues &) = default ;
          SavePropertyValues(SavePropertyValues &&) = default ;
          SavePropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SavePropertyValues() = default ;
          SavePropertyValues& operator=(const SavePropertyValues &) = default ;
          SavePropertyValues& operator=(SavePropertyValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->propertyValue_ == nullptr
        && this->propertyValueId_ == nullptr; };
          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline SavePropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


          // propertyValueId Field Functions 
          bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
          void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
          inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
          inline SavePropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


        protected:
          // The value of the property.
          shared_ptr<string> propertyValue_ {};
          // The ID of the property value.
          shared_ptr<int64_t> propertyValueId_ {};
        };

        class FailedPropertyValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailedPropertyValues& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
          };
          friend void from_json(const Darabonba::Json& j, FailedPropertyValues& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
          };
          FailedPropertyValues() = default ;
          FailedPropertyValues(const FailedPropertyValues &) = default ;
          FailedPropertyValues(FailedPropertyValues &&) = default ;
          FailedPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailedPropertyValues() = default ;
          FailedPropertyValues& operator=(const FailedPropertyValues &) = default ;
          FailedPropertyValues& operator=(FailedPropertyValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->propertyId_ == nullptr && this->propertyValue_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline FailedPropertyValues& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailedPropertyValues& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // propertyId Field Functions 
          bool hasPropertyId() const { return this->propertyId_ != nullptr;};
          void deletePropertyId() { this->propertyId_ = nullptr;};
          inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
          inline FailedPropertyValues& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline FailedPropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


        protected:
          // The error code.
          shared_ptr<string> errorCode_ {};
          // The error message.
          shared_ptr<string> errorMessage_ {};
          // The ID of the property value.
          shared_ptr<int64_t> propertyId_ {};
          // The value of the property.
          shared_ptr<string> propertyValue_ {};
        };

        virtual bool empty() const override { return this->failedPropertyValues_ == nullptr
        && this->savePropertyValues_ == nullptr; };
        // failedPropertyValues Field Functions 
        bool hasFailedPropertyValues() const { return this->failedPropertyValues_ != nullptr;};
        void deleteFailedPropertyValues() { this->failedPropertyValues_ = nullptr;};
        inline const vector<SavePropertyValueModel::FailedPropertyValues> & getFailedPropertyValues() const { DARABONBA_PTR_GET_CONST(failedPropertyValues_, vector<SavePropertyValueModel::FailedPropertyValues>) };
        inline vector<SavePropertyValueModel::FailedPropertyValues> getFailedPropertyValues() { DARABONBA_PTR_GET(failedPropertyValues_, vector<SavePropertyValueModel::FailedPropertyValues>) };
        inline SavePropertyValueModel& setFailedPropertyValues(const vector<SavePropertyValueModel::FailedPropertyValues> & failedPropertyValues) { DARABONBA_PTR_SET_VALUE(failedPropertyValues_, failedPropertyValues) };
        inline SavePropertyValueModel& setFailedPropertyValues(vector<SavePropertyValueModel::FailedPropertyValues> && failedPropertyValues) { DARABONBA_PTR_SET_RVALUE(failedPropertyValues_, failedPropertyValues) };


        // savePropertyValues Field Functions 
        bool hasSavePropertyValues() const { return this->savePropertyValues_ != nullptr;};
        void deleteSavePropertyValues() { this->savePropertyValues_ = nullptr;};
        inline const vector<SavePropertyValueModel::SavePropertyValues> & getSavePropertyValues() const { DARABONBA_PTR_GET_CONST(savePropertyValues_, vector<SavePropertyValueModel::SavePropertyValues>) };
        inline vector<SavePropertyValueModel::SavePropertyValues> getSavePropertyValues() { DARABONBA_PTR_GET(savePropertyValues_, vector<SavePropertyValueModel::SavePropertyValues>) };
        inline SavePropertyValueModel& setSavePropertyValues(const vector<SavePropertyValueModel::SavePropertyValues> & savePropertyValues) { DARABONBA_PTR_SET_VALUE(savePropertyValues_, savePropertyValues) };
        inline SavePropertyValueModel& setSavePropertyValues(vector<SavePropertyValueModel::SavePropertyValues> && savePropertyValues) { DARABONBA_PTR_SET_RVALUE(savePropertyValues_, savePropertyValues) };


      protected:
        // The property values that failed to be created.
        shared_ptr<vector<SavePropertyValueModel::FailedPropertyValues>> failedPropertyValues_ {};
        // Details of the property values that were created.
        shared_ptr<vector<SavePropertyValueModel::SavePropertyValues>> savePropertyValues_ {};
      };

      virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyKey_ == nullptr && this->savePropertyValueModel_ == nullptr; };
      // propertyId Field Functions 
      bool hasPropertyId() const { return this->propertyId_ != nullptr;};
      void deletePropertyId() { this->propertyId_ = nullptr;};
      inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
      inline CreateResult& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


      // propertyKey Field Functions 
      bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
      void deletePropertyKey() { this->propertyKey_ = nullptr;};
      inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
      inline CreateResult& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


      // savePropertyValueModel Field Functions 
      bool hasSavePropertyValueModel() const { return this->savePropertyValueModel_ != nullptr;};
      void deleteSavePropertyValueModel() { this->savePropertyValueModel_ = nullptr;};
      inline const CreateResult::SavePropertyValueModel & getSavePropertyValueModel() const { DARABONBA_PTR_GET_CONST(savePropertyValueModel_, CreateResult::SavePropertyValueModel) };
      inline CreateResult::SavePropertyValueModel getSavePropertyValueModel() { DARABONBA_PTR_GET(savePropertyValueModel_, CreateResult::SavePropertyValueModel) };
      inline CreateResult& setSavePropertyValueModel(const CreateResult::SavePropertyValueModel & savePropertyValueModel) { DARABONBA_PTR_SET_VALUE(savePropertyValueModel_, savePropertyValueModel) };
      inline CreateResult& setSavePropertyValueModel(CreateResult::SavePropertyValueModel && savePropertyValueModel) { DARABONBA_PTR_SET_RVALUE(savePropertyValueModel_, savePropertyValueModel) };


    protected:
      // The ID of the property.
      shared_ptr<int64_t> propertyId_ {};
      // The name of the property.
      shared_ptr<string> propertyKey_ {};
      // The result of creating the property value.
      shared_ptr<CreateResult::SavePropertyValueModel> savePropertyValueModel_ {};
    };

    virtual bool empty() const override { return this->createResult_ == nullptr
        && this->requestId_ == nullptr; };
    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const CreatePropertyResponseBody::CreateResult & getCreateResult() const { DARABONBA_PTR_GET_CONST(createResult_, CreatePropertyResponseBody::CreateResult) };
    inline CreatePropertyResponseBody::CreateResult getCreateResult() { DARABONBA_PTR_GET(createResult_, CreatePropertyResponseBody::CreateResult) };
    inline CreatePropertyResponseBody& setCreateResult(const CreatePropertyResponseBody::CreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline CreatePropertyResponseBody& setCreateResult(CreatePropertyResponseBody::CreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of creating the property.
    shared_ptr<CreatePropertyResponseBody::CreateResult> createResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
