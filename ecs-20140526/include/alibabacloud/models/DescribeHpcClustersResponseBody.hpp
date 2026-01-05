// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODY_HPP_
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
  class DescribeHpcClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHpcClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HpcClusters, hpcClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHpcClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HpcClusters, hpcClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHpcClustersResponseBody() = default ;
    DescribeHpcClustersResponseBody(const DescribeHpcClustersResponseBody &) = default ;
    DescribeHpcClustersResponseBody(DescribeHpcClustersResponseBody &&) = default ;
    DescribeHpcClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHpcClustersResponseBody() = default ;
    DescribeHpcClustersResponseBody& operator=(const DescribeHpcClustersResponseBody &) = default ;
    DescribeHpcClustersResponseBody& operator=(DescribeHpcClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HpcClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HpcClusters& obj) { 
        DARABONBA_PTR_TO_JSON(HpcCluster, hpcCluster_);
      };
      friend void from_json(const Darabonba::Json& j, HpcClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(HpcCluster, hpcCluster_);
      };
      HpcClusters() = default ;
      HpcClusters(const HpcClusters &) = default ;
      HpcClusters(HpcClusters &&) = default ;
      HpcClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HpcClusters() = default ;
      HpcClusters& operator=(const HpcClusters &) = default ;
      HpcClusters& operator=(HpcClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HpcCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HpcCluster& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, HpcCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        HpcCluster() = default ;
        HpcCluster(const HpcCluster &) = default ;
        HpcCluster(HpcCluster &&) = default ;
        HpcCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HpcCluster() = default ;
        HpcCluster& operator=(const HpcCluster &) = default ;
        HpcCluster& operator=(HpcCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->hpcClusterId_ == nullptr && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HpcCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hpcClusterId Field Functions 
        bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
        void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
        inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
        inline HpcCluster& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HpcCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the HPC cluster.
        shared_ptr<string> description_ {};
        // The description of the HPC cluster.
        shared_ptr<string> hpcClusterId_ {};
        // The name of the HPC cluster.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->hpcCluster_ == nullptr; };
      // hpcCluster Field Functions 
      bool hasHpcCluster() const { return this->hpcCluster_ != nullptr;};
      void deleteHpcCluster() { this->hpcCluster_ = nullptr;};
      inline const vector<HpcClusters::HpcCluster> & getHpcCluster() const { DARABONBA_PTR_GET_CONST(hpcCluster_, vector<HpcClusters::HpcCluster>) };
      inline vector<HpcClusters::HpcCluster> getHpcCluster() { DARABONBA_PTR_GET(hpcCluster_, vector<HpcClusters::HpcCluster>) };
      inline HpcClusters& setHpcCluster(const vector<HpcClusters::HpcCluster> & hpcCluster) { DARABONBA_PTR_SET_VALUE(hpcCluster_, hpcCluster) };
      inline HpcClusters& setHpcCluster(vector<HpcClusters::HpcCluster> && hpcCluster) { DARABONBA_PTR_SET_RVALUE(hpcCluster_, hpcCluster) };


    protected:
      shared_ptr<vector<HpcClusters::HpcCluster>> hpcCluster_ {};
    };

    virtual bool empty() const override { return this->hpcClusters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hpcClusters Field Functions 
    bool hasHpcClusters() const { return this->hpcClusters_ != nullptr;};
    void deleteHpcClusters() { this->hpcClusters_ = nullptr;};
    inline const DescribeHpcClustersResponseBody::HpcClusters & getHpcClusters() const { DARABONBA_PTR_GET_CONST(hpcClusters_, DescribeHpcClustersResponseBody::HpcClusters) };
    inline DescribeHpcClustersResponseBody::HpcClusters getHpcClusters() { DARABONBA_PTR_GET(hpcClusters_, DescribeHpcClustersResponseBody::HpcClusters) };
    inline DescribeHpcClustersResponseBody& setHpcClusters(const DescribeHpcClustersResponseBody::HpcClusters & hpcClusters) { DARABONBA_PTR_SET_VALUE(hpcClusters_, hpcClusters) };
    inline DescribeHpcClustersResponseBody& setHpcClusters(DescribeHpcClustersResponseBody::HpcClusters && hpcClusters) { DARABONBA_PTR_SET_RVALUE(hpcClusters_, hpcClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHpcClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHpcClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHpcClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHpcClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The name of the HPC cluster.
    shared_ptr<DescribeHpcClustersResponseBody::HpcClusters> hpcClusters_ {};
    // Details about the HPC clusters. The value is an array that consists of the information of each HPC cluster.
    shared_ptr<int32_t> pageNumber_ {};
    // The page number.
    shared_ptr<int32_t> pageSize_ {};
    // The total number of HPC clusters.
    shared_ptr<string> requestId_ {};
    // The ID of the HPC cluster.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
