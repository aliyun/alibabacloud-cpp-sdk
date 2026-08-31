// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETATTRIBUTESREQUEST_HPP_
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
  class GetAssetAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(QueryCommand, queryCommand_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(QueryCommand, queryCommand_);
    };
    GetAssetAttributesRequest() = default ;
    GetAssetAttributesRequest(const GetAssetAttributesRequest &) = default ;
    GetAssetAttributesRequest(GetAssetAttributesRequest &&) = default ;
    GetAssetAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetAttributesRequest() = default ;
    GetAssetAttributesRequest& operator=(const GetAssetAttributesRequest &) = default ;
    GetAssetAttributesRequest& operator=(GetAssetAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeCodeList, attributeCodeList_);
        DARABONBA_PTR_TO_JSON(GuidList, guidList_);
      };
      friend void from_json(const Darabonba::Json& j, QueryCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeCodeList, attributeCodeList_);
        DARABONBA_PTR_FROM_JSON(GuidList, guidList_);
      };
      QueryCommand() = default ;
      QueryCommand(const QueryCommand &) = default ;
      QueryCommand(QueryCommand &&) = default ;
      QueryCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryCommand() = default ;
      QueryCommand& operator=(const QueryCommand &) = default ;
      QueryCommand& operator=(QueryCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributeCodeList_ == nullptr
        && this->guidList_ == nullptr; };
      // attributeCodeList Field Functions 
      bool hasAttributeCodeList() const { return this->attributeCodeList_ != nullptr;};
      void deleteAttributeCodeList() { this->attributeCodeList_ = nullptr;};
      inline const vector<string> & getAttributeCodeList() const { DARABONBA_PTR_GET_CONST(attributeCodeList_, vector<string>) };
      inline vector<string> getAttributeCodeList() { DARABONBA_PTR_GET(attributeCodeList_, vector<string>) };
      inline QueryCommand& setAttributeCodeList(const vector<string> & attributeCodeList) { DARABONBA_PTR_SET_VALUE(attributeCodeList_, attributeCodeList) };
      inline QueryCommand& setAttributeCodeList(vector<string> && attributeCodeList) { DARABONBA_PTR_SET_RVALUE(attributeCodeList_, attributeCodeList) };


      // guidList Field Functions 
      bool hasGuidList() const { return this->guidList_ != nullptr;};
      void deleteGuidList() { this->guidList_ = nullptr;};
      inline const vector<string> & getGuidList() const { DARABONBA_PTR_GET_CONST(guidList_, vector<string>) };
      inline vector<string> getGuidList() { DARABONBA_PTR_GET(guidList_, vector<string>) };
      inline QueryCommand& setGuidList(const vector<string> & guidList) { DARABONBA_PTR_SET_VALUE(guidList_, guidList) };
      inline QueryCommand& setGuidList(vector<string> && guidList) { DARABONBA_PTR_SET_RVALUE(guidList_, guidList) };


    protected:
      // The list of property codes to return. If this parameter is not specified, all custom properties of the asset are returned.
      shared_ptr<vector<string>> attributeCodeList_ {};
      // The list of asset GUIDs. A maximum of 50 GUIDs are supported.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> guidList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->queryCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAssetAttributesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetAssetAttributesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // queryCommand Field Functions 
    bool hasQueryCommand() const { return this->queryCommand_ != nullptr;};
    void deleteQueryCommand() { this->queryCommand_ = nullptr;};
    inline const GetAssetAttributesRequest::QueryCommand & getQueryCommand() const { DARABONBA_PTR_GET_CONST(queryCommand_, GetAssetAttributesRequest::QueryCommand) };
    inline GetAssetAttributesRequest::QueryCommand getQueryCommand() { DARABONBA_PTR_GET(queryCommand_, GetAssetAttributesRequest::QueryCommand) };
    inline GetAssetAttributesRequest& setQueryCommand(const GetAssetAttributesRequest::QueryCommand & queryCommand) { DARABONBA_PTR_SET_VALUE(queryCommand_, queryCommand) };
    inline GetAssetAttributesRequest& setQueryCommand(GetAssetAttributesRequest::QueryCommand && queryCommand) { DARABONBA_PTR_SET_RVALUE(queryCommand_, queryCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The query instruction.
    // 
    // This parameter is required.
    shared_ptr<GetAssetAttributesRequest::QueryCommand> queryCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
