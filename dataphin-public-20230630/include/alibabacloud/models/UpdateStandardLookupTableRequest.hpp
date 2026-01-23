// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTANDARDLOOKUPTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTANDARDLOOKUPTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateStandardLookupTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStandardLookupTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStandardLookupTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateStandardLookupTableRequest() = default ;
    UpdateStandardLookupTableRequest(const UpdateStandardLookupTableRequest &) = default ;
    UpdateStandardLookupTableRequest(UpdateStandardLookupTableRequest &&) = default ;
    UpdateStandardLookupTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStandardLookupTableRequest() = default ;
    UpdateStandardLookupTableRequest& operator=(const UpdateStandardLookupTableRequest &) = default ;
    UpdateStandardLookupTableRequest& operator=(UpdateStandardLookupTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LookupTableValueList, lookupTableValueList_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LookupTableValueList, lookupTableValueList_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LookupTableValueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LookupTableValueList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnglishName, englishName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, LookupTableValueList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnglishName, englishName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        LookupTableValueList() = default ;
        LookupTableValueList(const LookupTableValueList &) = default ;
        LookupTableValueList(LookupTableValueList &&) = default ;
        LookupTableValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LookupTableValueList() = default ;
        LookupTableValueList& operator=(const LookupTableValueList &) = default ;
        LookupTableValueList& operator=(LookupTableValueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->englishName_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LookupTableValueList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // englishName Field Functions 
        bool hasEnglishName() const { return this->englishName_ != nullptr;};
        void deleteEnglishName() { this->englishName_ = nullptr;};
        inline string getEnglishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
        inline LookupTableValueList& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LookupTableValueList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline LookupTableValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> englishName_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      class DirectoryReference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectoryReference& obj) { 
          DARABONBA_PTR_TO_JSON(Directory, directory_);
        };
        friend void from_json(const Darabonba::Json& j, DirectoryReference& obj) { 
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
        };
        DirectoryReference() = default ;
        DirectoryReference(const DirectoryReference &) = default ;
        DirectoryReference(DirectoryReference &&) = default ;
        DirectoryReference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectoryReference() = default ;
        DirectoryReference& operator=(const DirectoryReference &) = default ;
        DirectoryReference& operator=(DirectoryReference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directory_ == nullptr; };
        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline DirectoryReference& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      protected:
        // This parameter is required.
        shared_ptr<string> directory_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->directoryReference_ == nullptr && this->id_ == nullptr && this->lookupTableValueList_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UpdateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryReference Field Functions 
      bool hasDirectoryReference() const { return this->directoryReference_ != nullptr;};
      void deleteDirectoryReference() { this->directoryReference_ = nullptr;};
      inline const UpdateCommand::DirectoryReference & getDirectoryReference() const { DARABONBA_PTR_GET_CONST(directoryReference_, UpdateCommand::DirectoryReference) };
      inline UpdateCommand::DirectoryReference getDirectoryReference() { DARABONBA_PTR_GET(directoryReference_, UpdateCommand::DirectoryReference) };
      inline UpdateCommand& setDirectoryReference(const UpdateCommand::DirectoryReference & directoryReference) { DARABONBA_PTR_SET_VALUE(directoryReference_, directoryReference) };
      inline UpdateCommand& setDirectoryReference(UpdateCommand::DirectoryReference && directoryReference) { DARABONBA_PTR_SET_RVALUE(directoryReference_, directoryReference) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lookupTableValueList Field Functions 
      bool hasLookupTableValueList() const { return this->lookupTableValueList_ != nullptr;};
      void deleteLookupTableValueList() { this->lookupTableValueList_ = nullptr;};
      inline const vector<UpdateCommand::LookupTableValueList> & getLookupTableValueList() const { DARABONBA_PTR_GET_CONST(lookupTableValueList_, vector<UpdateCommand::LookupTableValueList>) };
      inline vector<UpdateCommand::LookupTableValueList> getLookupTableValueList() { DARABONBA_PTR_GET(lookupTableValueList_, vector<UpdateCommand::LookupTableValueList>) };
      inline UpdateCommand& setLookupTableValueList(const vector<UpdateCommand::LookupTableValueList> & lookupTableValueList) { DARABONBA_PTR_SET_VALUE(lookupTableValueList_, lookupTableValueList) };
      inline UpdateCommand& setLookupTableValueList(vector<UpdateCommand::LookupTableValueList> && lookupTableValueList) { DARABONBA_PTR_SET_RVALUE(lookupTableValueList_, lookupTableValueList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline UpdateCommand& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<string> description_ {};
      shared_ptr<UpdateCommand::DirectoryReference> directoryReference_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<UpdateCommand::LookupTableValueList>> lookupTableValueList_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateStandardLookupTableRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateStandardLookupTableRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateStandardLookupTableRequest::UpdateCommand) };
    inline UpdateStandardLookupTableRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateStandardLookupTableRequest::UpdateCommand) };
    inline UpdateStandardLookupTableRequest& setUpdateCommand(const UpdateStandardLookupTableRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateStandardLookupTableRequest& setUpdateCommand(UpdateStandardLookupTableRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateStandardLookupTableRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
