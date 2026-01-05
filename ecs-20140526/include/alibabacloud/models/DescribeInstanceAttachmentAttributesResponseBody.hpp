// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeInstanceAttachmentAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttachmentAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttachmentAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceAttachmentAttributesResponseBody() = default ;
    DescribeInstanceAttachmentAttributesResponseBody(const DescribeInstanceAttachmentAttributesResponseBody &) = default ;
    DescribeInstanceAttachmentAttributesResponseBody(DescribeInstanceAttachmentAttributesResponseBody &&) = default ;
    DescribeInstanceAttachmentAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttachmentAttributesResponseBody() = default ;
    DescribeInstanceAttachmentAttributesResponseBody& operator=(const DescribeInstanceAttachmentAttributesResponseBody &) = default ;
    DescribeInstanceAttachmentAttributesResponseBody& operator=(DescribeInstanceAttachmentAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->privatePoolOptionsId_ == nullptr && this->privatePoolOptionsMatchCriteria_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // privatePoolOptionsId Field Functions 
        bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
        void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
        inline string getPrivatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
        inline Instance& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


        // privatePoolOptionsMatchCriteria Field Functions 
        bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
        void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
        inline string getPrivatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
        inline Instance& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


      protected:
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The ID of the private pool. If the value of `PrivatePoolOptionsMatchCriteria` is `Open`, the value of PrivatePoolOptionsId is the ID of the private pool that is automatically matched to the instance.
        shared_ptr<string> privatePoolOptionsId_ {};
        // The match mode of the private pool. Valid values:
        // 
        // *   Open: open private pool. Instances automatically match an open private pool.
        // *   Target: specified private pool. Instances match a specified private pool.
        // *   None: no private pool. Instances do not use private pools.
        shared_ptr<string> privatePoolOptionsMatchCriteria_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstanceAttachmentAttributesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstanceAttachmentAttributesResponseBody::Instances) };
    inline DescribeInstanceAttachmentAttributesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstanceAttachmentAttributesResponseBody::Instances) };
    inline DescribeInstanceAttachmentAttributesResponseBody& setInstances(const DescribeInstanceAttachmentAttributesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceAttachmentAttributesResponseBody& setInstances(DescribeInstanceAttachmentAttributesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceAttachmentAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceAttachmentAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttachmentAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceAttachmentAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the association between private pools and instances.
    shared_ptr<DescribeInstanceAttachmentAttributesResponseBody::Instances> instances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
