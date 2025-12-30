// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUEST_HPP_
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
  class ReplaceProjectWhiteListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceProjectWhiteListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ReplaceCommand, replaceCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceProjectWhiteListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ReplaceCommand, replaceCommand_);
    };
    ReplaceProjectWhiteListsRequest() = default ;
    ReplaceProjectWhiteListsRequest(const ReplaceProjectWhiteListsRequest &) = default ;
    ReplaceProjectWhiteListsRequest(ReplaceProjectWhiteListsRequest &&) = default ;
    ReplaceProjectWhiteListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceProjectWhiteListsRequest() = default ;
    ReplaceProjectWhiteListsRequest& operator=(const ReplaceProjectWhiteListsRequest &) = default ;
    ReplaceProjectWhiteListsRequest& operator=(ReplaceProjectWhiteListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReplaceCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplaceCommand& obj) { 
        DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
      };
      friend void from_json(const Darabonba::Json& j, ReplaceCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
      };
      ReplaceCommand() = default ;
      ReplaceCommand(const ReplaceCommand &) = default ;
      ReplaceCommand(ReplaceCommand &&) = default ;
      ReplaceCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplaceCommand() = default ;
      ReplaceCommand& operator=(const ReplaceCommand &) = default ;
      ReplaceCommand& operator=(ReplaceCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteLists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteLists& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteLists& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        WhiteLists() = default ;
        WhiteLists(const WhiteLists &) = default ;
        WhiteLists(WhiteLists &&) = default ;
        WhiteLists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteLists() = default ;
        WhiteLists& operator=(const WhiteLists &) = default ;
        WhiteLists& operator=(WhiteLists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->ip_ == nullptr && this->port_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WhiteLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline WhiteLists& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline WhiteLists& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> description_ {};
        // ip
        // 
        // This parameter is required.
        shared_ptr<string> ip_ {};
        // This parameter is required.
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->whiteLists_ == nullptr; };
      // whiteLists Field Functions 
      bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
      void deleteWhiteLists() { this->whiteLists_ = nullptr;};
      inline const vector<ReplaceCommand::WhiteLists> & getWhiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<ReplaceCommand::WhiteLists>) };
      inline vector<ReplaceCommand::WhiteLists> getWhiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<ReplaceCommand::WhiteLists>) };
      inline ReplaceCommand& setWhiteLists(const vector<ReplaceCommand::WhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
      inline ReplaceCommand& setWhiteLists(vector<ReplaceCommand::WhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


    protected:
      // This parameter is required.
      shared_ptr<vector<ReplaceCommand::WhiteLists>> whiteLists_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->opTenantId_ == nullptr && this->replaceCommand_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ReplaceProjectWhiteListsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ReplaceProjectWhiteListsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // replaceCommand Field Functions 
    bool hasReplaceCommand() const { return this->replaceCommand_ != nullptr;};
    void deleteReplaceCommand() { this->replaceCommand_ = nullptr;};
    inline const ReplaceProjectWhiteListsRequest::ReplaceCommand & getReplaceCommand() const { DARABONBA_PTR_GET_CONST(replaceCommand_, ReplaceProjectWhiteListsRequest::ReplaceCommand) };
    inline ReplaceProjectWhiteListsRequest::ReplaceCommand getReplaceCommand() { DARABONBA_PTR_GET(replaceCommand_, ReplaceProjectWhiteListsRequest::ReplaceCommand) };
    inline ReplaceProjectWhiteListsRequest& setReplaceCommand(const ReplaceProjectWhiteListsRequest::ReplaceCommand & replaceCommand) { DARABONBA_PTR_SET_VALUE(replaceCommand_, replaceCommand) };
    inline ReplaceProjectWhiteListsRequest& setReplaceCommand(ReplaceProjectWhiteListsRequest::ReplaceCommand && replaceCommand) { DARABONBA_PTR_SET_RVALUE(replaceCommand_, replaceCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<ReplaceProjectWhiteListsRequest::ReplaceCommand> replaceCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
