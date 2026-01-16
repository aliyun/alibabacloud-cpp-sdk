// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESHRINKNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESHRINKNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ValidateShrinkNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateShrinkNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateShrinkNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    ValidateShrinkNodesRequest() = default ;
    ValidateShrinkNodesRequest(const ValidateShrinkNodesRequest &) = default ;
    ValidateShrinkNodesRequest(ValidateShrinkNodesRequest &&) = default ;
    ValidateShrinkNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateShrinkNodesRequest() = default ;
    ValidateShrinkNodesRequest& operator=(const ValidateShrinkNodesRequest &) = default ;
    ValidateShrinkNodesRequest& operator=(ValidateShrinkNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(hostName, hostName_);
        DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(hostName, hostName_);
        DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->host_ == nullptr
        && this->hostName_ == nullptr && this->nodeType_ == nullptr && this->port_ == nullptr && this->zoneId_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Body& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Body& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Body& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Body& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Body& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> host_ {};
      shared_ptr<string> hostName_ {};
      shared_ptr<string> nodeType_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->count_ == nullptr && this->ignoreStatus_ == nullptr && this->nodeType_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<ValidateShrinkNodesRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<ValidateShrinkNodesRequest::Body>) };
    inline vector<ValidateShrinkNodesRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<ValidateShrinkNodesRequest::Body>) };
    inline ValidateShrinkNodesRequest& setBody(const vector<ValidateShrinkNodesRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateShrinkNodesRequest& setBody(vector<ValidateShrinkNodesRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ValidateShrinkNodesRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ignoreStatus Field Functions 
    bool hasIgnoreStatus() const { return this->ignoreStatus_ != nullptr;};
    void deleteIgnoreStatus() { this->ignoreStatus_ = nullptr;};
    inline bool getIgnoreStatus() const { DARABONBA_PTR_GET_DEFAULT(ignoreStatus_, false) };
    inline ValidateShrinkNodesRequest& setIgnoreStatus(bool ignoreStatus) { DARABONBA_PTR_SET_VALUE(ignoreStatus_, ignoreStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValidateShrinkNodesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    shared_ptr<vector<ValidateShrinkNodesRequest::Body>> body_ {};
    shared_ptr<int32_t> count_ {};
    // The ID of the request.
    shared_ptr<bool> ignoreStatus_ {};
    // Returned results:
    // 
    // *   true: can be scaled in
    // *   false: cannot be scaled in.
    // 
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
