// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODY_HPP_
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
  class SearchFormDatasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    SearchFormDatasResponseBody() = default ;
    SearchFormDatasResponseBody(const SearchFormDatasResponseBody &) = default ;
    SearchFormDatasResponseBody(SearchFormDatasResponseBody &&) = default ;
    SearchFormDatasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasResponseBody() = default ;
    SearchFormDatasResponseBody& operator=(const SearchFormDatasResponseBody &) = default ;
    SearchFormDatasResponseBody& operator=(SearchFormDatasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTimeGMT, createdTimeGMT_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_ANY_TO_JSON(FormData, formData_);
        DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_TO_JSON(ModelUuid, modelUuid_);
        DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_TO_JSON(ModifierUserId, modifierUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Originator, originator_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTimeGMT, createdTimeGMT_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_ANY_FROM_JSON(FormData, formData_);
        DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
        DARABONBA_PTR_FROM_JSON(ModelUuid, modelUuid_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
        DARABONBA_PTR_FROM_JSON(ModifierUserId, modifierUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Originator, originator_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Originator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Originator& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, Originator& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        class UserName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserName& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, UserName& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          UserName() = default ;
          UserName(const UserName &) = default ;
          UserName(UserName &&) = default ;
          UserName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserName() = default ;
          UserName& operator=(const UserName &) = default ;
          UserName& operator=(UserName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline UserName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline UserName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline UserName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Originator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline const Originator::UserName & getUserName() const { DARABONBA_PTR_GET_CONST(userName_, Originator::UserName) };
        inline Originator::UserName getUserName() { DARABONBA_PTR_GET(userName_, Originator::UserName) };
        inline Originator& setUserName(const Originator::UserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
        inline Originator& setUserName(Originator::UserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


      protected:
        shared_ptr<string> userId_ {};
        shared_ptr<Originator::UserName> userName_ {};
      };

      class ModifyUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModifyUser& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ModifyUser& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        class UserName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserName& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, UserName& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          UserName() = default ;
          UserName(const UserName &) = default ;
          UserName(UserName &&) = default ;
          UserName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserName() = default ;
          UserName& operator=(const UserName &) = default ;
          UserName& operator=(UserName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline UserName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline UserName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline UserName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ModifyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline const ModifyUser::UserName & getUserName() const { DARABONBA_PTR_GET_CONST(userName_, ModifyUser::UserName) };
        inline ModifyUser::UserName getUserName() { DARABONBA_PTR_GET(userName_, ModifyUser::UserName) };
        inline ModifyUser& setUserName(const ModifyUser::UserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
        inline ModifyUser& setUserName(ModifyUser::UserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


      protected:
        shared_ptr<string> userId_ {};
        shared_ptr<ModifyUser::UserName> userName_ {};
      };

      virtual bool empty() const override { return this->createdTimeGMT_ == nullptr
        && this->creatorUserId_ == nullptr && this->dataId_ == nullptr && this->formData_ == nullptr && this->formInstanceId_ == nullptr && this->formUuid_ == nullptr
        && this->instanceValue_ == nullptr && this->modelUuid_ == nullptr && this->modifiedTimeGMT_ == nullptr && this->modifierUserId_ == nullptr && this->modifyUser_ == nullptr
        && this->originator_ == nullptr && this->sequence_ == nullptr && this->serialNo_ == nullptr && this->title_ == nullptr && this->version_ == nullptr; };
      // createdTimeGMT Field Functions 
      bool hasCreatedTimeGMT() const { return this->createdTimeGMT_ != nullptr;};
      void deleteCreatedTimeGMT() { this->createdTimeGMT_ = nullptr;};
      inline string getCreatedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createdTimeGMT_, "") };
      inline Data& setCreatedTimeGMT(string createdTimeGMT) { DARABONBA_PTR_SET_VALUE(createdTimeGMT_, createdTimeGMT) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline string getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
      inline Data& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline int64_t getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0L) };
      inline Data& setDataId(int64_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // formData Field Functions 
      bool hasFormData() const { return this->formData_ != nullptr;};
      void deleteFormData() { this->formData_ = nullptr;};
      inline       const Darabonba::Json & getFormData() const { DARABONBA_GET(formData_) };
      Darabonba::Json & getFormData() { DARABONBA_GET(formData_) };
      inline Data& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
      inline Data& setFormData(Darabonba::Json && formData) { DARABONBA_SET_RVALUE(formData_, formData) };


      // formInstanceId Field Functions 
      bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
      void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
      inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
      inline Data& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Data& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // instanceValue Field Functions 
      bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
      void deleteInstanceValue() { this->instanceValue_ = nullptr;};
      inline string getInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
      inline Data& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


      // modelUuid Field Functions 
      bool hasModelUuid() const { return this->modelUuid_ != nullptr;};
      void deleteModelUuid() { this->modelUuid_ = nullptr;};
      inline string getModelUuid() const { DARABONBA_PTR_GET_DEFAULT(modelUuid_, "") };
      inline Data& setModelUuid(string modelUuid) { DARABONBA_PTR_SET_VALUE(modelUuid_, modelUuid) };


      // modifiedTimeGMT Field Functions 
      bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
      void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
      inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
      inline Data& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


      // modifierUserId Field Functions 
      bool hasModifierUserId() const { return this->modifierUserId_ != nullptr;};
      void deleteModifierUserId() { this->modifierUserId_ = nullptr;};
      inline string getModifierUserId() const { DARABONBA_PTR_GET_DEFAULT(modifierUserId_, "") };
      inline Data& setModifierUserId(string modifierUserId) { DARABONBA_PTR_SET_VALUE(modifierUserId_, modifierUserId) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline const Data::ModifyUser & getModifyUser() const { DARABONBA_PTR_GET_CONST(modifyUser_, Data::ModifyUser) };
      inline Data::ModifyUser getModifyUser() { DARABONBA_PTR_GET(modifyUser_, Data::ModifyUser) };
      inline Data& setModifyUser(const Data::ModifyUser & modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };
      inline Data& setModifyUser(Data::ModifyUser && modifyUser) { DARABONBA_PTR_SET_RVALUE(modifyUser_, modifyUser) };


      // originator Field Functions 
      bool hasOriginator() const { return this->originator_ != nullptr;};
      void deleteOriginator() { this->originator_ = nullptr;};
      inline const Data::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, Data::Originator) };
      inline Data::Originator getOriginator() { DARABONBA_PTR_GET(originator_, Data::Originator) };
      inline Data& setOriginator(const Data::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
      inline Data& setOriginator(Data::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
      inline Data& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // serialNo Field Functions 
      bool hasSerialNo() const { return this->serialNo_ != nullptr;};
      void deleteSerialNo() { this->serialNo_ = nullptr;};
      inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
      inline Data& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createdTimeGMT_ {};
      shared_ptr<string> creatorUserId_ {};
      shared_ptr<int64_t> dataId_ {};
      Darabonba::Json formData_ {};
      shared_ptr<string> formInstanceId_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> instanceValue_ {};
      shared_ptr<string> modelUuid_ {};
      shared_ptr<string> modifiedTimeGMT_ {};
      shared_ptr<string> modifierUserId_ {};
      shared_ptr<Data::ModifyUser> modifyUser_ {};
      shared_ptr<Data::Originator> originator_ {};
      shared_ptr<string> sequence_ {};
      shared_ptr<string> serialNo_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline SearchFormDatasResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SearchFormDatasResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SearchFormDatasResponseBody::Data>) };
    inline vector<SearchFormDatasResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SearchFormDatasResponseBody::Data>) };
    inline SearchFormDatasResponseBody& setData(const vector<SearchFormDatasResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchFormDatasResponseBody& setData(vector<SearchFormDatasResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchFormDatasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchFormDatasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline SearchFormDatasResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline SearchFormDatasResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<SearchFormDatasResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
