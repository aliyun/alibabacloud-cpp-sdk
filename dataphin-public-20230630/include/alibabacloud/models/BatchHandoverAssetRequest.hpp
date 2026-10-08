// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHHANDOVERASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHHANDOVERASSETREQUEST_HPP_
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
  class BatchHandoverAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchHandoverAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HandoverCommand, handoverCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchHandoverAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HandoverCommand, handoverCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    BatchHandoverAssetRequest() = default ;
    BatchHandoverAssetRequest(const BatchHandoverAssetRequest &) = default ;
    BatchHandoverAssetRequest(BatchHandoverAssetRequest &&) = default ;
    BatchHandoverAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchHandoverAssetRequest() = default ;
    BatchHandoverAssetRequest& operator=(const BatchHandoverAssetRequest &) = default ;
    BatchHandoverAssetRequest& operator=(BatchHandoverAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HandoverCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HandoverCommand& obj) { 
        DARABONBA_PTR_TO_JSON(GuidList, guidList_);
        DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
      };
      friend void from_json(const Darabonba::Json& j, HandoverCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(GuidList, guidList_);
        DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
      };
      HandoverCommand() = default ;
      HandoverCommand(const HandoverCommand &) = default ;
      HandoverCommand(HandoverCommand &&) = default ;
      HandoverCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HandoverCommand() = default ;
      HandoverCommand& operator=(const HandoverCommand &) = default ;
      HandoverCommand& operator=(HandoverCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->guidList_ == nullptr
        && this->targetUserId_ == nullptr; };
      // guidList Field Functions 
      bool hasGuidList() const { return this->guidList_ != nullptr;};
      void deleteGuidList() { this->guidList_ = nullptr;};
      inline const vector<string> & getGuidList() const { DARABONBA_PTR_GET_CONST(guidList_, vector<string>) };
      inline vector<string> getGuidList() { DARABONBA_PTR_GET(guidList_, vector<string>) };
      inline HandoverCommand& setGuidList(const vector<string> & guidList) { DARABONBA_PTR_SET_VALUE(guidList_, guidList) };
      inline HandoverCommand& setGuidList(vector<string> && guidList) { DARABONBA_PTR_SET_RVALUE(guidList_, guidList) };


      // targetUserId Field Functions 
      bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
      void deleteTargetUserId() { this->targetUserId_ = nullptr;};
      inline string getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
      inline HandoverCommand& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> guidList_ {};
      // This parameter is required.
      shared_ptr<string> targetUserId_ {};
    };

    virtual bool empty() const override { return this->handoverCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // handoverCommand Field Functions 
    bool hasHandoverCommand() const { return this->handoverCommand_ != nullptr;};
    void deleteHandoverCommand() { this->handoverCommand_ = nullptr;};
    inline const BatchHandoverAssetRequest::HandoverCommand & getHandoverCommand() const { DARABONBA_PTR_GET_CONST(handoverCommand_, BatchHandoverAssetRequest::HandoverCommand) };
    inline BatchHandoverAssetRequest::HandoverCommand getHandoverCommand() { DARABONBA_PTR_GET(handoverCommand_, BatchHandoverAssetRequest::HandoverCommand) };
    inline BatchHandoverAssetRequest& setHandoverCommand(const BatchHandoverAssetRequest::HandoverCommand & handoverCommand) { DARABONBA_PTR_SET_VALUE(handoverCommand_, handoverCommand) };
    inline BatchHandoverAssetRequest& setHandoverCommand(BatchHandoverAssetRequest::HandoverCommand && handoverCommand) { DARABONBA_PTR_SET_RVALUE(handoverCommand_, handoverCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline BatchHandoverAssetRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline BatchHandoverAssetRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<BatchHandoverAssetRequest::HandoverCommand> handoverCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
