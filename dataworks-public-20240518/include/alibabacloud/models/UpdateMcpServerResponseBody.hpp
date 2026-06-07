// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateMcpServerResponseBody() = default ;
    UpdateMcpServerResponseBody(const UpdateMcpServerResponseBody &) = default ;
    UpdateMcpServerResponseBody(UpdateMcpServerResponseBody &&) = default ;
    UpdateMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerResponseBody() = default ;
    UpdateMcpServerResponseBody& operator=(const UpdateMcpServerResponseBody &) = default ;
    UpdateMcpServerResponseBody& operator=(UpdateMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServer& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, McpServer& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      McpServer() = default ;
      McpServer(const McpServer &) = default ;
      McpServer(McpServer &&) = default ;
      McpServer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServer() = default ;
      McpServer& operator=(const McpServer &) = default ;
      McpServer& operator=(McpServer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline McpServer& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline McpServer& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline McpServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->mcpServer_ == nullptr
        && this->requestId_ == nullptr; };
    // mcpServer Field Functions 
    bool hasMcpServer() const { return this->mcpServer_ != nullptr;};
    void deleteMcpServer() { this->mcpServer_ = nullptr;};
    inline const UpdateMcpServerResponseBody::McpServer & getMcpServer() const { DARABONBA_PTR_GET_CONST(mcpServer_, UpdateMcpServerResponseBody::McpServer) };
    inline UpdateMcpServerResponseBody::McpServer getMcpServer() { DARABONBA_PTR_GET(mcpServer_, UpdateMcpServerResponseBody::McpServer) };
    inline UpdateMcpServerResponseBody& setMcpServer(const UpdateMcpServerResponseBody::McpServer & mcpServer) { DARABONBA_PTR_SET_VALUE(mcpServer_, mcpServer) };
    inline UpdateMcpServerResponseBody& setMcpServer(UpdateMcpServerResponseBody::McpServer && mcpServer) { DARABONBA_PTR_SET_RVALUE(mcpServer_, mcpServer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateMcpServerResponseBody::McpServer> mcpServer_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
