// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCustomEndpointListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEndpointListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEndpointListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomEndpointListResponseBody() = default ;
    DescribeCustomEndpointListResponseBody(const DescribeCustomEndpointListResponseBody &) = default ;
    DescribeCustomEndpointListResponseBody(DescribeCustomEndpointListResponseBody &&) = default ;
    DescribeCustomEndpointListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEndpointListResponseBody() = default ;
    DescribeCustomEndpointListResponseBody& operator=(const DescribeCustomEndpointListResponseBody &) = default ;
    DescribeCustomEndpointListResponseBody& operator=(DescribeCustomEndpointListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanDeleteCount, canDeleteCount_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanDeleteCount, canDeleteCount_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
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
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(CnNames, cnNames_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeAutoEnter, nodeAutoEnter_);
          DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(CnNames, cnNames_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeAutoEnter, nodeAutoEnter_);
          DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnNames_ == nullptr
        && this->connectionString_ == nullptr && this->customEndpointId_ == nullptr && this->DBInstanceName_ == nullptr && this->name_ == nullptr && this->nodeAutoEnter_ == nullptr
        && this->nodeRole_ == nullptr && this->port_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // cnNames Field Functions 
        bool hasCnNames() const { return this->cnNames_ != nullptr;};
        void deleteCnNames() { this->cnNames_ = nullptr;};
        inline const vector<string> & getCnNames() const { DARABONBA_PTR_GET_CONST(cnNames_, vector<string>) };
        inline vector<string> getCnNames() { DARABONBA_PTR_GET(cnNames_, vector<string>) };
        inline Endpoints& setCnNames(const vector<string> & cnNames) { DARABONBA_PTR_SET_VALUE(cnNames_, cnNames) };
        inline Endpoints& setCnNames(vector<string> && cnNames) { DARABONBA_PTR_SET_RVALUE(cnNames_, cnNames) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline Endpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // customEndpointId Field Functions 
        bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
        void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
        inline string getCustomEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
        inline Endpoints& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline Endpoints& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeAutoEnter Field Functions 
        bool hasNodeAutoEnter() const { return this->nodeAutoEnter_ != nullptr;};
        void deleteNodeAutoEnter() { this->nodeAutoEnter_ = nullptr;};
        inline string getNodeAutoEnter() const { DARABONBA_PTR_GET_DEFAULT(nodeAutoEnter_, "") };
        inline Endpoints& setNodeAutoEnter(string nodeAutoEnter) { DARABONBA_PTR_SET_VALUE(nodeAutoEnter_, nodeAutoEnter) };


        // nodeRole Field Functions 
        bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
        void deleteNodeRole() { this->nodeRole_ = nullptr;};
        inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
        inline Endpoints& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Endpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Endpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Endpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // [\\"pxc-i-vb1sqa7llp\\",\\"pxc-i-bemprx50ad\\"]
        shared_ptr<vector<string>> cnNames_ {};
        shared_ptr<string> connectionString_ {};
        shared_ptr<string> customEndpointId_ {};
        shared_ptr<string> DBInstanceName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeAutoEnter_ {};
        shared_ptr<string> nodeRole_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->canDeleteCount_ == nullptr
        && this->endpoints_ == nullptr; };
      // canDeleteCount Field Functions 
      bool hasCanDeleteCount() const { return this->canDeleteCount_ != nullptr;};
      void deleteCanDeleteCount() { this->canDeleteCount_ = nullptr;};
      inline int32_t getCanDeleteCount() const { DARABONBA_PTR_GET_DEFAULT(canDeleteCount_, 0) };
      inline Data& setCanDeleteCount(int32_t canDeleteCount) { DARABONBA_PTR_SET_VALUE(canDeleteCount_, canDeleteCount) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Data::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Data::Endpoints>) };
      inline vector<Data::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Data::Endpoints>) };
      inline Data& setEndpoints(const vector<Data::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Data& setEndpoints(vector<Data::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    protected:
      shared_ptr<int32_t> canDeleteCount_ {};
      shared_ptr<vector<Data::Endpoints>> endpoints_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCustomEndpointListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCustomEndpointListResponseBody::Data) };
    inline DescribeCustomEndpointListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCustomEndpointListResponseBody::Data) };
    inline DescribeCustomEndpointListResponseBody& setData(const DescribeCustomEndpointListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustomEndpointListResponseBody& setData(DescribeCustomEndpointListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEndpointListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCustomEndpointListResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
