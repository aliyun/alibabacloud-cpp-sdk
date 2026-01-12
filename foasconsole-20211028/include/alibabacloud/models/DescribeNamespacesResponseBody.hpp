// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeNamespacesResponseBody() = default ;
    DescribeNamespacesResponseBody(const DescribeNamespacesResponseBody &) = default ;
    DescribeNamespacesResponseBody(DescribeNamespacesResponseBody &&) = default ;
    DescribeNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBody() = default ;
    DescribeNamespacesResponseBody& operator=(const DescribeNamespacesResponseBody &) = default ;
    DescribeNamespacesResponseBody& operator=(DescribeNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Namespaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpec_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_TO_JSON(ResourceUsed, resourceUsed_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpec_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_FROM_JSON(ResourceUsed, resourceUsed_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Namespaces() = default ;
      Namespaces(const Namespaces &) = default ;
      Namespaces(Namespaces &&) = default ;
      Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Namespaces() = default ;
      Namespaces& operator=(const Namespaces &) = default ;
      Namespaces& operator=(Namespaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class ResourceUsed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceUsed& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceUsed& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ResourceUsed() = default ;
        ResourceUsed(const ResourceUsed &) = default ;
        ResourceUsed(ResourceUsed &&) = default ;
        ResourceUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceUsed() = default ;
        ResourceUsed& operator=(const ResourceUsed &) = default ;
        ResourceUsed& operator=(ResourceUsed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->cu_ == nullptr && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
        inline ResourceUsed& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
        inline ResourceUsed& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline float getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0.0) };
        inline ResourceUsed& setMemoryGB(float memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<float> cpu_ {};
        shared_ptr<float> cu_ {};
        shared_ptr<float> memoryGB_ {};
      };

      class ResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ResourceSpec() = default ;
        ResourceSpec(const ResourceSpec &) = default ;
        ResourceSpec(ResourceSpec &&) = default ;
        ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceSpec() = default ;
        ResourceSpec& operator=(const ResourceSpec &) = default ;
        ResourceSpec& operator=(ResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      class GuaranteedResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GuaranteedResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, GuaranteedResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        GuaranteedResourceSpec() = default ;
        GuaranteedResourceSpec(const GuaranteedResourceSpec &) = default ;
        GuaranteedResourceSpec(GuaranteedResourceSpec &&) = default ;
        GuaranteedResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GuaranteedResourceSpec() = default ;
        GuaranteedResourceSpec& operator=(const GuaranteedResourceSpec &) = default ;
        GuaranteedResourceSpec& operator=(GuaranteedResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline GuaranteedResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline GuaranteedResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      class ElasticResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ElasticResourceSpec() = default ;
        ElasticResourceSpec(const ElasticResourceSpec &) = default ;
        ElasticResourceSpec(ElasticResourceSpec &&) = default ;
        ElasticResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticResourceSpec() = default ;
        ElasticResourceSpec& operator=(const ElasticResourceSpec &) = default ;
        ElasticResourceSpec& operator=(ElasticResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ElasticResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ElasticResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      virtual bool empty() const override { return this->elasticResourceSpec_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->guaranteedResourceSpec_ == nullptr && this->ha_ == nullptr && this->namespace_ == nullptr
        && this->resourceSpec_ == nullptr && this->resourceUsed_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // elasticResourceSpec Field Functions 
      bool hasElasticResourceSpec() const { return this->elasticResourceSpec_ != nullptr;};
      void deleteElasticResourceSpec() { this->elasticResourceSpec_ = nullptr;};
      inline const Namespaces::ElasticResourceSpec & getElasticResourceSpec() const { DARABONBA_PTR_GET_CONST(elasticResourceSpec_, Namespaces::ElasticResourceSpec) };
      inline Namespaces::ElasticResourceSpec getElasticResourceSpec() { DARABONBA_PTR_GET(elasticResourceSpec_, Namespaces::ElasticResourceSpec) };
      inline Namespaces& setElasticResourceSpec(const Namespaces::ElasticResourceSpec & elasticResourceSpec) { DARABONBA_PTR_SET_VALUE(elasticResourceSpec_, elasticResourceSpec) };
      inline Namespaces& setElasticResourceSpec(Namespaces::ElasticResourceSpec && elasticResourceSpec) { DARABONBA_PTR_SET_RVALUE(elasticResourceSpec_, elasticResourceSpec) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Namespaces& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Namespaces& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // guaranteedResourceSpec Field Functions 
      bool hasGuaranteedResourceSpec() const { return this->guaranteedResourceSpec_ != nullptr;};
      void deleteGuaranteedResourceSpec() { this->guaranteedResourceSpec_ = nullptr;};
      inline const Namespaces::GuaranteedResourceSpec & getGuaranteedResourceSpec() const { DARABONBA_PTR_GET_CONST(guaranteedResourceSpec_, Namespaces::GuaranteedResourceSpec) };
      inline Namespaces::GuaranteedResourceSpec getGuaranteedResourceSpec() { DARABONBA_PTR_GET(guaranteedResourceSpec_, Namespaces::GuaranteedResourceSpec) };
      inline Namespaces& setGuaranteedResourceSpec(const Namespaces::GuaranteedResourceSpec & guaranteedResourceSpec) { DARABONBA_PTR_SET_VALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };
      inline Namespaces& setGuaranteedResourceSpec(Namespaces::GuaranteedResourceSpec && guaranteedResourceSpec) { DARABONBA_PTR_SET_RVALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };


      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline Namespaces& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Namespaces& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline const Namespaces::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Namespaces::ResourceSpec) };
      inline Namespaces::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Namespaces::ResourceSpec) };
      inline Namespaces& setResourceSpec(const Namespaces::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
      inline Namespaces& setResourceSpec(Namespaces::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


      // resourceUsed Field Functions 
      bool hasResourceUsed() const { return this->resourceUsed_ != nullptr;};
      void deleteResourceUsed() { this->resourceUsed_ = nullptr;};
      inline const Namespaces::ResourceUsed & getResourceUsed() const { DARABONBA_PTR_GET_CONST(resourceUsed_, Namespaces::ResourceUsed) };
      inline Namespaces::ResourceUsed getResourceUsed() { DARABONBA_PTR_GET(resourceUsed_, Namespaces::ResourceUsed) };
      inline Namespaces& setResourceUsed(const Namespaces::ResourceUsed & resourceUsed) { DARABONBA_PTR_SET_VALUE(resourceUsed_, resourceUsed) };
      inline Namespaces& setResourceUsed(Namespaces::ResourceUsed && resourceUsed) { DARABONBA_PTR_SET_RVALUE(resourceUsed_, resourceUsed) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Namespaces& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Namespaces::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Namespaces::Tags>) };
      inline vector<Namespaces::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Namespaces::Tags>) };
      inline Namespaces& setTags(const vector<Namespaces::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Namespaces& setTags(vector<Namespaces::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<Namespaces::ElasticResourceSpec> elasticResourceSpec_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<Namespaces::GuaranteedResourceSpec> guaranteedResourceSpec_ {};
      shared_ptr<bool> ha_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<Namespaces::ResourceSpec> resourceSpec_ {};
      shared_ptr<Namespaces::ResourceUsed> resourceUsed_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Namespaces::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->namespaces_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr
        && this->totalPage_ == nullptr; };
    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<DescribeNamespacesResponseBody::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<DescribeNamespacesResponseBody::Namespaces>) };
    inline vector<DescribeNamespacesResponseBody::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<DescribeNamespacesResponseBody::Namespaces>) };
    inline DescribeNamespacesResponseBody& setNamespaces(const vector<DescribeNamespacesResponseBody::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline DescribeNamespacesResponseBody& setNamespaces(vector<DescribeNamespacesResponseBody::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeNamespacesResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNamespacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNamespacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeNamespacesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeNamespacesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<DescribeNamespacesResponseBody::Namespaces>> namespaces_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
