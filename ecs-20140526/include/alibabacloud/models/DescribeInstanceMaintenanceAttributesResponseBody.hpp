// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeInstanceMaintenanceAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMaintenanceAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaintenanceAttributes, maintenanceAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMaintenanceAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaintenanceAttributes, maintenanceAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceMaintenanceAttributesResponseBody() = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(const DescribeInstanceMaintenanceAttributesResponseBody &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(DescribeInstanceMaintenanceAttributesResponseBody &&) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMaintenanceAttributesResponseBody() = default ;
    DescribeInstanceMaintenanceAttributesResponseBody& operator=(const DescribeInstanceMaintenanceAttributesResponseBody &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody& operator=(DescribeInstanceMaintenanceAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MaintenanceAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaintenanceAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(MaintenanceAttribute, maintenanceAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, MaintenanceAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(MaintenanceAttribute, maintenanceAttribute_);
      };
      MaintenanceAttributes() = default ;
      MaintenanceAttributes(const MaintenanceAttributes &) = default ;
      MaintenanceAttributes(MaintenanceAttributes &&) = default ;
      MaintenanceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MaintenanceAttributes() = default ;
      MaintenanceAttributes& operator=(const MaintenanceAttributes &) = default ;
      MaintenanceAttributes& operator=(MaintenanceAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MaintenanceAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaintenanceAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MaintenanceWindows, maintenanceWindows_);
          DARABONBA_PTR_TO_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
        };
        friend void from_json(const Darabonba::Json& j, MaintenanceAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MaintenanceWindows, maintenanceWindows_);
          DARABONBA_PTR_FROM_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
        };
        MaintenanceAttribute() = default ;
        MaintenanceAttribute(const MaintenanceAttribute &) = default ;
        MaintenanceAttribute(MaintenanceAttribute &&) = default ;
        MaintenanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaintenanceAttribute() = default ;
        MaintenanceAttribute& operator=(const MaintenanceAttribute &) = default ;
        MaintenanceAttribute& operator=(MaintenanceAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MaintenanceWindows : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MaintenanceWindows& obj) { 
            DARABONBA_PTR_TO_JSON(MaintenanceWindow, maintenanceWindow_);
          };
          friend void from_json(const Darabonba::Json& j, MaintenanceWindows& obj) { 
            DARABONBA_PTR_FROM_JSON(MaintenanceWindow, maintenanceWindow_);
          };
          MaintenanceWindows() = default ;
          MaintenanceWindows(const MaintenanceWindows &) = default ;
          MaintenanceWindows(MaintenanceWindows &&) = default ;
          MaintenanceWindows(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MaintenanceWindows() = default ;
          MaintenanceWindows& operator=(const MaintenanceWindows &) = default ;
          MaintenanceWindows& operator=(MaintenanceWindows &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MaintenanceWindow : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MaintenanceWindow& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, MaintenanceWindow& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            MaintenanceWindow() = default ;
            MaintenanceWindow(const MaintenanceWindow &) = default ;
            MaintenanceWindow(MaintenanceWindow &&) = default ;
            MaintenanceWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MaintenanceWindow() = default ;
            MaintenanceWindow& operator=(const MaintenanceWindow &) = default ;
            MaintenanceWindow& operator=(MaintenanceWindow &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline MaintenanceWindow& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline MaintenanceWindow& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The end time of the maintenance window.
            shared_ptr<string> endTime_ {};
            // The start time of the maintenance window.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->maintenanceWindow_ == nullptr; };
          // maintenanceWindow Field Functions 
          bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
          void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
          inline const vector<MaintenanceWindows::MaintenanceWindow> & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, vector<MaintenanceWindows::MaintenanceWindow>) };
          inline vector<MaintenanceWindows::MaintenanceWindow> getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, vector<MaintenanceWindows::MaintenanceWindow>) };
          inline MaintenanceWindows& setMaintenanceWindow(const vector<MaintenanceWindows::MaintenanceWindow> & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
          inline MaintenanceWindows& setMaintenanceWindow(vector<MaintenanceWindows::MaintenanceWindow> && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


        protected:
          shared_ptr<vector<MaintenanceWindows::MaintenanceWindow>> maintenanceWindow_ {};
        };

        class ActionOnMaintenance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActionOnMaintenance& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(SupportedValues, supportedValues_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ActionOnMaintenance& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(SupportedValues, supportedValues_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ActionOnMaintenance() = default ;
          ActionOnMaintenance(const ActionOnMaintenance &) = default ;
          ActionOnMaintenance(ActionOnMaintenance &&) = default ;
          ActionOnMaintenance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActionOnMaintenance() = default ;
          ActionOnMaintenance& operator=(const ActionOnMaintenance &) = default ;
          ActionOnMaintenance& operator=(ActionOnMaintenance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SupportedValues : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedValues& obj) { 
              DARABONBA_PTR_TO_JSON(SupportedValue, supportedValue_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedValues& obj) { 
              DARABONBA_PTR_FROM_JSON(SupportedValue, supportedValue_);
            };
            SupportedValues() = default ;
            SupportedValues(const SupportedValues &) = default ;
            SupportedValues(SupportedValues &&) = default ;
            SupportedValues(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedValues() = default ;
            SupportedValues& operator=(const SupportedValues &) = default ;
            SupportedValues& operator=(SupportedValues &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->supportedValue_ == nullptr; };
            // supportedValue Field Functions 
            bool hasSupportedValue() const { return this->supportedValue_ != nullptr;};
            void deleteSupportedValue() { this->supportedValue_ = nullptr;};
            inline const vector<string> & getSupportedValue() const { DARABONBA_PTR_GET_CONST(supportedValue_, vector<string>) };
            inline vector<string> getSupportedValue() { DARABONBA_PTR_GET(supportedValue_, vector<string>) };
            inline SupportedValues& setSupportedValue(const vector<string> & supportedValue) { DARABONBA_PTR_SET_VALUE(supportedValue_, supportedValue) };
            inline SupportedValues& setSupportedValue(vector<string> && supportedValue) { DARABONBA_PTR_SET_RVALUE(supportedValue_, supportedValue) };


          protected:
            shared_ptr<vector<string>> supportedValue_ {};
          };

          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->supportedValues_ == nullptr && this->value_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline ActionOnMaintenance& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // supportedValues Field Functions 
          bool hasSupportedValues() const { return this->supportedValues_ != nullptr;};
          void deleteSupportedValues() { this->supportedValues_ = nullptr;};
          inline const ActionOnMaintenance::SupportedValues & getSupportedValues() const { DARABONBA_PTR_GET_CONST(supportedValues_, ActionOnMaintenance::SupportedValues) };
          inline ActionOnMaintenance::SupportedValues getSupportedValues() { DARABONBA_PTR_GET(supportedValues_, ActionOnMaintenance::SupportedValues) };
          inline ActionOnMaintenance& setSupportedValues(const ActionOnMaintenance::SupportedValues & supportedValues) { DARABONBA_PTR_SET_VALUE(supportedValues_, supportedValues) };
          inline ActionOnMaintenance& setSupportedValues(ActionOnMaintenance::SupportedValues && supportedValues) { DARABONBA_PTR_SET_RVALUE(supportedValues_, supportedValues) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ActionOnMaintenance& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The default maintenance action.
          shared_ptr<string> defaultValue_ {};
          // The supported maintenance actions.
          shared_ptr<ActionOnMaintenance::SupportedValues> supportedValues_ {};
          // The current maintenance action. Valid values:
          // 
          // *   Stop: stops the instance.
          // *   AutoRecover: automatically recovers the instance.
          // *   AutoRedeploy: redeploys the instance, which may damage the data disks attached to the instance.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->actionOnMaintenance_ == nullptr
        && this->instanceId_ == nullptr && this->maintenanceWindows_ == nullptr && this->notifyOnMaintenance_ == nullptr; };
        // actionOnMaintenance Field Functions 
        bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
        void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
        inline const MaintenanceAttribute::ActionOnMaintenance & getActionOnMaintenance() const { DARABONBA_PTR_GET_CONST(actionOnMaintenance_, MaintenanceAttribute::ActionOnMaintenance) };
        inline MaintenanceAttribute::ActionOnMaintenance getActionOnMaintenance() { DARABONBA_PTR_GET(actionOnMaintenance_, MaintenanceAttribute::ActionOnMaintenance) };
        inline MaintenanceAttribute& setActionOnMaintenance(const MaintenanceAttribute::ActionOnMaintenance & actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };
        inline MaintenanceAttribute& setActionOnMaintenance(MaintenanceAttribute::ActionOnMaintenance && actionOnMaintenance) { DARABONBA_PTR_SET_RVALUE(actionOnMaintenance_, actionOnMaintenance) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline MaintenanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // maintenanceWindows Field Functions 
        bool hasMaintenanceWindows() const { return this->maintenanceWindows_ != nullptr;};
        void deleteMaintenanceWindows() { this->maintenanceWindows_ = nullptr;};
        inline const MaintenanceAttribute::MaintenanceWindows & getMaintenanceWindows() const { DARABONBA_PTR_GET_CONST(maintenanceWindows_, MaintenanceAttribute::MaintenanceWindows) };
        inline MaintenanceAttribute::MaintenanceWindows getMaintenanceWindows() { DARABONBA_PTR_GET(maintenanceWindows_, MaintenanceAttribute::MaintenanceWindows) };
        inline MaintenanceAttribute& setMaintenanceWindows(const MaintenanceAttribute::MaintenanceWindows & maintenanceWindows) { DARABONBA_PTR_SET_VALUE(maintenanceWindows_, maintenanceWindows) };
        inline MaintenanceAttribute& setMaintenanceWindows(MaintenanceAttribute::MaintenanceWindows && maintenanceWindows) { DARABONBA_PTR_SET_RVALUE(maintenanceWindows_, maintenanceWindows) };


        // notifyOnMaintenance Field Functions 
        bool hasNotifyOnMaintenance() const { return this->notifyOnMaintenance_ != nullptr;};
        void deleteNotifyOnMaintenance() { this->notifyOnMaintenance_ = nullptr;};
        inline bool getNotifyOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(notifyOnMaintenance_, false) };
        inline MaintenanceAttribute& setNotifyOnMaintenance(bool notifyOnMaintenance) { DARABONBA_PTR_SET_VALUE(notifyOnMaintenance_, notifyOnMaintenance) };


      protected:
        // The attributes of the maintenance action of the instance.
        shared_ptr<MaintenanceAttribute::ActionOnMaintenance> actionOnMaintenance_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The maintenance windows.
        shared_ptr<MaintenanceAttribute::MaintenanceWindows> maintenanceWindows_ {};
        // Indicates whether an event notification was sent before maintenance.
        shared_ptr<bool> notifyOnMaintenance_ {};
      };

      virtual bool empty() const override { return this->maintenanceAttribute_ == nullptr; };
      // maintenanceAttribute Field Functions 
      bool hasMaintenanceAttribute() const { return this->maintenanceAttribute_ != nullptr;};
      void deleteMaintenanceAttribute() { this->maintenanceAttribute_ = nullptr;};
      inline const vector<MaintenanceAttributes::MaintenanceAttribute> & getMaintenanceAttribute() const { DARABONBA_PTR_GET_CONST(maintenanceAttribute_, vector<MaintenanceAttributes::MaintenanceAttribute>) };
      inline vector<MaintenanceAttributes::MaintenanceAttribute> getMaintenanceAttribute() { DARABONBA_PTR_GET(maintenanceAttribute_, vector<MaintenanceAttributes::MaintenanceAttribute>) };
      inline MaintenanceAttributes& setMaintenanceAttribute(const vector<MaintenanceAttributes::MaintenanceAttribute> & maintenanceAttribute) { DARABONBA_PTR_SET_VALUE(maintenanceAttribute_, maintenanceAttribute) };
      inline MaintenanceAttributes& setMaintenanceAttribute(vector<MaintenanceAttributes::MaintenanceAttribute> && maintenanceAttribute) { DARABONBA_PTR_SET_RVALUE(maintenanceAttribute_, maintenanceAttribute) };


    protected:
      shared_ptr<vector<MaintenanceAttributes::MaintenanceAttribute>> maintenanceAttribute_ {};
    };

    virtual bool empty() const override { return this->maintenanceAttributes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maintenanceAttributes Field Functions 
    bool hasMaintenanceAttributes() const { return this->maintenanceAttributes_ != nullptr;};
    void deleteMaintenanceAttributes() { this->maintenanceAttributes_ = nullptr;};
    inline const DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes & getMaintenanceAttributes() const { DARABONBA_PTR_GET_CONST(maintenanceAttributes_, DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes getMaintenanceAttributes() { DARABONBA_PTR_GET(maintenanceAttributes_, DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setMaintenanceAttributes(const DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes & maintenanceAttributes) { DARABONBA_PTR_SET_VALUE(maintenanceAttributes_, maintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setMaintenanceAttributes(DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes && maintenanceAttributes) { DARABONBA_PTR_SET_RVALUE(maintenanceAttributes_, maintenanceAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maintenance attributes.
    shared_ptr<DescribeInstanceMaintenanceAttributesResponseBody::MaintenanceAttributes> maintenanceAttributes_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried maintenance attributes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
