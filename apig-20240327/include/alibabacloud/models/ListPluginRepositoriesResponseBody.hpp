// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginRepositoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPluginRepositoriesResponseBody() = default ;
    ListPluginRepositoriesResponseBody(const ListPluginRepositoriesResponseBody &) = default ;
    ListPluginRepositoriesResponseBody(ListPluginRepositoriesResponseBody &&) = default ;
    ListPluginRepositoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginRepositoriesResponseBody() = default ;
    ListPluginRepositoriesResponseBody& operator=(const ListPluginRepositoriesResponseBody &) = default ;
    ListPluginRepositoriesResponseBody& operator=(ListPluginRepositoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(organizationName, organizationName_);
        DARABONBA_PTR_TO_JSON(repositories, repositories_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(organizationName, organizationName_);
        DARABONBA_PTR_FROM_JSON(repositories, repositories_);
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
      class Repositories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Repositories& obj) { 
          DARABONBA_PTR_TO_JSON(repositoryId, repositoryId_);
          DARABONBA_PTR_TO_JSON(repositoryName, repositoryName_);
        };
        friend void from_json(const Darabonba::Json& j, Repositories& obj) { 
          DARABONBA_PTR_FROM_JSON(repositoryId, repositoryId_);
          DARABONBA_PTR_FROM_JSON(repositoryName, repositoryName_);
        };
        Repositories() = default ;
        Repositories(const Repositories &) = default ;
        Repositories(Repositories &&) = default ;
        Repositories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Repositories() = default ;
        Repositories& operator=(const Repositories &) = default ;
        Repositories& operator=(Repositories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->repositoryId_ == nullptr
        && this->repositoryName_ == nullptr; };
        // repositoryId Field Functions 
        bool hasRepositoryId() const { return this->repositoryId_ != nullptr;};
        void deleteRepositoryId() { this->repositoryId_ = nullptr;};
        inline string getRepositoryId() const { DARABONBA_PTR_GET_DEFAULT(repositoryId_, "") };
        inline Repositories& setRepositoryId(string repositoryId) { DARABONBA_PTR_SET_VALUE(repositoryId_, repositoryId) };


        // repositoryName Field Functions 
        bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
        void deleteRepositoryName() { this->repositoryName_ = nullptr;};
        inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
        inline Repositories& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


      protected:
        shared_ptr<string> repositoryId_ {};
        shared_ptr<string> repositoryName_ {};
      };

      virtual bool empty() const override { return this->organizationId_ == nullptr
        && this->organizationName_ == nullptr && this->repositories_ == nullptr; };
      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline Data& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // organizationName Field Functions 
      bool hasOrganizationName() const { return this->organizationName_ != nullptr;};
      void deleteOrganizationName() { this->organizationName_ = nullptr;};
      inline string getOrganizationName() const { DARABONBA_PTR_GET_DEFAULT(organizationName_, "") };
      inline Data& setOrganizationName(string organizationName) { DARABONBA_PTR_SET_VALUE(organizationName_, organizationName) };


      // repositories Field Functions 
      bool hasRepositories() const { return this->repositories_ != nullptr;};
      void deleteRepositories() { this->repositories_ = nullptr;};
      inline const vector<Data::Repositories> & getRepositories() const { DARABONBA_PTR_GET_CONST(repositories_, vector<Data::Repositories>) };
      inline vector<Data::Repositories> getRepositories() { DARABONBA_PTR_GET(repositories_, vector<Data::Repositories>) };
      inline Data& setRepositories(const vector<Data::Repositories> & repositories) { DARABONBA_PTR_SET_VALUE(repositories_, repositories) };
      inline Data& setRepositories(vector<Data::Repositories> && repositories) { DARABONBA_PTR_SET_RVALUE(repositories_, repositories) };


    protected:
      shared_ptr<string> organizationId_ {};
      shared_ptr<string> organizationName_ {};
      shared_ptr<vector<Data::Repositories>> repositories_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPluginRepositoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListPluginRepositoriesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListPluginRepositoriesResponseBody::Data>) };
    inline vector<ListPluginRepositoriesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListPluginRepositoriesResponseBody::Data>) };
    inline ListPluginRepositoriesResponseBody& setData(const vector<ListPluginRepositoriesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPluginRepositoriesResponseBody& setData(vector<ListPluginRepositoriesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPluginRepositoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListPluginRepositoriesResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
