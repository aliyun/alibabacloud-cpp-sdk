// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasPermissionGroupInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasPermissionGroupInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasPermissionGroupInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSaasPermissionGroupInfosResponseBody() = default ;
    ListSaasPermissionGroupInfosResponseBody(const ListSaasPermissionGroupInfosResponseBody &) = default ;
    ListSaasPermissionGroupInfosResponseBody(ListSaasPermissionGroupInfosResponseBody &&) = default ;
    ListSaasPermissionGroupInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasPermissionGroupInfosResponseBody() = default ;
    ListSaasPermissionGroupInfosResponseBody& operator=(const ListSaasPermissionGroupInfosResponseBody &) = default ;
    ListSaasPermissionGroupInfosResponseBody& operator=(ListSaasPermissionGroupInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PgInfos, pgInfos_);
        DARABONBA_PTR_TO_JSON(SaasCode, saasCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PgInfos, pgInfos_);
        DARABONBA_PTR_FROM_JSON(SaasCode, saasCode_);
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
      class PgInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PgInfos& obj) { 
          DARABONBA_PTR_TO_JSON(PgCode, pgCode_);
          DARABONBA_PTR_TO_JSON(PgEnName, pgEnName_);
          DARABONBA_PTR_TO_JSON(PgName, pgName_);
        };
        friend void from_json(const Darabonba::Json& j, PgInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(PgCode, pgCode_);
          DARABONBA_PTR_FROM_JSON(PgEnName, pgEnName_);
          DARABONBA_PTR_FROM_JSON(PgName, pgName_);
        };
        PgInfos() = default ;
        PgInfos(const PgInfos &) = default ;
        PgInfos(PgInfos &&) = default ;
        PgInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PgInfos() = default ;
        PgInfos& operator=(const PgInfos &) = default ;
        PgInfos& operator=(PgInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pgCode_ == nullptr
        && this->pgEnName_ == nullptr && this->pgName_ == nullptr; };
        // pgCode Field Functions 
        bool hasPgCode() const { return this->pgCode_ != nullptr;};
        void deletePgCode() { this->pgCode_ = nullptr;};
        inline string getPgCode() const { DARABONBA_PTR_GET_DEFAULT(pgCode_, "") };
        inline PgInfos& setPgCode(string pgCode) { DARABONBA_PTR_SET_VALUE(pgCode_, pgCode) };


        // pgEnName Field Functions 
        bool hasPgEnName() const { return this->pgEnName_ != nullptr;};
        void deletePgEnName() { this->pgEnName_ = nullptr;};
        inline string getPgEnName() const { DARABONBA_PTR_GET_DEFAULT(pgEnName_, "") };
        inline PgInfos& setPgEnName(string pgEnName) { DARABONBA_PTR_SET_VALUE(pgEnName_, pgEnName) };


        // pgName Field Functions 
        bool hasPgName() const { return this->pgName_ != nullptr;};
        void deletePgName() { this->pgName_ = nullptr;};
        inline string getPgName() const { DARABONBA_PTR_GET_DEFAULT(pgName_, "") };
        inline PgInfos& setPgName(string pgName) { DARABONBA_PTR_SET_VALUE(pgName_, pgName) };


      protected:
        // The unique permission group code.
        shared_ptr<string> pgCode_ {};
        // The English name of the permission group.
        shared_ptr<string> pgEnName_ {};
        // The name of the permission group.
        shared_ptr<string> pgName_ {};
      };

      virtual bool empty() const override { return this->enName_ == nullptr
        && this->name_ == nullptr && this->pgInfos_ == nullptr && this->saasCode_ == nullptr; };
      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline Data& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pgInfos Field Functions 
      bool hasPgInfos() const { return this->pgInfos_ != nullptr;};
      void deletePgInfos() { this->pgInfos_ = nullptr;};
      inline const vector<Data::PgInfos> & getPgInfos() const { DARABONBA_PTR_GET_CONST(pgInfos_, vector<Data::PgInfos>) };
      inline vector<Data::PgInfos> getPgInfos() { DARABONBA_PTR_GET(pgInfos_, vector<Data::PgInfos>) };
      inline Data& setPgInfos(const vector<Data::PgInfos> & pgInfos) { DARABONBA_PTR_SET_VALUE(pgInfos_, pgInfos) };
      inline Data& setPgInfos(vector<Data::PgInfos> && pgInfos) { DARABONBA_PTR_SET_RVALUE(pgInfos_, pgInfos) };


      // saasCode Field Functions 
      bool hasSaasCode() const { return this->saasCode_ != nullptr;};
      void deleteSaasCode() { this->saasCode_ = nullptr;};
      inline string getSaasCode() const { DARABONBA_PTR_GET_DEFAULT(saasCode_, "") };
      inline Data& setSaasCode(string saasCode) { DARABONBA_PTR_SET_VALUE(saasCode_, saasCode) };


    protected:
      // The name of the page in English.
      shared_ptr<string> enName_ {};
      // The name of the page.
      shared_ptr<string> name_ {};
      // The SaaS permission groups.
      shared_ptr<vector<Data::PgInfos>> pgInfos_ {};
      // The unique code for the SaaS page.
      shared_ptr<string> saasCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSaasPermissionGroupInfosResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSaasPermissionGroupInfosResponseBody::Data>) };
    inline vector<ListSaasPermissionGroupInfosResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSaasPermissionGroupInfosResponseBody::Data>) };
    inline ListSaasPermissionGroupInfosResponseBody& setData(const vector<ListSaasPermissionGroupInfosResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSaasPermissionGroupInfosResponseBody& setData(vector<ListSaasPermissionGroupInfosResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSaasPermissionGroupInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permission details for integrated SaaS pages.
    shared_ptr<vector<ListSaasPermissionGroupInfosResponseBody::Data>> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
