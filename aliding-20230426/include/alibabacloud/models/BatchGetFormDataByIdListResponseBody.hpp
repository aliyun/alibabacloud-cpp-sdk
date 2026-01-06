// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetFormDataByIdListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    BatchGetFormDataByIdListResponseBody() = default ;
    BatchGetFormDataByIdListResponseBody(const BatchGetFormDataByIdListResponseBody &) = default ;
    BatchGetFormDataByIdListResponseBody(BatchGetFormDataByIdListResponseBody &&) = default ;
    BatchGetFormDataByIdListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListResponseBody() = default ;
    BatchGetFormDataByIdListResponseBody& operator=(const BatchGetFormDataByIdListResponseBody &) = default ;
    BatchGetFormDataByIdListResponseBody& operator=(BatchGetFormDataByIdListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_ANY_TO_JSON(FormData, formData_);
        DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Originator, originator_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_ANY_FROM_JSON(FormData, formData_);
        DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Originator, originator_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Originator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Originator& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Originator& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Originator() = default ;
        Originator(const Originator &) = default ;
        Originator(Originator &&) = default ;
        Originator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Originator() = default ;
        Originator& operator=(const Originator &) = default ;
        Originator& operator=(Originator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Name : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Name& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
          };
          friend void from_json(const Darabonba::Json& j, Name& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
          };
          Name() = default ;
          Name(const Name &) = default ;
          Name(Name &&) = default ;
          Name(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Name() = default ;
          Name& operator=(const Name &) = default ;
          Name& operator=(Name &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline Name& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline Name& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline const Originator::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, Originator::Name) };
        inline Originator::Name getName() { DARABONBA_PTR_GET(name_, Originator::Name) };
        inline Originator& setName(const Originator::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
        inline Originator& setName(Originator::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Originator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<Originator::Name> name_ {};
        shared_ptr<string> userId_ {};
      };

      class ModifyUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModifyUser& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ModifyUser& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ModifyUser() = default ;
        ModifyUser(const ModifyUser &) = default ;
        ModifyUser(ModifyUser &&) = default ;
        ModifyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModifyUser() = default ;
        ModifyUser& operator=(const ModifyUser &) = default ;
        ModifyUser& operator=(ModifyUser &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Name : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Name& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
          };
          friend void from_json(const Darabonba::Json& j, Name& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
          };
          Name() = default ;
          Name(const Name &) = default ;
          Name(Name &&) = default ;
          Name(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Name() = default ;
          Name& operator=(const Name &) = default ;
          Name& operator=(Name &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline Name& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline Name& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline const ModifyUser::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, ModifyUser::Name) };
        inline ModifyUser::Name getName() { DARABONBA_PTR_GET(name_, ModifyUser::Name) };
        inline ModifyUser& setName(const ModifyUser::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
        inline ModifyUser& setName(ModifyUser::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ModifyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<ModifyUser::Name> name_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->createTimeGMT_ == nullptr
        && this->creatorUserId_ == nullptr && this->formData_ == nullptr && this->formInstanceId_ == nullptr && this->formUuid_ == nullptr && this->id_ == nullptr
        && this->instanceValue_ == nullptr && this->modifiedTimeGMT_ == nullptr && this->modifier_ == nullptr && this->modifyUser_ == nullptr && this->originator_ == nullptr
        && this->sequence_ == nullptr && this->serialNumber_ == nullptr && this->title_ == nullptr && this->version_ == nullptr; };
      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Result& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline string getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
      inline Result& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // formData Field Functions 
      bool hasFormData() const { return this->formData_ != nullptr;};
      void deleteFormData() { this->formData_ = nullptr;};
      inline       const Darabonba::Json & getFormData() const { DARABONBA_GET(formData_) };
      Darabonba::Json & getFormData() { DARABONBA_GET(formData_) };
      inline Result& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
      inline Result& setFormData(Darabonba::Json && formData) { DARABONBA_SET_RVALUE(formData_, formData) };


      // formInstanceId Field Functions 
      bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
      void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
      inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
      inline Result& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Result& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceValue Field Functions 
      bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
      void deleteInstanceValue() { this->instanceValue_ = nullptr;};
      inline string getInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
      inline Result& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


      // modifiedTimeGMT Field Functions 
      bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
      void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
      inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
      inline Result& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline Result& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline const Result::ModifyUser & getModifyUser() const { DARABONBA_PTR_GET_CONST(modifyUser_, Result::ModifyUser) };
      inline Result::ModifyUser getModifyUser() { DARABONBA_PTR_GET(modifyUser_, Result::ModifyUser) };
      inline Result& setModifyUser(const Result::ModifyUser & modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };
      inline Result& setModifyUser(Result::ModifyUser && modifyUser) { DARABONBA_PTR_SET_RVALUE(modifyUser_, modifyUser) };


      // originator Field Functions 
      bool hasOriginator() const { return this->originator_ != nullptr;};
      void deleteOriginator() { this->originator_ = nullptr;};
      inline const Result::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, Result::Originator) };
      inline Result::Originator getOriginator() { DARABONBA_PTR_GET(originator_, Result::Originator) };
      inline Result& setOriginator(const Result::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
      inline Result& setOriginator(Result::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
      inline Result& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Result& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Result& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<string> creatorUserId_ {};
      Darabonba::Json formData_ {};
      shared_ptr<string> formInstanceId_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> instanceValue_ {};
      shared_ptr<string> modifiedTimeGMT_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<Result::ModifyUser> modifyUser_ {};
      shared_ptr<Result::Originator> originator_ {};
      shared_ptr<string> sequence_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetFormDataByIdListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<BatchGetFormDataByIdListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<BatchGetFormDataByIdListResponseBody::Result>) };
    inline vector<BatchGetFormDataByIdListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<BatchGetFormDataByIdListResponseBody::Result>) };
    inline BatchGetFormDataByIdListResponseBody& setResult(const vector<BatchGetFormDataByIdListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline BatchGetFormDataByIdListResponseBody& setResult(vector<BatchGetFormDataByIdListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline BatchGetFormDataByIdListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline BatchGetFormDataByIdListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchGetFormDataByIdListResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
