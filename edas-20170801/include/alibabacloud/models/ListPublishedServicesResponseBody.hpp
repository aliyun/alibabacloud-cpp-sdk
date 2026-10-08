// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PublishedServicesList, publishedServicesList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PublishedServicesList, publishedServicesList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishedServicesResponseBody() = default ;
    ListPublishedServicesResponseBody(const ListPublishedServicesResponseBody &) = default ;
    ListPublishedServicesResponseBody(ListPublishedServicesResponseBody &&) = default ;
    ListPublishedServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBody() = default ;
    ListPublishedServicesResponseBody& operator=(const ListPublishedServicesResponseBody &) = default ;
    ListPublishedServicesResponseBody& operator=(ListPublishedServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishedServicesList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishedServicesList& obj) { 
        DARABONBA_PTR_TO_JSON(ListPublishedServices, listPublishedServices_);
      };
      friend void from_json(const Darabonba::Json& j, PublishedServicesList& obj) { 
        DARABONBA_PTR_FROM_JSON(ListPublishedServices, listPublishedServices_);
      };
      PublishedServicesList() = default ;
      PublishedServicesList(const PublishedServicesList &) = default ;
      PublishedServicesList(PublishedServicesList &&) = default ;
      PublishedServicesList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishedServicesList() = default ;
      PublishedServicesList& operator=(const PublishedServicesList &) = default ;
      PublishedServicesList& operator=(PublishedServicesList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListPublishedServices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListPublishedServices& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(DockerApplication, dockerApplication_);
          DARABONBA_PTR_TO_JSON(Group2Ip, group2Ip_);
          DARABONBA_PTR_TO_JSON(Groups, groups_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ListPublishedServices& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(DockerApplication, dockerApplication_);
          DARABONBA_PTR_FROM_JSON(Group2Ip, group2Ip_);
          DARABONBA_PTR_FROM_JSON(Groups, groups_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        ListPublishedServices() = default ;
        ListPublishedServices(const ListPublishedServices &) = default ;
        ListPublishedServices(ListPublishedServices &&) = default ;
        ListPublishedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListPublishedServices() = default ;
        ListPublishedServices& operator=(const ListPublishedServices &) = default ;
        ListPublishedServices& operator=(ListPublishedServices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ips& obj) { 
            DARABONBA_PTR_TO_JSON(ip, ip_);
          };
          friend void from_json(const Darabonba::Json& j, Ips& obj) { 
            DARABONBA_PTR_FROM_JSON(ip, ip_);
          };
          Ips() = default ;
          Ips(const Ips &) = default ;
          Ips(Ips &&) = default ;
          Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ips() = default ;
          Ips& operator=(const Ips &) = default ;
          Ips& operator=(Ips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ip_ == nullptr; };
          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
          inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
          inline Ips& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
          inline Ips& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


        protected:
          shared_ptr<vector<string>> ip_ {};
        };

        class Groups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Groups& obj) { 
            DARABONBA_PTR_TO_JSON(group, group_);
          };
          friend void from_json(const Darabonba::Json& j, Groups& obj) { 
            DARABONBA_PTR_FROM_JSON(group, group_);
          };
          Groups() = default ;
          Groups(const Groups &) = default ;
          Groups(Groups &&) = default ;
          Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Groups() = default ;
          Groups& operator=(const Groups &) = default ;
          Groups& operator=(Groups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->group_ == nullptr; };
          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline const vector<string> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
          inline vector<string> getGroup() { DARABONBA_PTR_GET(group_, vector<string>) };
          inline Groups& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
          inline Groups& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


        protected:
          shared_ptr<vector<string>> group_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->dockerApplication_ == nullptr && this->group2Ip_ == nullptr && this->groups_ == nullptr && this->ips_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline ListPublishedServices& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // dockerApplication Field Functions 
        bool hasDockerApplication() const { return this->dockerApplication_ != nullptr;};
        void deleteDockerApplication() { this->dockerApplication_ = nullptr;};
        inline bool getDockerApplication() const { DARABONBA_PTR_GET_DEFAULT(dockerApplication_, false) };
        inline ListPublishedServices& setDockerApplication(bool dockerApplication) { DARABONBA_PTR_SET_VALUE(dockerApplication_, dockerApplication) };


        // group2Ip Field Functions 
        bool hasGroup2Ip() const { return this->group2Ip_ != nullptr;};
        void deleteGroup2Ip() { this->group2Ip_ = nullptr;};
        inline string getGroup2Ip() const { DARABONBA_PTR_GET_DEFAULT(group2Ip_, "") };
        inline ListPublishedServices& setGroup2Ip(string group2Ip) { DARABONBA_PTR_SET_VALUE(group2Ip_, group2Ip) };


        // groups Field Functions 
        bool hasGroups() const { return this->groups_ != nullptr;};
        void deleteGroups() { this->groups_ = nullptr;};
        inline const ListPublishedServices::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, ListPublishedServices::Groups) };
        inline ListPublishedServices::Groups getGroups() { DARABONBA_PTR_GET(groups_, ListPublishedServices::Groups) };
        inline ListPublishedServices& setGroups(const ListPublishedServices::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
        inline ListPublishedServices& setGroups(ListPublishedServices::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const ListPublishedServices::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, ListPublishedServices::Ips) };
        inline ListPublishedServices::Ips getIps() { DARABONBA_PTR_GET(ips_, ListPublishedServices::Ips) };
        inline ListPublishedServices& setIps(const ListPublishedServices::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline ListPublishedServices& setIps(ListPublishedServices::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ListPublishedServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ListPublishedServices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ListPublishedServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<bool> dockerApplication_ {};
        shared_ptr<string> group2Ip_ {};
        shared_ptr<ListPublishedServices::Groups> groups_ {};
        shared_ptr<ListPublishedServices::Ips> ips_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->listPublishedServices_ == nullptr; };
      // listPublishedServices Field Functions 
      bool hasListPublishedServices() const { return this->listPublishedServices_ != nullptr;};
      void deleteListPublishedServices() { this->listPublishedServices_ = nullptr;};
      inline const vector<PublishedServicesList::ListPublishedServices> & getListPublishedServices() const { DARABONBA_PTR_GET_CONST(listPublishedServices_, vector<PublishedServicesList::ListPublishedServices>) };
      inline vector<PublishedServicesList::ListPublishedServices> getListPublishedServices() { DARABONBA_PTR_GET(listPublishedServices_, vector<PublishedServicesList::ListPublishedServices>) };
      inline PublishedServicesList& setListPublishedServices(const vector<PublishedServicesList::ListPublishedServices> & listPublishedServices) { DARABONBA_PTR_SET_VALUE(listPublishedServices_, listPublishedServices) };
      inline PublishedServicesList& setListPublishedServices(vector<PublishedServicesList::ListPublishedServices> && listPublishedServices) { DARABONBA_PTR_SET_RVALUE(listPublishedServices_, listPublishedServices) };


    protected:
      shared_ptr<vector<PublishedServicesList::ListPublishedServices>> listPublishedServices_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->publishedServicesList_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPublishedServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPublishedServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publishedServicesList Field Functions 
    bool hasPublishedServicesList() const { return this->publishedServicesList_ != nullptr;};
    void deletePublishedServicesList() { this->publishedServicesList_ = nullptr;};
    inline const ListPublishedServicesResponseBody::PublishedServicesList & getPublishedServicesList() const { DARABONBA_PTR_GET_CONST(publishedServicesList_, ListPublishedServicesResponseBody::PublishedServicesList) };
    inline ListPublishedServicesResponseBody::PublishedServicesList getPublishedServicesList() { DARABONBA_PTR_GET(publishedServicesList_, ListPublishedServicesResponseBody::PublishedServicesList) };
    inline ListPublishedServicesResponseBody& setPublishedServicesList(const ListPublishedServicesResponseBody::PublishedServicesList & publishedServicesList) { DARABONBA_PTR_SET_VALUE(publishedServicesList_, publishedServicesList) };
    inline ListPublishedServicesResponseBody& setPublishedServicesList(ListPublishedServicesResponseBody::PublishedServicesList && publishedServicesList) { DARABONBA_PTR_SET_RVALUE(publishedServicesList_, publishedServicesList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    shared_ptr<ListPublishedServicesResponseBody::PublishedServicesList> publishedServicesList_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
