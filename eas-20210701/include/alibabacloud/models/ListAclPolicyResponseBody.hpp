// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListAclPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(InternetAclPolicyList, internetAclPolicyList_);
      DARABONBA_PTR_TO_JSON(IntranetVpcAclPolicyList, intranetVpcAclPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(InternetAclPolicyList, internetAclPolicyList_);
      DARABONBA_PTR_FROM_JSON(IntranetVpcAclPolicyList, intranetVpcAclPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAclPolicyResponseBody() = default ;
    ListAclPolicyResponseBody(const ListAclPolicyResponseBody &) = default ;
    ListAclPolicyResponseBody(ListAclPolicyResponseBody &&) = default ;
    ListAclPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclPolicyResponseBody() = default ;
    ListAclPolicyResponseBody& operator=(const ListAclPolicyResponseBody &) = default ;
    ListAclPolicyResponseBody& operator=(ListAclPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IntranetVpcAclPolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntranetVpcAclPolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyList_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, IntranetVpcAclPolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyList_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      IntranetVpcAclPolicyList() = default ;
      IntranetVpcAclPolicyList(const IntranetVpcAclPolicyList &) = default ;
      IntranetVpcAclPolicyList(IntranetVpcAclPolicyList &&) = default ;
      IntranetVpcAclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IntranetVpcAclPolicyList() = default ;
      IntranetVpcAclPolicyList& operator=(const IntranetVpcAclPolicyList &) = default ;
      IntranetVpcAclPolicyList& operator=(IntranetVpcAclPolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclPolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclPolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Entry, entry_);
        };
        friend void from_json(const Darabonba::Json& j, AclPolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Entry, entry_);
        };
        AclPolicyList() = default ;
        AclPolicyList(const AclPolicyList &) = default ;
        AclPolicyList(AclPolicyList &&) = default ;
        AclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclPolicyList() = default ;
        AclPolicyList& operator=(const AclPolicyList &) = default ;
        AclPolicyList& operator=(AclPolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->entry_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline AclPolicyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // entry Field Functions 
        bool hasEntry() const { return this->entry_ != nullptr;};
        void deleteEntry() { this->entry_ = nullptr;};
        inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
        inline AclPolicyList& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      protected:
        // The comment on the IP CIDR block in the VPC that can access the private gateway over the internal network.
        shared_ptr<string> comment_ {};
        // The IP CIDR block in the VPC that can access the private gateway over the internal network.
        shared_ptr<string> entry_ {};
      };

      virtual bool empty() const override { return this->aclPolicyList_ == nullptr
        && this->vpcId_ == nullptr; };
      // aclPolicyList Field Functions 
      bool hasAclPolicyList() const { return this->aclPolicyList_ != nullptr;};
      void deleteAclPolicyList() { this->aclPolicyList_ = nullptr;};
      inline const vector<IntranetVpcAclPolicyList::AclPolicyList> & getAclPolicyList() const { DARABONBA_PTR_GET_CONST(aclPolicyList_, vector<IntranetVpcAclPolicyList::AclPolicyList>) };
      inline vector<IntranetVpcAclPolicyList::AclPolicyList> getAclPolicyList() { DARABONBA_PTR_GET(aclPolicyList_, vector<IntranetVpcAclPolicyList::AclPolicyList>) };
      inline IntranetVpcAclPolicyList& setAclPolicyList(const vector<IntranetVpcAclPolicyList::AclPolicyList> & aclPolicyList) { DARABONBA_PTR_SET_VALUE(aclPolicyList_, aclPolicyList) };
      inline IntranetVpcAclPolicyList& setAclPolicyList(vector<IntranetVpcAclPolicyList::AclPolicyList> && aclPolicyList) { DARABONBA_PTR_SET_RVALUE(aclPolicyList_, aclPolicyList) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IntranetVpcAclPolicyList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The whitelisted IP CIDR blocks in the VPC that can access the private gateway over the internal network.
      shared_ptr<vector<IntranetVpcAclPolicyList::AclPolicyList>> aclPolicyList_ {};
      // The VPC ID. For more information about how to obtain the VPC ID, see DescribeVpcs.
      shared_ptr<string> vpcId_ {};
    };

    class InternetAclPolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InternetAclPolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyList_);
      };
      friend void from_json(const Darabonba::Json& j, InternetAclPolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyList_);
      };
      InternetAclPolicyList() = default ;
      InternetAclPolicyList(const InternetAclPolicyList &) = default ;
      InternetAclPolicyList(InternetAclPolicyList &&) = default ;
      InternetAclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InternetAclPolicyList() = default ;
      InternetAclPolicyList& operator=(const InternetAclPolicyList &) = default ;
      InternetAclPolicyList& operator=(InternetAclPolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclPolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclPolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Entry, entry_);
        };
        friend void from_json(const Darabonba::Json& j, AclPolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Entry, entry_);
        };
        AclPolicyList() = default ;
        AclPolicyList(const AclPolicyList &) = default ;
        AclPolicyList(AclPolicyList &&) = default ;
        AclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclPolicyList() = default ;
        AclPolicyList& operator=(const AclPolicyList &) = default ;
        AclPolicyList& operator=(AclPolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->entry_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline AclPolicyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // entry Field Functions 
        bool hasEntry() const { return this->entry_ != nullptr;};
        void deleteEntry() { this->entry_ = nullptr;};
        inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
        inline AclPolicyList& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      protected:
        // The comment on the IP CIDR block in the VPC that can access the private gateway over the Internet.
        shared_ptr<string> comment_ {};
        // The IP CIDR block in the VPC that can access the private gateway over the Internet.
        shared_ptr<string> entry_ {};
      };

      virtual bool empty() const override { return this->aclPolicyList_ == nullptr; };
      // aclPolicyList Field Functions 
      bool hasAclPolicyList() const { return this->aclPolicyList_ != nullptr;};
      void deleteAclPolicyList() { this->aclPolicyList_ = nullptr;};
      inline const vector<InternetAclPolicyList::AclPolicyList> & getAclPolicyList() const { DARABONBA_PTR_GET_CONST(aclPolicyList_, vector<InternetAclPolicyList::AclPolicyList>) };
      inline vector<InternetAclPolicyList::AclPolicyList> getAclPolicyList() { DARABONBA_PTR_GET(aclPolicyList_, vector<InternetAclPolicyList::AclPolicyList>) };
      inline InternetAclPolicyList& setAclPolicyList(const vector<InternetAclPolicyList::AclPolicyList> & aclPolicyList) { DARABONBA_PTR_SET_VALUE(aclPolicyList_, aclPolicyList) };
      inline InternetAclPolicyList& setAclPolicyList(vector<InternetAclPolicyList::AclPolicyList> && aclPolicyList) { DARABONBA_PTR_SET_RVALUE(aclPolicyList_, aclPolicyList) };


    protected:
      // The whitelisted IP CIDR blocks in the VPC that can access the private gateway over the Internet.
      shared_ptr<vector<InternetAclPolicyList::AclPolicyList>> aclPolicyList_ {};
    };

    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->internetAclPolicyList_ == nullptr && this->intranetVpcAclPolicyList_ == nullptr && this->requestId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListAclPolicyResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // internetAclPolicyList Field Functions 
    bool hasInternetAclPolicyList() const { return this->internetAclPolicyList_ != nullptr;};
    void deleteInternetAclPolicyList() { this->internetAclPolicyList_ = nullptr;};
    inline const vector<ListAclPolicyResponseBody::InternetAclPolicyList> & getInternetAclPolicyList() const { DARABONBA_PTR_GET_CONST(internetAclPolicyList_, vector<ListAclPolicyResponseBody::InternetAclPolicyList>) };
    inline vector<ListAclPolicyResponseBody::InternetAclPolicyList> getInternetAclPolicyList() { DARABONBA_PTR_GET(internetAclPolicyList_, vector<ListAclPolicyResponseBody::InternetAclPolicyList>) };
    inline ListAclPolicyResponseBody& setInternetAclPolicyList(const vector<ListAclPolicyResponseBody::InternetAclPolicyList> & internetAclPolicyList) { DARABONBA_PTR_SET_VALUE(internetAclPolicyList_, internetAclPolicyList) };
    inline ListAclPolicyResponseBody& setInternetAclPolicyList(vector<ListAclPolicyResponseBody::InternetAclPolicyList> && internetAclPolicyList) { DARABONBA_PTR_SET_RVALUE(internetAclPolicyList_, internetAclPolicyList) };


    // intranetVpcAclPolicyList Field Functions 
    bool hasIntranetVpcAclPolicyList() const { return this->intranetVpcAclPolicyList_ != nullptr;};
    void deleteIntranetVpcAclPolicyList() { this->intranetVpcAclPolicyList_ = nullptr;};
    inline const vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList> & getIntranetVpcAclPolicyList() const { DARABONBA_PTR_GET_CONST(intranetVpcAclPolicyList_, vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList>) };
    inline vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList> getIntranetVpcAclPolicyList() { DARABONBA_PTR_GET(intranetVpcAclPolicyList_, vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList>) };
    inline ListAclPolicyResponseBody& setIntranetVpcAclPolicyList(const vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList> & intranetVpcAclPolicyList) { DARABONBA_PTR_SET_VALUE(intranetVpcAclPolicyList_, intranetVpcAclPolicyList) };
    inline ListAclPolicyResponseBody& setIntranetVpcAclPolicyList(vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList> && intranetVpcAclPolicyList) { DARABONBA_PTR_SET_RVALUE(intranetVpcAclPolicyList_, intranetVpcAclPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAclPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The private gateway ID.
    shared_ptr<string> gatewayId_ {};
    // The access control policies of the private gateway over the Internet.
    shared_ptr<vector<ListAclPolicyResponseBody::InternetAclPolicyList>> internetAclPolicyList_ {};
    // The access control policies of the private gateway over the internal network.
    shared_ptr<vector<ListAclPolicyResponseBody::IntranetVpcAclPolicyList>> intranetVpcAclPolicyList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
