// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCheckConfigs, errorCheckConfigs_);
      DARABONBA_PTR_TO_JSON(ErrorCheckCustomConfig, errorCheckCustomConfig_);
      DARABONBA_PTR_TO_JSON(ErrorRepairConfigs, errorRepairConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCheckConfigs, errorCheckConfigs_);
      DARABONBA_PTR_FROM_JSON(ErrorCheckCustomConfig, errorCheckCustomConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorRepairConfigs, errorRepairConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyCheckCustomConfigResponseBody() = default ;
    VerifyCheckCustomConfigResponseBody(const VerifyCheckCustomConfigResponseBody &) = default ;
    VerifyCheckCustomConfigResponseBody(VerifyCheckCustomConfigResponseBody &&) = default ;
    VerifyCheckCustomConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigResponseBody() = default ;
    VerifyCheckCustomConfigResponseBody& operator=(const VerifyCheckCustomConfigResponseBody &) = default ;
    VerifyCheckCustomConfigResponseBody& operator=(VerifyCheckCustomConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorRepairConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorRepairConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(LinkErrorConfigs, linkErrorConfigs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorRepairConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(LinkErrorConfigs, linkErrorConfigs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ErrorRepairConfigs() = default ;
      ErrorRepairConfigs(const ErrorRepairConfigs &) = default ;
      ErrorRepairConfigs(ErrorRepairConfigs &&) = default ;
      ErrorRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorRepairConfigs() = default ;
      ErrorRepairConfigs& operator=(const ErrorRepairConfigs &) = default ;
      ErrorRepairConfigs& operator=(ErrorRepairConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LinkErrorConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkErrorConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, LinkErrorConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        LinkErrorConfigs() = default ;
        LinkErrorConfigs(const LinkErrorConfigs &) = default ;
        LinkErrorConfigs(LinkErrorConfigs &&) = default ;
        LinkErrorConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LinkErrorConfigs() = default ;
        LinkErrorConfigs& operator=(const LinkErrorConfigs &) = default ;
        LinkErrorConfigs& operator=(LinkErrorConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->showName_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LinkErrorConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline LinkErrorConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LinkErrorConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Name of the check item\\"s configuration, unique within the same check item.
        shared_ptr<string> name_ {};
        // Display name of the user\\"s check configuration.
        shared_ptr<string> showName_ {};
        // The type of the parameter that caused the error:
        // - repair: Repair parameter
        // - custom: Custom configuration parameter
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->linkErrorConfigs_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ErrorRepairConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ErrorRepairConfigs& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // linkErrorConfigs Field Functions 
      bool hasLinkErrorConfigs() const { return this->linkErrorConfigs_ != nullptr;};
      void deleteLinkErrorConfigs() { this->linkErrorConfigs_ = nullptr;};
      inline const vector<ErrorRepairConfigs::LinkErrorConfigs> & getLinkErrorConfigs() const { DARABONBA_PTR_GET_CONST(linkErrorConfigs_, vector<ErrorRepairConfigs::LinkErrorConfigs>) };
      inline vector<ErrorRepairConfigs::LinkErrorConfigs> getLinkErrorConfigs() { DARABONBA_PTR_GET(linkErrorConfigs_, vector<ErrorRepairConfigs::LinkErrorConfigs>) };
      inline ErrorRepairConfigs& setLinkErrorConfigs(const vector<ErrorRepairConfigs::LinkErrorConfigs> & linkErrorConfigs) { DARABONBA_PTR_SET_VALUE(linkErrorConfigs_, linkErrorConfigs) };
      inline ErrorRepairConfigs& setLinkErrorConfigs(vector<ErrorRepairConfigs::LinkErrorConfigs> && linkErrorConfigs) { DARABONBA_PTR_SET_RVALUE(linkErrorConfigs_, linkErrorConfigs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ErrorRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ErrorRepairConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ErrorRepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Error code.
      shared_ptr<string> errorCode_ {};
      // Error message.
      shared_ptr<string> errorMsg_ {};
      // Related configurations causing this error.
      shared_ptr<vector<ErrorRepairConfigs::LinkErrorConfigs>> linkErrorConfigs_ {};
      // Name of the check item\\"s repair configuration, unique within the same check item.
      shared_ptr<string> name_ {};
      // The type of the parameter that caused the error:
      // - repair: Repair parameter
      shared_ptr<string> type_ {};
      // Name of the check item\\"s repair parameter, unique within the same check item.
      shared_ptr<string> value_ {};
    };

    class ErrorCheckCustomConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorCheckCustomConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorCheckCustomConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      };
      ErrorCheckCustomConfig() = default ;
      ErrorCheckCustomConfig(const ErrorCheckCustomConfig &) = default ;
      ErrorCheckCustomConfig(ErrorCheckCustomConfig &&) = default ;
      ErrorCheckCustomConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorCheckCustomConfig() = default ;
      ErrorCheckCustomConfig& operator=(const ErrorCheckCustomConfig &) = default ;
      ErrorCheckCustomConfig& operator=(ErrorCheckCustomConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ErrorCheckCustomConfig& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ErrorCheckCustomConfig& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    protected:
      // Error code when failed. This parameter is not returned upon success. 
      // - **CspmVerifyCheckCustomItemNoPass**: The asset did not pass the set custom rules. 
      // - **CspmVerifyCheckCustomItemError**: Verification error, there is an issue with the input rule.
      shared_ptr<string> errorCode_ {};
      // Error message
      shared_ptr<string> errorMsg_ {};
    };

    class ErrorCheckConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorCheckConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(LinkErrorConfigs, linkErrorConfigs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorCheckConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(LinkErrorConfigs, linkErrorConfigs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ErrorCheckConfigs() = default ;
      ErrorCheckConfigs(const ErrorCheckConfigs &) = default ;
      ErrorCheckConfigs(ErrorCheckConfigs &&) = default ;
      ErrorCheckConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorCheckConfigs() = default ;
      ErrorCheckConfigs& operator=(const ErrorCheckConfigs &) = default ;
      ErrorCheckConfigs& operator=(ErrorCheckConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LinkErrorConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkErrorConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, LinkErrorConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        LinkErrorConfigs() = default ;
        LinkErrorConfigs(const LinkErrorConfigs &) = default ;
        LinkErrorConfigs(LinkErrorConfigs &&) = default ;
        LinkErrorConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LinkErrorConfigs() = default ;
        LinkErrorConfigs& operator=(const LinkErrorConfigs &) = default ;
        LinkErrorConfigs& operator=(LinkErrorConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->showName_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LinkErrorConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline LinkErrorConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LinkErrorConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Name of the check item configuration, unique within the same check item.
        shared_ptr<string> name_ {};
        // Display name of the user\\"s check configuration.
        shared_ptr<string> showName_ {};
        // The type of the parameter that caused the error:
        // - repair: Repair parameter
        // - custom: Custom configuration parameter
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->linkErrorConfigs_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ErrorCheckConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ErrorCheckConfigs& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // linkErrorConfigs Field Functions 
      bool hasLinkErrorConfigs() const { return this->linkErrorConfigs_ != nullptr;};
      void deleteLinkErrorConfigs() { this->linkErrorConfigs_ = nullptr;};
      inline const vector<ErrorCheckConfigs::LinkErrorConfigs> & getLinkErrorConfigs() const { DARABONBA_PTR_GET_CONST(linkErrorConfigs_, vector<ErrorCheckConfigs::LinkErrorConfigs>) };
      inline vector<ErrorCheckConfigs::LinkErrorConfigs> getLinkErrorConfigs() { DARABONBA_PTR_GET(linkErrorConfigs_, vector<ErrorCheckConfigs::LinkErrorConfigs>) };
      inline ErrorCheckConfigs& setLinkErrorConfigs(const vector<ErrorCheckConfigs::LinkErrorConfigs> & linkErrorConfigs) { DARABONBA_PTR_SET_VALUE(linkErrorConfigs_, linkErrorConfigs) };
      inline ErrorCheckConfigs& setLinkErrorConfigs(vector<ErrorCheckConfigs::LinkErrorConfigs> && linkErrorConfigs) { DARABONBA_PTR_SET_RVALUE(linkErrorConfigs_, linkErrorConfigs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ErrorCheckConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ErrorCheckConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ErrorCheckConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Error code.
      shared_ptr<string> errorCode_ {};
      // Error message.
      shared_ptr<string> errorMsg_ {};
      // Related configurations causing this error.
      shared_ptr<vector<ErrorCheckConfigs::LinkErrorConfigs>> linkErrorConfigs_ {};
      // Name of the custom configuration item for the check item, unique within the same check item.
      shared_ptr<string> name_ {};
      // Type of the erroneous parameter:
      // - custom: Custom configuration parameter
      shared_ptr<string> type_ {};
      // User-configured value string for the custom configuration item of the check item.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->errorCheckConfigs_ == nullptr
        && this->errorCheckCustomConfig_ == nullptr && this->errorRepairConfigs_ == nullptr && this->requestId_ == nullptr; };
    // errorCheckConfigs Field Functions 
    bool hasErrorCheckConfigs() const { return this->errorCheckConfigs_ != nullptr;};
    void deleteErrorCheckConfigs() { this->errorCheckConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs> & getErrorCheckConfigs() const { DARABONBA_PTR_GET_CONST(errorCheckConfigs_, vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs>) };
    inline vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs> getErrorCheckConfigs() { DARABONBA_PTR_GET(errorCheckConfigs_, vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs>) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckConfigs(const vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs> & errorCheckConfigs) { DARABONBA_PTR_SET_VALUE(errorCheckConfigs_, errorCheckConfigs) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckConfigs(vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs> && errorCheckConfigs) { DARABONBA_PTR_SET_RVALUE(errorCheckConfigs_, errorCheckConfigs) };


    // errorCheckCustomConfig Field Functions 
    bool hasErrorCheckCustomConfig() const { return this->errorCheckCustomConfig_ != nullptr;};
    void deleteErrorCheckCustomConfig() { this->errorCheckCustomConfig_ = nullptr;};
    inline const VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig & getErrorCheckCustomConfig() const { DARABONBA_PTR_GET_CONST(errorCheckCustomConfig_, VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig getErrorCheckCustomConfig() { DARABONBA_PTR_GET(errorCheckCustomConfig_, VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckCustomConfig(const VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig & errorCheckCustomConfig) { DARABONBA_PTR_SET_VALUE(errorCheckCustomConfig_, errorCheckCustomConfig) };
    inline VerifyCheckCustomConfigResponseBody& setErrorCheckCustomConfig(VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig && errorCheckCustomConfig) { DARABONBA_PTR_SET_RVALUE(errorCheckCustomConfig_, errorCheckCustomConfig) };


    // errorRepairConfigs Field Functions 
    bool hasErrorRepairConfigs() const { return this->errorRepairConfigs_ != nullptr;};
    void deleteErrorRepairConfigs() { this->errorRepairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs> & getErrorRepairConfigs() const { DARABONBA_PTR_GET_CONST(errorRepairConfigs_, vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs>) };
    inline vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs> getErrorRepairConfigs() { DARABONBA_PTR_GET(errorRepairConfigs_, vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs>) };
    inline VerifyCheckCustomConfigResponseBody& setErrorRepairConfigs(const vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs> & errorRepairConfigs) { DARABONBA_PTR_SET_VALUE(errorRepairConfigs_, errorRepairConfigs) };
    inline VerifyCheckCustomConfigResponseBody& setErrorRepairConfigs(vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs> && errorRepairConfigs) { DARABONBA_PTR_SET_RVALUE(errorRepairConfigs_, errorRepairConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCheckCustomConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of check parameters with configuration errors.
    shared_ptr<vector<VerifyCheckCustomConfigResponseBody::ErrorCheckConfigs>> errorCheckConfigs_ {};
    // Check the error code returned by the custom check item.
    shared_ptr<VerifyCheckCustomConfigResponseBody::ErrorCheckCustomConfig> errorCheckCustomConfig_ {};
    // List of repair parameters with configuration check errors.
    shared_ptr<vector<VerifyCheckCustomConfigResponseBody::ErrorRepairConfigs>> errorRepairConfigs_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
