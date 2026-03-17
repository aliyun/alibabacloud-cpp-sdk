// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeACLAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acrs, acrs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acrs, acrs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeACLAttributeResponseBody() = default ;
    DescribeACLAttributeResponseBody(const DescribeACLAttributeResponseBody &) = default ;
    DescribeACLAttributeResponseBody(DescribeACLAttributeResponseBody &&) = default ;
    DescribeACLAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLAttributeResponseBody() = default ;
    DescribeACLAttributeResponseBody& operator=(const DescribeACLAttributeResponseBody &) = default ;
    DescribeACLAttributeResponseBody& operator=(DescribeACLAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acrs& obj) { 
        DARABONBA_PTR_TO_JSON(Acr, acr_);
      };
      friend void from_json(const Darabonba::Json& j, Acrs& obj) { 
        DARABONBA_PTR_FROM_JSON(Acr, acr_);
      };
      Acrs() = default ;
      Acrs(const Acrs &) = default ;
      Acrs(Acrs &&) = default ;
      Acrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acrs() = default ;
      Acrs& operator=(const Acrs &) = default ;
      Acrs& operator=(Acrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Acr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Acr& obj) { 
          DARABONBA_PTR_TO_JSON(AclId, aclId_);
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(AcrId, acrId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
          DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
          DARABONBA_PTR_TO_JSON(Direction, direction_);
          DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
          DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Acr& obj) { 
          DARABONBA_PTR_FROM_JSON(AclId, aclId_);
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(AcrId, acrId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
          DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
          DARABONBA_PTR_FROM_JSON(Direction, direction_);
          DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
          DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Acr() = default ;
        Acr(const Acr &) = default ;
        Acr(Acr &&) = default ;
        Acr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Acr() = default ;
        Acr& operator=(const Acr &) = default ;
        Acr& operator=(Acr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DpiSignatureIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DpiSignatureIds& obj) { 
            DARABONBA_PTR_TO_JSON(DpiSignatureId, dpiSignatureId_);
          };
          friend void from_json(const Darabonba::Json& j, DpiSignatureIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DpiSignatureId, dpiSignatureId_);
          };
          DpiSignatureIds() = default ;
          DpiSignatureIds(const DpiSignatureIds &) = default ;
          DpiSignatureIds(DpiSignatureIds &&) = default ;
          DpiSignatureIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DpiSignatureIds() = default ;
          DpiSignatureIds& operator=(const DpiSignatureIds &) = default ;
          DpiSignatureIds& operator=(DpiSignatureIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dpiSignatureId_ == nullptr; };
          // dpiSignatureId Field Functions 
          bool hasDpiSignatureId() const { return this->dpiSignatureId_ != nullptr;};
          void deleteDpiSignatureId() { this->dpiSignatureId_ = nullptr;};
          inline const vector<string> & getDpiSignatureId() const { DARABONBA_PTR_GET_CONST(dpiSignatureId_, vector<string>) };
          inline vector<string> getDpiSignatureId() { DARABONBA_PTR_GET(dpiSignatureId_, vector<string>) };
          inline DpiSignatureIds& setDpiSignatureId(const vector<string> & dpiSignatureId) { DARABONBA_PTR_SET_VALUE(dpiSignatureId_, dpiSignatureId) };
          inline DpiSignatureIds& setDpiSignatureId(vector<string> && dpiSignatureId) { DARABONBA_PTR_SET_RVALUE(dpiSignatureId_, dpiSignatureId) };


        protected:
          shared_ptr<vector<string>> dpiSignatureId_ {};
        };

        class DpiGroupIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DpiGroupIds& obj) { 
            DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, DpiGroupIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
          };
          DpiGroupIds() = default ;
          DpiGroupIds(const DpiGroupIds &) = default ;
          DpiGroupIds(DpiGroupIds &&) = default ;
          DpiGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DpiGroupIds() = default ;
          DpiGroupIds& operator=(const DpiGroupIds &) = default ;
          DpiGroupIds& operator=(DpiGroupIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dpiGroupId_ == nullptr; };
          // dpiGroupId Field Functions 
          bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
          void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
          inline const vector<string> & getDpiGroupId() const { DARABONBA_PTR_GET_CONST(dpiGroupId_, vector<string>) };
          inline vector<string> getDpiGroupId() { DARABONBA_PTR_GET(dpiGroupId_, vector<string>) };
          inline DpiGroupIds& setDpiGroupId(const vector<string> & dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };
          inline DpiGroupIds& setDpiGroupId(vector<string> && dpiGroupId) { DARABONBA_PTR_SET_RVALUE(dpiGroupId_, dpiGroupId) };


        protected:
          shared_ptr<vector<string>> dpiGroupId_ {};
        };

        virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclType_ == nullptr && this->acrId_ == nullptr && this->description_ == nullptr && this->destCidr_ == nullptr && this->destPortRange_ == nullptr
        && this->direction_ == nullptr && this->dpiGroupIds_ == nullptr && this->dpiSignatureIds_ == nullptr && this->gmtCreate_ == nullptr && this->ipProtocol_ == nullptr
        && this->name_ == nullptr && this->policy_ == nullptr && this->priority_ == nullptr && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr
        && this->type_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline Acr& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline Acr& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // acrId Field Functions 
        bool hasAcrId() const { return this->acrId_ != nullptr;};
        void deleteAcrId() { this->acrId_ = nullptr;};
        inline string getAcrId() const { DARABONBA_PTR_GET_DEFAULT(acrId_, "") };
        inline Acr& setAcrId(string acrId) { DARABONBA_PTR_SET_VALUE(acrId_, acrId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Acr& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destCidr Field Functions 
        bool hasDestCidr() const { return this->destCidr_ != nullptr;};
        void deleteDestCidr() { this->destCidr_ = nullptr;};
        inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
        inline Acr& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


        // destPortRange Field Functions 
        bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
        void deleteDestPortRange() { this->destPortRange_ = nullptr;};
        inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
        inline Acr& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


        // direction Field Functions 
        bool hasDirection() const { return this->direction_ != nullptr;};
        void deleteDirection() { this->direction_ = nullptr;};
        inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
        inline Acr& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


        // dpiGroupIds Field Functions 
        bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
        void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
        inline const Acr::DpiGroupIds & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, Acr::DpiGroupIds) };
        inline Acr::DpiGroupIds getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, Acr::DpiGroupIds) };
        inline Acr& setDpiGroupIds(const Acr::DpiGroupIds & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
        inline Acr& setDpiGroupIds(Acr::DpiGroupIds && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


        // dpiSignatureIds Field Functions 
        bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
        void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
        inline const Acr::DpiSignatureIds & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, Acr::DpiSignatureIds) };
        inline Acr::DpiSignatureIds getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, Acr::DpiSignatureIds) };
        inline Acr& setDpiSignatureIds(const Acr::DpiSignatureIds & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
        inline Acr& setDpiSignatureIds(Acr::DpiSignatureIds && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Acr& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline Acr& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Acr& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Acr& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Acr& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // sourceCidr Field Functions 
        bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
        void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
        inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
        inline Acr& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline Acr& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Acr& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> aclId_ {};
        shared_ptr<string> aclType_ {};
        shared_ptr<string> acrId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> destCidr_ {};
        shared_ptr<string> destPortRange_ {};
        shared_ptr<string> direction_ {};
        shared_ptr<Acr::DpiGroupIds> dpiGroupIds_ {};
        shared_ptr<Acr::DpiSignatureIds> dpiSignatureIds_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<string> ipProtocol_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> policy_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> sourceCidr_ {};
        shared_ptr<string> sourcePortRange_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->acr_ == nullptr; };
      // acr Field Functions 
      bool hasAcr() const { return this->acr_ != nullptr;};
      void deleteAcr() { this->acr_ = nullptr;};
      inline const vector<Acrs::Acr> & getAcr() const { DARABONBA_PTR_GET_CONST(acr_, vector<Acrs::Acr>) };
      inline vector<Acrs::Acr> getAcr() { DARABONBA_PTR_GET(acr_, vector<Acrs::Acr>) };
      inline Acrs& setAcr(const vector<Acrs::Acr> & acr) { DARABONBA_PTR_SET_VALUE(acr_, acr) };
      inline Acrs& setAcr(vector<Acrs::Acr> && acr) { DARABONBA_PTR_SET_RVALUE(acr_, acr) };


    protected:
      shared_ptr<vector<Acrs::Acr>> acr_ {};
    };

    virtual bool empty() const override { return this->acrs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // acrs Field Functions 
    bool hasAcrs() const { return this->acrs_ != nullptr;};
    void deleteAcrs() { this->acrs_ = nullptr;};
    inline const DescribeACLAttributeResponseBody::Acrs & getAcrs() const { DARABONBA_PTR_GET_CONST(acrs_, DescribeACLAttributeResponseBody::Acrs) };
    inline DescribeACLAttributeResponseBody::Acrs getAcrs() { DARABONBA_PTR_GET(acrs_, DescribeACLAttributeResponseBody::Acrs) };
    inline DescribeACLAttributeResponseBody& setAcrs(const DescribeACLAttributeResponseBody::Acrs & acrs) { DARABONBA_PTR_SET_VALUE(acrs_, acrs) };
    inline DescribeACLAttributeResponseBody& setAcrs(DescribeACLAttributeResponseBody::Acrs && acrs) { DARABONBA_PTR_SET_RVALUE(acrs_, acrs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeACLAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeACLAttributeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeACLAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeACLAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeACLAttributeResponseBody::Acrs> acrs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
