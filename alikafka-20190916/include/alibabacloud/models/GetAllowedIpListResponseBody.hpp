// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAllowedIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllowedIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedList, allowedList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllowedIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedList, allowedList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAllowedIpListResponseBody() = default ;
    GetAllowedIpListResponseBody(const GetAllowedIpListResponseBody &) = default ;
    GetAllowedIpListResponseBody(GetAllowedIpListResponseBody &&) = default ;
    GetAllowedIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllowedIpListResponseBody() = default ;
    GetAllowedIpListResponseBody& operator=(const GetAllowedIpListResponseBody &) = default ;
    GetAllowedIpListResponseBody& operator=(GetAllowedIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AllowedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllowedList& obj) { 
        DARABONBA_PTR_TO_JSON(DeployType, deployType_);
        DARABONBA_PTR_TO_JSON(InternetList, internetList_);
        DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
      };
      friend void from_json(const Darabonba::Json& j, AllowedList& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
        DARABONBA_PTR_FROM_JSON(InternetList, internetList_);
        DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
      };
      AllowedList() = default ;
      AllowedList(const AllowedList &) = default ;
      AllowedList(AllowedList &&) = default ;
      AllowedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllowedList() = default ;
      AllowedList& operator=(const AllowedList &) = default ;
      AllowedList& operator=(AllowedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedIpGroup, allowedIpGroup_);
          DARABONBA_PTR_TO_JSON(AllowedIpList, allowedIpList_);
          DARABONBA_PTR_TO_JSON(BlackIPList, blackIPList_);
          DARABONBA_PTR_TO_JSON(BlackIPMap, blackIPMap_);
          DARABONBA_PTR_TO_JSON(PortRange, portRange_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
        };
        friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedIpGroup, allowedIpGroup_);
          DARABONBA_PTR_FROM_JSON(AllowedIpList, allowedIpList_);
          DARABONBA_PTR_FROM_JSON(BlackIPList, blackIPList_);
          DARABONBA_PTR_FROM_JSON(BlackIPMap, blackIPMap_);
          DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
        };
        VpcList() = default ;
        VpcList(const VpcList &) = default ;
        VpcList(VpcList &&) = default ;
        VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcList() = default ;
        VpcList& operator=(const VpcList &) = default ;
        VpcList& operator=(VpcList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedIpGroup_ == nullptr
        && this->allowedIpList_ == nullptr && this->blackIPList_ == nullptr && this->blackIPMap_ == nullptr && this->portRange_ == nullptr && this->securityGroupId_ == nullptr
        && this->userDefinedSharedSecurityGroup_ == nullptr; };
        // allowedIpGroup Field Functions 
        bool hasAllowedIpGroup() const { return this->allowedIpGroup_ != nullptr;};
        void deleteAllowedIpGroup() { this->allowedIpGroup_ = nullptr;};
        inline const map<string, string> & getAllowedIpGroup() const { DARABONBA_PTR_GET_CONST(allowedIpGroup_, map<string, string>) };
        inline map<string, string> getAllowedIpGroup() { DARABONBA_PTR_GET(allowedIpGroup_, map<string, string>) };
        inline VpcList& setAllowedIpGroup(const map<string, string> & allowedIpGroup) { DARABONBA_PTR_SET_VALUE(allowedIpGroup_, allowedIpGroup) };
        inline VpcList& setAllowedIpGroup(map<string, string> && allowedIpGroup) { DARABONBA_PTR_SET_RVALUE(allowedIpGroup_, allowedIpGroup) };


        // allowedIpList Field Functions 
        bool hasAllowedIpList() const { return this->allowedIpList_ != nullptr;};
        void deleteAllowedIpList() { this->allowedIpList_ = nullptr;};
        inline const vector<string> & getAllowedIpList() const { DARABONBA_PTR_GET_CONST(allowedIpList_, vector<string>) };
        inline vector<string> getAllowedIpList() { DARABONBA_PTR_GET(allowedIpList_, vector<string>) };
        inline VpcList& setAllowedIpList(const vector<string> & allowedIpList) { DARABONBA_PTR_SET_VALUE(allowedIpList_, allowedIpList) };
        inline VpcList& setAllowedIpList(vector<string> && allowedIpList) { DARABONBA_PTR_SET_RVALUE(allowedIpList_, allowedIpList) };


        // blackIPList Field Functions 
        bool hasBlackIPList() const { return this->blackIPList_ != nullptr;};
        void deleteBlackIPList() { this->blackIPList_ = nullptr;};
        inline const vector<string> & getBlackIPList() const { DARABONBA_PTR_GET_CONST(blackIPList_, vector<string>) };
        inline vector<string> getBlackIPList() { DARABONBA_PTR_GET(blackIPList_, vector<string>) };
        inline VpcList& setBlackIPList(const vector<string> & blackIPList) { DARABONBA_PTR_SET_VALUE(blackIPList_, blackIPList) };
        inline VpcList& setBlackIPList(vector<string> && blackIPList) { DARABONBA_PTR_SET_RVALUE(blackIPList_, blackIPList) };


        // blackIPMap Field Functions 
        bool hasBlackIPMap() const { return this->blackIPMap_ != nullptr;};
        void deleteBlackIPMap() { this->blackIPMap_ = nullptr;};
        inline const map<string, string> & getBlackIPMap() const { DARABONBA_PTR_GET_CONST(blackIPMap_, map<string, string>) };
        inline map<string, string> getBlackIPMap() { DARABONBA_PTR_GET(blackIPMap_, map<string, string>) };
        inline VpcList& setBlackIPMap(const map<string, string> & blackIPMap) { DARABONBA_PTR_SET_VALUE(blackIPMap_, blackIPMap) };
        inline VpcList& setBlackIPMap(map<string, string> && blackIPMap) { DARABONBA_PTR_SET_RVALUE(blackIPMap_, blackIPMap) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline VpcList& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline VpcList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // userDefinedSharedSecurityGroup Field Functions 
        bool hasUserDefinedSharedSecurityGroup() const { return this->userDefinedSharedSecurityGroup_ != nullptr;};
        void deleteUserDefinedSharedSecurityGroup() { this->userDefinedSharedSecurityGroup_ = nullptr;};
        inline bool getUserDefinedSharedSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(userDefinedSharedSecurityGroup_, false) };
        inline VpcList& setUserDefinedSharedSecurityGroup(bool userDefinedSharedSecurityGroup) { DARABONBA_PTR_SET_VALUE(userDefinedSharedSecurityGroup_, userDefinedSharedSecurityGroup) };


      protected:
        // The group to which the IP address whitelist belongs.
        shared_ptr<map<string, string>> allowedIpGroup_ {};
        // The information about the IP address whitelist.
        shared_ptr<vector<string>> allowedIpList_ {};
        shared_ptr<vector<string>> blackIPList_ {};
        shared_ptr<map<string, string>> blackIPMap_ {};
        // The port range. Valid value:
        // 
        // **9092/9092**.
        shared_ptr<string> portRange_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<bool> userDefinedSharedSecurityGroup_ {};
      };

      class InternetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternetList& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedIpGroup, allowedIpGroup_);
          DARABONBA_PTR_TO_JSON(AllowedIpList, allowedIpList_);
          DARABONBA_PTR_TO_JSON(BlackIPList, blackIPList_);
          DARABONBA_PTR_TO_JSON(BlackIPMap, blackIPMap_);
          DARABONBA_PTR_TO_JSON(PortRange, portRange_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
        };
        friend void from_json(const Darabonba::Json& j, InternetList& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedIpGroup, allowedIpGroup_);
          DARABONBA_PTR_FROM_JSON(AllowedIpList, allowedIpList_);
          DARABONBA_PTR_FROM_JSON(BlackIPList, blackIPList_);
          DARABONBA_PTR_FROM_JSON(BlackIPMap, blackIPMap_);
          DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
        };
        InternetList() = default ;
        InternetList(const InternetList &) = default ;
        InternetList(InternetList &&) = default ;
        InternetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InternetList() = default ;
        InternetList& operator=(const InternetList &) = default ;
        InternetList& operator=(InternetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedIpGroup_ == nullptr
        && this->allowedIpList_ == nullptr && this->blackIPList_ == nullptr && this->blackIPMap_ == nullptr && this->portRange_ == nullptr && this->securityGroupId_ == nullptr
        && this->userDefinedSharedSecurityGroup_ == nullptr; };
        // allowedIpGroup Field Functions 
        bool hasAllowedIpGroup() const { return this->allowedIpGroup_ != nullptr;};
        void deleteAllowedIpGroup() { this->allowedIpGroup_ = nullptr;};
        inline const map<string, string> & getAllowedIpGroup() const { DARABONBA_PTR_GET_CONST(allowedIpGroup_, map<string, string>) };
        inline map<string, string> getAllowedIpGroup() { DARABONBA_PTR_GET(allowedIpGroup_, map<string, string>) };
        inline InternetList& setAllowedIpGroup(const map<string, string> & allowedIpGroup) { DARABONBA_PTR_SET_VALUE(allowedIpGroup_, allowedIpGroup) };
        inline InternetList& setAllowedIpGroup(map<string, string> && allowedIpGroup) { DARABONBA_PTR_SET_RVALUE(allowedIpGroup_, allowedIpGroup) };


        // allowedIpList Field Functions 
        bool hasAllowedIpList() const { return this->allowedIpList_ != nullptr;};
        void deleteAllowedIpList() { this->allowedIpList_ = nullptr;};
        inline const vector<string> & getAllowedIpList() const { DARABONBA_PTR_GET_CONST(allowedIpList_, vector<string>) };
        inline vector<string> getAllowedIpList() { DARABONBA_PTR_GET(allowedIpList_, vector<string>) };
        inline InternetList& setAllowedIpList(const vector<string> & allowedIpList) { DARABONBA_PTR_SET_VALUE(allowedIpList_, allowedIpList) };
        inline InternetList& setAllowedIpList(vector<string> && allowedIpList) { DARABONBA_PTR_SET_RVALUE(allowedIpList_, allowedIpList) };


        // blackIPList Field Functions 
        bool hasBlackIPList() const { return this->blackIPList_ != nullptr;};
        void deleteBlackIPList() { this->blackIPList_ = nullptr;};
        inline const vector<string> & getBlackIPList() const { DARABONBA_PTR_GET_CONST(blackIPList_, vector<string>) };
        inline vector<string> getBlackIPList() { DARABONBA_PTR_GET(blackIPList_, vector<string>) };
        inline InternetList& setBlackIPList(const vector<string> & blackIPList) { DARABONBA_PTR_SET_VALUE(blackIPList_, blackIPList) };
        inline InternetList& setBlackIPList(vector<string> && blackIPList) { DARABONBA_PTR_SET_RVALUE(blackIPList_, blackIPList) };


        // blackIPMap Field Functions 
        bool hasBlackIPMap() const { return this->blackIPMap_ != nullptr;};
        void deleteBlackIPMap() { this->blackIPMap_ = nullptr;};
        inline const map<string, string> & getBlackIPMap() const { DARABONBA_PTR_GET_CONST(blackIPMap_, map<string, string>) };
        inline map<string, string> getBlackIPMap() { DARABONBA_PTR_GET(blackIPMap_, map<string, string>) };
        inline InternetList& setBlackIPMap(const map<string, string> & blackIPMap) { DARABONBA_PTR_SET_VALUE(blackIPMap_, blackIPMap) };
        inline InternetList& setBlackIPMap(map<string, string> && blackIPMap) { DARABONBA_PTR_SET_RVALUE(blackIPMap_, blackIPMap) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline InternetList& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline InternetList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // userDefinedSharedSecurityGroup Field Functions 
        bool hasUserDefinedSharedSecurityGroup() const { return this->userDefinedSharedSecurityGroup_ != nullptr;};
        void deleteUserDefinedSharedSecurityGroup() { this->userDefinedSharedSecurityGroup_ = nullptr;};
        inline bool getUserDefinedSharedSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(userDefinedSharedSecurityGroup_, false) };
        inline InternetList& setUserDefinedSharedSecurityGroup(bool userDefinedSharedSecurityGroup) { DARABONBA_PTR_SET_VALUE(userDefinedSharedSecurityGroup_, userDefinedSharedSecurityGroup) };


      protected:
        // The group to which the IP address whitelist belongs.
        shared_ptr<map<string, string>> allowedIpGroup_ {};
        // The information about the IP address whitelist.
        shared_ptr<vector<string>> allowedIpList_ {};
        shared_ptr<vector<string>> blackIPList_ {};
        shared_ptr<map<string, string>> blackIPMap_ {};
        // The port range. Valid value:
        // 
        // **9093/9093**.
        shared_ptr<string> portRange_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<bool> userDefinedSharedSecurityGroup_ {};
      };

      virtual bool empty() const override { return this->deployType_ == nullptr
        && this->internetList_ == nullptr && this->vpcList_ == nullptr; };
      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
      inline AllowedList& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // internetList Field Functions 
      bool hasInternetList() const { return this->internetList_ != nullptr;};
      void deleteInternetList() { this->internetList_ = nullptr;};
      inline const vector<AllowedList::InternetList> & getInternetList() const { DARABONBA_PTR_GET_CONST(internetList_, vector<AllowedList::InternetList>) };
      inline vector<AllowedList::InternetList> getInternetList() { DARABONBA_PTR_GET(internetList_, vector<AllowedList::InternetList>) };
      inline AllowedList& setInternetList(const vector<AllowedList::InternetList> & internetList) { DARABONBA_PTR_SET_VALUE(internetList_, internetList) };
      inline AllowedList& setInternetList(vector<AllowedList::InternetList> && internetList) { DARABONBA_PTR_SET_RVALUE(internetList_, internetList) };


      // vpcList Field Functions 
      bool hasVpcList() const { return this->vpcList_ != nullptr;};
      void deleteVpcList() { this->vpcList_ = nullptr;};
      inline const vector<AllowedList::VpcList> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<AllowedList::VpcList>) };
      inline vector<AllowedList::VpcList> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<AllowedList::VpcList>) };
      inline AllowedList& setVpcList(const vector<AllowedList::VpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
      inline AllowedList& setVpcList(vector<AllowedList::VpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


    protected:
      // The deployment mode of the instance. Valid values:
      // 
      // *   **4**: allows access from the Internet and a virtual private cloud (VPC).
      // *   **5**: allows access from a VPC.
      // 
      // >  Only integrators need to concern themselves with the value of this parameter.
      shared_ptr<int32_t> deployType_ {};
      // The whitelist for access from the Internet.
      shared_ptr<vector<AllowedList::InternetList>> internetList_ {};
      // The whitelist for access from a virtual private cloud (VPC).
      shared_ptr<vector<AllowedList::VpcList>> vpcList_ {};
    };

    virtual bool empty() const override { return this->allowedList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // allowedList Field Functions 
    bool hasAllowedList() const { return this->allowedList_ != nullptr;};
    void deleteAllowedList() { this->allowedList_ = nullptr;};
    inline const GetAllowedIpListResponseBody::AllowedList & getAllowedList() const { DARABONBA_PTR_GET_CONST(allowedList_, GetAllowedIpListResponseBody::AllowedList) };
    inline GetAllowedIpListResponseBody::AllowedList getAllowedList() { DARABONBA_PTR_GET(allowedList_, GetAllowedIpListResponseBody::AllowedList) };
    inline GetAllowedIpListResponseBody& setAllowedList(const GetAllowedIpListResponseBody::AllowedList & allowedList) { DARABONBA_PTR_SET_VALUE(allowedList_, allowedList) };
    inline GetAllowedIpListResponseBody& setAllowedList(GetAllowedIpListResponseBody::AllowedList && allowedList) { DARABONBA_PTR_SET_RVALUE(allowedList_, allowedList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAllowedIpListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAllowedIpListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllowedIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAllowedIpListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The IP address whitelist.
    shared_ptr<GetAllowedIpListResponseBody::AllowedList> allowedList_ {};
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
