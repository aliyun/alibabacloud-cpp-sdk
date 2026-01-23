// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTANDARDMAPPINGTOINVALIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTANDARDMAPPINGTOINVALIDREQUEST_HPP_
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
  class UpdateStandardMappingToInvalidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStandardMappingToInvalidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStandardMappingToInvalidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateStandardMappingToInvalidRequest() = default ;
    UpdateStandardMappingToInvalidRequest(const UpdateStandardMappingToInvalidRequest &) = default ;
    UpdateStandardMappingToInvalidRequest(UpdateStandardMappingToInvalidRequest &&) = default ;
    UpdateStandardMappingToInvalidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStandardMappingToInvalidRequest() = default ;
    UpdateStandardMappingToInvalidRequest& operator=(const UpdateStandardMappingToInvalidRequest &) = default ;
    UpdateStandardMappingToInvalidRequest& operator=(UpdateStandardMappingToInvalidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BelongGuidList, belongGuidList_);
        DARABONBA_PTR_TO_JSON(GuidList, guidList_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BelongGuidList, belongGuidList_);
        DARABONBA_PTR_FROM_JSON(GuidList, guidList_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->belongGuidList_ == nullptr
        && this->guidList_ == nullptr && this->standardId_ == nullptr; };
      // belongGuidList Field Functions 
      bool hasBelongGuidList() const { return this->belongGuidList_ != nullptr;};
      void deleteBelongGuidList() { this->belongGuidList_ = nullptr;};
      inline const vector<string> & getBelongGuidList() const { DARABONBA_PTR_GET_CONST(belongGuidList_, vector<string>) };
      inline vector<string> getBelongGuidList() { DARABONBA_PTR_GET(belongGuidList_, vector<string>) };
      inline UpdateCommand& setBelongGuidList(const vector<string> & belongGuidList) { DARABONBA_PTR_SET_VALUE(belongGuidList_, belongGuidList) };
      inline UpdateCommand& setBelongGuidList(vector<string> && belongGuidList) { DARABONBA_PTR_SET_RVALUE(belongGuidList_, belongGuidList) };


      // guidList Field Functions 
      bool hasGuidList() const { return this->guidList_ != nullptr;};
      void deleteGuidList() { this->guidList_ = nullptr;};
      inline const vector<string> & getGuidList() const { DARABONBA_PTR_GET_CONST(guidList_, vector<string>) };
      inline vector<string> getGuidList() { DARABONBA_PTR_GET(guidList_, vector<string>) };
      inline UpdateCommand& setGuidList(const vector<string> & guidList) { DARABONBA_PTR_SET_VALUE(guidList_, guidList) };
      inline UpdateCommand& setGuidList(vector<string> && guidList) { DARABONBA_PTR_SET_RVALUE(guidList_, guidList) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline UpdateCommand& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


    protected:
      shared_ptr<vector<string>> belongGuidList_ {};
      shared_ptr<vector<string>> guidList_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateStandardMappingToInvalidRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateStandardMappingToInvalidRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateStandardMappingToInvalidRequest::UpdateCommand) };
    inline UpdateStandardMappingToInvalidRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateStandardMappingToInvalidRequest::UpdateCommand) };
    inline UpdateStandardMappingToInvalidRequest& setUpdateCommand(const UpdateStandardMappingToInvalidRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateStandardMappingToInvalidRequest& setUpdateCommand(UpdateStandardMappingToInvalidRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateStandardMappingToInvalidRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
