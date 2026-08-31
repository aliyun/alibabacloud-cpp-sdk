// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITASSETSONSHELVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITASSETSONSHELVEREQUEST_HPP_
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
  class SubmitAssetsOnShelveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAssetsOnShelveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAssetsOnShelveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitAssetsOnShelveRequest() = default ;
    SubmitAssetsOnShelveRequest(const SubmitAssetsOnShelveRequest &) = default ;
    SubmitAssetsOnShelveRequest(SubmitAssetsOnShelveRequest &&) = default ;
    SubmitAssetsOnShelveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAssetsOnShelveRequest() = default ;
    SubmitAssetsOnShelveRequest& operator=(const SubmitAssetsOnShelveRequest &) = default ;
    SubmitAssetsOnShelveRequest& operator=(SubmitAssetsOnShelveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(GuidList, guidList_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(GuidList, guidList_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->guidList_ == nullptr; };
      // guidList Field Functions 
      bool hasGuidList() const { return this->guidList_ != nullptr;};
      void deleteGuidList() { this->guidList_ = nullptr;};
      inline const vector<string> & getGuidList() const { DARABONBA_PTR_GET_CONST(guidList_, vector<string>) };
      inline vector<string> getGuidList() { DARABONBA_PTR_GET(guidList_, vector<string>) };
      inline SubmitCommand& setGuidList(const vector<string> & guidList) { DARABONBA_PTR_SET_VALUE(guidList_, guidList) };
      inline SubmitCommand& setGuidList(vector<string> && guidList) { DARABONBA_PTR_SET_RVALUE(guidList_, guidList) };


    protected:
      // The list of asset GUIDs to be listed. A maximum of 50 GUIDs can be specified per request.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> guidList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitAssetsOnShelveRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitAssetsOnShelveRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitAssetsOnShelveRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitAssetsOnShelveRequest::SubmitCommand) };
    inline SubmitAssetsOnShelveRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitAssetsOnShelveRequest::SubmitCommand) };
    inline SubmitAssetsOnShelveRequest& setSubmitCommand(const SubmitAssetsOnShelveRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitAssetsOnShelveRequest& setSubmitCommand(SubmitAssetsOnShelveRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The submit listing instruction.
    // 
    // This parameter is required.
    shared_ptr<SubmitAssetsOnShelveRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
