// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODY_HPP_
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
  class GetNormalizationSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationSchema, normalizationSchema_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationSchema, normalizationSchema_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNormalizationSchemaResponseBody() = default ;
    GetNormalizationSchemaResponseBody(const GetNormalizationSchemaResponseBody &) = default ;
    GetNormalizationSchemaResponseBody(GetNormalizationSchemaResponseBody &&) = default ;
    GetNormalizationSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationSchemaResponseBody() = default ;
    GetNormalizationSchemaResponseBody& operator=(const GetNormalizationSchemaResponseBody &) = default ;
    GetNormalizationSchemaResponseBody& operator=(GetNormalizationSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationSchema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationSchema& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_TO_JSON(NormalizationFields, normalizationFields_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaFrom, normalizationSchemaFrom_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaName, normalizationSchemaName_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaReferences, normalizationSchemaReferences_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
        DARABONBA_PTR_TO_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_TO_JSON(TargetStoreView, targetStoreView_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationSchema& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_FROM_JSON(NormalizationFields, normalizationFields_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaFrom, normalizationSchemaFrom_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaName, normalizationSchemaName_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaReferences, normalizationSchemaReferences_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
        DARABONBA_PTR_FROM_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_FROM_JSON(TargetStoreView, targetStoreView_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      NormalizationSchema() = default ;
      NormalizationSchema(const NormalizationSchema &) = default ;
      NormalizationSchema(NormalizationSchema &&) = default ;
      NormalizationSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationSchema() = default ;
      NormalizationSchema& operator=(const NormalizationSchema &) = default ;
      NormalizationSchema& operator=(NormalizationSchema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NormalizationSchemaReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationSchemaReferences& obj) { 
          DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationSchemaReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
        };
        NormalizationSchemaReferences() = default ;
        NormalizationSchemaReferences(const NormalizationSchemaReferences &) = default ;
        NormalizationSchemaReferences(NormalizationSchemaReferences &&) = default ;
        NormalizationSchemaReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationSchemaReferences() = default ;
        NormalizationSchemaReferences& operator=(const NormalizationSchemaReferences &) = default ;
        NormalizationSchemaReferences& operator=(NormalizationSchemaReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->normalizationRuleId_ == nullptr; };
        // normalizationRuleId Field Functions 
        bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
        void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
        inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
        inline NormalizationSchemaReferences& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      protected:
        shared_ptr<string> normalizationRuleId_ {};
      };

      class NormalizationFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationFields& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldJsonIndexAll, normalizationFieldJsonIndexAll_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldJsonKeys, normalizationFieldJsonKeys_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
          DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationFields& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldJsonIndexAll, normalizationFieldJsonIndexAll_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldJsonKeys, normalizationFieldJsonKeys_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
          DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, NormalizationFieldJsonKeys& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldTokenize, normalizationFieldTokenize_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationFieldDescription_ == nullptr && this->normalizationFieldExample_ == nullptr && this->normalizationFieldFrom_ == nullptr && this->normalizationFieldName_ == nullptr && this->normalizationFieldRequired_ == nullptr
        && this->normalizationFieldReserved_ == nullptr && this->normalizationFieldTokenize_ == nullptr && this->normalizationFieldType_ == nullptr && this->updateTime_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline NormalizationFieldJsonKeys& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


          // normalizationFieldReserved Field Functions 
          bool hasNormalizationFieldReserved() const { return this->normalizationFieldReserved_ != nullptr;};
          void deleteNormalizationFieldReserved() { this->normalizationFieldReserved_ = nullptr;};
          inline bool getNormalizationFieldReserved() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldReserved_, false) };
          inline NormalizationFieldJsonKeys& setNormalizationFieldReserved(bool normalizationFieldReserved) { DARABONBA_PTR_SET_VALUE(normalizationFieldReserved_, normalizationFieldReserved) };


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


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline NormalizationFieldJsonKeys& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> normalizationFieldDescription_ {};
          shared_ptr<string> normalizationFieldExample_ {};
          shared_ptr<string> normalizationFieldFrom_ {};
          shared_ptr<string> normalizationFieldName_ {};
          shared_ptr<bool> normalizationFieldRequired_ {};
          shared_ptr<bool> normalizationFieldReserved_ {};
          shared_ptr<bool> normalizationFieldTokenize_ {};
          shared_ptr<string> normalizationFieldType_ {};
          shared_ptr<int64_t> updateTime_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationFieldDescription_ == nullptr && this->normalizationFieldExample_ == nullptr && this->normalizationFieldFrom_ == nullptr && this->normalizationFieldJsonIndexAll_ == nullptr && this->normalizationFieldJsonKeys_ == nullptr
        && this->normalizationFieldName_ == nullptr && this->normalizationFieldRequired_ == nullptr && this->normalizationFieldRequirement_ == nullptr && this->normalizationFieldReserved_ == nullptr && this->normalizationFieldTokenize_ == nullptr
        && this->normalizationFieldType_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline NormalizationFields& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


        // normalizationFieldRequirement Field Functions 
        bool hasNormalizationFieldRequirement() const { return this->normalizationFieldRequirement_ != nullptr;};
        void deleteNormalizationFieldRequirement() { this->normalizationFieldRequirement_ = nullptr;};
        inline bool getNormalizationFieldRequirement() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequirement_, false) };
        inline NormalizationFields& setNormalizationFieldRequirement(bool normalizationFieldRequirement) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequirement_, normalizationFieldRequirement) };


        // normalizationFieldReserved Field Functions 
        bool hasNormalizationFieldReserved() const { return this->normalizationFieldReserved_ != nullptr;};
        void deleteNormalizationFieldReserved() { this->normalizationFieldReserved_ = nullptr;};
        inline bool getNormalizationFieldReserved() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldReserved_, false) };
        inline NormalizationFields& setNormalizationFieldReserved(bool normalizationFieldReserved) { DARABONBA_PTR_SET_VALUE(normalizationFieldReserved_, normalizationFieldReserved) };


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


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline NormalizationFields& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> normalizationFieldDescription_ {};
        shared_ptr<string> normalizationFieldExample_ {};
        shared_ptr<string> normalizationFieldFrom_ {};
        shared_ptr<bool> normalizationFieldJsonIndexAll_ {};
        shared_ptr<vector<NormalizationFields::NormalizationFieldJsonKeys>> normalizationFieldJsonKeys_ {};
        shared_ptr<string> normalizationFieldName_ {};
        shared_ptr<bool> normalizationFieldRequired_ {};
        shared_ptr<bool> normalizationFieldRequirement_ {};
        shared_ptr<bool> normalizationFieldReserved_ {};
        shared_ptr<bool> normalizationFieldTokenize_ {};
        shared_ptr<string> normalizationFieldType_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationCategoryId_ == nullptr && this->normalizationFields_ == nullptr && this->normalizationSchemaDescription_ == nullptr && this->normalizationSchemaFrom_ == nullptr && this->normalizationSchemaId_ == nullptr
        && this->normalizationSchemaName_ == nullptr && this->normalizationSchemaReferences_ == nullptr && this->normalizationSchemaType_ == nullptr && this->targetLogStore_ == nullptr && this->targetStoreView_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationSchema& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationSchema& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationFields Field Functions 
      bool hasNormalizationFields() const { return this->normalizationFields_ != nullptr;};
      void deleteNormalizationFields() { this->normalizationFields_ = nullptr;};
      inline const vector<NormalizationSchema::NormalizationFields> & getNormalizationFields() const { DARABONBA_PTR_GET_CONST(normalizationFields_, vector<NormalizationSchema::NormalizationFields>) };
      inline vector<NormalizationSchema::NormalizationFields> getNormalizationFields() { DARABONBA_PTR_GET(normalizationFields_, vector<NormalizationSchema::NormalizationFields>) };
      inline NormalizationSchema& setNormalizationFields(const vector<NormalizationSchema::NormalizationFields> & normalizationFields) { DARABONBA_PTR_SET_VALUE(normalizationFields_, normalizationFields) };
      inline NormalizationSchema& setNormalizationFields(vector<NormalizationSchema::NormalizationFields> && normalizationFields) { DARABONBA_PTR_SET_RVALUE(normalizationFields_, normalizationFields) };


      // normalizationSchemaDescription Field Functions 
      bool hasNormalizationSchemaDescription() const { return this->normalizationSchemaDescription_ != nullptr;};
      void deleteNormalizationSchemaDescription() { this->normalizationSchemaDescription_ = nullptr;};
      inline string getNormalizationSchemaDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaDescription_, "") };
      inline NormalizationSchema& setNormalizationSchemaDescription(string normalizationSchemaDescription) { DARABONBA_PTR_SET_VALUE(normalizationSchemaDescription_, normalizationSchemaDescription) };


      // normalizationSchemaFrom Field Functions 
      bool hasNormalizationSchemaFrom() const { return this->normalizationSchemaFrom_ != nullptr;};
      void deleteNormalizationSchemaFrom() { this->normalizationSchemaFrom_ = nullptr;};
      inline string getNormalizationSchemaFrom() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaFrom_, "") };
      inline NormalizationSchema& setNormalizationSchemaFrom(string normalizationSchemaFrom) { DARABONBA_PTR_SET_VALUE(normalizationSchemaFrom_, normalizationSchemaFrom) };


      // normalizationSchemaId Field Functions 
      bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
      void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
      inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
      inline NormalizationSchema& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      // normalizationSchemaName Field Functions 
      bool hasNormalizationSchemaName() const { return this->normalizationSchemaName_ != nullptr;};
      void deleteNormalizationSchemaName() { this->normalizationSchemaName_ = nullptr;};
      inline string getNormalizationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaName_, "") };
      inline NormalizationSchema& setNormalizationSchemaName(string normalizationSchemaName) { DARABONBA_PTR_SET_VALUE(normalizationSchemaName_, normalizationSchemaName) };


      // normalizationSchemaReferences Field Functions 
      bool hasNormalizationSchemaReferences() const { return this->normalizationSchemaReferences_ != nullptr;};
      void deleteNormalizationSchemaReferences() { this->normalizationSchemaReferences_ = nullptr;};
      inline const vector<NormalizationSchema::NormalizationSchemaReferences> & getNormalizationSchemaReferences() const { DARABONBA_PTR_GET_CONST(normalizationSchemaReferences_, vector<NormalizationSchema::NormalizationSchemaReferences>) };
      inline vector<NormalizationSchema::NormalizationSchemaReferences> getNormalizationSchemaReferences() { DARABONBA_PTR_GET(normalizationSchemaReferences_, vector<NormalizationSchema::NormalizationSchemaReferences>) };
      inline NormalizationSchema& setNormalizationSchemaReferences(const vector<NormalizationSchema::NormalizationSchemaReferences> & normalizationSchemaReferences) { DARABONBA_PTR_SET_VALUE(normalizationSchemaReferences_, normalizationSchemaReferences) };
      inline NormalizationSchema& setNormalizationSchemaReferences(vector<NormalizationSchema::NormalizationSchemaReferences> && normalizationSchemaReferences) { DARABONBA_PTR_SET_RVALUE(normalizationSchemaReferences_, normalizationSchemaReferences) };


      // normalizationSchemaType Field Functions 
      bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
      void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
      inline string getNormalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
      inline NormalizationSchema& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


      // targetLogStore Field Functions 
      bool hasTargetLogStore() const { return this->targetLogStore_ != nullptr;};
      void deleteTargetLogStore() { this->targetLogStore_ = nullptr;};
      inline string getTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(targetLogStore_, "") };
      inline NormalizationSchema& setTargetLogStore(string targetLogStore) { DARABONBA_PTR_SET_VALUE(targetLogStore_, targetLogStore) };


      // targetStoreView Field Functions 
      bool hasTargetStoreView() const { return this->targetStoreView_ != nullptr;};
      void deleteTargetStoreView() { this->targetStoreView_ = nullptr;};
      inline string getTargetStoreView() const { DARABONBA_PTR_GET_DEFAULT(targetStoreView_, "") };
      inline NormalizationSchema& setTargetStoreView(string targetStoreView) { DARABONBA_PTR_SET_VALUE(targetStoreView_, targetStoreView) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationSchema& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<vector<NormalizationSchema::NormalizationFields>> normalizationFields_ {};
      shared_ptr<string> normalizationSchemaDescription_ {};
      shared_ptr<string> normalizationSchemaFrom_ {};
      shared_ptr<string> normalizationSchemaId_ {};
      shared_ptr<string> normalizationSchemaName_ {};
      shared_ptr<vector<NormalizationSchema::NormalizationSchemaReferences>> normalizationSchemaReferences_ {};
      shared_ptr<string> normalizationSchemaType_ {};
      shared_ptr<string> targetLogStore_ {};
      shared_ptr<string> targetStoreView_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->normalizationSchema_ == nullptr
        && this->requestId_ == nullptr; };
    // normalizationSchema Field Functions 
    bool hasNormalizationSchema() const { return this->normalizationSchema_ != nullptr;};
    void deleteNormalizationSchema() { this->normalizationSchema_ = nullptr;};
    inline const GetNormalizationSchemaResponseBody::NormalizationSchema & getNormalizationSchema() const { DARABONBA_PTR_GET_CONST(normalizationSchema_, GetNormalizationSchemaResponseBody::NormalizationSchema) };
    inline GetNormalizationSchemaResponseBody::NormalizationSchema getNormalizationSchema() { DARABONBA_PTR_GET(normalizationSchema_, GetNormalizationSchemaResponseBody::NormalizationSchema) };
    inline GetNormalizationSchemaResponseBody& setNormalizationSchema(const GetNormalizationSchemaResponseBody::NormalizationSchema & normalizationSchema) { DARABONBA_PTR_SET_VALUE(normalizationSchema_, normalizationSchema) };
    inline GetNormalizationSchemaResponseBody& setNormalizationSchema(GetNormalizationSchemaResponseBody::NormalizationSchema && normalizationSchema) { DARABONBA_PTR_SET_RVALUE(normalizationSchema_, normalizationSchema) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNormalizationSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNormalizationSchemaResponseBody::NormalizationSchema> normalizationSchema_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
