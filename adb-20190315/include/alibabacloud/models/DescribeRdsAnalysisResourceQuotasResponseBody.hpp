// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeCategoryList, DBNodeCategoryList_);
      DARABONBA_PTR_TO_JSON(DBNodeClassList, DBNodeClassList_);
      DARABONBA_PTR_TO_JSON(DBNodeStorageList, DBNodeStorageList_);
      DARABONBA_PTR_TO_JSON(EngineVersionList, engineVersionList_);
      DARABONBA_PTR_TO_JSON(ModeList, modeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeCategoryList, DBNodeCategoryList_);
      DARABONBA_PTR_FROM_JSON(DBNodeClassList, DBNodeClassList_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorageList, DBNodeStorageList_);
      DARABONBA_PTR_FROM_JSON(EngineVersionList, engineVersionList_);
      DARABONBA_PTR_FROM_JSON(ModeList, modeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBody() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(const DescribeRdsAnalysisResourceQuotasResponseBody &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(DescribeRdsAnalysisResourceQuotasResponseBody &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBody() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody& operator=(const DescribeRdsAnalysisResourceQuotasResponseBody &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody& operator=(DescribeRdsAnalysisResourceQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, StorageTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      StorageTypeList() = default ;
      StorageTypeList(const StorageTypeList &) = default ;
      StorageTypeList(StorageTypeList &&) = default ;
      StorageTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageTypeList() = default ;
      StorageTypeList& operator=(const StorageTypeList &) = default ;
      StorageTypeList& operator=(StorageTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageType& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, StorageType& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        StorageType() = default ;
        StorageType(const StorageType &) = default ;
        StorageType(StorageType &&) = default ;
        StorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageType() = default ;
        StorageType& operator=(const StorageType &) = default ;
        StorageType& operator=(StorageType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline StorageType& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline StorageType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->storageType_ == nullptr; };
      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline const vector<StorageTypeList::StorageType> & getStorageType() const { DARABONBA_PTR_GET_CONST(storageType_, vector<StorageTypeList::StorageType>) };
      inline vector<StorageTypeList::StorageType> getStorageType() { DARABONBA_PTR_GET(storageType_, vector<StorageTypeList::StorageType>) };
      inline StorageTypeList& setStorageType(const vector<StorageTypeList::StorageType> & storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };
      inline StorageTypeList& setStorageType(vector<StorageTypeList::StorageType> && storageType) { DARABONBA_PTR_SET_RVALUE(storageType_, storageType) };


    protected:
      shared_ptr<vector<StorageTypeList::StorageType>> storageType_ {};
    };

    class ModeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModeList& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, ModeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
      };
      ModeList() = default ;
      ModeList(const ModeList &) = default ;
      ModeList(ModeList &&) = default ;
      ModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModeList() = default ;
      ModeList& operator=(const ModeList &) = default ;
      ModeList& operator=(ModeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Mode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Mode& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Mode& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Mode() = default ;
        Mode(const Mode &) = default ;
        Mode(Mode &&) = default ;
        Mode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Mode() = default ;
        Mode& operator=(const Mode &) = default ;
        Mode& operator=(Mode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Mode& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Mode& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->mode_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline const vector<ModeList::Mode> & getMode() const { DARABONBA_PTR_GET_CONST(mode_, vector<ModeList::Mode>) };
      inline vector<ModeList::Mode> getMode() { DARABONBA_PTR_GET(mode_, vector<ModeList::Mode>) };
      inline ModeList& setMode(const vector<ModeList::Mode> & mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };
      inline ModeList& setMode(vector<ModeList::Mode> && mode) { DARABONBA_PTR_SET_RVALUE(mode_, mode) };


    protected:
      shared_ptr<vector<ModeList::Mode>> mode_ {};
    };

    class EngineVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      };
      friend void from_json(const Darabonba::Json& j, EngineVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      };
      EngineVersionList() = default ;
      EngineVersionList(const EngineVersionList &) = default ;
      EngineVersionList(EngineVersionList &&) = default ;
      EngineVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineVersionList() = default ;
      EngineVersionList& operator=(const EngineVersionList &) = default ;
      EngineVersionList& operator=(EngineVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EngineVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EngineVersion& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, EngineVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        EngineVersion() = default ;
        EngineVersion(const EngineVersion &) = default ;
        EngineVersion(EngineVersion &&) = default ;
        EngineVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EngineVersion() = default ;
        EngineVersion& operator=(const EngineVersion &) = default ;
        EngineVersion& operator=(EngineVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline EngineVersion& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline EngineVersion& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->engineVersion_ == nullptr; };
      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline const vector<EngineVersionList::EngineVersion> & getEngineVersion() const { DARABONBA_PTR_GET_CONST(engineVersion_, vector<EngineVersionList::EngineVersion>) };
      inline vector<EngineVersionList::EngineVersion> getEngineVersion() { DARABONBA_PTR_GET(engineVersion_, vector<EngineVersionList::EngineVersion>) };
      inline EngineVersionList& setEngineVersion(const vector<EngineVersionList::EngineVersion> & engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };
      inline EngineVersionList& setEngineVersion(vector<EngineVersionList::EngineVersion> && engineVersion) { DARABONBA_PTR_SET_RVALUE(engineVersion_, engineVersion) };


    protected:
      shared_ptr<vector<EngineVersionList::EngineVersion>> engineVersion_ {};
    };

    class DBNodeStorageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeStorageList& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeStorageList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      };
      DBNodeStorageList() = default ;
      DBNodeStorageList(const DBNodeStorageList &) = default ;
      DBNodeStorageList(DBNodeStorageList &&) = default ;
      DBNodeStorageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeStorageList() = default ;
      DBNodeStorageList& operator=(const DBNodeStorageList &) = default ;
      DBNodeStorageList& operator=(DBNodeStorageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBNodeStorage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodeStorage& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodeStorage& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DBNodeStorage() = default ;
        DBNodeStorage(const DBNodeStorage &) = default ;
        DBNodeStorage(DBNodeStorage &&) = default ;
        DBNodeStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBNodeStorage() = default ;
        DBNodeStorage& operator=(const DBNodeStorage &) = default ;
        DBNodeStorage& operator=(DBNodeStorage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DBNodeStorage& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DBNodeStorage& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->DBNodeStorage_ == nullptr; };
      // DBNodeStorage Field Functions 
      bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
      void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
      inline const vector<DBNodeStorageList::DBNodeStorage> & getDBNodeStorage() const { DARABONBA_PTR_GET_CONST(DBNodeStorage_, vector<DBNodeStorageList::DBNodeStorage>) };
      inline vector<DBNodeStorageList::DBNodeStorage> getDBNodeStorage() { DARABONBA_PTR_GET(DBNodeStorage_, vector<DBNodeStorageList::DBNodeStorage>) };
      inline DBNodeStorageList& setDBNodeStorage(const vector<DBNodeStorageList::DBNodeStorage> & dBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, dBNodeStorage) };
      inline DBNodeStorageList& setDBNodeStorage(vector<DBNodeStorageList::DBNodeStorage> && dBNodeStorage) { DARABONBA_PTR_SET_RVALUE(DBNodeStorage_, dBNodeStorage) };


    protected:
      shared_ptr<vector<DBNodeStorageList::DBNodeStorage>> DBNodeStorage_ {};
    };

    class DBNodeClassList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeClassList& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeClassList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      };
      DBNodeClassList() = default ;
      DBNodeClassList(const DBNodeClassList &) = default ;
      DBNodeClassList(DBNodeClassList &&) = default ;
      DBNodeClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeClassList() = default ;
      DBNodeClassList& operator=(const DBNodeClassList &) = default ;
      DBNodeClassList& operator=(DBNodeClassList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBNodeClass : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodeClass& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodeClass& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DBNodeClass() = default ;
        DBNodeClass(const DBNodeClass &) = default ;
        DBNodeClass(DBNodeClass &&) = default ;
        DBNodeClass(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBNodeClass() = default ;
        DBNodeClass& operator=(const DBNodeClass &) = default ;
        DBNodeClass& operator=(DBNodeClass &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DBNodeClass& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DBNodeClass& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->DBNodeClass_ == nullptr; };
      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline const vector<DBNodeClassList::DBNodeClass> & getDBNodeClass() const { DARABONBA_PTR_GET_CONST(DBNodeClass_, vector<DBNodeClassList::DBNodeClass>) };
      inline vector<DBNodeClassList::DBNodeClass> getDBNodeClass() { DARABONBA_PTR_GET(DBNodeClass_, vector<DBNodeClassList::DBNodeClass>) };
      inline DBNodeClassList& setDBNodeClass(const vector<DBNodeClassList::DBNodeClass> & dBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, dBNodeClass) };
      inline DBNodeClassList& setDBNodeClass(vector<DBNodeClassList::DBNodeClass> && dBNodeClass) { DARABONBA_PTR_SET_RVALUE(DBNodeClass_, dBNodeClass) };


    protected:
      shared_ptr<vector<DBNodeClassList::DBNodeClass>> DBNodeClass_ {};
    };

    class DBNodeCategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeCategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeCategory, DBNodeCategory_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeCategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeCategory, DBNodeCategory_);
      };
      DBNodeCategoryList() = default ;
      DBNodeCategoryList(const DBNodeCategoryList &) = default ;
      DBNodeCategoryList(DBNodeCategoryList &&) = default ;
      DBNodeCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeCategoryList() = default ;
      DBNodeCategoryList& operator=(const DBNodeCategoryList &) = default ;
      DBNodeCategoryList& operator=(DBNodeCategoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBNodeCategory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodeCategory& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodeCategory& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DBNodeCategory() = default ;
        DBNodeCategory(const DBNodeCategory &) = default ;
        DBNodeCategory(DBNodeCategory &&) = default ;
        DBNodeCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBNodeCategory() = default ;
        DBNodeCategory& operator=(const DBNodeCategory &) = default ;
        DBNodeCategory& operator=(DBNodeCategory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DBNodeCategory& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DBNodeCategory& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->DBNodeCategory_ == nullptr; };
      // DBNodeCategory Field Functions 
      bool hasDBNodeCategory() const { return this->DBNodeCategory_ != nullptr;};
      void deleteDBNodeCategory() { this->DBNodeCategory_ = nullptr;};
      inline const vector<DBNodeCategoryList::DBNodeCategory> & getDBNodeCategory() const { DARABONBA_PTR_GET_CONST(DBNodeCategory_, vector<DBNodeCategoryList::DBNodeCategory>) };
      inline vector<DBNodeCategoryList::DBNodeCategory> getDBNodeCategory() { DARABONBA_PTR_GET(DBNodeCategory_, vector<DBNodeCategoryList::DBNodeCategory>) };
      inline DBNodeCategoryList& setDBNodeCategory(const vector<DBNodeCategoryList::DBNodeCategory> & dBNodeCategory) { DARABONBA_PTR_SET_VALUE(DBNodeCategory_, dBNodeCategory) };
      inline DBNodeCategoryList& setDBNodeCategory(vector<DBNodeCategoryList::DBNodeCategory> && dBNodeCategory) { DARABONBA_PTR_SET_RVALUE(DBNodeCategory_, dBNodeCategory) };


    protected:
      shared_ptr<vector<DBNodeCategoryList::DBNodeCategory>> DBNodeCategory_ {};
    };

    virtual bool empty() const override { return this->DBNodeCategoryList_ == nullptr
        && this->DBNodeClassList_ == nullptr && this->DBNodeStorageList_ == nullptr && this->engineVersionList_ == nullptr && this->modeList_ == nullptr && this->requestId_ == nullptr
        && this->storageTypeList_ == nullptr; };
    // DBNodeCategoryList Field Functions 
    bool hasDBNodeCategoryList() const { return this->DBNodeCategoryList_ != nullptr;};
    void deleteDBNodeCategoryList() { this->DBNodeCategoryList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList & getDBNodeCategoryList() const { DARABONBA_PTR_GET_CONST(DBNodeCategoryList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList getDBNodeCategoryList() { DARABONBA_PTR_GET(DBNodeCategoryList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeCategoryList(const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList & dBNodeCategoryList) { DARABONBA_PTR_SET_VALUE(DBNodeCategoryList_, dBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeCategoryList(DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList && dBNodeCategoryList) { DARABONBA_PTR_SET_RVALUE(DBNodeCategoryList_, dBNodeCategoryList) };


    // DBNodeClassList Field Functions 
    bool hasDBNodeClassList() const { return this->DBNodeClassList_ != nullptr;};
    void deleteDBNodeClassList() { this->DBNodeClassList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList & getDBNodeClassList() const { DARABONBA_PTR_GET_CONST(DBNodeClassList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList getDBNodeClassList() { DARABONBA_PTR_GET(DBNodeClassList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeClassList(const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList & dBNodeClassList) { DARABONBA_PTR_SET_VALUE(DBNodeClassList_, dBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeClassList(DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList && dBNodeClassList) { DARABONBA_PTR_SET_RVALUE(DBNodeClassList_, dBNodeClassList) };


    // DBNodeStorageList Field Functions 
    bool hasDBNodeStorageList() const { return this->DBNodeStorageList_ != nullptr;};
    void deleteDBNodeStorageList() { this->DBNodeStorageList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList & getDBNodeStorageList() const { DARABONBA_PTR_GET_CONST(DBNodeStorageList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList getDBNodeStorageList() { DARABONBA_PTR_GET(DBNodeStorageList_, DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeStorageList(const DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList & dBNodeStorageList) { DARABONBA_PTR_SET_VALUE(DBNodeStorageList_, dBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeStorageList(DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList && dBNodeStorageList) { DARABONBA_PTR_SET_RVALUE(DBNodeStorageList_, dBNodeStorageList) };


    // engineVersionList Field Functions 
    bool hasEngineVersionList() const { return this->engineVersionList_ != nullptr;};
    void deleteEngineVersionList() { this->engineVersionList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList & getEngineVersionList() const { DARABONBA_PTR_GET_CONST(engineVersionList_, DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList getEngineVersionList() { DARABONBA_PTR_GET(engineVersionList_, DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setEngineVersionList(const DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList & engineVersionList) { DARABONBA_PTR_SET_VALUE(engineVersionList_, engineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setEngineVersionList(DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList && engineVersionList) { DARABONBA_PTR_SET_RVALUE(engineVersionList_, engineVersionList) };


    // modeList Field Functions 
    bool hasModeList() const { return this->modeList_ != nullptr;};
    void deleteModeList() { this->modeList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::ModeList & getModeList() const { DARABONBA_PTR_GET_CONST(modeList_, DescribeRdsAnalysisResourceQuotasResponseBody::ModeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::ModeList getModeList() { DARABONBA_PTR_GET(modeList_, DescribeRdsAnalysisResourceQuotasResponseBody::ModeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setModeList(const DescribeRdsAnalysisResourceQuotasResponseBody::ModeList & modeList) { DARABONBA_PTR_SET_VALUE(modeList_, modeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setModeList(DescribeRdsAnalysisResourceQuotasResponseBody::ModeList && modeList) { DARABONBA_PTR_SET_RVALUE(modeList_, modeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageTypeList Field Functions 
    bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
    void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList & getStorageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList getStorageTypeList() { DARABONBA_PTR_GET(storageTypeList_, DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setStorageTypeList(const DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setStorageTypeList(DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


  protected:
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeCategoryList> DBNodeCategoryList_ {};
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeClassList> DBNodeClassList_ {};
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::DBNodeStorageList> DBNodeStorageList_ {};
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::EngineVersionList> engineVersionList_ {};
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::ModeList> modeList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBody::StorageTypeList> storageTypeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
