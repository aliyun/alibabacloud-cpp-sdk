// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODY_HPP_
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
  class UpdatePropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateResult, updateResult_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateResult, updateResult_);
    };
    UpdatePropertyResponseBody() = default ;
    UpdatePropertyResponseBody(const UpdatePropertyResponseBody &) = default ;
    UpdatePropertyResponseBody(UpdatePropertyResponseBody &&) = default ;
    UpdatePropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePropertyResponseBody() = default ;
    UpdatePropertyResponseBody& operator=(const UpdatePropertyResponseBody &) = default ;
    UpdatePropertyResponseBody& operator=(UpdatePropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateResult& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_TO_JSON(SavePropertyValueModel, savePropertyValueModel_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_FROM_JSON(SavePropertyValueModel, savePropertyValueModel_);
      };
      UpdateResult() = default ;
      UpdateResult(const UpdateResult &) = default ;
      UpdateResult(UpdateResult &&) = default ;
      UpdateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateResult() = default ;
      UpdateResult& operator=(const UpdateResult &) = default ;
      UpdateResult& operator=(UpdateResult &&) = default ;
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
          // The ID of the property.
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
        // The property values that failed to be modified.
        shared_ptr<vector<SavePropertyValueModel::FailedPropertyValues>> failedPropertyValues_ {};
        // The property values that were modified.
        shared_ptr<vector<SavePropertyValueModel::SavePropertyValues>> savePropertyValues_ {};
      };

      virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyKey_ == nullptr && this->savePropertyValueModel_ == nullptr; };
      // propertyId Field Functions 
      bool hasPropertyId() const { return this->propertyId_ != nullptr;};
      void deletePropertyId() { this->propertyId_ = nullptr;};
      inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
      inline UpdateResult& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


      // propertyKey Field Functions 
      bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
      void deletePropertyKey() { this->propertyKey_ = nullptr;};
      inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
      inline UpdateResult& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


      // savePropertyValueModel Field Functions 
      bool hasSavePropertyValueModel() const { return this->savePropertyValueModel_ != nullptr;};
      void deleteSavePropertyValueModel() { this->savePropertyValueModel_ = nullptr;};
      inline const UpdateResult::SavePropertyValueModel & getSavePropertyValueModel() const { DARABONBA_PTR_GET_CONST(savePropertyValueModel_, UpdateResult::SavePropertyValueModel) };
      inline UpdateResult::SavePropertyValueModel getSavePropertyValueModel() { DARABONBA_PTR_GET(savePropertyValueModel_, UpdateResult::SavePropertyValueModel) };
      inline UpdateResult& setSavePropertyValueModel(const UpdateResult::SavePropertyValueModel & savePropertyValueModel) { DARABONBA_PTR_SET_VALUE(savePropertyValueModel_, savePropertyValueModel) };
      inline UpdateResult& setSavePropertyValueModel(UpdateResult::SavePropertyValueModel && savePropertyValueModel) { DARABONBA_PTR_SET_RVALUE(savePropertyValueModel_, savePropertyValueModel) };


    protected:
      // The ID of the property.
      shared_ptr<int64_t> propertyId_ {};
      // The name of the property.
      shared_ptr<string> propertyKey_ {};
      // The result of the property value modification.
      shared_ptr<UpdateResult::SavePropertyValueModel> savePropertyValueModel_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->updateResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateResult Field Functions 
    bool hasUpdateResult() const { return this->updateResult_ != nullptr;};
    void deleteUpdateResult() { this->updateResult_ = nullptr;};
    inline const UpdatePropertyResponseBody::UpdateResult & getUpdateResult() const { DARABONBA_PTR_GET_CONST(updateResult_, UpdatePropertyResponseBody::UpdateResult) };
    inline UpdatePropertyResponseBody::UpdateResult getUpdateResult() { DARABONBA_PTR_GET(updateResult_, UpdatePropertyResponseBody::UpdateResult) };
    inline UpdatePropertyResponseBody& setUpdateResult(const UpdatePropertyResponseBody::UpdateResult & updateResult) { DARABONBA_PTR_SET_VALUE(updateResult_, updateResult) };
    inline UpdatePropertyResponseBody& setUpdateResult(UpdatePropertyResponseBody::UpdateResult && updateResult) { DARABONBA_PTR_SET_RVALUE(updateResult_, updateResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result of the modification.
    shared_ptr<UpdatePropertyResponseBody::UpdateResult> updateResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
