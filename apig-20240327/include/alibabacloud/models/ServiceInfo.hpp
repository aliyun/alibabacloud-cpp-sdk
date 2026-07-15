// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEINFO_HPP_
#define ALIBABACLOUD_MODELS_SERVICEINFO_HPP_
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
  class ServiceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(expressType, expressType_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(paiWorkspaceId, paiWorkspaceId_);
      DARABONBA_PTR_TO_JSON(paiWorkspaceName, paiWorkspaceName_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(expressType, expressType_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(paiWorkspaceId, paiWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(paiWorkspaceName, paiWorkspaceName_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ServiceInfo() = default ;
    ServiceInfo(const ServiceInfo &) = default ;
    ServiceInfo(ServiceInfo &&) = default ;
    ServiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceInfo() = default ;
    ServiceInfo& operator=(const ServiceInfo &) = default ;
    ServiceInfo& operator=(ServiceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The label key.
        shared_ptr<string> key_ {};
        // The label value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->labels_ == nullptr
        && this->name_ == nullptr; };
      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Versions::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Versions::Labels>) };
      inline vector<Versions::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Versions::Labels>) };
      inline Versions& setLabels(const vector<Versions::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Versions& setLabels(vector<Versions::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Versions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The list of version labels.
      shared_ptr<vector<Versions::Labels>> labels_ {};
      // The version name.
      shared_ptr<string> name_ {};
    };

    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      Ports() = default ;
      Ports(const Ports &) = default ;
      Ports(Ports &&) = default ;
      Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ports() = default ;
      Ports& operator=(const Ports &) = default ;
      Ports& operator=(Ports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Ports& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Ports& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Ports& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The port name.
      shared_ptr<string> name_ {};
      // The port number.
      shared_ptr<int32_t> port_ {};
      // The port protocol.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->expressType_ == nullptr
        && this->groupName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->paiWorkspaceId_ == nullptr && this->paiWorkspaceName_ == nullptr
        && this->ports_ == nullptr && this->qualifier_ == nullptr && this->serviceId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr
        && this->versions_ == nullptr; };
    // expressType Field Functions 
    bool hasExpressType() const { return this->expressType_ != nullptr;};
    void deleteExpressType() { this->expressType_ = nullptr;};
    inline string getExpressType() const { DARABONBA_PTR_GET_DEFAULT(expressType_, "") };
    inline ServiceInfo& setExpressType(string expressType) { DARABONBA_PTR_SET_VALUE(expressType_, expressType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ServiceInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ServiceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ServiceInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paiWorkspaceId Field Functions 
    bool hasPaiWorkspaceId() const { return this->paiWorkspaceId_ != nullptr;};
    void deletePaiWorkspaceId() { this->paiWorkspaceId_ = nullptr;};
    inline string getPaiWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(paiWorkspaceId_, "") };
    inline ServiceInfo& setPaiWorkspaceId(string paiWorkspaceId) { DARABONBA_PTR_SET_VALUE(paiWorkspaceId_, paiWorkspaceId) };


    // paiWorkspaceName Field Functions 
    bool hasPaiWorkspaceName() const { return this->paiWorkspaceName_ != nullptr;};
    void deletePaiWorkspaceName() { this->paiWorkspaceName_ = nullptr;};
    inline string getPaiWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(paiWorkspaceName_, "") };
    inline ServiceInfo& setPaiWorkspaceName(string paiWorkspaceName) { DARABONBA_PTR_SET_VALUE(paiWorkspaceName_, paiWorkspaceName) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<ServiceInfo::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<ServiceInfo::Ports>) };
    inline vector<ServiceInfo::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<ServiceInfo::Ports>) };
    inline ServiceInfo& setPorts(const vector<ServiceInfo::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline ServiceInfo& setPorts(vector<ServiceInfo::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ServiceInfo& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ServiceInfo& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ServiceInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ServiceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ServiceInfo::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ServiceInfo::Versions>) };
    inline vector<ServiceInfo::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<ServiceInfo::Versions>) };
    inline ServiceInfo& setVersions(const vector<ServiceInfo::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ServiceInfo& setVersions(vector<ServiceInfo::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The service routing type.
    shared_ptr<string> expressType_ {};
    // The service group name.
    shared_ptr<string> groupName_ {};
    // The service name.
    shared_ptr<string> name_ {};
    // The service namespace.
    shared_ptr<string> namespace_ {};
    // The PAI workspace ID.
    shared_ptr<string> paiWorkspaceId_ {};
    // The PAI workspace name.
    shared_ptr<string> paiWorkspaceName_ {};
    // The list of service ports.
    shared_ptr<vector<ServiceInfo::Ports>> ports_ {};
    // The service version qualifier.
    shared_ptr<string> qualifier_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The service source type.
    shared_ptr<string> sourceType_ {};
    // The service status.
    shared_ptr<string> status_ {};
    // The list of service versions.
    shared_ptr<vector<ServiceInfo::Versions>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
