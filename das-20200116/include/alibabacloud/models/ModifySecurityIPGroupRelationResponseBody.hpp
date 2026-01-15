// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifySecurityIPGroupRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifySecurityIPGroupRelationResponseBody() = default ;
    ModifySecurityIPGroupRelationResponseBody(const ModifySecurityIPGroupRelationResponseBody &) = default ;
    ModifySecurityIPGroupRelationResponseBody(ModifySecurityIPGroupRelationResponseBody &&) = default ;
    ModifySecurityIPGroupRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityIPGroupRelationResponseBody() = default ;
    ModifySecurityIPGroupRelationResponseBody& operator=(const ModifySecurityIPGroupRelationResponseBody &) = default ;
    ModifySecurityIPGroupRelationResponseBody& operator=(ModifySecurityIPGroupRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GlobalSecurityIPGroupRel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalSecurityIPGroupRel& obj) { 
          DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
          DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalSecurityIPGroupRel& obj) { 
          DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
          DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        GlobalSecurityIPGroupRel() = default ;
        GlobalSecurityIPGroupRel(const GlobalSecurityIPGroupRel &) = default ;
        GlobalSecurityIPGroupRel(GlobalSecurityIPGroupRel &&) = default ;
        GlobalSecurityIPGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalSecurityIPGroupRel() = default ;
        GlobalSecurityIPGroupRel& operator=(const GlobalSecurityIPGroupRel &) = default ;
        GlobalSecurityIPGroupRel& operator=(GlobalSecurityIPGroupRel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->GIpList_ == nullptr
        && this->globalIgName_ == nullptr && this->globalSecurityGroupId_ == nullptr && this->regionId_ == nullptr; };
        // GIpList Field Functions 
        bool hasGIpList() const { return this->GIpList_ != nullptr;};
        void deleteGIpList() { this->GIpList_ = nullptr;};
        inline string getGIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
        inline GlobalSecurityIPGroupRel& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


        // globalIgName Field Functions 
        bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
        void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
        inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
        inline GlobalSecurityIPGroupRel& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


        // globalSecurityGroupId Field Functions 
        bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
        void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
        inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
        inline GlobalSecurityIPGroupRel& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GlobalSecurityIPGroupRel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        shared_ptr<string> GIpList_ {};
        shared_ptr<string> globalIgName_ {};
        shared_ptr<string> globalSecurityGroupId_ {};
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->globalSecurityIPGroupRel_ == nullptr
        && this->instanceId_ == nullptr; };
      // globalSecurityIPGroupRel Field Functions 
      bool hasGlobalSecurityIPGroupRel() const { return this->globalSecurityIPGroupRel_ != nullptr;};
      void deleteGlobalSecurityIPGroupRel() { this->globalSecurityIPGroupRel_ = nullptr;};
      inline const vector<Data::GlobalSecurityIPGroupRel> & getGlobalSecurityIPGroupRel() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroupRel_, vector<Data::GlobalSecurityIPGroupRel>) };
      inline vector<Data::GlobalSecurityIPGroupRel> getGlobalSecurityIPGroupRel() { DARABONBA_PTR_GET(globalSecurityIPGroupRel_, vector<Data::GlobalSecurityIPGroupRel>) };
      inline Data& setGlobalSecurityIPGroupRel(const vector<Data::GlobalSecurityIPGroupRel> & globalSecurityIPGroupRel) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };
      inline Data& setGlobalSecurityIPGroupRel(vector<Data::GlobalSecurityIPGroupRel> && globalSecurityIPGroupRel) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<vector<Data::GlobalSecurityIPGroupRel>> globalSecurityIPGroupRel_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifySecurityIPGroupRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifySecurityIPGroupRelationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifySecurityIPGroupRelationResponseBody::Data) };
    inline ModifySecurityIPGroupRelationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifySecurityIPGroupRelationResponseBody::Data) };
    inline ModifySecurityIPGroupRelationResponseBody& setData(const ModifySecurityIPGroupRelationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifySecurityIPGroupRelationResponseBody& setData(ModifySecurityIPGroupRelationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifySecurityIPGroupRelationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySecurityIPGroupRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModifySecurityIPGroupRelationResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // ListResult<InstanceSSL>
    shared_ptr<ModifySecurityIPGroupRelationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
