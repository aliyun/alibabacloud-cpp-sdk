// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAgentsResponseBody() = default ;
    ListAgentsResponseBody(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody(ListAgentsResponseBody &&) = default ;
    ListAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBody() = default ;
    ListAgentsResponseBody& operator=(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody& operator=(ListAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(support_arch, supportArch_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(support_arch, supportArch_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
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
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(created_at, createdAt_);
          DARABONBA_PTR_TO_JSON(install_script, installScript_);
          DARABONBA_PTR_TO_JSON(uninstall_script, uninstallScript_);
          DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
          DARABONBA_PTR_TO_JSON(upgrade_script, upgradeScript_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
          DARABONBA_PTR_FROM_JSON(install_script, installScript_);
          DARABONBA_PTR_FROM_JSON(uninstall_script, uninstallScript_);
          DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
          DARABONBA_PTR_FROM_JSON(upgrade_script, upgradeScript_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->installScript_ == nullptr && this->uninstallScript_ == nullptr && this->updatedAt_ == nullptr && this->upgradeScript_ == nullptr && this->version_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Versions& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // installScript Field Functions 
        bool hasInstallScript() const { return this->installScript_ != nullptr;};
        void deleteInstallScript() { this->installScript_ = nullptr;};
        inline string getInstallScript() const { DARABONBA_PTR_GET_DEFAULT(installScript_, "") };
        inline Versions& setInstallScript(string installScript) { DARABONBA_PTR_SET_VALUE(installScript_, installScript) };


        // uninstallScript Field Functions 
        bool hasUninstallScript() const { return this->uninstallScript_ != nullptr;};
        void deleteUninstallScript() { this->uninstallScript_ = nullptr;};
        inline string getUninstallScript() const { DARABONBA_PTR_GET_DEFAULT(uninstallScript_, "") };
        inline Versions& setUninstallScript(string uninstallScript) { DARABONBA_PTR_SET_VALUE(uninstallScript_, uninstallScript) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Versions& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // upgradeScript Field Functions 
        bool hasUpgradeScript() const { return this->upgradeScript_ != nullptr;};
        void deleteUpgradeScript() { this->upgradeScript_ = nullptr;};
        inline string getUpgradeScript() const { DARABONBA_PTR_GET_DEFAULT(upgradeScript_, "") };
        inline Versions& setUpgradeScript(string upgradeScript) { DARABONBA_PTR_SET_VALUE(upgradeScript_, upgradeScript) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> installScript_ {};
        shared_ptr<string> uninstallScript_ {};
        shared_ptr<string> updatedAt_ {};
        shared_ptr<string> upgradeScript_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->supportArch_ == nullptr && this->type_ == nullptr
        && this->updatedAt_ == nullptr && this->versions_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // supportArch Field Functions 
      bool hasSupportArch() const { return this->supportArch_ != nullptr;};
      void deleteSupportArch() { this->supportArch_ = nullptr;};
      inline string getSupportArch() const { DARABONBA_PTR_GET_DEFAULT(supportArch_, "") };
      inline Data& setSupportArch(string supportArch) { DARABONBA_PTR_SET_VALUE(supportArch_, supportArch) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<Data::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Data::Versions>) };
      inline vector<Data::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Data::Versions>) };
      inline Data& setVersions(const vector<Data::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Data& setVersions(vector<Data::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> supportArch_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<vector<Data::Versions>> versions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentsResponseBody::Data>) };
    inline vector<ListAgentsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentsResponseBody::Data>) };
    inline ListAgentsResponseBody& setData(const vector<ListAgentsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentsResponseBody& setData(vector<ListAgentsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAgentsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAgentsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
