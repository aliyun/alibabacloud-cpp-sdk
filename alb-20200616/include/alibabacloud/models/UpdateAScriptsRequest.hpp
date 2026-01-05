// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
    };
    UpdateAScriptsRequest() = default ;
    UpdateAScriptsRequest(const UpdateAScriptsRequest &) = default ;
    UpdateAScriptsRequest(UpdateAScriptsRequest &&) = default ;
    UpdateAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAScriptsRequest() = default ;
    UpdateAScriptsRequest& operator=(const UpdateAScriptsRequest &) = default ;
    UpdateAScriptsRequest& operator=(UpdateAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AScripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AScripts& obj) { 
        DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
        DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ExtAttributeEnabled, extAttributeEnabled_);
        DARABONBA_PTR_TO_JSON(ExtAttributes, extAttributes_);
        DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      };
      friend void from_json(const Darabonba::Json& j, AScripts& obj) { 
        DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
        DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ExtAttributeEnabled, extAttributeEnabled_);
        DARABONBA_PTR_FROM_JSON(ExtAttributes, extAttributes_);
        DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      };
      AScripts() = default ;
      AScripts(const AScripts &) = default ;
      AScripts(AScripts &&) = default ;
      AScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AScripts() = default ;
      AScripts& operator=(const AScripts &) = default ;
      AScripts& operator=(AScripts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeKey, attributeKey_);
          DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
        };
        friend void from_json(const Darabonba::Json& j, ExtAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeKey, attributeKey_);
          DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
        };
        ExtAttributes() = default ;
        ExtAttributes(const ExtAttributes &) = default ;
        ExtAttributes(ExtAttributes &&) = default ;
        ExtAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtAttributes() = default ;
        ExtAttributes& operator=(const ExtAttributes &) = default ;
        ExtAttributes& operator=(ExtAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attributeKey_ == nullptr
        && this->attributeValue_ == nullptr; };
        // attributeKey Field Functions 
        bool hasAttributeKey() const { return this->attributeKey_ != nullptr;};
        void deleteAttributeKey() { this->attributeKey_ = nullptr;};
        inline string getAttributeKey() const { DARABONBA_PTR_GET_DEFAULT(attributeKey_, "") };
        inline ExtAttributes& setAttributeKey(string attributeKey) { DARABONBA_PTR_SET_VALUE(attributeKey_, attributeKey) };


        // attributeValue Field Functions 
        bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
        void deleteAttributeValue() { this->attributeValue_ = nullptr;};
        inline string getAttributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
        inline ExtAttributes& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


      protected:
        // The attribute name.
        // 
        // Set the value to **EsDebug**, which specifies that when requests carry the _es_dbg parameter whose value is the specified key, the debugging header is enabled to output the execution result.
        // 
        // This parameter is required.
        shared_ptr<string> attributeKey_ {};
        // The attribute value, which must be 1 to 128 characters in length, and can contain letters and digits.
        // 
        // This parameter is required.
        shared_ptr<string> attributeValue_ {};
      };

      virtual bool empty() const override { return this->AScriptId_ == nullptr
        && this->AScriptName_ == nullptr && this->enabled_ == nullptr && this->extAttributeEnabled_ == nullptr && this->extAttributes_ == nullptr && this->scriptContent_ == nullptr; };
      // AScriptId Field Functions 
      bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
      void deleteAScriptId() { this->AScriptId_ = nullptr;};
      inline string getAScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
      inline AScripts& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


      // AScriptName Field Functions 
      bool hasAScriptName() const { return this->AScriptName_ != nullptr;};
      void deleteAScriptName() { this->AScriptName_ = nullptr;};
      inline string getAScriptName() const { DARABONBA_PTR_GET_DEFAULT(AScriptName_, "") };
      inline AScripts& setAScriptName(string AScriptName) { DARABONBA_PTR_SET_VALUE(AScriptName_, AScriptName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AScripts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // extAttributeEnabled Field Functions 
      bool hasExtAttributeEnabled() const { return this->extAttributeEnabled_ != nullptr;};
      void deleteExtAttributeEnabled() { this->extAttributeEnabled_ = nullptr;};
      inline bool getExtAttributeEnabled() const { DARABONBA_PTR_GET_DEFAULT(extAttributeEnabled_, false) };
      inline AScripts& setExtAttributeEnabled(bool extAttributeEnabled) { DARABONBA_PTR_SET_VALUE(extAttributeEnabled_, extAttributeEnabled) };


      // extAttributes Field Functions 
      bool hasExtAttributes() const { return this->extAttributes_ != nullptr;};
      void deleteExtAttributes() { this->extAttributes_ = nullptr;};
      inline const vector<AScripts::ExtAttributes> & getExtAttributes() const { DARABONBA_PTR_GET_CONST(extAttributes_, vector<AScripts::ExtAttributes>) };
      inline vector<AScripts::ExtAttributes> getExtAttributes() { DARABONBA_PTR_GET(extAttributes_, vector<AScripts::ExtAttributes>) };
      inline AScripts& setExtAttributes(const vector<AScripts::ExtAttributes> & extAttributes) { DARABONBA_PTR_SET_VALUE(extAttributes_, extAttributes) };
      inline AScripts& setExtAttributes(vector<AScripts::ExtAttributes> && extAttributes) { DARABONBA_PTR_SET_RVALUE(extAttributes_, extAttributes) };


      // scriptContent Field Functions 
      bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
      void deleteScriptContent() { this->scriptContent_ = nullptr;};
      inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
      inline AScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    protected:
      // The rule ID.
      // 
      // This parameter is required.
      shared_ptr<string> AScriptId_ {};
      // The name of the AScript rule.
      // 
      // The name must be 2 to 128 character in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
      shared_ptr<string> AScriptName_ {};
      // Specifies whether to enable the AScript rule. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> enabled_ {};
      // Specifies whether to enable the extended attributes of the Ascript rule. Valid values:
      // 
      // *   true
      // *   false (false)
      shared_ptr<bool> extAttributeEnabled_ {};
      // The extended attribute.
      shared_ptr<vector<AScripts::ExtAttributes>> extAttributes_ {};
      // The content of the AScript rule.
      shared_ptr<string> scriptContent_ {};
    };

    virtual bool empty() const override { return this->AScripts_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<UpdateAScriptsRequest::AScripts> & getAScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<UpdateAScriptsRequest::AScripts>) };
    inline vector<UpdateAScriptsRequest::AScripts> getAScripts() { DARABONBA_PTR_GET(AScripts_, vector<UpdateAScriptsRequest::AScripts>) };
    inline UpdateAScriptsRequest& setAScripts(const vector<UpdateAScriptsRequest::AScripts> & aScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, aScripts) };
    inline UpdateAScriptsRequest& setAScripts(vector<UpdateAScriptsRequest::AScripts> && aScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, aScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAScriptsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateAScriptsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The information about the AScript rule.
    shared_ptr<vector<UpdateAScriptsRequest::AScripts>> AScripts_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
