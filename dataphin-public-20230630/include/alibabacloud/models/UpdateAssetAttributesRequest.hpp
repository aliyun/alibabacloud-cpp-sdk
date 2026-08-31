// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSETATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSETATTRIBUTESREQUEST_HPP_
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
  class UpdateAssetAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssetAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssetAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateAssetAttributesRequest() = default ;
    UpdateAssetAttributesRequest(const UpdateAssetAttributesRequest &) = default ;
    UpdateAssetAttributesRequest(UpdateAssetAttributesRequest &&) = default ;
    UpdateAssetAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssetAttributesRequest() = default ;
    UpdateAssetAttributesRequest& operator=(const UpdateAssetAttributesRequest &) = default ;
    UpdateAssetAttributesRequest& operator=(UpdateAssetAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AssetAttributeUpdateList, assetAttributeUpdateList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetAttributeUpdateList, assetAttributeUpdateList_);
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
      class AssetAttributeUpdateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssetAttributeUpdateList& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeList, attributeList_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
        };
        friend void from_json(const Darabonba::Json& j, AssetAttributeUpdateList& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeList, attributeList_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
        };
        AssetAttributeUpdateList() = default ;
        AssetAttributeUpdateList(const AssetAttributeUpdateList &) = default ;
        AssetAttributeUpdateList(AssetAttributeUpdateList &&) = default ;
        AssetAttributeUpdateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssetAttributeUpdateList() = default ;
        AssetAttributeUpdateList& operator=(const AssetAttributeUpdateList &) = default ;
        AssetAttributeUpdateList& operator=(AssetAttributeUpdateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeList& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeCode, attributeCode_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeList& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeCode, attributeCode_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          AttributeList() = default ;
          AttributeList(const AttributeList &) = default ;
          AttributeList(AttributeList &&) = default ;
          AttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeList() = default ;
          AttributeList& operator=(const AttributeList &) = default ;
          AttributeList& operator=(AttributeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributeCode_ == nullptr
        && this->values_ == nullptr; };
          // attributeCode Field Functions 
          bool hasAttributeCode() const { return this->attributeCode_ != nullptr;};
          void deleteAttributeCode() { this->attributeCode_ = nullptr;};
          inline string getAttributeCode() const { DARABONBA_PTR_GET_DEFAULT(attributeCode_, "") };
          inline AttributeList& setAttributeCode(string attributeCode) { DARABONBA_PTR_SET_VALUE(attributeCode_, attributeCode) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline AttributeList& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline AttributeList& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The property code. This value must match the AttributeCode returned by the GetAssetTypeAttributeCodes operation.
          // 
          // This parameter is required.
          shared_ptr<string> attributeCode_ {};
          // The list of property values. For a single-value property, pass one element. For a multi-value property, pass multiple elements. Pass an empty array [] to clear the property value.
          // 
          // This parameter is required.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->attributeList_ == nullptr
        && this->guid_ == nullptr; };
        // attributeList Field Functions 
        bool hasAttributeList() const { return this->attributeList_ != nullptr;};
        void deleteAttributeList() { this->attributeList_ = nullptr;};
        inline const vector<AssetAttributeUpdateList::AttributeList> & getAttributeList() const { DARABONBA_PTR_GET_CONST(attributeList_, vector<AssetAttributeUpdateList::AttributeList>) };
        inline vector<AssetAttributeUpdateList::AttributeList> getAttributeList() { DARABONBA_PTR_GET(attributeList_, vector<AssetAttributeUpdateList::AttributeList>) };
        inline AssetAttributeUpdateList& setAttributeList(const vector<AssetAttributeUpdateList::AttributeList> & attributeList) { DARABONBA_PTR_SET_VALUE(attributeList_, attributeList) };
        inline AssetAttributeUpdateList& setAttributeList(vector<AssetAttributeUpdateList::AttributeList> && attributeList) { DARABONBA_PTR_SET_RVALUE(attributeList_, attributeList) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline AssetAttributeUpdateList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      protected:
        // The list of properties to update.
        // 
        // This parameter is required.
        shared_ptr<vector<AssetAttributeUpdateList::AttributeList>> attributeList_ {};
        // The globally unique identifier (GUID) of the asset. You can obtain this value by calling operations such as ListCatalogAssets and GetTableColumnByTableGuids.
        // 
        // This parameter is required.
        shared_ptr<string> guid_ {};
      };

      virtual bool empty() const override { return this->assetAttributeUpdateList_ == nullptr; };
      // assetAttributeUpdateList Field Functions 
      bool hasAssetAttributeUpdateList() const { return this->assetAttributeUpdateList_ != nullptr;};
      void deleteAssetAttributeUpdateList() { this->assetAttributeUpdateList_ = nullptr;};
      inline const vector<UpdateCommand::AssetAttributeUpdateList> & getAssetAttributeUpdateList() const { DARABONBA_PTR_GET_CONST(assetAttributeUpdateList_, vector<UpdateCommand::AssetAttributeUpdateList>) };
      inline vector<UpdateCommand::AssetAttributeUpdateList> getAssetAttributeUpdateList() { DARABONBA_PTR_GET(assetAttributeUpdateList_, vector<UpdateCommand::AssetAttributeUpdateList>) };
      inline UpdateCommand& setAssetAttributeUpdateList(const vector<UpdateCommand::AssetAttributeUpdateList> & assetAttributeUpdateList) { DARABONBA_PTR_SET_VALUE(assetAttributeUpdateList_, assetAttributeUpdateList) };
      inline UpdateCommand& setAssetAttributeUpdateList(vector<UpdateCommand::AssetAttributeUpdateList> && assetAttributeUpdateList) { DARABONBA_PTR_SET_RVALUE(assetAttributeUpdateList_, assetAttributeUpdateList) };


    protected:
      // The list of asset property updates. A maximum of 50 entries can be specified in a single request.
      // 
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::AssetAttributeUpdateList>> assetAttributeUpdateList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateAssetAttributesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateAssetAttributesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateAssetAttributesRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateAssetAttributesRequest::UpdateCommand) };
    inline UpdateAssetAttributesRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateAssetAttributesRequest::UpdateCommand) };
    inline UpdateAssetAttributesRequest& setUpdateCommand(const UpdateAssetAttributesRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateAssetAttributesRequest& setUpdateCommand(UpdateAssetAttributesRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The update command.
    // 
    // This parameter is required.
    shared_ptr<UpdateAssetAttributesRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
