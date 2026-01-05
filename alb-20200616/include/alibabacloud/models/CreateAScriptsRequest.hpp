// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUEST_HPP_
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
  class CreateAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
    };
    CreateAScriptsRequest() = default ;
    CreateAScriptsRequest(const CreateAScriptsRequest &) = default ;
    CreateAScriptsRequest(CreateAScriptsRequest &&) = default ;
    CreateAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsRequest() = default ;
    CreateAScriptsRequest& operator=(const CreateAScriptsRequest &) = default ;
    CreateAScriptsRequest& operator=(CreateAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AScripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AScripts& obj) { 
        DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ExtAttributeEnabled, extAttributeEnabled_);
        DARABONBA_PTR_TO_JSON(ExtAttributes, extAttributes_);
        DARABONBA_PTR_TO_JSON(Position, position_);
        DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      };
      friend void from_json(const Darabonba::Json& j, AScripts& obj) { 
        DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ExtAttributeEnabled, extAttributeEnabled_);
        DARABONBA_PTR_FROM_JSON(ExtAttributes, extAttributes_);
        DARABONBA_PTR_FROM_JSON(Position, position_);
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
        // The key of the extended attribute.
        // 
        // You can only set the key to **EsDebug**. This extended attribute adds a debug response header to record the execution of the AScript rule if the client request includes the _es_dbg parameter and its value matches the specified value of the extended attribute.
        shared_ptr<string> attributeKey_ {};
        // The value of the extended attribute, which can contain a maximum of 128 characters, including letters and digits.
        shared_ptr<string> attributeValue_ {};
      };

      virtual bool empty() const override { return this->AScriptName_ == nullptr
        && this->enabled_ == nullptr && this->extAttributeEnabled_ == nullptr && this->extAttributes_ == nullptr && this->position_ == nullptr && this->scriptContent_ == nullptr; };
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


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
      inline AScripts& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // scriptContent Field Functions 
      bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
      void deleteScriptContent() { this->scriptContent_ = nullptr;};
      inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
      inline AScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    protected:
      // The name of the AScript rule.
      // 
      // The length must be between 2 and 128 characters. This name must start with a letter and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
      // 
      // This parameter is required.
      shared_ptr<string> AScriptName_ {};
      // Enables the AScript rule. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> enabled_ {};
      // Enables the extended attribute of the Ascript rule. Valid values:
      // 
      // *   true
      // *   false (default)
      shared_ptr<bool> extAttributeEnabled_ {};
      // The extended attribute of the AScript rule.
      shared_ptr<vector<AScripts::ExtAttributes>> extAttributes_ {};
      // The position where the Ascript rule is evaluated. Valid values are:
      // 
      // *   RequestHead (default): before inbound rules are evaluated
      // *   RequestFoot: after inbound rules are evaluated
      // *   ResponseHead: before outbound rules are evaluated
      shared_ptr<string> position_ {};
      // The content of the AScript rule.
      // 
      // This parameter is required.
      shared_ptr<string> scriptContent_ {};
    };

    virtual bool empty() const override { return this->AScripts_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->listenerId_ == nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<CreateAScriptsRequest::AScripts> & getAScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<CreateAScriptsRequest::AScripts>) };
    inline vector<CreateAScriptsRequest::AScripts> getAScripts() { DARABONBA_PTR_GET(AScripts_, vector<CreateAScriptsRequest::AScripts>) };
    inline CreateAScriptsRequest& setAScripts(const vector<CreateAScriptsRequest::AScripts> & aScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, aScripts) };
    inline CreateAScriptsRequest& setAScripts(vector<CreateAScriptsRequest::AScripts> && aScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, aScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAScriptsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAScriptsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateAScriptsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


  protected:
    // The information about the AScript rules.
    shared_ptr<vector<CreateAScriptsRequest::AScripts>> AScripts_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
