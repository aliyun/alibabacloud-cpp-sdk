// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClassicLinkInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassicLinkInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Links, links_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassicLinkInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Links, links_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClassicLinkInstancesResponseBody() = default ;
    DescribeClassicLinkInstancesResponseBody(const DescribeClassicLinkInstancesResponseBody &) = default ;
    DescribeClassicLinkInstancesResponseBody(DescribeClassicLinkInstancesResponseBody &&) = default ;
    DescribeClassicLinkInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassicLinkInstancesResponseBody() = default ;
    DescribeClassicLinkInstancesResponseBody& operator=(const DescribeClassicLinkInstancesResponseBody &) = default ;
    DescribeClassicLinkInstancesResponseBody& operator=(DescribeClassicLinkInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Links : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Links& obj) { 
        DARABONBA_PTR_TO_JSON(Link, link_);
      };
      friend void from_json(const Darabonba::Json& j, Links& obj) { 
        DARABONBA_PTR_FROM_JSON(Link, link_);
      };
      Links() = default ;
      Links(const Links &) = default ;
      Links(Links &&) = default ;
      Links(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Links() = default ;
      Links& operator=(const Links &) = default ;
      Links& operator=(Links &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Link : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Link& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Link& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Link() = default ;
        Link(const Link &) = default ;
        Link(Link &&) = default ;
        Link(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Link() = default ;
        Link& operator=(const Link &) = default ;
        Link& operator=(Link &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->vpcId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Link& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Link& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->link_ == nullptr; };
      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline const vector<Links::Link> & getLink() const { DARABONBA_PTR_GET_CONST(link_, vector<Links::Link>) };
      inline vector<Links::Link> getLink() { DARABONBA_PTR_GET(link_, vector<Links::Link>) };
      inline Links& setLink(const vector<Links::Link> & link) { DARABONBA_PTR_SET_VALUE(link_, link) };
      inline Links& setLink(vector<Links::Link> && link) { DARABONBA_PTR_SET_RVALUE(link_, link) };


    protected:
      shared_ptr<vector<Links::Link>> link_ {};
    };

    virtual bool empty() const override { return this->links_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const DescribeClassicLinkInstancesResponseBody::Links & getLinks() const { DARABONBA_PTR_GET_CONST(links_, DescribeClassicLinkInstancesResponseBody::Links) };
    inline DescribeClassicLinkInstancesResponseBody::Links getLinks() { DARABONBA_PTR_GET(links_, DescribeClassicLinkInstancesResponseBody::Links) };
    inline DescribeClassicLinkInstancesResponseBody& setLinks(const DescribeClassicLinkInstancesResponseBody::Links & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline DescribeClassicLinkInstancesResponseBody& setLinks(DescribeClassicLinkInstancesResponseBody::Links && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClassicLinkInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the ClassicLink connections between the instances reside in the classic network and VPCs.
    shared_ptr<DescribeClassicLinkInstancesResponseBody::Links> links_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of ClassicLink connections.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
