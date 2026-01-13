// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody(DescribeHealthStatusResponseBody &&) = default ;
    DescribeHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody& operator=(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody& operator=(DescribeHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Status : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Status& obj) { 
        DARABONBA_PTR_TO_JSON(adbgp_segment_disk_usage_percent_max, adbgpSegmentDiskUsagePercentMax_);
        DARABONBA_PTR_TO_JSON(adbpg_connection_status, adbpgConnectionStatus_);
        DARABONBA_PTR_TO_JSON(adbpg_disk_status, adbpgDiskStatus_);
        DARABONBA_PTR_TO_JSON(adbpg_disk_usage_percent, adbpgDiskUsagePercent_);
        DARABONBA_PTR_TO_JSON(adbpg_instance_cold_data_gb, adbpgInstanceColdDataGb_);
        DARABONBA_PTR_TO_JSON(adbpg_instance_hot_data_gb, adbpgInstanceHotDataGb_);
        DARABONBA_PTR_TO_JSON(adbpg_instance_total_data_gb, adbpgInstanceTotalDataGb_);
        DARABONBA_PTR_TO_JSON(adbpg_master_disk_usage_percent_max, adbpgMasterDiskUsagePercentMax_);
        DARABONBA_PTR_TO_JSON(adbpg_master_status, adbpgMasterStatus_);
        DARABONBA_PTR_TO_JSON(adbpg_segment_status, adbpgSegmentStatus_);
        DARABONBA_PTR_TO_JSON(adbpg_status, adbpgStatus_);
        DARABONBA_PTR_TO_JSON(node_master_connection_status, nodeMasterConnectionStatus_);
        DARABONBA_PTR_TO_JSON(node_master_status, nodeMasterStatus_);
        DARABONBA_PTR_TO_JSON(node_segment_connection_status, nodeSegmentConnectionStatus_);
        DARABONBA_PTR_TO_JSON(node_segment_disk_status, nodeSegmentDiskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Status& obj) { 
        DARABONBA_PTR_FROM_JSON(adbgp_segment_disk_usage_percent_max, adbgpSegmentDiskUsagePercentMax_);
        DARABONBA_PTR_FROM_JSON(adbpg_connection_status, adbpgConnectionStatus_);
        DARABONBA_PTR_FROM_JSON(adbpg_disk_status, adbpgDiskStatus_);
        DARABONBA_PTR_FROM_JSON(adbpg_disk_usage_percent, adbpgDiskUsagePercent_);
        DARABONBA_PTR_FROM_JSON(adbpg_instance_cold_data_gb, adbpgInstanceColdDataGb_);
        DARABONBA_PTR_FROM_JSON(adbpg_instance_hot_data_gb, adbpgInstanceHotDataGb_);
        DARABONBA_PTR_FROM_JSON(adbpg_instance_total_data_gb, adbpgInstanceTotalDataGb_);
        DARABONBA_PTR_FROM_JSON(adbpg_master_disk_usage_percent_max, adbpgMasterDiskUsagePercentMax_);
        DARABONBA_PTR_FROM_JSON(adbpg_master_status, adbpgMasterStatus_);
        DARABONBA_PTR_FROM_JSON(adbpg_segment_status, adbpgSegmentStatus_);
        DARABONBA_PTR_FROM_JSON(adbpg_status, adbpgStatus_);
        DARABONBA_PTR_FROM_JSON(node_master_connection_status, nodeMasterConnectionStatus_);
        DARABONBA_PTR_FROM_JSON(node_master_status, nodeMasterStatus_);
        DARABONBA_PTR_FROM_JSON(node_segment_connection_status, nodeSegmentConnectionStatus_);
        DARABONBA_PTR_FROM_JSON(node_segment_disk_status, nodeSegmentDiskStatus_);
      };
      Status() = default ;
      Status(const Status &) = default ;
      Status(Status &&) = default ;
      Status(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Status() = default ;
      Status& operator=(const Status &) = default ;
      Status& operator=(Status &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeSegmentDiskStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSegmentDiskStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSegmentDiskStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NodeSegmentDiskStatus() = default ;
        NodeSegmentDiskStatus(const NodeSegmentDiskStatus &) = default ;
        NodeSegmentDiskStatus(NodeSegmentDiskStatus &&) = default ;
        NodeSegmentDiskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSegmentDiskStatus() = default ;
        NodeSegmentDiskStatus& operator=(const NodeSegmentDiskStatus &) = default ;
        NodeSegmentDiskStatus& operator=(NodeSegmentDiskStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeSegmentDiskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline NodeSegmentDiskStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The storage status of compute nodes. Valid values:
        // 
        // *   **critical**: The compute node storage usage is greater than or equal to 90%. In this case, this metric is marked in red in the console and the instance is locked.
        // *   **warning**: The compute node storage usage is greater than or equal to 80% and less than 90%. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: The compute node storage usage is less than 80%. In this case, this metric is marked in green in the console.
        // 
        // >  The compute node storage usage is the maximum storage usage among all compute nodes.
        shared_ptr<string> status_ {};
        // The metric value of maximum compute node storage usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class NodeSegmentConnectionStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSegmentConnectionStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSegmentConnectionStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NodeSegmentConnectionStatus() = default ;
        NodeSegmentConnectionStatus(const NodeSegmentConnectionStatus &) = default ;
        NodeSegmentConnectionStatus(NodeSegmentConnectionStatus &&) = default ;
        NodeSegmentConnectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSegmentConnectionStatus() = default ;
        NodeSegmentConnectionStatus& operator=(const NodeSegmentConnectionStatus &) = default ;
        NodeSegmentConnectionStatus& operator=(NodeSegmentConnectionStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeSegmentConnectionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline NodeSegmentConnectionStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The connection health status of compute nodes. Valid values:
        // 
        // *   **critical**: The compute node connection usage is greater than or equal to 95%. In this case, this metric is marked in red in the console.
        // *   **warning**: The compute node connection usage is greater than or equal to 90% and less than 95%. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: The compute node connection usage is less than 90%. In this case, this metric is marked in green in the console.
        // 
        // >  The compute node connection usage is the maximum connection usage among all compute nodes.
        shared_ptr<string> status_ {};
        // The metric value of maximum compute node connection usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class NodeMasterStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeMasterStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeMasterStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NodeMasterStatus() = default ;
        NodeMasterStatus(const NodeMasterStatus &) = default ;
        NodeMasterStatus(NodeMasterStatus &&) = default ;
        NodeMasterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeMasterStatus() = default ;
        NodeMasterStatus& operator=(const NodeMasterStatus &) = default ;
        NodeMasterStatus& operator=(NodeMasterStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeMasterStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline NodeMasterStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The health status of the coordinator node. Valid values:
        // 
        // *   **critical**: The primary or standby coordinator node is unavailable. In this case, this metric is marked in red in the console.
        // *   **healthy**: Both the primary and standby coordinator nodes are available. In this case, this metric is marked in green in the console.
        shared_ptr<string> status_ {};
        // The metric value of coordinator node health status. Valid values:
        // 
        // *   **1**: healthy
        // *   **0**: critical
        shared_ptr<float> value_ {};
      };

      class NodeMasterConnectionStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeMasterConnectionStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeMasterConnectionStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NodeMasterConnectionStatus() = default ;
        NodeMasterConnectionStatus(const NodeMasterConnectionStatus &) = default ;
        NodeMasterConnectionStatus(NodeMasterConnectionStatus &&) = default ;
        NodeMasterConnectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeMasterConnectionStatus() = default ;
        NodeMasterConnectionStatus& operator=(const NodeMasterConnectionStatus &) = default ;
        NodeMasterConnectionStatus& operator=(NodeMasterConnectionStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeMasterConnectionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline NodeMasterConnectionStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The connection health status of the coordinator node. Valid values:
        // 
        // *   **critical**: The coordinator node connection usage is greater than 95%. In this case, this metric is marked in red in the console.
        // *   **warning**: The coordinator node connection usage is greater than or equal to 90% and less than 95%. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: The coordinator node connection usage is less than 90%. In this case, this metric is marked in green in the console.
        // 
        // >  The coordinator node connection usage is the maximum connection usage of the coordinator node.
        shared_ptr<string> status_ {};
        // The metric value of coordinator node connection usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class AdbpgStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgStatus() = default ;
        AdbpgStatus(const AdbpgStatus &) = default ;
        AdbpgStatus(AdbpgStatus &&) = default ;
        AdbpgStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgStatus() = default ;
        AdbpgStatus& operator=(const AdbpgStatus &) = default ;
        AdbpgStatus& operator=(AdbpgStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The health status of the instance. Valid values:
        // 
        // *   **critical**: The coordinator node or a compute node is unavailable. In this case, this metric is marked in red in the console.
        // *   **healthy**: All nodes are available. In this case, this metric is marked in green in the console.
        shared_ptr<string> status_ {};
        // The metric value of instance health status. Valid values:
        // 
        // *   **1**: healthy
        // *   **0**: critical
        shared_ptr<float> value_ {};
      };

      class AdbpgSegmentStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgSegmentStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgSegmentStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgSegmentStatus() = default ;
        AdbpgSegmentStatus(const AdbpgSegmentStatus &) = default ;
        AdbpgSegmentStatus(AdbpgSegmentStatus &&) = default ;
        AdbpgSegmentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgSegmentStatus() = default ;
        AdbpgSegmentStatus& operator=(const AdbpgSegmentStatus &) = default ;
        AdbpgSegmentStatus& operator=(AdbpgSegmentStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgSegmentStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgSegmentStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The availability status of compute nodes. Valid values:
        // 
        // *   **critical**: All the primary and secondary compute nodes are unavailable. In this case, this metric is marked in red in the console.
        // *   **warning**: Fifty percent or more than fifty percent of compute nodes are unavailable. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: All compute nodes are available. In this case, this metric is marked in green in the console.
        shared_ptr<string> status_ {};
        // The metric value of compute node availability status.
        shared_ptr<float> value_ {};
      };

      class AdbpgMasterStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgMasterStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgMasterStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgMasterStatus() = default ;
        AdbpgMasterStatus(const AdbpgMasterStatus &) = default ;
        AdbpgMasterStatus(AdbpgMasterStatus &&) = default ;
        AdbpgMasterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgMasterStatus() = default ;
        AdbpgMasterStatus& operator=(const AdbpgMasterStatus &) = default ;
        AdbpgMasterStatus& operator=(AdbpgMasterStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgMasterStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgMasterStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The availability status of the coordinator node. Valid values:
        // 
        // *   **critical**: Both the primary and standby coordinator nodes are unavailable. In this case, this metric is marked in red in the console.
        // *   **warning**: The primary or standby coordinator node is unavailable. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: Both the primary and standby coordinator nodes are available. In this case, this metric is marked in green in the console.
        shared_ptr<string> status_ {};
        // The metric value of coordinator node availability status. Valid values:
        shared_ptr<float> value_ {};
      };

      class AdbpgMasterDiskUsagePercentMax : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgMasterDiskUsagePercentMax& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgMasterDiskUsagePercentMax& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgMasterDiskUsagePercentMax() = default ;
        AdbpgMasterDiskUsagePercentMax(const AdbpgMasterDiskUsagePercentMax &) = default ;
        AdbpgMasterDiskUsagePercentMax(AdbpgMasterDiskUsagePercentMax &&) = default ;
        AdbpgMasterDiskUsagePercentMax(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgMasterDiskUsagePercentMax() = default ;
        AdbpgMasterDiskUsagePercentMax& operator=(const AdbpgMasterDiskUsagePercentMax &) = default ;
        AdbpgMasterDiskUsagePercentMax& operator=(AdbpgMasterDiskUsagePercentMax &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgMasterDiskUsagePercentMax& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgMasterDiskUsagePercentMax& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The status corresponding to the maximum storage usage of the coordinator node. Valid values:
        // 
        // *   **critical**: The coordinator node storage usage is greater than or equal to 90%. In this case, the instance is locked.
        // *   **warning**: The coordinator node storage usage is greater than or equal to 70% and less than 90%.
        // *   **healthy**: The coordinator node storage usage is less than 70%.
        shared_ptr<string> status_ {};
        // The metric value of maximum coordinator node storage usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class AdbpgInstanceTotalDataGb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgInstanceTotalDataGb& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgInstanceTotalDataGb& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgInstanceTotalDataGb() = default ;
        AdbpgInstanceTotalDataGb(const AdbpgInstanceTotalDataGb &) = default ;
        AdbpgInstanceTotalDataGb(AdbpgInstanceTotalDataGb &&) = default ;
        AdbpgInstanceTotalDataGb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgInstanceTotalDataGb() = default ;
        AdbpgInstanceTotalDataGb& operator=(const AdbpgInstanceTotalDataGb &) = default ;
        AdbpgInstanceTotalDataGb& operator=(AdbpgInstanceTotalDataGb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgInstanceTotalDataGb& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The total amount of data storage of the instance. Unit: GB.
        shared_ptr<float> value_ {};
      };

      class AdbpgInstanceHotDataGb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgInstanceHotDataGb& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgInstanceHotDataGb& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgInstanceHotDataGb() = default ;
        AdbpgInstanceHotDataGb(const AdbpgInstanceHotDataGb &) = default ;
        AdbpgInstanceHotDataGb(AdbpgInstanceHotDataGb &&) = default ;
        AdbpgInstanceHotDataGb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgInstanceHotDataGb() = default ;
        AdbpgInstanceHotDataGb& operator=(const AdbpgInstanceHotDataGb &) = default ;
        AdbpgInstanceHotDataGb& operator=(AdbpgInstanceHotDataGb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgInstanceHotDataGb& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The total amount of hot data storage. Unit: GB.
        shared_ptr<float> value_ {};
      };

      class AdbpgInstanceColdDataGb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgInstanceColdDataGb& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgInstanceColdDataGb& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgInstanceColdDataGb() = default ;
        AdbpgInstanceColdDataGb(const AdbpgInstanceColdDataGb &) = default ;
        AdbpgInstanceColdDataGb(AdbpgInstanceColdDataGb &&) = default ;
        AdbpgInstanceColdDataGb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgInstanceColdDataGb() = default ;
        AdbpgInstanceColdDataGb& operator=(const AdbpgInstanceColdDataGb &) = default ;
        AdbpgInstanceColdDataGb& operator=(AdbpgInstanceColdDataGb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgInstanceColdDataGb& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The total amount of cold data storage. Unit: GB.
        shared_ptr<float> value_ {};
      };

      class AdbpgDiskUsagePercent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgDiskUsagePercent& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgDiskUsagePercent& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgDiskUsagePercent() = default ;
        AdbpgDiskUsagePercent(const AdbpgDiskUsagePercent &) = default ;
        AdbpgDiskUsagePercent(AdbpgDiskUsagePercent &&) = default ;
        AdbpgDiskUsagePercent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgDiskUsagePercent() = default ;
        AdbpgDiskUsagePercent& operator=(const AdbpgDiskUsagePercent &) = default ;
        AdbpgDiskUsagePercent& operator=(AdbpgDiskUsagePercent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgDiskUsagePercent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgDiskUsagePercent& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The status corresponding to the storage usage of the instance. Valid values:
        // 
        // *   **critical**: The instance storage usage is greater than or equal to 90%. In this case, the instance is locked.
        // *   **warning**: The instance storage usage is greater than or equal to 70% and less than 90%.
        // *   **healthy**: The instance storage usage is less than 70%.
        // 
        // >  The instance storage usage is the average storage usage of all compute nodes.
        shared_ptr<string> status_ {};
        // The metric value of instance storage usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class AdbpgDiskStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgDiskStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgDiskStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgDiskStatus() = default ;
        AdbpgDiskStatus(const AdbpgDiskStatus &) = default ;
        AdbpgDiskStatus(AdbpgDiskStatus &&) = default ;
        AdbpgDiskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgDiskStatus() = default ;
        AdbpgDiskStatus& operator=(const AdbpgDiskStatus &) = default ;
        AdbpgDiskStatus& operator=(AdbpgDiskStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgDiskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgDiskStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The storage status of the instance. Valid values:
        // 
        // *   **critical**: The instance storage usage is greater than or equal to 90%. In this case, this metric is marked in red in the console and the instance is locked.
        // *   **warning**: The instance storage usage is greater than or equal to 70% and less than 90%. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: The instance storage usage is less than 70%. In this case, this metric is marked in green in the console.
        // 
        // >  The instance storage usage is the average storage usage of all compute nodes.
        shared_ptr<string> status_ {};
        // The metric value of instance storage usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class AdbpgConnectionStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbpgConnectionStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbpgConnectionStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbpgConnectionStatus() = default ;
        AdbpgConnectionStatus(const AdbpgConnectionStatus &) = default ;
        AdbpgConnectionStatus(AdbpgConnectionStatus &&) = default ;
        AdbpgConnectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbpgConnectionStatus() = default ;
        AdbpgConnectionStatus& operator=(const AdbpgConnectionStatus &) = default ;
        AdbpgConnectionStatus& operator=(AdbpgConnectionStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbpgConnectionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbpgConnectionStatus& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The connection health status of the instance. Valid values:
        // 
        // *   **critical**: The instance connection usage is greater than 95%. In this case, this metric is marked in red in the console.
        // *   **warning**: The instance connection usage is greater than 90% and less than or equal to 95%. In this case, this metric is marked in yellow in the console.
        // *   **healthy**: The instance connection usage is less than or equal to 90%. In this case, this metric is marked in green in the console.
        // 
        // >  The instance connection usage is the maximum connection usage among all the coordinator and compute nodes.
        shared_ptr<string> status_ {};
        // The metric value of instance connection usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      class AdbgpSegmentDiskUsagePercentMax : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdbgpSegmentDiskUsagePercentMax& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AdbgpSegmentDiskUsagePercentMax& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AdbgpSegmentDiskUsagePercentMax() = default ;
        AdbgpSegmentDiskUsagePercentMax(const AdbgpSegmentDiskUsagePercentMax &) = default ;
        AdbgpSegmentDiskUsagePercentMax(AdbgpSegmentDiskUsagePercentMax &&) = default ;
        AdbgpSegmentDiskUsagePercentMax(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdbgpSegmentDiskUsagePercentMax() = default ;
        AdbgpSegmentDiskUsagePercentMax& operator=(const AdbgpSegmentDiskUsagePercentMax &) = default ;
        AdbgpSegmentDiskUsagePercentMax& operator=(AdbgpSegmentDiskUsagePercentMax &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->value_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdbgpSegmentDiskUsagePercentMax& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline AdbgpSegmentDiskUsagePercentMax& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The status corresponding to the maximum storage usage among all compute nodes. Valid values:
        // 
        // *   **critical**: The compute node storage usage is greater than or equal to 90%. In this case, the instance is locked.
        // *   **warning**: The compute node storage usage is greater than or equal to 80% and less than 90%.
        // *   **healthy**: The compute node storage usage is less than 80%.
        shared_ptr<string> status_ {};
        // The metric value of maximum compute node storage usage.
        // 
        // Unit: %.
        shared_ptr<float> value_ {};
      };

      virtual bool empty() const override { return this->adbgpSegmentDiskUsagePercentMax_ == nullptr
        && this->adbpgConnectionStatus_ == nullptr && this->adbpgDiskStatus_ == nullptr && this->adbpgDiskUsagePercent_ == nullptr && this->adbpgInstanceColdDataGb_ == nullptr && this->adbpgInstanceHotDataGb_ == nullptr
        && this->adbpgInstanceTotalDataGb_ == nullptr && this->adbpgMasterDiskUsagePercentMax_ == nullptr && this->adbpgMasterStatus_ == nullptr && this->adbpgSegmentStatus_ == nullptr && this->adbpgStatus_ == nullptr
        && this->nodeMasterConnectionStatus_ == nullptr && this->nodeMasterStatus_ == nullptr && this->nodeSegmentConnectionStatus_ == nullptr && this->nodeSegmentDiskStatus_ == nullptr; };
      // adbgpSegmentDiskUsagePercentMax Field Functions 
      bool hasAdbgpSegmentDiskUsagePercentMax() const { return this->adbgpSegmentDiskUsagePercentMax_ != nullptr;};
      void deleteAdbgpSegmentDiskUsagePercentMax() { this->adbgpSegmentDiskUsagePercentMax_ = nullptr;};
      inline const Status::AdbgpSegmentDiskUsagePercentMax & getAdbgpSegmentDiskUsagePercentMax() const { DARABONBA_PTR_GET_CONST(adbgpSegmentDiskUsagePercentMax_, Status::AdbgpSegmentDiskUsagePercentMax) };
      inline Status::AdbgpSegmentDiskUsagePercentMax getAdbgpSegmentDiskUsagePercentMax() { DARABONBA_PTR_GET(adbgpSegmentDiskUsagePercentMax_, Status::AdbgpSegmentDiskUsagePercentMax) };
      inline Status& setAdbgpSegmentDiskUsagePercentMax(const Status::AdbgpSegmentDiskUsagePercentMax & adbgpSegmentDiskUsagePercentMax) { DARABONBA_PTR_SET_VALUE(adbgpSegmentDiskUsagePercentMax_, adbgpSegmentDiskUsagePercentMax) };
      inline Status& setAdbgpSegmentDiskUsagePercentMax(Status::AdbgpSegmentDiskUsagePercentMax && adbgpSegmentDiskUsagePercentMax) { DARABONBA_PTR_SET_RVALUE(adbgpSegmentDiskUsagePercentMax_, adbgpSegmentDiskUsagePercentMax) };


      // adbpgConnectionStatus Field Functions 
      bool hasAdbpgConnectionStatus() const { return this->adbpgConnectionStatus_ != nullptr;};
      void deleteAdbpgConnectionStatus() { this->adbpgConnectionStatus_ = nullptr;};
      inline const Status::AdbpgConnectionStatus & getAdbpgConnectionStatus() const { DARABONBA_PTR_GET_CONST(adbpgConnectionStatus_, Status::AdbpgConnectionStatus) };
      inline Status::AdbpgConnectionStatus getAdbpgConnectionStatus() { DARABONBA_PTR_GET(adbpgConnectionStatus_, Status::AdbpgConnectionStatus) };
      inline Status& setAdbpgConnectionStatus(const Status::AdbpgConnectionStatus & adbpgConnectionStatus) { DARABONBA_PTR_SET_VALUE(adbpgConnectionStatus_, adbpgConnectionStatus) };
      inline Status& setAdbpgConnectionStatus(Status::AdbpgConnectionStatus && adbpgConnectionStatus) { DARABONBA_PTR_SET_RVALUE(adbpgConnectionStatus_, adbpgConnectionStatus) };


      // adbpgDiskStatus Field Functions 
      bool hasAdbpgDiskStatus() const { return this->adbpgDiskStatus_ != nullptr;};
      void deleteAdbpgDiskStatus() { this->adbpgDiskStatus_ = nullptr;};
      inline const Status::AdbpgDiskStatus & getAdbpgDiskStatus() const { DARABONBA_PTR_GET_CONST(adbpgDiskStatus_, Status::AdbpgDiskStatus) };
      inline Status::AdbpgDiskStatus getAdbpgDiskStatus() { DARABONBA_PTR_GET(adbpgDiskStatus_, Status::AdbpgDiskStatus) };
      inline Status& setAdbpgDiskStatus(const Status::AdbpgDiskStatus & adbpgDiskStatus) { DARABONBA_PTR_SET_VALUE(adbpgDiskStatus_, adbpgDiskStatus) };
      inline Status& setAdbpgDiskStatus(Status::AdbpgDiskStatus && adbpgDiskStatus) { DARABONBA_PTR_SET_RVALUE(adbpgDiskStatus_, adbpgDiskStatus) };


      // adbpgDiskUsagePercent Field Functions 
      bool hasAdbpgDiskUsagePercent() const { return this->adbpgDiskUsagePercent_ != nullptr;};
      void deleteAdbpgDiskUsagePercent() { this->adbpgDiskUsagePercent_ = nullptr;};
      inline const Status::AdbpgDiskUsagePercent & getAdbpgDiskUsagePercent() const { DARABONBA_PTR_GET_CONST(adbpgDiskUsagePercent_, Status::AdbpgDiskUsagePercent) };
      inline Status::AdbpgDiskUsagePercent getAdbpgDiskUsagePercent() { DARABONBA_PTR_GET(adbpgDiskUsagePercent_, Status::AdbpgDiskUsagePercent) };
      inline Status& setAdbpgDiskUsagePercent(const Status::AdbpgDiskUsagePercent & adbpgDiskUsagePercent) { DARABONBA_PTR_SET_VALUE(adbpgDiskUsagePercent_, adbpgDiskUsagePercent) };
      inline Status& setAdbpgDiskUsagePercent(Status::AdbpgDiskUsagePercent && adbpgDiskUsagePercent) { DARABONBA_PTR_SET_RVALUE(adbpgDiskUsagePercent_, adbpgDiskUsagePercent) };


      // adbpgInstanceColdDataGb Field Functions 
      bool hasAdbpgInstanceColdDataGb() const { return this->adbpgInstanceColdDataGb_ != nullptr;};
      void deleteAdbpgInstanceColdDataGb() { this->adbpgInstanceColdDataGb_ = nullptr;};
      inline const Status::AdbpgInstanceColdDataGb & getAdbpgInstanceColdDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceColdDataGb_, Status::AdbpgInstanceColdDataGb) };
      inline Status::AdbpgInstanceColdDataGb getAdbpgInstanceColdDataGb() { DARABONBA_PTR_GET(adbpgInstanceColdDataGb_, Status::AdbpgInstanceColdDataGb) };
      inline Status& setAdbpgInstanceColdDataGb(const Status::AdbpgInstanceColdDataGb & adbpgInstanceColdDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceColdDataGb_, adbpgInstanceColdDataGb) };
      inline Status& setAdbpgInstanceColdDataGb(Status::AdbpgInstanceColdDataGb && adbpgInstanceColdDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceColdDataGb_, adbpgInstanceColdDataGb) };


      // adbpgInstanceHotDataGb Field Functions 
      bool hasAdbpgInstanceHotDataGb() const { return this->adbpgInstanceHotDataGb_ != nullptr;};
      void deleteAdbpgInstanceHotDataGb() { this->adbpgInstanceHotDataGb_ = nullptr;};
      inline const Status::AdbpgInstanceHotDataGb & getAdbpgInstanceHotDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceHotDataGb_, Status::AdbpgInstanceHotDataGb) };
      inline Status::AdbpgInstanceHotDataGb getAdbpgInstanceHotDataGb() { DARABONBA_PTR_GET(adbpgInstanceHotDataGb_, Status::AdbpgInstanceHotDataGb) };
      inline Status& setAdbpgInstanceHotDataGb(const Status::AdbpgInstanceHotDataGb & adbpgInstanceHotDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceHotDataGb_, adbpgInstanceHotDataGb) };
      inline Status& setAdbpgInstanceHotDataGb(Status::AdbpgInstanceHotDataGb && adbpgInstanceHotDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceHotDataGb_, adbpgInstanceHotDataGb) };


      // adbpgInstanceTotalDataGb Field Functions 
      bool hasAdbpgInstanceTotalDataGb() const { return this->adbpgInstanceTotalDataGb_ != nullptr;};
      void deleteAdbpgInstanceTotalDataGb() { this->adbpgInstanceTotalDataGb_ = nullptr;};
      inline const Status::AdbpgInstanceTotalDataGb & getAdbpgInstanceTotalDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceTotalDataGb_, Status::AdbpgInstanceTotalDataGb) };
      inline Status::AdbpgInstanceTotalDataGb getAdbpgInstanceTotalDataGb() { DARABONBA_PTR_GET(adbpgInstanceTotalDataGb_, Status::AdbpgInstanceTotalDataGb) };
      inline Status& setAdbpgInstanceTotalDataGb(const Status::AdbpgInstanceTotalDataGb & adbpgInstanceTotalDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceTotalDataGb_, adbpgInstanceTotalDataGb) };
      inline Status& setAdbpgInstanceTotalDataGb(Status::AdbpgInstanceTotalDataGb && adbpgInstanceTotalDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceTotalDataGb_, adbpgInstanceTotalDataGb) };


      // adbpgMasterDiskUsagePercentMax Field Functions 
      bool hasAdbpgMasterDiskUsagePercentMax() const { return this->adbpgMasterDiskUsagePercentMax_ != nullptr;};
      void deleteAdbpgMasterDiskUsagePercentMax() { this->adbpgMasterDiskUsagePercentMax_ = nullptr;};
      inline const Status::AdbpgMasterDiskUsagePercentMax & getAdbpgMasterDiskUsagePercentMax() const { DARABONBA_PTR_GET_CONST(adbpgMasterDiskUsagePercentMax_, Status::AdbpgMasterDiskUsagePercentMax) };
      inline Status::AdbpgMasterDiskUsagePercentMax getAdbpgMasterDiskUsagePercentMax() { DARABONBA_PTR_GET(adbpgMasterDiskUsagePercentMax_, Status::AdbpgMasterDiskUsagePercentMax) };
      inline Status& setAdbpgMasterDiskUsagePercentMax(const Status::AdbpgMasterDiskUsagePercentMax & adbpgMasterDiskUsagePercentMax) { DARABONBA_PTR_SET_VALUE(adbpgMasterDiskUsagePercentMax_, adbpgMasterDiskUsagePercentMax) };
      inline Status& setAdbpgMasterDiskUsagePercentMax(Status::AdbpgMasterDiskUsagePercentMax && adbpgMasterDiskUsagePercentMax) { DARABONBA_PTR_SET_RVALUE(adbpgMasterDiskUsagePercentMax_, adbpgMasterDiskUsagePercentMax) };


      // adbpgMasterStatus Field Functions 
      bool hasAdbpgMasterStatus() const { return this->adbpgMasterStatus_ != nullptr;};
      void deleteAdbpgMasterStatus() { this->adbpgMasterStatus_ = nullptr;};
      inline const Status::AdbpgMasterStatus & getAdbpgMasterStatus() const { DARABONBA_PTR_GET_CONST(adbpgMasterStatus_, Status::AdbpgMasterStatus) };
      inline Status::AdbpgMasterStatus getAdbpgMasterStatus() { DARABONBA_PTR_GET(adbpgMasterStatus_, Status::AdbpgMasterStatus) };
      inline Status& setAdbpgMasterStatus(const Status::AdbpgMasterStatus & adbpgMasterStatus) { DARABONBA_PTR_SET_VALUE(adbpgMasterStatus_, adbpgMasterStatus) };
      inline Status& setAdbpgMasterStatus(Status::AdbpgMasterStatus && adbpgMasterStatus) { DARABONBA_PTR_SET_RVALUE(adbpgMasterStatus_, adbpgMasterStatus) };


      // adbpgSegmentStatus Field Functions 
      bool hasAdbpgSegmentStatus() const { return this->adbpgSegmentStatus_ != nullptr;};
      void deleteAdbpgSegmentStatus() { this->adbpgSegmentStatus_ = nullptr;};
      inline const Status::AdbpgSegmentStatus & getAdbpgSegmentStatus() const { DARABONBA_PTR_GET_CONST(adbpgSegmentStatus_, Status::AdbpgSegmentStatus) };
      inline Status::AdbpgSegmentStatus getAdbpgSegmentStatus() { DARABONBA_PTR_GET(adbpgSegmentStatus_, Status::AdbpgSegmentStatus) };
      inline Status& setAdbpgSegmentStatus(const Status::AdbpgSegmentStatus & adbpgSegmentStatus) { DARABONBA_PTR_SET_VALUE(adbpgSegmentStatus_, adbpgSegmentStatus) };
      inline Status& setAdbpgSegmentStatus(Status::AdbpgSegmentStatus && adbpgSegmentStatus) { DARABONBA_PTR_SET_RVALUE(adbpgSegmentStatus_, adbpgSegmentStatus) };


      // adbpgStatus Field Functions 
      bool hasAdbpgStatus() const { return this->adbpgStatus_ != nullptr;};
      void deleteAdbpgStatus() { this->adbpgStatus_ = nullptr;};
      inline const Status::AdbpgStatus & getAdbpgStatus() const { DARABONBA_PTR_GET_CONST(adbpgStatus_, Status::AdbpgStatus) };
      inline Status::AdbpgStatus getAdbpgStatus() { DARABONBA_PTR_GET(adbpgStatus_, Status::AdbpgStatus) };
      inline Status& setAdbpgStatus(const Status::AdbpgStatus & adbpgStatus) { DARABONBA_PTR_SET_VALUE(adbpgStatus_, adbpgStatus) };
      inline Status& setAdbpgStatus(Status::AdbpgStatus && adbpgStatus) { DARABONBA_PTR_SET_RVALUE(adbpgStatus_, adbpgStatus) };


      // nodeMasterConnectionStatus Field Functions 
      bool hasNodeMasterConnectionStatus() const { return this->nodeMasterConnectionStatus_ != nullptr;};
      void deleteNodeMasterConnectionStatus() { this->nodeMasterConnectionStatus_ = nullptr;};
      inline const Status::NodeMasterConnectionStatus & getNodeMasterConnectionStatus() const { DARABONBA_PTR_GET_CONST(nodeMasterConnectionStatus_, Status::NodeMasterConnectionStatus) };
      inline Status::NodeMasterConnectionStatus getNodeMasterConnectionStatus() { DARABONBA_PTR_GET(nodeMasterConnectionStatus_, Status::NodeMasterConnectionStatus) };
      inline Status& setNodeMasterConnectionStatus(const Status::NodeMasterConnectionStatus & nodeMasterConnectionStatus) { DARABONBA_PTR_SET_VALUE(nodeMasterConnectionStatus_, nodeMasterConnectionStatus) };
      inline Status& setNodeMasterConnectionStatus(Status::NodeMasterConnectionStatus && nodeMasterConnectionStatus) { DARABONBA_PTR_SET_RVALUE(nodeMasterConnectionStatus_, nodeMasterConnectionStatus) };


      // nodeMasterStatus Field Functions 
      bool hasNodeMasterStatus() const { return this->nodeMasterStatus_ != nullptr;};
      void deleteNodeMasterStatus() { this->nodeMasterStatus_ = nullptr;};
      inline const Status::NodeMasterStatus & getNodeMasterStatus() const { DARABONBA_PTR_GET_CONST(nodeMasterStatus_, Status::NodeMasterStatus) };
      inline Status::NodeMasterStatus getNodeMasterStatus() { DARABONBA_PTR_GET(nodeMasterStatus_, Status::NodeMasterStatus) };
      inline Status& setNodeMasterStatus(const Status::NodeMasterStatus & nodeMasterStatus) { DARABONBA_PTR_SET_VALUE(nodeMasterStatus_, nodeMasterStatus) };
      inline Status& setNodeMasterStatus(Status::NodeMasterStatus && nodeMasterStatus) { DARABONBA_PTR_SET_RVALUE(nodeMasterStatus_, nodeMasterStatus) };


      // nodeSegmentConnectionStatus Field Functions 
      bool hasNodeSegmentConnectionStatus() const { return this->nodeSegmentConnectionStatus_ != nullptr;};
      void deleteNodeSegmentConnectionStatus() { this->nodeSegmentConnectionStatus_ = nullptr;};
      inline const Status::NodeSegmentConnectionStatus & getNodeSegmentConnectionStatus() const { DARABONBA_PTR_GET_CONST(nodeSegmentConnectionStatus_, Status::NodeSegmentConnectionStatus) };
      inline Status::NodeSegmentConnectionStatus getNodeSegmentConnectionStatus() { DARABONBA_PTR_GET(nodeSegmentConnectionStatus_, Status::NodeSegmentConnectionStatus) };
      inline Status& setNodeSegmentConnectionStatus(const Status::NodeSegmentConnectionStatus & nodeSegmentConnectionStatus) { DARABONBA_PTR_SET_VALUE(nodeSegmentConnectionStatus_, nodeSegmentConnectionStatus) };
      inline Status& setNodeSegmentConnectionStatus(Status::NodeSegmentConnectionStatus && nodeSegmentConnectionStatus) { DARABONBA_PTR_SET_RVALUE(nodeSegmentConnectionStatus_, nodeSegmentConnectionStatus) };


      // nodeSegmentDiskStatus Field Functions 
      bool hasNodeSegmentDiskStatus() const { return this->nodeSegmentDiskStatus_ != nullptr;};
      void deleteNodeSegmentDiskStatus() { this->nodeSegmentDiskStatus_ = nullptr;};
      inline const Status::NodeSegmentDiskStatus & getNodeSegmentDiskStatus() const { DARABONBA_PTR_GET_CONST(nodeSegmentDiskStatus_, Status::NodeSegmentDiskStatus) };
      inline Status::NodeSegmentDiskStatus getNodeSegmentDiskStatus() { DARABONBA_PTR_GET(nodeSegmentDiskStatus_, Status::NodeSegmentDiskStatus) };
      inline Status& setNodeSegmentDiskStatus(const Status::NodeSegmentDiskStatus & nodeSegmentDiskStatus) { DARABONBA_PTR_SET_VALUE(nodeSegmentDiskStatus_, nodeSegmentDiskStatus) };
      inline Status& setNodeSegmentDiskStatus(Status::NodeSegmentDiskStatus && nodeSegmentDiskStatus) { DARABONBA_PTR_SET_RVALUE(nodeSegmentDiskStatus_, nodeSegmentDiskStatus) };


    protected:
      // The information of maximum compute node storage usage.
      // 
      // >  This parameter value is returned only for instances in elastic storage mode.
      shared_ptr<Status::AdbgpSegmentDiskUsagePercentMax> adbgpSegmentDiskUsagePercentMax_ {};
      // The information of instance connection health status.
      shared_ptr<Status::AdbpgConnectionStatus> adbpgConnectionStatus_ {};
      // The information of instance storage status.
      // 
      // >  This parameter value is returned only for instances in elastic storage mode.
      shared_ptr<Status::AdbpgDiskStatus> adbpgDiskStatus_ {};
      // The information of instance storage usage.
      // 
      // >  This parameter value is returned only for instances in elastic storage mode.
      shared_ptr<Status::AdbpgDiskUsagePercent> adbpgDiskUsagePercent_ {};
      // The total amount of cold data storage.
      shared_ptr<Status::AdbpgInstanceColdDataGb> adbpgInstanceColdDataGb_ {};
      // The total amount of hot data storage.
      shared_ptr<Status::AdbpgInstanceHotDataGb> adbpgInstanceHotDataGb_ {};
      // The total amount of data storage of the instance.
      shared_ptr<Status::AdbpgInstanceTotalDataGb> adbpgInstanceTotalDataGb_ {};
      // The information of maximum coordinator node storage usage.
      // 
      // >  This parameter value is returned only for instances in elastic storage mode.
      shared_ptr<Status::AdbpgMasterDiskUsagePercentMax> adbpgMasterDiskUsagePercentMax_ {};
      // The information of coordinator node availability status.
      shared_ptr<Status::AdbpgMasterStatus> adbpgMasterStatus_ {};
      // The information of compute node availability status.
      shared_ptr<Status::AdbpgSegmentStatus> adbpgSegmentStatus_ {};
      // The information of instance health status.
      shared_ptr<Status::AdbpgStatus> adbpgStatus_ {};
      // The information of coordinator node connection health status.
      shared_ptr<Status::NodeMasterConnectionStatus> nodeMasterConnectionStatus_ {};
      // The information of coordinator node health status.
      shared_ptr<Status::NodeMasterStatus> nodeMasterStatus_ {};
      // The information of compute node connection health status.
      shared_ptr<Status::NodeSegmentConnectionStatus> nodeSegmentConnectionStatus_ {};
      // The information of compute node storage status.
      // 
      // >  This parameter value is returned only for instances in elastic storage mode.
      shared_ptr<Status::NodeSegmentDiskStatus> nodeSegmentDiskStatus_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeHealthStatusResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const DescribeHealthStatusResponseBody::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, DescribeHealthStatusResponseBody::Status) };
    inline DescribeHealthStatusResponseBody::Status getStatus() { DARABONBA_PTR_GET(status_, DescribeHealthStatusResponseBody::Status) };
    inline DescribeHealthStatusResponseBody& setStatus(const DescribeHealthStatusResponseBody::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeHealthStatusResponseBody& setStatus(DescribeHealthStatusResponseBody::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The ID of instance.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The queried performance metrics. Each performance metric consists of the parameter name, status, and metric value. The metric information is returned only for the performance parameters specified by **Key**. For example, if you set **Key** to **adbpg_status**, only the metric information of **adbpg_status** is returned.
    // 
    // For more information about performance parameters, see [Performance parameters](https://help.aliyun.com/document_detail/86943.html).
    shared_ptr<DescribeHealthStatusResponseBody::Status> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
