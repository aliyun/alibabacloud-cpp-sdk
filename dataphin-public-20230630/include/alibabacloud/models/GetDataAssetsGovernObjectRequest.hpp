// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAASSETSGOVERNOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAASSETSGOVERNOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataAssetsGovernObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAssetsGovernObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAssetsGovernObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetDataAssetsGovernObjectRequest() = default ;
    GetDataAssetsGovernObjectRequest(const GetDataAssetsGovernObjectRequest &) = default ;
    GetDataAssetsGovernObjectRequest(GetDataAssetsGovernObjectRequest &&) = default ;
    GetDataAssetsGovernObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAssetsGovernObjectRequest() = default ;
    GetDataAssetsGovernObjectRequest& operator=(const GetDataAssetsGovernObjectRequest &) = default ;
    GetDataAssetsGovernObjectRequest& operator=(GetDataAssetsGovernObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Command : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Command& obj) { 
        DARABONBA_PTR_TO_JSON(GovernObjectId, governObjectId_);
      };
      friend void from_json(const Darabonba::Json& j, Command& obj) { 
        DARABONBA_PTR_FROM_JSON(GovernObjectId, governObjectId_);
      };
      Command() = default ;
      Command(const Command &) = default ;
      Command(Command &&) = default ;
      Command(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Command() = default ;
      Command& operator=(const Command &) = default ;
      Command& operator=(Command &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->governObjectId_ == nullptr; };
      // governObjectId Field Functions 
      bool hasGovernObjectId() const { return this->governObjectId_ != nullptr;};
      void deleteGovernObjectId() { this->governObjectId_ = nullptr;};
      inline int64_t getGovernObjectId() const { DARABONBA_PTR_GET_DEFAULT(governObjectId_, 0L) };
      inline Command& setGovernObjectId(int64_t governObjectId) { DARABONBA_PTR_SET_VALUE(governObjectId_, governObjectId) };


    protected:
      // The governance object ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> governObjectId_ {};
    };

    virtual bool empty() const override { return this->command_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const GetDataAssetsGovernObjectRequest::Command & getCommand() const { DARABONBA_PTR_GET_CONST(command_, GetDataAssetsGovernObjectRequest::Command) };
    inline GetDataAssetsGovernObjectRequest::Command getCommand() { DARABONBA_PTR_GET(command_, GetDataAssetsGovernObjectRequest::Command) };
    inline GetDataAssetsGovernObjectRequest& setCommand(const GetDataAssetsGovernObjectRequest::Command & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline GetDataAssetsGovernObjectRequest& setCommand(GetDataAssetsGovernObjectRequest::Command && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetDataAssetsGovernObjectRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetDataAssetsGovernObjectRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query instruction.
    // 
    // This parameter is required.
    shared_ptr<GetDataAssetsGovernObjectRequest::Command> command_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operation user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
