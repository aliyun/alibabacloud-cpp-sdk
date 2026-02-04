// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENORMALIZATIONSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENORMALIZATIONSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateNormalizationSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNormalizationSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNormalizationSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateNormalizationSchemaRequest() = default ;
    UpdateNormalizationSchemaRequest(const UpdateNormalizationSchemaRequest &) = default ;
    UpdateNormalizationSchemaRequest(UpdateNormalizationSchemaRequest &&) = default ;
    UpdateNormalizationSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNormalizationSchemaRequest() = default ;
    UpdateNormalizationSchemaRequest& operator=(const UpdateNormalizationSchemaRequest &) = default ;
    UpdateNormalizationSchemaRequest& operator=(UpdateNormalizationSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationFields& obj) { 
        DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldJsonIndexAll, normalizationFieldJsonIndexAll_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldJsonKeys, normalizationFieldJsonKeys_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationFields& obj) { 
        DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldJsonIndexAll, normalizationFieldJsonIndexAll_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldJsonKeys, normalizationFieldJsonKeys_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
      };
      NormalizationFields() = default ;
      NormalizationFields(const NormalizationFields &) = default ;
      NormalizationFields(NormalizationFields &&) = default ;
      NormalizationFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationFields() = default ;
      NormalizationFields& operator=(const NormalizationFields &) = default ;
      NormalizationFields& operator=(NormalizationFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NormalizationFieldJsonKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationFieldJsonKeys& obj) { 
          DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationFieldJsonKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
        };
        NormalizationFieldJsonKeys() = default ;
        NormalizationFieldJsonKeys(const NormalizationFieldJsonKeys &) = default ;
        NormalizationFieldJsonKeys(NormalizationFieldJsonKeys &&) = default ;
        NormalizationFieldJsonKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationFieldJsonKeys() = default ;
        NormalizationFieldJsonKeys& operator=(const NormalizationFieldJsonKeys &) = default ;
        NormalizationFieldJsonKeys& operator=(NormalizationFieldJsonKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->normalizationFieldDescription_ == nullptr
        && this->normalizationFieldExample_ == nullptr && this->normalizationFieldFrom_ == nullptr && this->normalizationFieldName_ == nullptr && this->normalizationFieldRequired_ == nullptr && this->normalizationFieldTokenize_ == nullptr
        && this->normalizationFieldType_ == nullptr; };
        // normalizationFieldDescription Field Functions 
        bool hasNormalizationFieldDescription() const { return this->normalizationFieldDescription_ != nullptr;};
        void deleteNormalizationFieldDescription() { this->normalizationFieldDescription_ = nullptr;};
        inline string getNormalizationFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldDescription_, "") };
        inline NormalizationFieldJsonKeys& setNormalizationFieldDescription(string normalizationFieldDescription) { DARABONBA_PTR_SET_VALUE(normalizationFieldDescription_, normalizationFieldDescription) };


        // normalizationFieldExample Field Functions 
        bool hasNormalizationFieldExample() const { return this->normalizationFieldExample_ != nullptr;};
        void deleteNormalizationFieldExample() { this->normalizationFieldExample_ = nullptr;};
        inline string getNormalizationFieldExample() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldExample_, "") };
        inline NormalizationFieldJsonKeys& setNormalizationFieldExample(string normalizationFieldExample) { DARABONBA_PTR_SET_VALUE(normalizationFieldExample_, normalizationFieldExample) };


        // normalizationFieldFrom Field Functions 
        bool hasNormalizationFieldFrom() const { return this->normalizationFieldFrom_ != nullptr;};
        void deleteNormalizationFieldFrom() { this->normalizationFieldFrom_ = nullptr;};
        inline string getNormalizationFieldFrom() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldFrom_, "") };
        inline NormalizationFieldJsonKeys& setNormalizationFieldFrom(string normalizationFieldFrom) { DARABONBA_PTR_SET_VALUE(normalizationFieldFrom_, normalizationFieldFrom) };


        // normalizationFieldName Field Functions 
        bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
        void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
        inline string getNormalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
        inline NormalizationFieldJsonKeys& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


        // normalizationFieldRequired Field Functions 
        bool hasNormalizationFieldRequired() const { return this->normalizationFieldRequired_ != nullptr;};
        void deleteNormalizationFieldRequired() { this->normalizationFieldRequired_ = nullptr;};
        inline bool getNormalizationFieldRequired() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequired_, false) };
        inline NormalizationFieldJsonKeys& setNormalizationFieldRequired(bool normalizationFieldRequired) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequired_, normalizationFieldRequired) };


        // normalizationFieldTokenize Field Functions 
        bool hasNormalizationFieldTokenize() const { return this->normalizationFieldTokenize_ != nullptr;};
        void deleteNormalizationFieldTokenize() { this->normalizationFieldTokenize_ = nullptr;};
        inline bool getNormalizationFieldTokenize() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldTokenize_, false) };
        inline NormalizationFieldJsonKeys& setNormalizationFieldTokenize(bool normalizationFieldTokenize) { DARABONBA_PTR_SET_VALUE(normalizationFieldTokenize_, normalizationFieldTokenize) };


        // normalizationFieldType Field Functions 
        bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
        void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
        inline string getNormalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
        inline NormalizationFieldJsonKeys& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


      protected:
        shared_ptr<string> normalizationFieldDescription_ {};
        shared_ptr<string> normalizationFieldExample_ {};
        shared_ptr<string> normalizationFieldFrom_ {};
        // This parameter is required.
        shared_ptr<string> normalizationFieldName_ {};
        shared_ptr<bool> normalizationFieldRequired_ {};
        shared_ptr<bool> normalizationFieldTokenize_ {};
        // This parameter is required.
        shared_ptr<string> normalizationFieldType_ {};
      };

      virtual bool empty() const override { return this->normalizationFieldDescription_ == nullptr
        && this->normalizationFieldExample_ == nullptr && this->normalizationFieldFrom_ == nullptr && this->normalizationFieldJsonIndexAll_ == nullptr && this->normalizationFieldJsonKeys_ == nullptr && this->normalizationFieldName_ == nullptr
        && this->normalizationFieldRequired_ == nullptr && this->normalizationFieldTokenize_ == nullptr && this->normalizationFieldType_ == nullptr; };
      // normalizationFieldDescription Field Functions 
      bool hasNormalizationFieldDescription() const { return this->normalizationFieldDescription_ != nullptr;};
      void deleteNormalizationFieldDescription() { this->normalizationFieldDescription_ = nullptr;};
      inline string getNormalizationFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldDescription_, "") };
      inline NormalizationFields& setNormalizationFieldDescription(string normalizationFieldDescription) { DARABONBA_PTR_SET_VALUE(normalizationFieldDescription_, normalizationFieldDescription) };


      // normalizationFieldExample Field Functions 
      bool hasNormalizationFieldExample() const { return this->normalizationFieldExample_ != nullptr;};
      void deleteNormalizationFieldExample() { this->normalizationFieldExample_ = nullptr;};
      inline string getNormalizationFieldExample() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldExample_, "") };
      inline NormalizationFields& setNormalizationFieldExample(string normalizationFieldExample) { DARABONBA_PTR_SET_VALUE(normalizationFieldExample_, normalizationFieldExample) };


      // normalizationFieldFrom Field Functions 
      bool hasNormalizationFieldFrom() const { return this->normalizationFieldFrom_ != nullptr;};
      void deleteNormalizationFieldFrom() { this->normalizationFieldFrom_ = nullptr;};
      inline string getNormalizationFieldFrom() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldFrom_, "") };
      inline NormalizationFields& setNormalizationFieldFrom(string normalizationFieldFrom) { DARABONBA_PTR_SET_VALUE(normalizationFieldFrom_, normalizationFieldFrom) };


      // normalizationFieldJsonIndexAll Field Functions 
      bool hasNormalizationFieldJsonIndexAll() const { return this->normalizationFieldJsonIndexAll_ != nullptr;};
      void deleteNormalizationFieldJsonIndexAll() { this->normalizationFieldJsonIndexAll_ = nullptr;};
      inline bool getNormalizationFieldJsonIndexAll() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldJsonIndexAll_, false) };
      inline NormalizationFields& setNormalizationFieldJsonIndexAll(bool normalizationFieldJsonIndexAll) { DARABONBA_PTR_SET_VALUE(normalizationFieldJsonIndexAll_, normalizationFieldJsonIndexAll) };


      // normalizationFieldJsonKeys Field Functions 
      bool hasNormalizationFieldJsonKeys() const { return this->normalizationFieldJsonKeys_ != nullptr;};
      void deleteNormalizationFieldJsonKeys() { this->normalizationFieldJsonKeys_ = nullptr;};
      inline const vector<NormalizationFields::NormalizationFieldJsonKeys> & getNormalizationFieldJsonKeys() const { DARABONBA_PTR_GET_CONST(normalizationFieldJsonKeys_, vector<NormalizationFields::NormalizationFieldJsonKeys>) };
      inline vector<NormalizationFields::NormalizationFieldJsonKeys> getNormalizationFieldJsonKeys() { DARABONBA_PTR_GET(normalizationFieldJsonKeys_, vector<NormalizationFields::NormalizationFieldJsonKeys>) };
      inline NormalizationFields& setNormalizationFieldJsonKeys(const vector<NormalizationFields::NormalizationFieldJsonKeys> & normalizationFieldJsonKeys) { DARABONBA_PTR_SET_VALUE(normalizationFieldJsonKeys_, normalizationFieldJsonKeys) };
      inline NormalizationFields& setNormalizationFieldJsonKeys(vector<NormalizationFields::NormalizationFieldJsonKeys> && normalizationFieldJsonKeys) { DARABONBA_PTR_SET_RVALUE(normalizationFieldJsonKeys_, normalizationFieldJsonKeys) };


      // normalizationFieldName Field Functions 
      bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
      void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
      inline string getNormalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
      inline NormalizationFields& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


      // normalizationFieldRequired Field Functions 
      bool hasNormalizationFieldRequired() const { return this->normalizationFieldRequired_ != nullptr;};
      void deleteNormalizationFieldRequired() { this->normalizationFieldRequired_ = nullptr;};
      inline bool getNormalizationFieldRequired() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequired_, false) };
      inline NormalizationFields& setNormalizationFieldRequired(bool normalizationFieldRequired) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequired_, normalizationFieldRequired) };


      // normalizationFieldTokenize Field Functions 
      bool hasNormalizationFieldTokenize() const { return this->normalizationFieldTokenize_ != nullptr;};
      void deleteNormalizationFieldTokenize() { this->normalizationFieldTokenize_ = nullptr;};
      inline bool getNormalizationFieldTokenize() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldTokenize_, false) };
      inline NormalizationFields& setNormalizationFieldTokenize(bool normalizationFieldTokenize) { DARABONBA_PTR_SET_VALUE(normalizationFieldTokenize_, normalizationFieldTokenize) };


      // normalizationFieldType Field Functions 
      bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
      void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
      inline string getNormalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
      inline NormalizationFields& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


    protected:
      shared_ptr<string> normalizationFieldDescription_ {};
      shared_ptr<string> normalizationFieldExample_ {};
      shared_ptr<string> normalizationFieldFrom_ {};
      shared_ptr<bool> normalizationFieldJsonIndexAll_ {};
      shared_ptr<vector<NormalizationFields::NormalizationFieldJsonKeys>> normalizationFieldJsonKeys_ {};
      // This parameter is required.
      shared_ptr<string> normalizationFieldName_ {};
      shared_ptr<bool> normalizationFieldRequired_ {};
      shared_ptr<bool> normalizationFieldTokenize_ {};
      // This parameter is required.
      shared_ptr<string> normalizationFieldType_ {};
    };

    virtual bool empty() const override { return this->lang_ == nullptr
        && this->normalizationFields_ == nullptr && this->normalizationSchemaDescription_ == nullptr && this->normalizationSchemaId_ == nullptr && this->normalizationSchemaName_ == nullptr && this->normalizationSchemaType_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateNormalizationSchemaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationFields Field Functions 
    bool hasNormalizationFields() const { return this->normalizationFields_ != nullptr;};
    void deleteNormalizationFields() { this->normalizationFields_ = nullptr;};
    inline const vector<UpdateNormalizationSchemaRequest::NormalizationFields> & getNormalizationFields() const { DARABONBA_PTR_GET_CONST(normalizationFields_, vector<UpdateNormalizationSchemaRequest::NormalizationFields>) };
    inline vector<UpdateNormalizationSchemaRequest::NormalizationFields> getNormalizationFields() { DARABONBA_PTR_GET(normalizationFields_, vector<UpdateNormalizationSchemaRequest::NormalizationFields>) };
    inline UpdateNormalizationSchemaRequest& setNormalizationFields(const vector<UpdateNormalizationSchemaRequest::NormalizationFields> & normalizationFields) { DARABONBA_PTR_SET_VALUE(normalizationFields_, normalizationFields) };
    inline UpdateNormalizationSchemaRequest& setNormalizationFields(vector<UpdateNormalizationSchemaRequest::NormalizationFields> && normalizationFields) { DARABONBA_PTR_SET_RVALUE(normalizationFields_, normalizationFields) };


    // normalizationSchemaDescription Field Functions 
    bool hasNormalizationSchemaDescription() const { return this->normalizationSchemaDescription_ != nullptr;};
    void deleteNormalizationSchemaDescription() { this->normalizationSchemaDescription_ = nullptr;};
    inline string getNormalizationSchemaDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaDescription_, "") };
    inline UpdateNormalizationSchemaRequest& setNormalizationSchemaDescription(string normalizationSchemaDescription) { DARABONBA_PTR_SET_VALUE(normalizationSchemaDescription_, normalizationSchemaDescription) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline UpdateNormalizationSchemaRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // normalizationSchemaName Field Functions 
    bool hasNormalizationSchemaName() const { return this->normalizationSchemaName_ != nullptr;};
    void deleteNormalizationSchemaName() { this->normalizationSchemaName_ = nullptr;};
    inline string getNormalizationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaName_, "") };
    inline UpdateNormalizationSchemaRequest& setNormalizationSchemaName(string normalizationSchemaName) { DARABONBA_PTR_SET_VALUE(normalizationSchemaName_, normalizationSchemaName) };


    // normalizationSchemaType Field Functions 
    bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
    void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
    inline string getNormalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
    inline UpdateNormalizationSchemaRequest& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNormalizationSchemaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateNormalizationSchemaRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<vector<UpdateNormalizationSchemaRequest::NormalizationFields>> normalizationFields_ {};
    shared_ptr<string> normalizationSchemaDescription_ {};
    // This parameter is required.
    shared_ptr<string> normalizationSchemaId_ {};
    // This parameter is required.
    shared_ptr<string> normalizationSchemaName_ {};
    // This parameter is required.
    shared_ptr<string> normalizationSchemaType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
