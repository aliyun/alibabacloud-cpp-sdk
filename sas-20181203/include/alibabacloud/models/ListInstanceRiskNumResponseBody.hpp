// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRiskNum, instanceRiskNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRiskNum, instanceRiskNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRiskNumResponseBody() = default ;
    ListInstanceRiskNumResponseBody(const ListInstanceRiskNumResponseBody &) = default ;
    ListInstanceRiskNumResponseBody(ListInstanceRiskNumResponseBody &&) = default ;
    ListInstanceRiskNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumResponseBody() = default ;
    ListInstanceRiskNumResponseBody& operator=(const ListInstanceRiskNumResponseBody &) = default ;
    ListInstanceRiskNumResponseBody& operator=(ListInstanceRiskNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRiskNum : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRiskNum& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceItem, instanceItem_);
        DARABONBA_PTR_TO_JSON(RiskNumEntity, riskNumEntity_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRiskNum& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceItem, instanceItem_);
        DARABONBA_PTR_FROM_JSON(RiskNumEntity, riskNumEntity_);
      };
      InstanceRiskNum() = default ;
      InstanceRiskNum(const InstanceRiskNum &) = default ;
      InstanceRiskNum(InstanceRiskNum &&) = default ;
      InstanceRiskNum(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRiskNum() = default ;
      InstanceRiskNum& operator=(const InstanceRiskNum &) = default ;
      InstanceRiskNum& operator=(InstanceRiskNum &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskNumEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskNumEntity& obj) { 
          DARABONBA_PTR_TO_JSON(SuspiciousHighCount, suspiciousHighCount_);
          DARABONBA_PTR_TO_JSON(SuspiciousLowCount, suspiciousLowCount_);
          DARABONBA_PTR_TO_JSON(SuspiciousMediumCount, suspiciousMediumCount_);
          DARABONBA_PTR_TO_JSON(VulHighCount, vulHighCount_);
          DARABONBA_PTR_TO_JSON(VulLowCount, vulLowCount_);
          DARABONBA_PTR_TO_JSON(VulMediumCount, vulMediumCount_);
          DARABONBA_PTR_TO_JSON(WeakPassWordCount, weakPassWordCount_);
        };
        friend void from_json(const Darabonba::Json& j, RiskNumEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(SuspiciousHighCount, suspiciousHighCount_);
          DARABONBA_PTR_FROM_JSON(SuspiciousLowCount, suspiciousLowCount_);
          DARABONBA_PTR_FROM_JSON(SuspiciousMediumCount, suspiciousMediumCount_);
          DARABONBA_PTR_FROM_JSON(VulHighCount, vulHighCount_);
          DARABONBA_PTR_FROM_JSON(VulLowCount, vulLowCount_);
          DARABONBA_PTR_FROM_JSON(VulMediumCount, vulMediumCount_);
          DARABONBA_PTR_FROM_JSON(WeakPassWordCount, weakPassWordCount_);
        };
        RiskNumEntity() = default ;
        RiskNumEntity(const RiskNumEntity &) = default ;
        RiskNumEntity(RiskNumEntity &&) = default ;
        RiskNumEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskNumEntity() = default ;
        RiskNumEntity& operator=(const RiskNumEntity &) = default ;
        RiskNumEntity& operator=(RiskNumEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->suspiciousHighCount_ == nullptr
        && this->suspiciousLowCount_ == nullptr && this->suspiciousMediumCount_ == nullptr && this->vulHighCount_ == nullptr && this->vulLowCount_ == nullptr && this->vulMediumCount_ == nullptr
        && this->weakPassWordCount_ == nullptr; };
        // suspiciousHighCount Field Functions 
        bool hasSuspiciousHighCount() const { return this->suspiciousHighCount_ != nullptr;};
        void deleteSuspiciousHighCount() { this->suspiciousHighCount_ = nullptr;};
        inline int32_t getSuspiciousHighCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousHighCount_, 0) };
        inline RiskNumEntity& setSuspiciousHighCount(int32_t suspiciousHighCount) { DARABONBA_PTR_SET_VALUE(suspiciousHighCount_, suspiciousHighCount) };


        // suspiciousLowCount Field Functions 
        bool hasSuspiciousLowCount() const { return this->suspiciousLowCount_ != nullptr;};
        void deleteSuspiciousLowCount() { this->suspiciousLowCount_ = nullptr;};
        inline int32_t getSuspiciousLowCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousLowCount_, 0) };
        inline RiskNumEntity& setSuspiciousLowCount(int32_t suspiciousLowCount) { DARABONBA_PTR_SET_VALUE(suspiciousLowCount_, suspiciousLowCount) };


        // suspiciousMediumCount Field Functions 
        bool hasSuspiciousMediumCount() const { return this->suspiciousMediumCount_ != nullptr;};
        void deleteSuspiciousMediumCount() { this->suspiciousMediumCount_ = nullptr;};
        inline int32_t getSuspiciousMediumCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousMediumCount_, 0) };
        inline RiskNumEntity& setSuspiciousMediumCount(int32_t suspiciousMediumCount) { DARABONBA_PTR_SET_VALUE(suspiciousMediumCount_, suspiciousMediumCount) };


        // vulHighCount Field Functions 
        bool hasVulHighCount() const { return this->vulHighCount_ != nullptr;};
        void deleteVulHighCount() { this->vulHighCount_ = nullptr;};
        inline int32_t getVulHighCount() const { DARABONBA_PTR_GET_DEFAULT(vulHighCount_, 0) };
        inline RiskNumEntity& setVulHighCount(int32_t vulHighCount) { DARABONBA_PTR_SET_VALUE(vulHighCount_, vulHighCount) };


        // vulLowCount Field Functions 
        bool hasVulLowCount() const { return this->vulLowCount_ != nullptr;};
        void deleteVulLowCount() { this->vulLowCount_ = nullptr;};
        inline int32_t getVulLowCount() const { DARABONBA_PTR_GET_DEFAULT(vulLowCount_, 0) };
        inline RiskNumEntity& setVulLowCount(int32_t vulLowCount) { DARABONBA_PTR_SET_VALUE(vulLowCount_, vulLowCount) };


        // vulMediumCount Field Functions 
        bool hasVulMediumCount() const { return this->vulMediumCount_ != nullptr;};
        void deleteVulMediumCount() { this->vulMediumCount_ = nullptr;};
        inline int32_t getVulMediumCount() const { DARABONBA_PTR_GET_DEFAULT(vulMediumCount_, 0) };
        inline RiskNumEntity& setVulMediumCount(int32_t vulMediumCount) { DARABONBA_PTR_SET_VALUE(vulMediumCount_, vulMediumCount) };


        // weakPassWordCount Field Functions 
        bool hasWeakPassWordCount() const { return this->weakPassWordCount_ != nullptr;};
        void deleteWeakPassWordCount() { this->weakPassWordCount_ = nullptr;};
        inline int32_t getWeakPassWordCount() const { DARABONBA_PTR_GET_DEFAULT(weakPassWordCount_, 0) };
        inline RiskNumEntity& setWeakPassWordCount(int32_t weakPassWordCount) { DARABONBA_PTR_SET_VALUE(weakPassWordCount_, weakPassWordCount) };


      protected:
        // The number of high-risk alerts.
        shared_ptr<int32_t> suspiciousHighCount_ {};
        // The number of low-risk alerts.
        shared_ptr<int32_t> suspiciousLowCount_ {};
        // The number of medium-risk alerts.
        shared_ptr<int32_t> suspiciousMediumCount_ {};
        // The number of high-risk vulnerabilities.
        shared_ptr<int32_t> vulHighCount_ {};
        // The number of low-risk vulnerabilities.
        shared_ptr<int32_t> vulLowCount_ {};
        // The number of medium-risk vulnerabilities.
        shared_ptr<int32_t> vulMediumCount_ {};
        // The number of weak passwords exposed on the Internet.
        shared_ptr<int32_t> weakPassWordCount_ {};
      };

      class InstanceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceItem& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        InstanceItem() = default ;
        InstanceItem(const InstanceItem &) = default ;
        InstanceItem(InstanceItem &&) = default ;
        InstanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceItem() = default ;
        InstanceItem& operator=(const InstanceItem &) = default ;
        InstanceItem& operator=(InstanceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->uuid_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline InstanceItem& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The UUID of the instance.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->instanceItem_ == nullptr
        && this->riskNumEntity_ == nullptr; };
      // instanceItem Field Functions 
      bool hasInstanceItem() const { return this->instanceItem_ != nullptr;};
      void deleteInstanceItem() { this->instanceItem_ = nullptr;};
      inline const InstanceRiskNum::InstanceItem & getInstanceItem() const { DARABONBA_PTR_GET_CONST(instanceItem_, InstanceRiskNum::InstanceItem) };
      inline InstanceRiskNum::InstanceItem getInstanceItem() { DARABONBA_PTR_GET(instanceItem_, InstanceRiskNum::InstanceItem) };
      inline InstanceRiskNum& setInstanceItem(const InstanceRiskNum::InstanceItem & instanceItem) { DARABONBA_PTR_SET_VALUE(instanceItem_, instanceItem) };
      inline InstanceRiskNum& setInstanceItem(InstanceRiskNum::InstanceItem && instanceItem) { DARABONBA_PTR_SET_RVALUE(instanceItem_, instanceItem) };


      // riskNumEntity Field Functions 
      bool hasRiskNumEntity() const { return this->riskNumEntity_ != nullptr;};
      void deleteRiskNumEntity() { this->riskNumEntity_ = nullptr;};
      inline const InstanceRiskNum::RiskNumEntity & getRiskNumEntity() const { DARABONBA_PTR_GET_CONST(riskNumEntity_, InstanceRiskNum::RiskNumEntity) };
      inline InstanceRiskNum::RiskNumEntity getRiskNumEntity() { DARABONBA_PTR_GET(riskNumEntity_, InstanceRiskNum::RiskNumEntity) };
      inline InstanceRiskNum& setRiskNumEntity(const InstanceRiskNum::RiskNumEntity & riskNumEntity) { DARABONBA_PTR_SET_VALUE(riskNumEntity_, riskNumEntity) };
      inline InstanceRiskNum& setRiskNumEntity(InstanceRiskNum::RiskNumEntity && riskNumEntity) { DARABONBA_PTR_SET_RVALUE(riskNumEntity_, riskNumEntity) };


    protected:
      // The information about the instance.
      shared_ptr<InstanceRiskNum::InstanceItem> instanceItem_ {};
      // The statistics about the risks.
      shared_ptr<InstanceRiskNum::RiskNumEntity> riskNumEntity_ {};
    };

    virtual bool empty() const override { return this->instanceRiskNum_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceRiskNum Field Functions 
    bool hasInstanceRiskNum() const { return this->instanceRiskNum_ != nullptr;};
    void deleteInstanceRiskNum() { this->instanceRiskNum_ = nullptr;};
    inline const vector<ListInstanceRiskNumResponseBody::InstanceRiskNum> & getInstanceRiskNum() const { DARABONBA_PTR_GET_CONST(instanceRiskNum_, vector<ListInstanceRiskNumResponseBody::InstanceRiskNum>) };
    inline vector<ListInstanceRiskNumResponseBody::InstanceRiskNum> getInstanceRiskNum() { DARABONBA_PTR_GET(instanceRiskNum_, vector<ListInstanceRiskNumResponseBody::InstanceRiskNum>) };
    inline ListInstanceRiskNumResponseBody& setInstanceRiskNum(const vector<ListInstanceRiskNumResponseBody::InstanceRiskNum> & instanceRiskNum) { DARABONBA_PTR_SET_VALUE(instanceRiskNum_, instanceRiskNum) };
    inline ListInstanceRiskNumResponseBody& setInstanceRiskNum(vector<ListInstanceRiskNumResponseBody::InstanceRiskNum> && instanceRiskNum) { DARABONBA_PTR_SET_RVALUE(instanceRiskNum_, instanceRiskNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRiskNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the risks in the instance.
    shared_ptr<vector<ListInstanceRiskNumResponseBody::InstanceRiskNum>> instanceRiskNum_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
