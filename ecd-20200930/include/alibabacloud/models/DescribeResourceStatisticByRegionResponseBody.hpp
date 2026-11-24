// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESTATISTICBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESTATISTICBYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceStatisticByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceStatisticByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceStatisticByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeResourceStatisticByRegionResponseBody() = default ;
    DescribeResourceStatisticByRegionResponseBody(const DescribeResourceStatisticByRegionResponseBody &) = default ;
    DescribeResourceStatisticByRegionResponseBody(DescribeResourceStatisticByRegionResponseBody &&) = default ;
    DescribeResourceStatisticByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceStatisticByRegionResponseBody() = default ;
    DescribeResourceStatisticByRegionResponseBody& operator=(const DescribeResourceStatisticByRegionResponseBody &) = default ;
    DescribeResourceStatisticByRegionResponseBody& operator=(DescribeResourceStatisticByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
        DARABONBA_PTR_TO_JSON(RegionStatistics, regionStatistics_);
      };
      friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionStatistics, regionStatistics_);
      };
      Statistic() = default ;
      Statistic(const Statistic &) = default ;
      Statistic(Statistic &&) = default ;
      Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistic() = default ;
      Statistic& operator=(const Statistic &) = default ;
      Statistic& operator=(Statistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(AssignedEndUserCount, assignedEndUserCount_);
          DARABONBA_PTR_TO_JSON(ConnectedEndUserCount, connectedEndUserCount_);
          DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
          DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
          DARABONBA_PTR_TO_JSON(NetworkPackageCount, networkPackageCount_);
          DARABONBA_PTR_TO_JSON(PolicyGroupCount, policyGroupCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RegionStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(AssignedEndUserCount, assignedEndUserCount_);
          DARABONBA_PTR_FROM_JSON(ConnectedEndUserCount, connectedEndUserCount_);
          DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
          DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
          DARABONBA_PTR_FROM_JSON(NetworkPackageCount, networkPackageCount_);
          DARABONBA_PTR_FROM_JSON(PolicyGroupCount, policyGroupCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RegionStatistics() = default ;
        RegionStatistics(const RegionStatistics &) = default ;
        RegionStatistics(RegionStatistics &&) = default ;
        RegionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionStatistics() = default ;
        RegionStatistics& operator=(const RegionStatistics &) = default ;
        RegionStatistics& operator=(RegionStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assignedEndUserCount_ == nullptr
        && this->connectedEndUserCount_ == nullptr && this->desktopCount_ == nullptr && this->desktopGroupCount_ == nullptr && this->networkPackageCount_ == nullptr && this->policyGroupCount_ == nullptr
        && this->regionId_ == nullptr; };
        // assignedEndUserCount Field Functions 
        bool hasAssignedEndUserCount() const { return this->assignedEndUserCount_ != nullptr;};
        void deleteAssignedEndUserCount() { this->assignedEndUserCount_ = nullptr;};
        inline int64_t getAssignedEndUserCount() const { DARABONBA_PTR_GET_DEFAULT(assignedEndUserCount_, 0L) };
        inline RegionStatistics& setAssignedEndUserCount(int64_t assignedEndUserCount) { DARABONBA_PTR_SET_VALUE(assignedEndUserCount_, assignedEndUserCount) };


        // connectedEndUserCount Field Functions 
        bool hasConnectedEndUserCount() const { return this->connectedEndUserCount_ != nullptr;};
        void deleteConnectedEndUserCount() { this->connectedEndUserCount_ = nullptr;};
        inline int64_t getConnectedEndUserCount() const { DARABONBA_PTR_GET_DEFAULT(connectedEndUserCount_, 0L) };
        inline RegionStatistics& setConnectedEndUserCount(int64_t connectedEndUserCount) { DARABONBA_PTR_SET_VALUE(connectedEndUserCount_, connectedEndUserCount) };


        // desktopCount Field Functions 
        bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
        void deleteDesktopCount() { this->desktopCount_ = nullptr;};
        inline int64_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0L) };
        inline RegionStatistics& setDesktopCount(int64_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


        // desktopGroupCount Field Functions 
        bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
        void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
        inline int64_t getDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0L) };
        inline RegionStatistics& setDesktopGroupCount(int64_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


        // networkPackageCount Field Functions 
        bool hasNetworkPackageCount() const { return this->networkPackageCount_ != nullptr;};
        void deleteNetworkPackageCount() { this->networkPackageCount_ = nullptr;};
        inline int64_t getNetworkPackageCount() const { DARABONBA_PTR_GET_DEFAULT(networkPackageCount_, 0L) };
        inline RegionStatistics& setNetworkPackageCount(int64_t networkPackageCount) { DARABONBA_PTR_SET_VALUE(networkPackageCount_, networkPackageCount) };


        // policyGroupCount Field Functions 
        bool hasPolicyGroupCount() const { return this->policyGroupCount_ != nullptr;};
        void deletePolicyGroupCount() { this->policyGroupCount_ = nullptr;};
        inline int64_t getPolicyGroupCount() const { DARABONBA_PTR_GET_DEFAULT(policyGroupCount_, 0L) };
        inline RegionStatistics& setPolicyGroupCount(int64_t policyGroupCount) { DARABONBA_PTR_SET_VALUE(policyGroupCount_, policyGroupCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionStatistics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The number of assigned users in the current region.
        shared_ptr<int64_t> assignedEndUserCount_ {};
        // The number of connected users in the current region.
        shared_ptr<int64_t> connectedEndUserCount_ {};
        // The number of cloud desktops in the current region.
        shared_ptr<int64_t> desktopCount_ {};
        // The number of shared cloud desktops in the current region.
        shared_ptr<int64_t> desktopGroupCount_ {};
        // The number of network packages in the current region.
        shared_ptr<int64_t> networkPackageCount_ {};
        // The number of policy groups in the current region.
        shared_ptr<int64_t> policyGroupCount_ {};
        // The region ID. You can call the [DescribeRegions](https://next.api.aliyun.com/document/ecd/2020-09-30/DescribeRegions) operation to query the regions supported by WUYING Workspace.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->regionStatistics_ == nullptr; };
      // regionStatistics Field Functions 
      bool hasRegionStatistics() const { return this->regionStatistics_ != nullptr;};
      void deleteRegionStatistics() { this->regionStatistics_ = nullptr;};
      inline const vector<Statistic::RegionStatistics> & getRegionStatistics() const { DARABONBA_PTR_GET_CONST(regionStatistics_, vector<Statistic::RegionStatistics>) };
      inline vector<Statistic::RegionStatistics> getRegionStatistics() { DARABONBA_PTR_GET(regionStatistics_, vector<Statistic::RegionStatistics>) };
      inline Statistic& setRegionStatistics(const vector<Statistic::RegionStatistics> & regionStatistics) { DARABONBA_PTR_SET_VALUE(regionStatistics_, regionStatistics) };
      inline Statistic& setRegionStatistics(vector<Statistic::RegionStatistics> && regionStatistics) { DARABONBA_PTR_SET_RVALUE(regionStatistics_, regionStatistics) };


    protected:
      // The statistics by region.
      shared_ptr<vector<Statistic::RegionStatistics>> regionStatistics_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistic_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceStatisticByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const DescribeResourceStatisticByRegionResponseBody::Statistic & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, DescribeResourceStatisticByRegionResponseBody::Statistic) };
    inline DescribeResourceStatisticByRegionResponseBody::Statistic getStatistic() { DARABONBA_PTR_GET(statistic_, DescribeResourceStatisticByRegionResponseBody::Statistic) };
    inline DescribeResourceStatisticByRegionResponseBody& setStatistic(const DescribeResourceStatisticByRegionResponseBody::Statistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeResourceStatisticByRegionResponseBody& setStatistic(DescribeResourceStatisticByRegionResponseBody::Statistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics information.
    shared_ptr<DescribeResourceStatisticByRegionResponseBody::Statistic> statistic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
