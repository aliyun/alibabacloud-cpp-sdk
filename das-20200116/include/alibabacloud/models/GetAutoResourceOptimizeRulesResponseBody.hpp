// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoResourceOptimizeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoResourceOptimizeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoResourceOptimizeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoResourceOptimizeRulesResponseBody() = default ;
    GetAutoResourceOptimizeRulesResponseBody(const GetAutoResourceOptimizeRulesResponseBody &) = default ;
    GetAutoResourceOptimizeRulesResponseBody(GetAutoResourceOptimizeRulesResponseBody &&) = default ;
    GetAutoResourceOptimizeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoResourceOptimizeRulesResponseBody() = default ;
    GetAutoResourceOptimizeRulesResponseBody& operator=(const GetAutoResourceOptimizeRulesResponseBody &) = default ;
    GetAutoResourceOptimizeRulesResponseBody& operator=(GetAutoResourceOptimizeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableAutoResourceOptimizeCount, enableAutoResourceOptimizeCount_);
        DARABONBA_PTR_TO_JSON(EnableAutoResourceOptimizeList, enableAutoResourceOptimizeList_);
        DARABONBA_PTR_TO_JSON(HasEnableRuleButNotDasProCount, hasEnableRuleButNotDasProCount_);
        DARABONBA_PTR_TO_JSON(HasEnableRuleButNotDasProList, hasEnableRuleButNotDasProList_);
        DARABONBA_PTR_TO_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceCount, neverEnableAutoResourceOptimizeOrReleasedInstanceCount_);
        DARABONBA_PTR_TO_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceIdList, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_);
        DARABONBA_PTR_TO_JSON(TotalAutoResourceOptimizeRulesCount, totalAutoResourceOptimizeRulesCount_);
        DARABONBA_PTR_TO_JSON(TurnOffAutoResourceOptimizeCount, turnOffAutoResourceOptimizeCount_);
        DARABONBA_PTR_TO_JSON(TurnOffAutoResourceOptimizeList, turnOffAutoResourceOptimizeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableAutoResourceOptimizeCount, enableAutoResourceOptimizeCount_);
        DARABONBA_PTR_FROM_JSON(EnableAutoResourceOptimizeList, enableAutoResourceOptimizeList_);
        DARABONBA_PTR_FROM_JSON(HasEnableRuleButNotDasProCount, hasEnableRuleButNotDasProCount_);
        DARABONBA_PTR_FROM_JSON(HasEnableRuleButNotDasProList, hasEnableRuleButNotDasProList_);
        DARABONBA_PTR_FROM_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceCount, neverEnableAutoResourceOptimizeOrReleasedInstanceCount_);
        DARABONBA_PTR_FROM_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceIdList, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_);
        DARABONBA_PTR_FROM_JSON(TotalAutoResourceOptimizeRulesCount, totalAutoResourceOptimizeRulesCount_);
        DARABONBA_PTR_FROM_JSON(TurnOffAutoResourceOptimizeCount, turnOffAutoResourceOptimizeCount_);
        DARABONBA_PTR_FROM_JSON(TurnOffAutoResourceOptimizeList, turnOffAutoResourceOptimizeList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TurnOffAutoResourceOptimizeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TurnOffAutoResourceOptimizeList& obj) { 
          DARABONBA_PTR_TO_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_TO_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_TO_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, TurnOffAutoResourceOptimizeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_FROM_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_FROM_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        TurnOffAutoResourceOptimizeList() = default ;
        TurnOffAutoResourceOptimizeList(const TurnOffAutoResourceOptimizeList &) = default ;
        TurnOffAutoResourceOptimizeList(TurnOffAutoResourceOptimizeList &&) = default ;
        TurnOffAutoResourceOptimizeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TurnOffAutoResourceOptimizeList() = default ;
        TurnOffAutoResourceOptimizeList& operator=(const TurnOffAutoResourceOptimizeList &) = default ;
        TurnOffAutoResourceOptimizeList& operator=(TurnOffAutoResourceOptimizeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoDefragment_ == nullptr
        && this->dasProOn_ == nullptr && this->instanceId_ == nullptr && this->tableFragmentationRatio_ == nullptr && this->tableSpaceSize_ == nullptr && this->userId_ == nullptr; };
        // autoDefragment Field Functions 
        bool hasAutoDefragment() const { return this->autoDefragment_ != nullptr;};
        void deleteAutoDefragment() { this->autoDefragment_ = nullptr;};
        inline bool getAutoDefragment() const { DARABONBA_PTR_GET_DEFAULT(autoDefragment_, false) };
        inline TurnOffAutoResourceOptimizeList& setAutoDefragment(bool autoDefragment) { DARABONBA_PTR_SET_VALUE(autoDefragment_, autoDefragment) };


        // dasProOn Field Functions 
        bool hasDasProOn() const { return this->dasProOn_ != nullptr;};
        void deleteDasProOn() { this->dasProOn_ = nullptr;};
        inline bool getDasProOn() const { DARABONBA_PTR_GET_DEFAULT(dasProOn_, false) };
        inline TurnOffAutoResourceOptimizeList& setDasProOn(bool dasProOn) { DARABONBA_PTR_SET_VALUE(dasProOn_, dasProOn) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TurnOffAutoResourceOptimizeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // tableFragmentationRatio Field Functions 
        bool hasTableFragmentationRatio() const { return this->tableFragmentationRatio_ != nullptr;};
        void deleteTableFragmentationRatio() { this->tableFragmentationRatio_ = nullptr;};
        inline double getTableFragmentationRatio() const { DARABONBA_PTR_GET_DEFAULT(tableFragmentationRatio_, 0.0) };
        inline TurnOffAutoResourceOptimizeList& setTableFragmentationRatio(double tableFragmentationRatio) { DARABONBA_PTR_SET_VALUE(tableFragmentationRatio_, tableFragmentationRatio) };


        // tableSpaceSize Field Functions 
        bool hasTableSpaceSize() const { return this->tableSpaceSize_ != nullptr;};
        void deleteTableSpaceSize() { this->tableSpaceSize_ = nullptr;};
        inline double getTableSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(tableSpaceSize_, 0.0) };
        inline TurnOffAutoResourceOptimizeList& setTableSpaceSize(double tableSpaceSize) { DARABONBA_PTR_SET_VALUE(tableSpaceSize_, tableSpaceSize) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TurnOffAutoResourceOptimizeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
        // 
        // *   **true**:
        // *   **false**
        shared_ptr<bool> autoDefragment_ {};
        // Indicates whether DAS Enterprise Edition is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dasProOn_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
        // The fragmentation rate of a single physical table for which the automatic fragment recycling feature is enabled.
        shared_ptr<double> tableFragmentationRatio_ {};
        // The minimum storage usage of a single physical table for which the automatic fragment recycling feature is enabled. Unit: GB.
        shared_ptr<double> tableSpaceSize_ {};
        // The ID of the Alibaba Cloud account that is used to create the database instance.
        shared_ptr<string> userId_ {};
      };

      class HasEnableRuleButNotDasProList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HasEnableRuleButNotDasProList& obj) { 
          DARABONBA_PTR_TO_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_TO_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_TO_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, HasEnableRuleButNotDasProList& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_FROM_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_FROM_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        HasEnableRuleButNotDasProList() = default ;
        HasEnableRuleButNotDasProList(const HasEnableRuleButNotDasProList &) = default ;
        HasEnableRuleButNotDasProList(HasEnableRuleButNotDasProList &&) = default ;
        HasEnableRuleButNotDasProList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HasEnableRuleButNotDasProList() = default ;
        HasEnableRuleButNotDasProList& operator=(const HasEnableRuleButNotDasProList &) = default ;
        HasEnableRuleButNotDasProList& operator=(HasEnableRuleButNotDasProList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoDefragment_ == nullptr
        && this->dasProOn_ == nullptr && this->instanceId_ == nullptr && this->tableFragmentationRatio_ == nullptr && this->tableSpaceSize_ == nullptr && this->userId_ == nullptr; };
        // autoDefragment Field Functions 
        bool hasAutoDefragment() const { return this->autoDefragment_ != nullptr;};
        void deleteAutoDefragment() { this->autoDefragment_ = nullptr;};
        inline bool getAutoDefragment() const { DARABONBA_PTR_GET_DEFAULT(autoDefragment_, false) };
        inline HasEnableRuleButNotDasProList& setAutoDefragment(bool autoDefragment) { DARABONBA_PTR_SET_VALUE(autoDefragment_, autoDefragment) };


        // dasProOn Field Functions 
        bool hasDasProOn() const { return this->dasProOn_ != nullptr;};
        void deleteDasProOn() { this->dasProOn_ = nullptr;};
        inline bool getDasProOn() const { DARABONBA_PTR_GET_DEFAULT(dasProOn_, false) };
        inline HasEnableRuleButNotDasProList& setDasProOn(bool dasProOn) { DARABONBA_PTR_SET_VALUE(dasProOn_, dasProOn) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline HasEnableRuleButNotDasProList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // tableFragmentationRatio Field Functions 
        bool hasTableFragmentationRatio() const { return this->tableFragmentationRatio_ != nullptr;};
        void deleteTableFragmentationRatio() { this->tableFragmentationRatio_ = nullptr;};
        inline double getTableFragmentationRatio() const { DARABONBA_PTR_GET_DEFAULT(tableFragmentationRatio_, 0.0) };
        inline HasEnableRuleButNotDasProList& setTableFragmentationRatio(double tableFragmentationRatio) { DARABONBA_PTR_SET_VALUE(tableFragmentationRatio_, tableFragmentationRatio) };


        // tableSpaceSize Field Functions 
        bool hasTableSpaceSize() const { return this->tableSpaceSize_ != nullptr;};
        void deleteTableSpaceSize() { this->tableSpaceSize_ = nullptr;};
        inline double getTableSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(tableSpaceSize_, 0.0) };
        inline HasEnableRuleButNotDasProList& setTableSpaceSize(double tableSpaceSize) { DARABONBA_PTR_SET_VALUE(tableSpaceSize_, tableSpaceSize) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline HasEnableRuleButNotDasProList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> autoDefragment_ {};
        // Indicates whether DAS Enterprise Edition is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dasProOn_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
        // The fragmentation rate of a single physical table for which the automatic fragment recycling feature is enabled.
        shared_ptr<double> tableFragmentationRatio_ {};
        // The minimum storage usage of a single physical table for which the automatic fragment recycling feature is enabled. Unit: GB.
        shared_ptr<double> tableSpaceSize_ {};
        // The ID of the Alibaba Cloud account that is used to create the database instance.
        shared_ptr<string> userId_ {};
      };

      class EnableAutoResourceOptimizeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnableAutoResourceOptimizeList& obj) { 
          DARABONBA_PTR_TO_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_TO_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_TO_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, EnableAutoResourceOptimizeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoDefragment, autoDefragment_);
          DARABONBA_PTR_FROM_JSON(DasProOn, dasProOn_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TableFragmentationRatio, tableFragmentationRatio_);
          DARABONBA_PTR_FROM_JSON(TableSpaceSize, tableSpaceSize_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        EnableAutoResourceOptimizeList() = default ;
        EnableAutoResourceOptimizeList(const EnableAutoResourceOptimizeList &) = default ;
        EnableAutoResourceOptimizeList(EnableAutoResourceOptimizeList &&) = default ;
        EnableAutoResourceOptimizeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnableAutoResourceOptimizeList() = default ;
        EnableAutoResourceOptimizeList& operator=(const EnableAutoResourceOptimizeList &) = default ;
        EnableAutoResourceOptimizeList& operator=(EnableAutoResourceOptimizeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoDefragment_ == nullptr
        && this->dasProOn_ == nullptr && this->instanceId_ == nullptr && this->tableFragmentationRatio_ == nullptr && this->tableSpaceSize_ == nullptr && this->userId_ == nullptr; };
        // autoDefragment Field Functions 
        bool hasAutoDefragment() const { return this->autoDefragment_ != nullptr;};
        void deleteAutoDefragment() { this->autoDefragment_ = nullptr;};
        inline bool getAutoDefragment() const { DARABONBA_PTR_GET_DEFAULT(autoDefragment_, false) };
        inline EnableAutoResourceOptimizeList& setAutoDefragment(bool autoDefragment) { DARABONBA_PTR_SET_VALUE(autoDefragment_, autoDefragment) };


        // dasProOn Field Functions 
        bool hasDasProOn() const { return this->dasProOn_ != nullptr;};
        void deleteDasProOn() { this->dasProOn_ = nullptr;};
        inline bool getDasProOn() const { DARABONBA_PTR_GET_DEFAULT(dasProOn_, false) };
        inline EnableAutoResourceOptimizeList& setDasProOn(bool dasProOn) { DARABONBA_PTR_SET_VALUE(dasProOn_, dasProOn) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EnableAutoResourceOptimizeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // tableFragmentationRatio Field Functions 
        bool hasTableFragmentationRatio() const { return this->tableFragmentationRatio_ != nullptr;};
        void deleteTableFragmentationRatio() { this->tableFragmentationRatio_ = nullptr;};
        inline double getTableFragmentationRatio() const { DARABONBA_PTR_GET_DEFAULT(tableFragmentationRatio_, 0.0) };
        inline EnableAutoResourceOptimizeList& setTableFragmentationRatio(double tableFragmentationRatio) { DARABONBA_PTR_SET_VALUE(tableFragmentationRatio_, tableFragmentationRatio) };


        // tableSpaceSize Field Functions 
        bool hasTableSpaceSize() const { return this->tableSpaceSize_ != nullptr;};
        void deleteTableSpaceSize() { this->tableSpaceSize_ = nullptr;};
        inline double getTableSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(tableSpaceSize_, 0.0) };
        inline EnableAutoResourceOptimizeList& setTableSpaceSize(double tableSpaceSize) { DARABONBA_PTR_SET_VALUE(tableSpaceSize_, tableSpaceSize) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline EnableAutoResourceOptimizeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> autoDefragment_ {};
        // Indicates whether DAS Enterprise Edition is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dasProOn_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
        // The fragmentation rate of a single physical table for which the automatic fragment recycling feature is enabled.
        shared_ptr<double> tableFragmentationRatio_ {};
        // The minimum storage usage of a single physical table for which the automatic fragment recycling feature is enabled. Unit: GB.
        shared_ptr<double> tableSpaceSize_ {};
        // The ID of the Alibaba Cloud account that is used to create the database instance.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->enableAutoResourceOptimizeCount_ == nullptr
        && this->enableAutoResourceOptimizeList_ == nullptr && this->hasEnableRuleButNotDasProCount_ == nullptr && this->hasEnableRuleButNotDasProList_ == nullptr && this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ == nullptr && this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ == nullptr
        && this->totalAutoResourceOptimizeRulesCount_ == nullptr && this->turnOffAutoResourceOptimizeCount_ == nullptr && this->turnOffAutoResourceOptimizeList_ == nullptr; };
      // enableAutoResourceOptimizeCount Field Functions 
      bool hasEnableAutoResourceOptimizeCount() const { return this->enableAutoResourceOptimizeCount_ != nullptr;};
      void deleteEnableAutoResourceOptimizeCount() { this->enableAutoResourceOptimizeCount_ = nullptr;};
      inline int64_t getEnableAutoResourceOptimizeCount() const { DARABONBA_PTR_GET_DEFAULT(enableAutoResourceOptimizeCount_, 0L) };
      inline Data& setEnableAutoResourceOptimizeCount(int64_t enableAutoResourceOptimizeCount) { DARABONBA_PTR_SET_VALUE(enableAutoResourceOptimizeCount_, enableAutoResourceOptimizeCount) };


      // enableAutoResourceOptimizeList Field Functions 
      bool hasEnableAutoResourceOptimizeList() const { return this->enableAutoResourceOptimizeList_ != nullptr;};
      void deleteEnableAutoResourceOptimizeList() { this->enableAutoResourceOptimizeList_ = nullptr;};
      inline const vector<Data::EnableAutoResourceOptimizeList> & getEnableAutoResourceOptimizeList() const { DARABONBA_PTR_GET_CONST(enableAutoResourceOptimizeList_, vector<Data::EnableAutoResourceOptimizeList>) };
      inline vector<Data::EnableAutoResourceOptimizeList> getEnableAutoResourceOptimizeList() { DARABONBA_PTR_GET(enableAutoResourceOptimizeList_, vector<Data::EnableAutoResourceOptimizeList>) };
      inline Data& setEnableAutoResourceOptimizeList(const vector<Data::EnableAutoResourceOptimizeList> & enableAutoResourceOptimizeList) { DARABONBA_PTR_SET_VALUE(enableAutoResourceOptimizeList_, enableAutoResourceOptimizeList) };
      inline Data& setEnableAutoResourceOptimizeList(vector<Data::EnableAutoResourceOptimizeList> && enableAutoResourceOptimizeList) { DARABONBA_PTR_SET_RVALUE(enableAutoResourceOptimizeList_, enableAutoResourceOptimizeList) };


      // hasEnableRuleButNotDasProCount Field Functions 
      bool hasHasEnableRuleButNotDasProCount() const { return this->hasEnableRuleButNotDasProCount_ != nullptr;};
      void deleteHasEnableRuleButNotDasProCount() { this->hasEnableRuleButNotDasProCount_ = nullptr;};
      inline int64_t getHasEnableRuleButNotDasProCount() const { DARABONBA_PTR_GET_DEFAULT(hasEnableRuleButNotDasProCount_, 0L) };
      inline Data& setHasEnableRuleButNotDasProCount(int64_t hasEnableRuleButNotDasProCount) { DARABONBA_PTR_SET_VALUE(hasEnableRuleButNotDasProCount_, hasEnableRuleButNotDasProCount) };


      // hasEnableRuleButNotDasProList Field Functions 
      bool hasHasEnableRuleButNotDasProList() const { return this->hasEnableRuleButNotDasProList_ != nullptr;};
      void deleteHasEnableRuleButNotDasProList() { this->hasEnableRuleButNotDasProList_ = nullptr;};
      inline const vector<Data::HasEnableRuleButNotDasProList> & getHasEnableRuleButNotDasProList() const { DARABONBA_PTR_GET_CONST(hasEnableRuleButNotDasProList_, vector<Data::HasEnableRuleButNotDasProList>) };
      inline vector<Data::HasEnableRuleButNotDasProList> getHasEnableRuleButNotDasProList() { DARABONBA_PTR_GET(hasEnableRuleButNotDasProList_, vector<Data::HasEnableRuleButNotDasProList>) };
      inline Data& setHasEnableRuleButNotDasProList(const vector<Data::HasEnableRuleButNotDasProList> & hasEnableRuleButNotDasProList) { DARABONBA_PTR_SET_VALUE(hasEnableRuleButNotDasProList_, hasEnableRuleButNotDasProList) };
      inline Data& setHasEnableRuleButNotDasProList(vector<Data::HasEnableRuleButNotDasProList> && hasEnableRuleButNotDasProList) { DARABONBA_PTR_SET_RVALUE(hasEnableRuleButNotDasProList_, hasEnableRuleButNotDasProList) };


      // neverEnableAutoResourceOptimizeOrReleasedInstanceCount Field Functions 
      bool hasNeverEnableAutoResourceOptimizeOrReleasedInstanceCount() const { return this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ != nullptr;};
      void deleteNeverEnableAutoResourceOptimizeOrReleasedInstanceCount() { this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ = nullptr;};
      inline int64_t getNeverEnableAutoResourceOptimizeOrReleasedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(neverEnableAutoResourceOptimizeOrReleasedInstanceCount_, 0L) };
      inline Data& setNeverEnableAutoResourceOptimizeOrReleasedInstanceCount(int64_t neverEnableAutoResourceOptimizeOrReleasedInstanceCount) { DARABONBA_PTR_SET_VALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceCount_, neverEnableAutoResourceOptimizeOrReleasedInstanceCount) };


      // neverEnableAutoResourceOptimizeOrReleasedInstanceIdList Field Functions 
      bool hasNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() const { return this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ != nullptr;};
      void deleteNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() { this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ = nullptr;};
      inline const vector<string> & getNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() const { DARABONBA_PTR_GET_CONST(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, vector<string>) };
      inline vector<string> getNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() { DARABONBA_PTR_GET(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, vector<string>) };
      inline Data& setNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList(const vector<string> & neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) { DARABONBA_PTR_SET_VALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) };
      inline Data& setNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList(vector<string> && neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) { DARABONBA_PTR_SET_RVALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) };


      // totalAutoResourceOptimizeRulesCount Field Functions 
      bool hasTotalAutoResourceOptimizeRulesCount() const { return this->totalAutoResourceOptimizeRulesCount_ != nullptr;};
      void deleteTotalAutoResourceOptimizeRulesCount() { this->totalAutoResourceOptimizeRulesCount_ = nullptr;};
      inline int64_t getTotalAutoResourceOptimizeRulesCount() const { DARABONBA_PTR_GET_DEFAULT(totalAutoResourceOptimizeRulesCount_, 0L) };
      inline Data& setTotalAutoResourceOptimizeRulesCount(int64_t totalAutoResourceOptimizeRulesCount) { DARABONBA_PTR_SET_VALUE(totalAutoResourceOptimizeRulesCount_, totalAutoResourceOptimizeRulesCount) };


      // turnOffAutoResourceOptimizeCount Field Functions 
      bool hasTurnOffAutoResourceOptimizeCount() const { return this->turnOffAutoResourceOptimizeCount_ != nullptr;};
      void deleteTurnOffAutoResourceOptimizeCount() { this->turnOffAutoResourceOptimizeCount_ = nullptr;};
      inline int64_t getTurnOffAutoResourceOptimizeCount() const { DARABONBA_PTR_GET_DEFAULT(turnOffAutoResourceOptimizeCount_, 0L) };
      inline Data& setTurnOffAutoResourceOptimizeCount(int64_t turnOffAutoResourceOptimizeCount) { DARABONBA_PTR_SET_VALUE(turnOffAutoResourceOptimizeCount_, turnOffAutoResourceOptimizeCount) };


      // turnOffAutoResourceOptimizeList Field Functions 
      bool hasTurnOffAutoResourceOptimizeList() const { return this->turnOffAutoResourceOptimizeList_ != nullptr;};
      void deleteTurnOffAutoResourceOptimizeList() { this->turnOffAutoResourceOptimizeList_ = nullptr;};
      inline const vector<Data::TurnOffAutoResourceOptimizeList> & getTurnOffAutoResourceOptimizeList() const { DARABONBA_PTR_GET_CONST(turnOffAutoResourceOptimizeList_, vector<Data::TurnOffAutoResourceOptimizeList>) };
      inline vector<Data::TurnOffAutoResourceOptimizeList> getTurnOffAutoResourceOptimizeList() { DARABONBA_PTR_GET(turnOffAutoResourceOptimizeList_, vector<Data::TurnOffAutoResourceOptimizeList>) };
      inline Data& setTurnOffAutoResourceOptimizeList(const vector<Data::TurnOffAutoResourceOptimizeList> & turnOffAutoResourceOptimizeList) { DARABONBA_PTR_SET_VALUE(turnOffAutoResourceOptimizeList_, turnOffAutoResourceOptimizeList) };
      inline Data& setTurnOffAutoResourceOptimizeList(vector<Data::TurnOffAutoResourceOptimizeList> && turnOffAutoResourceOptimizeList) { DARABONBA_PTR_SET_RVALUE(turnOffAutoResourceOptimizeList_, turnOffAutoResourceOptimizeList) };


    protected:
      // The number of database instances for which the automatic fragment recycling feature is currently enabled.
      shared_ptr<int64_t> enableAutoResourceOptimizeCount_ {};
      // The database instances for which the automatic fragment recycling feature is currently enabled.
      shared_ptr<vector<Data::EnableAutoResourceOptimizeList>> enableAutoResourceOptimizeList_ {};
      // The number of database instances for which the automatic fragment recycling feature is enabled and DAS Enterprise Edition is disabled.
      shared_ptr<int64_t> hasEnableRuleButNotDasProCount_ {};
      // The database instances for which the automatic fragment recycling feature is enabled and DAS Enterprise Edition is disabled.
      // 
      // >  Automatic fragment recycling tasks are run on this type of database instances only if DAS Enterprise Edition is enabled for the database instances again.
      shared_ptr<vector<Data::HasEnableRuleButNotDasProList>> hasEnableRuleButNotDasProList_ {};
      // The number of database instances that do not exist or for which the automatic fragment recycling feature has never been enabled.
      // 
      // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
      shared_ptr<int64_t> neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ {};
      // The database instances that do not exist or for which the automatic fragment recycling feature has never been enabled.
      shared_ptr<vector<string>> neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ {};
      // The number of database instances for which the automatic fragment recycling feature has been enabled.
      shared_ptr<int64_t> totalAutoResourceOptimizeRulesCount_ {};
      // The number of database instances for which the automatic fragment recycling feature was once enabled but is currently disabled.
      shared_ptr<int64_t> turnOffAutoResourceOptimizeCount_ {};
      // The database instances for which the automatic fragment recycling feature was once enabled but is currently disabled.
      shared_ptr<vector<Data::TurnOffAutoResourceOptimizeList>> turnOffAutoResourceOptimizeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoResourceOptimizeRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoResourceOptimizeRulesResponseBody::Data) };
    inline GetAutoResourceOptimizeRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoResourceOptimizeRulesResponseBody::Data) };
    inline GetAutoResourceOptimizeRulesResponseBody& setData(const GetAutoResourceOptimizeRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoResourceOptimizeRulesResponseBody& setData(GetAutoResourceOptimizeRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoResourceOptimizeRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoResourceOptimizeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoResourceOptimizeRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetAutoResourceOptimizeRulesResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
