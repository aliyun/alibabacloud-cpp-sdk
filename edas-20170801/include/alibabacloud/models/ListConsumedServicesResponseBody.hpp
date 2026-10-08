// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODY_HPP_
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
  class ListConsumedServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumedServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConsumedServicesList, consumedServicesList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumedServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConsumedServicesList, consumedServicesList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConsumedServicesResponseBody() = default ;
    ListConsumedServicesResponseBody(const ListConsumedServicesResponseBody &) = default ;
    ListConsumedServicesResponseBody(ListConsumedServicesResponseBody &&) = default ;
    ListConsumedServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumedServicesResponseBody() = default ;
    ListConsumedServicesResponseBody& operator=(const ListConsumedServicesResponseBody &) = default ;
    ListConsumedServicesResponseBody& operator=(ListConsumedServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumedServicesList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumedServicesList& obj) { 
        DARABONBA_PTR_TO_JSON(ListConsumedServices, listConsumedServices_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumedServicesList& obj) { 
        DARABONBA_PTR_FROM_JSON(ListConsumedServices, listConsumedServices_);
      };
      ConsumedServicesList() = default ;
      ConsumedServicesList(const ConsumedServicesList &) = default ;
      ConsumedServicesList(ConsumedServicesList &&) = default ;
      ConsumedServicesList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumedServicesList() = default ;
      ConsumedServicesList& operator=(const ConsumedServicesList &) = default ;
      ConsumedServicesList& operator=(ConsumedServicesList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListConsumedServices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListConsumedServices& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(DockerApplication, dockerApplication_);
          DARABONBA_PTR_TO_JSON(Group2Ip, group2Ip_);
          DARABONBA_PTR_TO_JSON(Groups, groups_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ListConsumedServices& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(DockerApplication, dockerApplication_);
          DARABONBA_PTR_FROM_JSON(Group2Ip, group2Ip_);
          DARABONBA_PTR_FROM_JSON(Groups, groups_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        ListConsumedServices() = default ;
        ListConsumedServices(const ListConsumedServices &) = default ;
        ListConsumedServices(ListConsumedServices &&) = default ;
        ListConsumedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListConsumedServices() = default ;
        ListConsumedServices& operator=(const ListConsumedServices &) = default ;
        ListConsumedServices& operator=(ListConsumedServices &&) = default ;
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
        inline ListConsumedServices& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // dockerApplication Field Functions 
        bool hasDockerApplication() const { return this->dockerApplication_ != nullptr;};
        void deleteDockerApplication() { this->dockerApplication_ = nullptr;};
        inline bool getDockerApplication() const { DARABONBA_PTR_GET_DEFAULT(dockerApplication_, false) };
        inline ListConsumedServices& setDockerApplication(bool dockerApplication) { DARABONBA_PTR_SET_VALUE(dockerApplication_, dockerApplication) };


        // group2Ip Field Functions 
        bool hasGroup2Ip() const { return this->group2Ip_ != nullptr;};
        void deleteGroup2Ip() { this->group2Ip_ = nullptr;};
        inline string getGroup2Ip() const { DARABONBA_PTR_GET_DEFAULT(group2Ip_, "") };
        inline ListConsumedServices& setGroup2Ip(string group2Ip) { DARABONBA_PTR_SET_VALUE(group2Ip_, group2Ip) };


        // groups Field Functions 
        bool hasGroups() const { return this->groups_ != nullptr;};
        void deleteGroups() { this->groups_ = nullptr;};
        inline const ListConsumedServices::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, ListConsumedServices::Groups) };
        inline ListConsumedServices::Groups getGroups() { DARABONBA_PTR_GET(groups_, ListConsumedServices::Groups) };
        inline ListConsumedServices& setGroups(const ListConsumedServices::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
        inline ListConsumedServices& setGroups(ListConsumedServices::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const ListConsumedServices::Ips & getIps() const { DARABONBA_PTR_GET_CONST(ips_, ListConsumedServices::Ips) };
        inline ListConsumedServices::Ips getIps() { DARABONBA_PTR_GET(ips_, ListConsumedServices::Ips) };
        inline ListConsumedServices& setIps(const ListConsumedServices::Ips & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline ListConsumedServices& setIps(ListConsumedServices::Ips && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ListConsumedServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ListConsumedServices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ListConsumedServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<bool> dockerApplication_ {};
        shared_ptr<string> group2Ip_ {};
        shared_ptr<ListConsumedServices::Groups> groups_ {};
        shared_ptr<ListConsumedServices::Ips> ips_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->listConsumedServices_ == nullptr; };
      // listConsumedServices Field Functions 
      bool hasListConsumedServices() const { return this->listConsumedServices_ != nullptr;};
      void deleteListConsumedServices() { this->listConsumedServices_ = nullptr;};
      inline const vector<ConsumedServicesList::ListConsumedServices> & getListConsumedServices() const { DARABONBA_PTR_GET_CONST(listConsumedServices_, vector<ConsumedServicesList::ListConsumedServices>) };
      inline vector<ConsumedServicesList::ListConsumedServices> getListConsumedServices() { DARABONBA_PTR_GET(listConsumedServices_, vector<ConsumedServicesList::ListConsumedServices>) };
      inline ConsumedServicesList& setListConsumedServices(const vector<ConsumedServicesList::ListConsumedServices> & listConsumedServices) { DARABONBA_PTR_SET_VALUE(listConsumedServices_, listConsumedServices) };
      inline ConsumedServicesList& setListConsumedServices(vector<ConsumedServicesList::ListConsumedServices> && listConsumedServices) { DARABONBA_PTR_SET_RVALUE(listConsumedServices_, listConsumedServices) };


    protected:
      shared_ptr<vector<ConsumedServicesList::ListConsumedServices>> listConsumedServices_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->consumedServicesList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListConsumedServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumedServicesList Field Functions 
    bool hasConsumedServicesList() const { return this->consumedServicesList_ != nullptr;};
    void deleteConsumedServicesList() { this->consumedServicesList_ = nullptr;};
    inline const ListConsumedServicesResponseBody::ConsumedServicesList & getConsumedServicesList() const { DARABONBA_PTR_GET_CONST(consumedServicesList_, ListConsumedServicesResponseBody::ConsumedServicesList) };
    inline ListConsumedServicesResponseBody::ConsumedServicesList getConsumedServicesList() { DARABONBA_PTR_GET(consumedServicesList_, ListConsumedServicesResponseBody::ConsumedServicesList) };
    inline ListConsumedServicesResponseBody& setConsumedServicesList(const ListConsumedServicesResponseBody::ConsumedServicesList & consumedServicesList) { DARABONBA_PTR_SET_VALUE(consumedServicesList_, consumedServicesList) };
    inline ListConsumedServicesResponseBody& setConsumedServicesList(ListConsumedServicesResponseBody::ConsumedServicesList && consumedServicesList) { DARABONBA_PTR_SET_RVALUE(consumedServicesList_, consumedServicesList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumedServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumedServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListConsumedServicesResponseBody::ConsumedServicesList> consumedServicesList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
