// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConfigSetDetailResponseBody() = default ;
    ConfigSetDetailResponseBody(const ConfigSetDetailResponseBody &) = default ;
    ConfigSetDetailResponseBody(ConfigSetDetailResponseBody &&) = default ;
    ConfigSetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetDetailResponseBody() = default ;
    ConfigSetDetailResponseBody& operator=(const ConfigSetDetailResponseBody &) = default ;
    ConfigSetDetailResponseBody& operator=(ConfigSetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Detail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Detail& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
        DARABONBA_PTR_TO_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ValidationOption, validationOption_);
      };
      friend void from_json(const Darabonba::Json& j, Detail& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
        DARABONBA_PTR_FROM_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ValidationOption, validationOption_);
      };
      Detail() = default ;
      Detail(const Detail &) = default ;
      Detail(Detail &&) = default ;
      Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Detail() = default ;
      Detail& operator=(const Detail &) = default ;
      Detail& operator=(Detail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValidationOption : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidationOption& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(ForbiddenStatusList, forbiddenStatusList_);
          DARABONBA_PTR_TO_JSON(ForbiddenSubStatusList, forbiddenSubStatusList_);
        };
        friend void from_json(const Darabonba::Json& j, ValidationOption& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(ForbiddenStatusList, forbiddenStatusList_);
          DARABONBA_PTR_FROM_JSON(ForbiddenSubStatusList, forbiddenSubStatusList_);
        };
        ValidationOption() = default ;
        ValidationOption(const ValidationOption &) = default ;
        ValidationOption(ValidationOption &&) = default ;
        ValidationOption(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidationOption() = default ;
        ValidationOption& operator=(const ValidationOption &) = default ;
        ValidationOption& operator=(ValidationOption &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->forbiddenStatusList_ == nullptr && this->forbiddenSubStatusList_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline ValidationOption& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // forbiddenStatusList Field Functions 
        bool hasForbiddenStatusList() const { return this->forbiddenStatusList_ != nullptr;};
        void deleteForbiddenStatusList() { this->forbiddenStatusList_ = nullptr;};
        inline const vector<string> & getForbiddenStatusList() const { DARABONBA_PTR_GET_CONST(forbiddenStatusList_, vector<string>) };
        inline vector<string> getForbiddenStatusList() { DARABONBA_PTR_GET(forbiddenStatusList_, vector<string>) };
        inline ValidationOption& setForbiddenStatusList(const vector<string> & forbiddenStatusList) { DARABONBA_PTR_SET_VALUE(forbiddenStatusList_, forbiddenStatusList) };
        inline ValidationOption& setForbiddenStatusList(vector<string> && forbiddenStatusList) { DARABONBA_PTR_SET_RVALUE(forbiddenStatusList_, forbiddenStatusList) };


        // forbiddenSubStatusList Field Functions 
        bool hasForbiddenSubStatusList() const { return this->forbiddenSubStatusList_ != nullptr;};
        void deleteForbiddenSubStatusList() { this->forbiddenSubStatusList_ = nullptr;};
        inline const vector<string> & getForbiddenSubStatusList() const { DARABONBA_PTR_GET_CONST(forbiddenSubStatusList_, vector<string>) };
        inline vector<string> getForbiddenSubStatusList() { DARABONBA_PTR_GET(forbiddenSubStatusList_, vector<string>) };
        inline ValidationOption& setForbiddenSubStatusList(const vector<string> & forbiddenSubStatusList) { DARABONBA_PTR_SET_VALUE(forbiddenSubStatusList_, forbiddenSubStatusList) };
        inline ValidationOption& setForbiddenSubStatusList(vector<string> && forbiddenSubStatusList) { DARABONBA_PTR_SET_RVALUE(forbiddenSubStatusList_, forbiddenSubStatusList) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<vector<string>> forbiddenStatusList_ {};
        shared_ptr<vector<string>> forbiddenSubStatusList_ {};
      };

      class IpPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpPool& obj) { 
          DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
        };
        friend void from_json(const Darabonba::Json& j, IpPool& obj) { 
          DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
        };
        IpPool() = default ;
        IpPool(const IpPool &) = default ;
        IpPool(IpPool &&) = default ;
        IpPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpPool() = default ;
        IpPool& operator=(const IpPool &) = default ;
        IpPool& operator=(IpPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipPoolId_ == nullptr
        && this->ipPoolName_ == nullptr; };
        // ipPoolId Field Functions 
        bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
        void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
        inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
        inline IpPool& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


        // ipPoolName Field Functions 
        bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
        void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
        inline string getIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
        inline IpPool& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


      protected:
        // The associated IP pool ID.
        shared_ptr<string> ipPoolId_ {};
        // The associated IP pool name.
        shared_ptr<string> ipPoolName_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->ipPool_ == nullptr && this->isPublicChannelBackoff_ == nullptr && this->name_ == nullptr && this->validationOption_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Detail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Detail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipPool Field Functions 
      bool hasIpPool() const { return this->ipPool_ != nullptr;};
      void deleteIpPool() { this->ipPool_ = nullptr;};
      inline const Detail::IpPool & getIpPool() const { DARABONBA_PTR_GET_CONST(ipPool_, Detail::IpPool) };
      inline Detail::IpPool getIpPool() { DARABONBA_PTR_GET(ipPool_, Detail::IpPool) };
      inline Detail& setIpPool(const Detail::IpPool & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
      inline Detail& setIpPool(Detail::IpPool && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


      // isPublicChannelBackoff Field Functions 
      bool hasIsPublicChannelBackoff() const { return this->isPublicChannelBackoff_ != nullptr;};
      void deleteIsPublicChannelBackoff() { this->isPublicChannelBackoff_ = nullptr;};
      inline bool getIsPublicChannelBackoff() const { DARABONBA_PTR_GET_DEFAULT(isPublicChannelBackoff_, false) };
      inline Detail& setIsPublicChannelBackoff(bool isPublicChannelBackoff) { DARABONBA_PTR_SET_VALUE(isPublicChannelBackoff_, isPublicChannelBackoff) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Detail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // validationOption Field Functions 
      bool hasValidationOption() const { return this->validationOption_ != nullptr;};
      void deleteValidationOption() { this->validationOption_ = nullptr;};
      inline const Detail::ValidationOption & getValidationOption() const { DARABONBA_PTR_GET_CONST(validationOption_, Detail::ValidationOption) };
      inline Detail::ValidationOption getValidationOption() { DARABONBA_PTR_GET(validationOption_, Detail::ValidationOption) };
      inline Detail& setValidationOption(const Detail::ValidationOption & validationOption) { DARABONBA_PTR_SET_VALUE(validationOption_, validationOption) };
      inline Detail& setValidationOption(Detail::ValidationOption && validationOption) { DARABONBA_PTR_SET_RVALUE(validationOption_, validationOption) };


    protected:
      // The description.
      shared_ptr<string> description_ {};
      // The configuration set ID.
      shared_ptr<string> id_ {};
      // The associated IP pool.
      shared_ptr<Detail::IpPool> ipPool_ {};
      shared_ptr<bool> isPublicChannelBackoff_ {};
      // The configuration set name.
      shared_ptr<string> name_ {};
      shared_ptr<Detail::ValidationOption> validationOption_ {};
    };

    virtual bool empty() const override { return this->detail_ == nullptr
        && this->requestId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const ConfigSetDetailResponseBody::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, ConfigSetDetailResponseBody::Detail) };
    inline ConfigSetDetailResponseBody::Detail getDetail() { DARABONBA_PTR_GET(detail_, ConfigSetDetailResponseBody::Detail) };
    inline ConfigSetDetailResponseBody& setDetail(const ConfigSetDetailResponseBody::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline ConfigSetDetailResponseBody& setDetail(ConfigSetDetailResponseBody::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigSetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration set information.
    shared_ptr<ConfigSetDetailResponseBody::Detail> detail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
