// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYIPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYIPGROUPRESPONSEBODY_HPP_
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
  class CreateSecurityIPGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSecurityIPGroupResponseBody() = default ;
    CreateSecurityIPGroupResponseBody(const CreateSecurityIPGroupResponseBody &) = default ;
    CreateSecurityIPGroupResponseBody(CreateSecurityIPGroupResponseBody &&) = default ;
    CreateSecurityIPGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityIPGroupResponseBody() = default ;
    CreateSecurityIPGroupResponseBody& operator=(const CreateSecurityIPGroupResponseBody &) = default ;
    CreateSecurityIPGroupResponseBody& operator=(CreateSecurityIPGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
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
      class GlobalSecurityIPGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalSecurityIPGroup& obj) { 
          DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
          DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityIpType, securityIpType_);
          DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalSecurityIPGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
          DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityIpType, securityIpType_);
          DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
        };
        GlobalSecurityIPGroup() = default ;
        GlobalSecurityIPGroup(const GlobalSecurityIPGroup &) = default ;
        GlobalSecurityIPGroup(GlobalSecurityIPGroup &&) = default ;
        GlobalSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalSecurityIPGroup() = default ;
        GlobalSecurityIPGroup& operator=(const GlobalSecurityIPGroup &) = default ;
        GlobalSecurityIPGroup& operator=(GlobalSecurityIPGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->GIpList_ == nullptr
        && this->globalIgName_ == nullptr && this->globalSecurityGroupId_ == nullptr && this->regionId_ == nullptr && this->securityIpType_ == nullptr && this->whitelistNetType_ == nullptr; };
        // GIpList Field Functions 
        bool hasGIpList() const { return this->GIpList_ != nullptr;};
        void deleteGIpList() { this->GIpList_ = nullptr;};
        inline string getGIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
        inline GlobalSecurityIPGroup& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


        // globalIgName Field Functions 
        bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
        void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
        inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
        inline GlobalSecurityIPGroup& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


        // globalSecurityGroupId Field Functions 
        bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
        void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
        inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
        inline GlobalSecurityIPGroup& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GlobalSecurityIPGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityIpType Field Functions 
        bool hasSecurityIpType() const { return this->securityIpType_ != nullptr;};
        void deleteSecurityIpType() { this->securityIpType_ = nullptr;};
        inline string getSecurityIpType() const { DARABONBA_PTR_GET_DEFAULT(securityIpType_, "") };
        inline GlobalSecurityIPGroup& setSecurityIpType(string securityIpType) { DARABONBA_PTR_SET_VALUE(securityIpType_, securityIpType) };


        // whitelistNetType Field Functions 
        bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
        void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
        inline string getWhitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
        inline GlobalSecurityIPGroup& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


      protected:
        shared_ptr<string> GIpList_ {};
        shared_ptr<string> globalIgName_ {};
        shared_ptr<string> globalSecurityGroupId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> securityIpType_ {};
        shared_ptr<string> whitelistNetType_ {};
      };

      virtual bool empty() const override { return this->globalSecurityIPGroup_ == nullptr; };
      // globalSecurityIPGroup Field Functions 
      bool hasGlobalSecurityIPGroup() const { return this->globalSecurityIPGroup_ != nullptr;};
      void deleteGlobalSecurityIPGroup() { this->globalSecurityIPGroup_ = nullptr;};
      inline const vector<Data::GlobalSecurityIPGroup> & getGlobalSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroup_, vector<Data::GlobalSecurityIPGroup>) };
      inline vector<Data::GlobalSecurityIPGroup> getGlobalSecurityIPGroup() { DARABONBA_PTR_GET(globalSecurityIPGroup_, vector<Data::GlobalSecurityIPGroup>) };
      inline Data& setGlobalSecurityIPGroup(const vector<Data::GlobalSecurityIPGroup> & globalSecurityIPGroup) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };
      inline Data& setGlobalSecurityIPGroup(vector<Data::GlobalSecurityIPGroup> && globalSecurityIPGroup) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };


    protected:
      shared_ptr<vector<Data::GlobalSecurityIPGroup>> globalSecurityIPGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSecurityIPGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSecurityIPGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSecurityIPGroupResponseBody::Data) };
    inline CreateSecurityIPGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSecurityIPGroupResponseBody::Data) };
    inline CreateSecurityIPGroupResponseBody& setData(const CreateSecurityIPGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSecurityIPGroupResponseBody& setData(CreateSecurityIPGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSecurityIPGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecurityIPGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSecurityIPGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // ListResult<InstanceSSL>
    shared_ptr<CreateSecurityIPGroupResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
