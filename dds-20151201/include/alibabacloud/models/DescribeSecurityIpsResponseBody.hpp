// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeSecurityIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpGroups, securityIpGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpGroups, securityIpGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
    };
    DescribeSecurityIpsResponseBody() = default ;
    DescribeSecurityIpsResponseBody(const DescribeSecurityIpsResponseBody &) = default ;
    DescribeSecurityIpsResponseBody(DescribeSecurityIpsResponseBody &&) = default ;
    DescribeSecurityIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIpsResponseBody() = default ;
    DescribeSecurityIpsResponseBody& operator=(const DescribeSecurityIpsResponseBody &) = default ;
    DescribeSecurityIpsResponseBody& operator=(DescribeSecurityIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityIpGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityIpGroups& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityIpGroup, securityIpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityIpGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityIpGroup, securityIpGroup_);
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
      class SecurityIpGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityIpGroup& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityIpGroupAttribute, securityIpGroupAttribute_);
          DARABONBA_PTR_TO_JSON(SecurityIpGroupName, securityIpGroupName_);
          DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityIpGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityIpGroupAttribute, securityIpGroupAttribute_);
          DARABONBA_PTR_FROM_JSON(SecurityIpGroupName, securityIpGroupName_);
          DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
        };
        SecurityIpGroup() = default ;
        SecurityIpGroup(const SecurityIpGroup &) = default ;
        SecurityIpGroup(SecurityIpGroup &&) = default ;
        SecurityIpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityIpGroup() = default ;
        SecurityIpGroup& operator=(const SecurityIpGroup &) = default ;
        SecurityIpGroup& operator=(SecurityIpGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityIpGroupAttribute_ == nullptr
        && this->securityIpGroupName_ == nullptr && this->securityIpList_ == nullptr; };
        // securityIpGroupAttribute Field Functions 
        bool hasSecurityIpGroupAttribute() const { return this->securityIpGroupAttribute_ != nullptr;};
        void deleteSecurityIpGroupAttribute() { this->securityIpGroupAttribute_ = nullptr;};
        inline string getSecurityIpGroupAttribute() const { DARABONBA_PTR_GET_DEFAULT(securityIpGroupAttribute_, "") };
        inline SecurityIpGroup& setSecurityIpGroupAttribute(string securityIpGroupAttribute) { DARABONBA_PTR_SET_VALUE(securityIpGroupAttribute_, securityIpGroupAttribute) };


        // securityIpGroupName Field Functions 
        bool hasSecurityIpGroupName() const { return this->securityIpGroupName_ != nullptr;};
        void deleteSecurityIpGroupName() { this->securityIpGroupName_ = nullptr;};
        inline string getSecurityIpGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityIpGroupName_, "") };
        inline SecurityIpGroup& setSecurityIpGroupName(string securityIpGroupName) { DARABONBA_PTR_SET_VALUE(securityIpGroupName_, securityIpGroupName) };


        // securityIpList Field Functions 
        bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
        void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
        inline string getSecurityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
        inline SecurityIpGroup& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


      protected:
        // The attribute of the IP address whitelist.
        shared_ptr<string> securityIpGroupAttribute_ {};
        // The name of the IP whitelist.
        shared_ptr<string> securityIpGroupName_ {};
        // The name of the IP whitelist.
        shared_ptr<string> securityIpList_ {};
      };

      virtual bool empty() const override { return this->securityIpGroup_ == nullptr; };
      // securityIpGroup Field Functions 
      bool hasSecurityIpGroup() const { return this->securityIpGroup_ != nullptr;};
      void deleteSecurityIpGroup() { this->securityIpGroup_ = nullptr;};
      inline const vector<SecurityIpGroups::SecurityIpGroup> & getSecurityIpGroup() const { DARABONBA_PTR_GET_CONST(securityIpGroup_, vector<SecurityIpGroups::SecurityIpGroup>) };
      inline vector<SecurityIpGroups::SecurityIpGroup> getSecurityIpGroup() { DARABONBA_PTR_GET(securityIpGroup_, vector<SecurityIpGroups::SecurityIpGroup>) };
      inline SecurityIpGroups& setSecurityIpGroup(const vector<SecurityIpGroups::SecurityIpGroup> & securityIpGroup) { DARABONBA_PTR_SET_VALUE(securityIpGroup_, securityIpGroup) };
      inline SecurityIpGroups& setSecurityIpGroup(vector<SecurityIpGroups::SecurityIpGroup> && securityIpGroup) { DARABONBA_PTR_SET_RVALUE(securityIpGroup_, securityIpGroup) };


    protected:
      shared_ptr<vector<SecurityIpGroups::SecurityIpGroup>> securityIpGroup_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityIpGroups_ == nullptr && this->securityIps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpGroups Field Functions 
    bool hasSecurityIpGroups() const { return this->securityIpGroups_ != nullptr;};
    void deleteSecurityIpGroups() { this->securityIpGroups_ = nullptr;};
    inline const DescribeSecurityIpsResponseBody::SecurityIpGroups & getSecurityIpGroups() const { DARABONBA_PTR_GET_CONST(securityIpGroups_, DescribeSecurityIpsResponseBody::SecurityIpGroups) };
    inline DescribeSecurityIpsResponseBody::SecurityIpGroups getSecurityIpGroups() { DARABONBA_PTR_GET(securityIpGroups_, DescribeSecurityIpsResponseBody::SecurityIpGroups) };
    inline DescribeSecurityIpsResponseBody& setSecurityIpGroups(const DescribeSecurityIpsResponseBody::SecurityIpGroups & securityIpGroups) { DARABONBA_PTR_SET_VALUE(securityIpGroups_, securityIpGroups) };
    inline DescribeSecurityIpsResponseBody& setSecurityIpGroups(DescribeSecurityIpsResponseBody::SecurityIpGroups && securityIpGroups) { DARABONBA_PTR_SET_RVALUE(securityIpGroups_, securityIpGroups) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline DescribeSecurityIpsResponseBody& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information of IP whitelists.
    shared_ptr<DescribeSecurityIpsResponseBody::SecurityIpGroups> securityIpGroups_ {};
    // The IP addresses in the default whitelist.
    shared_ptr<string> securityIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
