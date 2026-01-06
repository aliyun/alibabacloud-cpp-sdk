// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODY_HPP_
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
  class DescribeSecurityIPGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSecurityIPGroupResponseBody() = default ;
    DescribeSecurityIPGroupResponseBody(const DescribeSecurityIPGroupResponseBody &) = default ;
    DescribeSecurityIPGroupResponseBody(DescribeSecurityIPGroupResponseBody &&) = default ;
    DescribeSecurityIPGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupResponseBody() = default ;
    DescribeSecurityIPGroupResponseBody& operator=(const DescribeSecurityIPGroupResponseBody &) = default ;
    DescribeSecurityIPGroupResponseBody& operator=(DescribeSecurityIPGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityIpGroups, securityIpGroups_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityIpGroups, securityIpGroups_);
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
      class SecurityIpGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityIpGroups& obj) { 
          DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
          DARABONBA_PTR_TO_JSON(EngineInfoList, engineInfoList_);
          DARABONBA_PTR_TO_JSON(GEcsSgIdList, GEcsSgIdList_);
          DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
          DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityIpType, securityIpType_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityIpGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
          DARABONBA_PTR_FROM_JSON(EngineInfoList, engineInfoList_);
          DARABONBA_PTR_FROM_JSON(GEcsSgIdList, GEcsSgIdList_);
          DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
          DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
          DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityIpType, securityIpType_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
        };
        SecurityIpGroups() = default ;
        SecurityIpGroups(const SecurityIpGroups &) = default ;
        SecurityIpGroups(SecurityIpGroups &&) = default ;
        SecurityIpGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityIpGroups() = default ;
        SecurityIpGroups& operator=(const SecurityIpGroups &) = default ;
        SecurityIpGroups& operator=(SecurityIpGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EngineInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EngineInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
            DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
          };
          friend void from_json(const Darabonba::Json& j, EngineInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
            DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
          };
          EngineInfoList() = default ;
          EngineInfoList(const EngineInfoList &) = default ;
          EngineInfoList(EngineInfoList &&) = default ;
          EngineInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EngineInfoList() = default ;
          EngineInfoList& operator=(const EngineInfoList &) = default ;
          EngineInfoList& operator=(EngineInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->engineName_ == nullptr
        && this->instanceIds_ == nullptr && this->instanceNum_ == nullptr; };
          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline EngineInfoList& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceIds Field Functions 
          bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
          void deleteInstanceIds() { this->instanceIds_ = nullptr;};
          inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
          inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
          inline EngineInfoList& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
          inline EngineInfoList& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


          // instanceNum Field Functions 
          bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
          void deleteInstanceNum() { this->instanceNum_ = nullptr;};
          inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
          inline EngineInfoList& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


        protected:
          shared_ptr<string> engineName_ {};
          shared_ptr<vector<string>> instanceIds_ {};
          shared_ptr<int32_t> instanceNum_ {};
        };

        virtual bool empty() const override { return this->dbInstances_ == nullptr
        && this->engineInfoList_ == nullptr && this->GEcsSgIdList_ == nullptr && this->GIpList_ == nullptr && this->globalIgName_ == nullptr && this->globalSecurityGroupId_ == nullptr
        && this->regionId_ == nullptr && this->securityIpType_ == nullptr && this->uid_ == nullptr && this->userId_ == nullptr && this->whitelistNetType_ == nullptr; };
        // dbInstances Field Functions 
        bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
        void deleteDbInstances() { this->dbInstances_ = nullptr;};
        inline const vector<string> & getDbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, vector<string>) };
        inline vector<string> getDbInstances() { DARABONBA_PTR_GET(dbInstances_, vector<string>) };
        inline SecurityIpGroups& setDbInstances(const vector<string> & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
        inline SecurityIpGroups& setDbInstances(vector<string> && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


        // engineInfoList Field Functions 
        bool hasEngineInfoList() const { return this->engineInfoList_ != nullptr;};
        void deleteEngineInfoList() { this->engineInfoList_ = nullptr;};
        inline const vector<SecurityIpGroups::EngineInfoList> & getEngineInfoList() const { DARABONBA_PTR_GET_CONST(engineInfoList_, vector<SecurityIpGroups::EngineInfoList>) };
        inline vector<SecurityIpGroups::EngineInfoList> getEngineInfoList() { DARABONBA_PTR_GET(engineInfoList_, vector<SecurityIpGroups::EngineInfoList>) };
        inline SecurityIpGroups& setEngineInfoList(const vector<SecurityIpGroups::EngineInfoList> & engineInfoList) { DARABONBA_PTR_SET_VALUE(engineInfoList_, engineInfoList) };
        inline SecurityIpGroups& setEngineInfoList(vector<SecurityIpGroups::EngineInfoList> && engineInfoList) { DARABONBA_PTR_SET_RVALUE(engineInfoList_, engineInfoList) };


        // GEcsSgIdList Field Functions 
        bool hasGEcsSgIdList() const { return this->GEcsSgIdList_ != nullptr;};
        void deleteGEcsSgIdList() { this->GEcsSgIdList_ = nullptr;};
        inline string getGEcsSgIdList() const { DARABONBA_PTR_GET_DEFAULT(GEcsSgIdList_, "") };
        inline SecurityIpGroups& setGEcsSgIdList(string GEcsSgIdList) { DARABONBA_PTR_SET_VALUE(GEcsSgIdList_, GEcsSgIdList) };


        // GIpList Field Functions 
        bool hasGIpList() const { return this->GIpList_ != nullptr;};
        void deleteGIpList() { this->GIpList_ = nullptr;};
        inline string getGIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
        inline SecurityIpGroups& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


        // globalIgName Field Functions 
        bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
        void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
        inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
        inline SecurityIpGroups& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


        // globalSecurityGroupId Field Functions 
        bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
        void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
        inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
        inline SecurityIpGroups& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SecurityIpGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityIpType Field Functions 
        bool hasSecurityIpType() const { return this->securityIpType_ != nullptr;};
        void deleteSecurityIpType() { this->securityIpType_ = nullptr;};
        inline string getSecurityIpType() const { DARABONBA_PTR_GET_DEFAULT(securityIpType_, "") };
        inline SecurityIpGroups& setSecurityIpType(string securityIpType) { DARABONBA_PTR_SET_VALUE(securityIpType_, securityIpType) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline SecurityIpGroups& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SecurityIpGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // whitelistNetType Field Functions 
        bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
        void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
        inline string getWhitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
        inline SecurityIpGroups& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


      protected:
        shared_ptr<vector<string>> dbInstances_ {};
        shared_ptr<vector<SecurityIpGroups::EngineInfoList>> engineInfoList_ {};
        shared_ptr<string> GEcsSgIdList_ {};
        shared_ptr<string> GIpList_ {};
        shared_ptr<string> globalIgName_ {};
        shared_ptr<string> globalSecurityGroupId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> securityIpType_ {};
        shared_ptr<string> uid_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> whitelistNetType_ {};
      };

      virtual bool empty() const override { return this->securityIpGroups_ == nullptr; };
      // securityIpGroups Field Functions 
      bool hasSecurityIpGroups() const { return this->securityIpGroups_ != nullptr;};
      void deleteSecurityIpGroups() { this->securityIpGroups_ = nullptr;};
      inline const vector<Data::SecurityIpGroups> & getSecurityIpGroups() const { DARABONBA_PTR_GET_CONST(securityIpGroups_, vector<Data::SecurityIpGroups>) };
      inline vector<Data::SecurityIpGroups> getSecurityIpGroups() { DARABONBA_PTR_GET(securityIpGroups_, vector<Data::SecurityIpGroups>) };
      inline Data& setSecurityIpGroups(const vector<Data::SecurityIpGroups> & securityIpGroups) { DARABONBA_PTR_SET_VALUE(securityIpGroups_, securityIpGroups) };
      inline Data& setSecurityIpGroups(vector<Data::SecurityIpGroups> && securityIpGroups) { DARABONBA_PTR_SET_RVALUE(securityIpGroups_, securityIpGroups) };


    protected:
      shared_ptr<vector<Data::SecurityIpGroups>> securityIpGroups_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSecurityIPGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSecurityIPGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSecurityIPGroupResponseBody::Data) };
    inline DescribeSecurityIPGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSecurityIPGroupResponseBody::Data) };
    inline DescribeSecurityIPGroupResponseBody& setData(const DescribeSecurityIPGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSecurityIPGroupResponseBody& setData(DescribeSecurityIPGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSecurityIPGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIPGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSecurityIPGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // ListResult<InstanceSSL>
    shared_ptr<DescribeSecurityIPGroupResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
