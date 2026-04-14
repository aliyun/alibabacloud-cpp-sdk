// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Detail& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
        shared_ptr<string> ipPoolId_ {};
        shared_ptr<string> ipPoolName_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->ipPool_ == nullptr && this->name_ == nullptr; };
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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Detail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> id_ {};
      shared_ptr<Detail::IpPool> ipPool_ {};
      shared_ptr<string> name_ {};
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
    shared_ptr<ConfigSetDetailResponseBody::Detail> detail_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
