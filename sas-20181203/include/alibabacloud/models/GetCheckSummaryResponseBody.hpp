// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODY_HPP_
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
  class GetCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallItemStatistic, overallItemStatistic_);
      DARABONBA_PTR_TO_JSON(OverallStatistic, overallStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Summarys, summarys_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallItemStatistic, overallItemStatistic_);
      DARABONBA_PTR_FROM_JSON(OverallStatistic, overallStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Summarys, summarys_);
    };
    GetCheckSummaryResponseBody() = default ;
    GetCheckSummaryResponseBody(const GetCheckSummaryResponseBody &) = default ;
    GetCheckSummaryResponseBody(GetCheckSummaryResponseBody &&) = default ;
    GetCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBody() = default ;
    GetCheckSummaryResponseBody& operator=(const GetCheckSummaryResponseBody &) = default ;
    GetCheckSummaryResponseBody& operator=(GetCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summarys& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(PassCount, passCount_);
        DARABONBA_PTR_TO_JSON(Standards, standards_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeStatistic, typeStatistic_);
      };
      friend void from_json(const Darabonba::Json& j, Summarys& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
        DARABONBA_PTR_FROM_JSON(Standards, standards_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeStatistic, typeStatistic_);
      };
      Summarys() = default ;
      Summarys(const Summarys &) = default ;
      Summarys(Summarys &&) = default ;
      Summarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summarys() = default ;
      Summarys& operator=(const Summarys &) = default ;
      Summarys& operator=(Summarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TypeStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TypeStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(NotCheckCount, notCheckCount_);
          DARABONBA_PTR_TO_JSON(NotCheckHighCount, notCheckHighCount_);
          DARABONBA_PTR_TO_JSON(NotCheckLowCount, notCheckLowCount_);
          DARABONBA_PTR_TO_JSON(NotCheckMediumCount, notCheckMediumCount_);
          DARABONBA_PTR_TO_JSON(NotPassCount, notPassCount_);
          DARABONBA_PTR_TO_JSON(NotPassHighCount, notPassHighCount_);
          DARABONBA_PTR_TO_JSON(NotPassLowCount, notPassLowCount_);
          DARABONBA_PTR_TO_JSON(NotPassMediumCount, notPassMediumCount_);
          DARABONBA_PTR_TO_JSON(PassCount, passCount_);
          DARABONBA_PTR_TO_JSON(PassHighCount, passHighCount_);
          DARABONBA_PTR_TO_JSON(PassLowCount, passLowCount_);
          DARABONBA_PTR_TO_JSON(PassMediumCount, passMediumCount_);
        };
        friend void from_json(const Darabonba::Json& j, TypeStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(NotCheckCount, notCheckCount_);
          DARABONBA_PTR_FROM_JSON(NotCheckHighCount, notCheckHighCount_);
          DARABONBA_PTR_FROM_JSON(NotCheckLowCount, notCheckLowCount_);
          DARABONBA_PTR_FROM_JSON(NotCheckMediumCount, notCheckMediumCount_);
          DARABONBA_PTR_FROM_JSON(NotPassCount, notPassCount_);
          DARABONBA_PTR_FROM_JSON(NotPassHighCount, notPassHighCount_);
          DARABONBA_PTR_FROM_JSON(NotPassLowCount, notPassLowCount_);
          DARABONBA_PTR_FROM_JSON(NotPassMediumCount, notPassMediumCount_);
          DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
          DARABONBA_PTR_FROM_JSON(PassHighCount, passHighCount_);
          DARABONBA_PTR_FROM_JSON(PassLowCount, passLowCount_);
          DARABONBA_PTR_FROM_JSON(PassMediumCount, passMediumCount_);
        };
        TypeStatistic() = default ;
        TypeStatistic(const TypeStatistic &) = default ;
        TypeStatistic(TypeStatistic &&) = default ;
        TypeStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TypeStatistic() = default ;
        TypeStatistic& operator=(const TypeStatistic &) = default ;
        TypeStatistic& operator=(TypeStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->notCheckCount_ == nullptr
        && this->notCheckHighCount_ == nullptr && this->notCheckLowCount_ == nullptr && this->notCheckMediumCount_ == nullptr && this->notPassCount_ == nullptr && this->notPassHighCount_ == nullptr
        && this->notPassLowCount_ == nullptr && this->notPassMediumCount_ == nullptr && this->passCount_ == nullptr && this->passHighCount_ == nullptr && this->passLowCount_ == nullptr
        && this->passMediumCount_ == nullptr; };
        // notCheckCount Field Functions 
        bool hasNotCheckCount() const { return this->notCheckCount_ != nullptr;};
        void deleteNotCheckCount() { this->notCheckCount_ = nullptr;};
        inline int32_t getNotCheckCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckCount_, 0) };
        inline TypeStatistic& setNotCheckCount(int32_t notCheckCount) { DARABONBA_PTR_SET_VALUE(notCheckCount_, notCheckCount) };


        // notCheckHighCount Field Functions 
        bool hasNotCheckHighCount() const { return this->notCheckHighCount_ != nullptr;};
        void deleteNotCheckHighCount() { this->notCheckHighCount_ = nullptr;};
        inline int32_t getNotCheckHighCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckHighCount_, 0) };
        inline TypeStatistic& setNotCheckHighCount(int32_t notCheckHighCount) { DARABONBA_PTR_SET_VALUE(notCheckHighCount_, notCheckHighCount) };


        // notCheckLowCount Field Functions 
        bool hasNotCheckLowCount() const { return this->notCheckLowCount_ != nullptr;};
        void deleteNotCheckLowCount() { this->notCheckLowCount_ = nullptr;};
        inline int32_t getNotCheckLowCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckLowCount_, 0) };
        inline TypeStatistic& setNotCheckLowCount(int32_t notCheckLowCount) { DARABONBA_PTR_SET_VALUE(notCheckLowCount_, notCheckLowCount) };


        // notCheckMediumCount Field Functions 
        bool hasNotCheckMediumCount() const { return this->notCheckMediumCount_ != nullptr;};
        void deleteNotCheckMediumCount() { this->notCheckMediumCount_ = nullptr;};
        inline int32_t getNotCheckMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckMediumCount_, 0) };
        inline TypeStatistic& setNotCheckMediumCount(int32_t notCheckMediumCount) { DARABONBA_PTR_SET_VALUE(notCheckMediumCount_, notCheckMediumCount) };


        // notPassCount Field Functions 
        bool hasNotPassCount() const { return this->notPassCount_ != nullptr;};
        void deleteNotPassCount() { this->notPassCount_ = nullptr;};
        inline int32_t getNotPassCount() const { DARABONBA_PTR_GET_DEFAULT(notPassCount_, 0) };
        inline TypeStatistic& setNotPassCount(int32_t notPassCount) { DARABONBA_PTR_SET_VALUE(notPassCount_, notPassCount) };


        // notPassHighCount Field Functions 
        bool hasNotPassHighCount() const { return this->notPassHighCount_ != nullptr;};
        void deleteNotPassHighCount() { this->notPassHighCount_ = nullptr;};
        inline int32_t getNotPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(notPassHighCount_, 0) };
        inline TypeStatistic& setNotPassHighCount(int32_t notPassHighCount) { DARABONBA_PTR_SET_VALUE(notPassHighCount_, notPassHighCount) };


        // notPassLowCount Field Functions 
        bool hasNotPassLowCount() const { return this->notPassLowCount_ != nullptr;};
        void deleteNotPassLowCount() { this->notPassLowCount_ = nullptr;};
        inline int32_t getNotPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(notPassLowCount_, 0) };
        inline TypeStatistic& setNotPassLowCount(int32_t notPassLowCount) { DARABONBA_PTR_SET_VALUE(notPassLowCount_, notPassLowCount) };


        // notPassMediumCount Field Functions 
        bool hasNotPassMediumCount() const { return this->notPassMediumCount_ != nullptr;};
        void deleteNotPassMediumCount() { this->notPassMediumCount_ = nullptr;};
        inline int32_t getNotPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notPassMediumCount_, 0) };
        inline TypeStatistic& setNotPassMediumCount(int32_t notPassMediumCount) { DARABONBA_PTR_SET_VALUE(notPassMediumCount_, notPassMediumCount) };


        // passCount Field Functions 
        bool hasPassCount() const { return this->passCount_ != nullptr;};
        void deletePassCount() { this->passCount_ = nullptr;};
        inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
        inline TypeStatistic& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


        // passHighCount Field Functions 
        bool hasPassHighCount() const { return this->passHighCount_ != nullptr;};
        void deletePassHighCount() { this->passHighCount_ = nullptr;};
        inline int32_t getPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(passHighCount_, 0) };
        inline TypeStatistic& setPassHighCount(int32_t passHighCount) { DARABONBA_PTR_SET_VALUE(passHighCount_, passHighCount) };


        // passLowCount Field Functions 
        bool hasPassLowCount() const { return this->passLowCount_ != nullptr;};
        void deletePassLowCount() { this->passLowCount_ = nullptr;};
        inline int32_t getPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(passLowCount_, 0) };
        inline TypeStatistic& setPassLowCount(int32_t passLowCount) { DARABONBA_PTR_SET_VALUE(passLowCount_, passLowCount) };


        // passMediumCount Field Functions 
        bool hasPassMediumCount() const { return this->passMediumCount_ != nullptr;};
        void deletePassMediumCount() { this->passMediumCount_ = nullptr;};
        inline int32_t getPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(passMediumCount_, 0) };
        inline TypeStatistic& setPassMediumCount(int32_t passMediumCount) { DARABONBA_PTR_SET_VALUE(passMediumCount_, passMediumCount) };


      protected:
        // The number of unchecked check items.
        shared_ptr<int32_t> notCheckCount_ {};
        // The number of unchecked high-risk check items.
        shared_ptr<int32_t> notCheckHighCount_ {};
        // The number of unchecked low-risk check items.
        shared_ptr<int32_t> notCheckLowCount_ {};
        // The number of unchecked medium-risk check items.
        shared_ptr<int32_t> notCheckMediumCount_ {};
        // The number of check items that failed to pass the check.
        shared_ptr<int32_t> notPassCount_ {};
        // The number of high-risk check items that failed to pass the check.
        shared_ptr<int32_t> notPassHighCount_ {};
        // The number of low-risk check items that failed to pass the check.
        shared_ptr<int32_t> notPassLowCount_ {};
        // The number of medium-risk check items that failed to pass the check.
        shared_ptr<int32_t> notPassMediumCount_ {};
        // The number of check items that pass the check.
        shared_ptr<int32_t> passCount_ {};
        // The number of high-risk check items that pass the check.
        shared_ptr<int32_t> passHighCount_ {};
        // The number of low-risk check items that pass the check.
        shared_ptr<int32_t> passLowCount_ {};
        // The number of medium-risk check items that pass the check.
        shared_ptr<int32_t> passMediumCount_ {};
      };

      class Standards : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Standards& obj) { 
          DARABONBA_PTR_TO_JSON(FailCount, failCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(PassCount, passCount_);
          DARABONBA_PTR_TO_JSON(RiskLevelHighCount, riskLevelHighCount_);
          DARABONBA_PTR_TO_JSON(RiskLevelLowCount, riskLevelLowCount_);
          DARABONBA_PTR_TO_JSON(RiskLevelMediumCount, riskLevelMediumCount_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(StandardStatistic, standardStatistic_);
        };
        friend void from_json(const Darabonba::Json& j, Standards& obj) { 
          DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
          DARABONBA_PTR_FROM_JSON(RiskLevelHighCount, riskLevelHighCount_);
          DARABONBA_PTR_FROM_JSON(RiskLevelLowCount, riskLevelLowCount_);
          DARABONBA_PTR_FROM_JSON(RiskLevelMediumCount, riskLevelMediumCount_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(StandardStatistic, standardStatistic_);
        };
        Standards() = default ;
        Standards(const Standards &) = default ;
        Standards(Standards &&) = default ;
        Standards(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Standards() = default ;
        Standards& operator=(const Standards &) = default ;
        Standards& operator=(Standards &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StandardStatistic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StandardStatistic& obj) { 
            DARABONBA_PTR_TO_JSON(NotCheckCount, notCheckCount_);
            DARABONBA_PTR_TO_JSON(NotCheckHighCount, notCheckHighCount_);
            DARABONBA_PTR_TO_JSON(NotCheckLowCount, notCheckLowCount_);
            DARABONBA_PTR_TO_JSON(NotCheckMediumCount, notCheckMediumCount_);
            DARABONBA_PTR_TO_JSON(NotPassCount, notPassCount_);
            DARABONBA_PTR_TO_JSON(NotPassHighCount, notPassHighCount_);
            DARABONBA_PTR_TO_JSON(NotPassLowCount, notPassLowCount_);
            DARABONBA_PTR_TO_JSON(NotPassMediumCount, notPassMediumCount_);
            DARABONBA_PTR_TO_JSON(PassCount, passCount_);
            DARABONBA_PTR_TO_JSON(PassHighCount, passHighCount_);
            DARABONBA_PTR_TO_JSON(PassLowCount, passLowCount_);
            DARABONBA_PTR_TO_JSON(PassMediumCount, passMediumCount_);
          };
          friend void from_json(const Darabonba::Json& j, StandardStatistic& obj) { 
            DARABONBA_PTR_FROM_JSON(NotCheckCount, notCheckCount_);
            DARABONBA_PTR_FROM_JSON(NotCheckHighCount, notCheckHighCount_);
            DARABONBA_PTR_FROM_JSON(NotCheckLowCount, notCheckLowCount_);
            DARABONBA_PTR_FROM_JSON(NotCheckMediumCount, notCheckMediumCount_);
            DARABONBA_PTR_FROM_JSON(NotPassCount, notPassCount_);
            DARABONBA_PTR_FROM_JSON(NotPassHighCount, notPassHighCount_);
            DARABONBA_PTR_FROM_JSON(NotPassLowCount, notPassLowCount_);
            DARABONBA_PTR_FROM_JSON(NotPassMediumCount, notPassMediumCount_);
            DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
            DARABONBA_PTR_FROM_JSON(PassHighCount, passHighCount_);
            DARABONBA_PTR_FROM_JSON(PassLowCount, passLowCount_);
            DARABONBA_PTR_FROM_JSON(PassMediumCount, passMediumCount_);
          };
          StandardStatistic() = default ;
          StandardStatistic(const StandardStatistic &) = default ;
          StandardStatistic(StandardStatistic &&) = default ;
          StandardStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StandardStatistic() = default ;
          StandardStatistic& operator=(const StandardStatistic &) = default ;
          StandardStatistic& operator=(StandardStatistic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->notCheckCount_ == nullptr
        && this->notCheckHighCount_ == nullptr && this->notCheckLowCount_ == nullptr && this->notCheckMediumCount_ == nullptr && this->notPassCount_ == nullptr && this->notPassHighCount_ == nullptr
        && this->notPassLowCount_ == nullptr && this->notPassMediumCount_ == nullptr && this->passCount_ == nullptr && this->passHighCount_ == nullptr && this->passLowCount_ == nullptr
        && this->passMediumCount_ == nullptr; };
          // notCheckCount Field Functions 
          bool hasNotCheckCount() const { return this->notCheckCount_ != nullptr;};
          void deleteNotCheckCount() { this->notCheckCount_ = nullptr;};
          inline int32_t getNotCheckCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckCount_, 0) };
          inline StandardStatistic& setNotCheckCount(int32_t notCheckCount) { DARABONBA_PTR_SET_VALUE(notCheckCount_, notCheckCount) };


          // notCheckHighCount Field Functions 
          bool hasNotCheckHighCount() const { return this->notCheckHighCount_ != nullptr;};
          void deleteNotCheckHighCount() { this->notCheckHighCount_ = nullptr;};
          inline int32_t getNotCheckHighCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckHighCount_, 0) };
          inline StandardStatistic& setNotCheckHighCount(int32_t notCheckHighCount) { DARABONBA_PTR_SET_VALUE(notCheckHighCount_, notCheckHighCount) };


          // notCheckLowCount Field Functions 
          bool hasNotCheckLowCount() const { return this->notCheckLowCount_ != nullptr;};
          void deleteNotCheckLowCount() { this->notCheckLowCount_ = nullptr;};
          inline int32_t getNotCheckLowCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckLowCount_, 0) };
          inline StandardStatistic& setNotCheckLowCount(int32_t notCheckLowCount) { DARABONBA_PTR_SET_VALUE(notCheckLowCount_, notCheckLowCount) };


          // notCheckMediumCount Field Functions 
          bool hasNotCheckMediumCount() const { return this->notCheckMediumCount_ != nullptr;};
          void deleteNotCheckMediumCount() { this->notCheckMediumCount_ = nullptr;};
          inline int32_t getNotCheckMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckMediumCount_, 0) };
          inline StandardStatistic& setNotCheckMediumCount(int32_t notCheckMediumCount) { DARABONBA_PTR_SET_VALUE(notCheckMediumCount_, notCheckMediumCount) };


          // notPassCount Field Functions 
          bool hasNotPassCount() const { return this->notPassCount_ != nullptr;};
          void deleteNotPassCount() { this->notPassCount_ = nullptr;};
          inline int32_t getNotPassCount() const { DARABONBA_PTR_GET_DEFAULT(notPassCount_, 0) };
          inline StandardStatistic& setNotPassCount(int32_t notPassCount) { DARABONBA_PTR_SET_VALUE(notPassCount_, notPassCount) };


          // notPassHighCount Field Functions 
          bool hasNotPassHighCount() const { return this->notPassHighCount_ != nullptr;};
          void deleteNotPassHighCount() { this->notPassHighCount_ = nullptr;};
          inline int32_t getNotPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(notPassHighCount_, 0) };
          inline StandardStatistic& setNotPassHighCount(int32_t notPassHighCount) { DARABONBA_PTR_SET_VALUE(notPassHighCount_, notPassHighCount) };


          // notPassLowCount Field Functions 
          bool hasNotPassLowCount() const { return this->notPassLowCount_ != nullptr;};
          void deleteNotPassLowCount() { this->notPassLowCount_ = nullptr;};
          inline int32_t getNotPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(notPassLowCount_, 0) };
          inline StandardStatistic& setNotPassLowCount(int32_t notPassLowCount) { DARABONBA_PTR_SET_VALUE(notPassLowCount_, notPassLowCount) };


          // notPassMediumCount Field Functions 
          bool hasNotPassMediumCount() const { return this->notPassMediumCount_ != nullptr;};
          void deleteNotPassMediumCount() { this->notPassMediumCount_ = nullptr;};
          inline int32_t getNotPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notPassMediumCount_, 0) };
          inline StandardStatistic& setNotPassMediumCount(int32_t notPassMediumCount) { DARABONBA_PTR_SET_VALUE(notPassMediumCount_, notPassMediumCount) };


          // passCount Field Functions 
          bool hasPassCount() const { return this->passCount_ != nullptr;};
          void deletePassCount() { this->passCount_ = nullptr;};
          inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
          inline StandardStatistic& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


          // passHighCount Field Functions 
          bool hasPassHighCount() const { return this->passHighCount_ != nullptr;};
          void deletePassHighCount() { this->passHighCount_ = nullptr;};
          inline int32_t getPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(passHighCount_, 0) };
          inline StandardStatistic& setPassHighCount(int32_t passHighCount) { DARABONBA_PTR_SET_VALUE(passHighCount_, passHighCount) };


          // passLowCount Field Functions 
          bool hasPassLowCount() const { return this->passLowCount_ != nullptr;};
          void deletePassLowCount() { this->passLowCount_ = nullptr;};
          inline int32_t getPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(passLowCount_, 0) };
          inline StandardStatistic& setPassLowCount(int32_t passLowCount) { DARABONBA_PTR_SET_VALUE(passLowCount_, passLowCount) };


          // passMediumCount Field Functions 
          bool hasPassMediumCount() const { return this->passMediumCount_ != nullptr;};
          void deletePassMediumCount() { this->passMediumCount_ = nullptr;};
          inline int32_t getPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(passMediumCount_, 0) };
          inline StandardStatistic& setPassMediumCount(int32_t passMediumCount) { DARABONBA_PTR_SET_VALUE(passMediumCount_, passMediumCount) };


        protected:
          // The number of unchecked check items.
          shared_ptr<int32_t> notCheckCount_ {};
          // The number of unchecked high-risk check items.
          shared_ptr<int32_t> notCheckHighCount_ {};
          // The number of unchecked low-risk check items.
          shared_ptr<int32_t> notCheckLowCount_ {};
          // The number of unchecked medium-risk check items.
          shared_ptr<int32_t> notCheckMediumCount_ {};
          // The number of check items that failed to pass the check.
          shared_ptr<int32_t> notPassCount_ {};
          // The number of high-risk check items that failed to pass the check.
          shared_ptr<int32_t> notPassHighCount_ {};
          // The number of low-risk check items that failed to pass the check.
          shared_ptr<int32_t> notPassLowCount_ {};
          // The number of medium-risk check items that failed to pass the check.
          shared_ptr<int32_t> notPassMediumCount_ {};
          // The number of check items that pass the check.
          shared_ptr<int32_t> passCount_ {};
          // The number of high-risk check items that pass the check.
          shared_ptr<int32_t> passHighCount_ {};
          // The number of low-risk check items that pass the check.
          shared_ptr<int32_t> passLowCount_ {};
          // The number of medium-risk check items that pass the check.
          shared_ptr<int32_t> passMediumCount_ {};
        };

        virtual bool empty() const override { return this->failCount_ == nullptr
        && this->id_ == nullptr && this->passCount_ == nullptr && this->riskLevelHighCount_ == nullptr && this->riskLevelLowCount_ == nullptr && this->riskLevelMediumCount_ == nullptr
        && this->showName_ == nullptr && this->standardStatistic_ == nullptr; };
        // failCount Field Functions 
        bool hasFailCount() const { return this->failCount_ != nullptr;};
        void deleteFailCount() { this->failCount_ = nullptr;};
        inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
        inline Standards& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Standards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // passCount Field Functions 
        bool hasPassCount() const { return this->passCount_ != nullptr;};
        void deletePassCount() { this->passCount_ = nullptr;};
        inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
        inline Standards& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


        // riskLevelHighCount Field Functions 
        bool hasRiskLevelHighCount() const { return this->riskLevelHighCount_ != nullptr;};
        void deleteRiskLevelHighCount() { this->riskLevelHighCount_ = nullptr;};
        inline int32_t getRiskLevelHighCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelHighCount_, 0) };
        inline Standards& setRiskLevelHighCount(int32_t riskLevelHighCount) { DARABONBA_PTR_SET_VALUE(riskLevelHighCount_, riskLevelHighCount) };


        // riskLevelLowCount Field Functions 
        bool hasRiskLevelLowCount() const { return this->riskLevelLowCount_ != nullptr;};
        void deleteRiskLevelLowCount() { this->riskLevelLowCount_ = nullptr;};
        inline int32_t getRiskLevelLowCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelLowCount_, 0) };
        inline Standards& setRiskLevelLowCount(int32_t riskLevelLowCount) { DARABONBA_PTR_SET_VALUE(riskLevelLowCount_, riskLevelLowCount) };


        // riskLevelMediumCount Field Functions 
        bool hasRiskLevelMediumCount() const { return this->riskLevelMediumCount_ != nullptr;};
        void deleteRiskLevelMediumCount() { this->riskLevelMediumCount_ = nullptr;};
        inline int32_t getRiskLevelMediumCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelMediumCount_, 0) };
        inline Standards& setRiskLevelMediumCount(int32_t riskLevelMediumCount) { DARABONBA_PTR_SET_VALUE(riskLevelMediumCount_, riskLevelMediumCount) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline Standards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // standardStatistic Field Functions 
        bool hasStandardStatistic() const { return this->standardStatistic_ != nullptr;};
        void deleteStandardStatistic() { this->standardStatistic_ = nullptr;};
        inline const Standards::StandardStatistic & getStandardStatistic() const { DARABONBA_PTR_GET_CONST(standardStatistic_, Standards::StandardStatistic) };
        inline Standards::StandardStatistic getStandardStatistic() { DARABONBA_PTR_GET(standardStatistic_, Standards::StandardStatistic) };
        inline Standards& setStandardStatistic(const Standards::StandardStatistic & standardStatistic) { DARABONBA_PTR_SET_VALUE(standardStatistic_, standardStatistic) };
        inline Standards& setStandardStatistic(Standards::StandardStatistic && standardStatistic) { DARABONBA_PTR_SET_RVALUE(standardStatistic_, standardStatistic) };


      protected:
        // The number of check items that failed to pass the check.
        shared_ptr<int32_t> failCount_ {};
        // The ID of the check item.
        shared_ptr<int64_t> id_ {};
        // The number of check items that pass the check.
        shared_ptr<int32_t> passCount_ {};
        // The number of **high-risk** items.
        shared_ptr<int32_t> riskLevelHighCount_ {};
        // The number of **low-risk** items.
        shared_ptr<int32_t> riskLevelLowCount_ {};
        // The number of **medium-risk** items.
        shared_ptr<int32_t> riskLevelMediumCount_ {};
        // The name of the check item.
        shared_ptr<string> showName_ {};
        // The standard statistics of the check items.
        shared_ptr<Standards::StandardStatistic> standardStatistic_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->passCount_ == nullptr && this->standards_ == nullptr && this->type_ == nullptr && this->typeStatistic_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Summarys& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // passCount Field Functions 
      bool hasPassCount() const { return this->passCount_ != nullptr;};
      void deletePassCount() { this->passCount_ = nullptr;};
      inline int64_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0L) };
      inline Summarys& setPassCount(int64_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


      // standards Field Functions 
      bool hasStandards() const { return this->standards_ != nullptr;};
      void deleteStandards() { this->standards_ = nullptr;};
      inline const vector<Summarys::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<Summarys::Standards>) };
      inline vector<Summarys::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<Summarys::Standards>) };
      inline Summarys& setStandards(const vector<Summarys::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
      inline Summarys& setStandards(vector<Summarys::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Summarys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeStatistic Field Functions 
      bool hasTypeStatistic() const { return this->typeStatistic_ != nullptr;};
      void deleteTypeStatistic() { this->typeStatistic_ = nullptr;};
      inline const Summarys::TypeStatistic & getTypeStatistic() const { DARABONBA_PTR_GET_CONST(typeStatistic_, Summarys::TypeStatistic) };
      inline Summarys::TypeStatistic getTypeStatistic() { DARABONBA_PTR_GET(typeStatistic_, Summarys::TypeStatistic) };
      inline Summarys& setTypeStatistic(const Summarys::TypeStatistic & typeStatistic) { DARABONBA_PTR_SET_VALUE(typeStatistic_, typeStatistic) };
      inline Summarys& setTypeStatistic(Summarys::TypeStatistic && typeStatistic) { DARABONBA_PTR_SET_RVALUE(typeStatistic_, typeStatistic) };


    protected:
      // The number of detected risk items.
      shared_ptr<int32_t> failCount_ {};
      // The number of check items that pass the check.
      shared_ptr<int64_t> passCount_ {};
      // The information about the check items.
      shared_ptr<vector<Summarys::Standards>> standards_ {};
      // The type of the check item. Valid values:
      // 
      // *   **COMPLIANCE**
      // *   **RISK**
      // *   **IDENTITY_PERMISSION**
      shared_ptr<string> type_ {};
      // The risk statistics by type.
      shared_ptr<Summarys::TypeStatistic> typeStatistic_ {};
    };

    class OverallStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(NotCheckCount, notCheckCount_);
        DARABONBA_PTR_TO_JSON(NotCheckHighCount, notCheckHighCount_);
        DARABONBA_PTR_TO_JSON(NotCheckLowCount, notCheckLowCount_);
        DARABONBA_PTR_TO_JSON(NotCheckMediumCount, notCheckMediumCount_);
        DARABONBA_PTR_TO_JSON(NotPassCount, notPassCount_);
        DARABONBA_PTR_TO_JSON(NotPassHighCount, notPassHighCount_);
        DARABONBA_PTR_TO_JSON(NotPassLowCount, notPassLowCount_);
        DARABONBA_PTR_TO_JSON(NotPassMediumCount, notPassMediumCount_);
        DARABONBA_PTR_TO_JSON(PassCount, passCount_);
        DARABONBA_PTR_TO_JSON(PassHighCount, passHighCount_);
        DARABONBA_PTR_TO_JSON(PassLowCount, passLowCount_);
        DARABONBA_PTR_TO_JSON(PassMediumCount, passMediumCount_);
      };
      friend void from_json(const Darabonba::Json& j, OverallStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(NotCheckCount, notCheckCount_);
        DARABONBA_PTR_FROM_JSON(NotCheckHighCount, notCheckHighCount_);
        DARABONBA_PTR_FROM_JSON(NotCheckLowCount, notCheckLowCount_);
        DARABONBA_PTR_FROM_JSON(NotCheckMediumCount, notCheckMediumCount_);
        DARABONBA_PTR_FROM_JSON(NotPassCount, notPassCount_);
        DARABONBA_PTR_FROM_JSON(NotPassHighCount, notPassHighCount_);
        DARABONBA_PTR_FROM_JSON(NotPassLowCount, notPassLowCount_);
        DARABONBA_PTR_FROM_JSON(NotPassMediumCount, notPassMediumCount_);
        DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
        DARABONBA_PTR_FROM_JSON(PassHighCount, passHighCount_);
        DARABONBA_PTR_FROM_JSON(PassLowCount, passLowCount_);
        DARABONBA_PTR_FROM_JSON(PassMediumCount, passMediumCount_);
      };
      OverallStatistic() = default ;
      OverallStatistic(const OverallStatistic &) = default ;
      OverallStatistic(OverallStatistic &&) = default ;
      OverallStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallStatistic() = default ;
      OverallStatistic& operator=(const OverallStatistic &) = default ;
      OverallStatistic& operator=(OverallStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->notCheckCount_ == nullptr
        && this->notCheckHighCount_ == nullptr && this->notCheckLowCount_ == nullptr && this->notCheckMediumCount_ == nullptr && this->notPassCount_ == nullptr && this->notPassHighCount_ == nullptr
        && this->notPassLowCount_ == nullptr && this->notPassMediumCount_ == nullptr && this->passCount_ == nullptr && this->passHighCount_ == nullptr && this->passLowCount_ == nullptr
        && this->passMediumCount_ == nullptr; };
      // notCheckCount Field Functions 
      bool hasNotCheckCount() const { return this->notCheckCount_ != nullptr;};
      void deleteNotCheckCount() { this->notCheckCount_ = nullptr;};
      inline int32_t getNotCheckCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckCount_, 0) };
      inline OverallStatistic& setNotCheckCount(int32_t notCheckCount) { DARABONBA_PTR_SET_VALUE(notCheckCount_, notCheckCount) };


      // notCheckHighCount Field Functions 
      bool hasNotCheckHighCount() const { return this->notCheckHighCount_ != nullptr;};
      void deleteNotCheckHighCount() { this->notCheckHighCount_ = nullptr;};
      inline int32_t getNotCheckHighCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckHighCount_, 0) };
      inline OverallStatistic& setNotCheckHighCount(int32_t notCheckHighCount) { DARABONBA_PTR_SET_VALUE(notCheckHighCount_, notCheckHighCount) };


      // notCheckLowCount Field Functions 
      bool hasNotCheckLowCount() const { return this->notCheckLowCount_ != nullptr;};
      void deleteNotCheckLowCount() { this->notCheckLowCount_ = nullptr;};
      inline int32_t getNotCheckLowCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckLowCount_, 0) };
      inline OverallStatistic& setNotCheckLowCount(int32_t notCheckLowCount) { DARABONBA_PTR_SET_VALUE(notCheckLowCount_, notCheckLowCount) };


      // notCheckMediumCount Field Functions 
      bool hasNotCheckMediumCount() const { return this->notCheckMediumCount_ != nullptr;};
      void deleteNotCheckMediumCount() { this->notCheckMediumCount_ = nullptr;};
      inline int32_t getNotCheckMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notCheckMediumCount_, 0) };
      inline OverallStatistic& setNotCheckMediumCount(int32_t notCheckMediumCount) { DARABONBA_PTR_SET_VALUE(notCheckMediumCount_, notCheckMediumCount) };


      // notPassCount Field Functions 
      bool hasNotPassCount() const { return this->notPassCount_ != nullptr;};
      void deleteNotPassCount() { this->notPassCount_ = nullptr;};
      inline int32_t getNotPassCount() const { DARABONBA_PTR_GET_DEFAULT(notPassCount_, 0) };
      inline OverallStatistic& setNotPassCount(int32_t notPassCount) { DARABONBA_PTR_SET_VALUE(notPassCount_, notPassCount) };


      // notPassHighCount Field Functions 
      bool hasNotPassHighCount() const { return this->notPassHighCount_ != nullptr;};
      void deleteNotPassHighCount() { this->notPassHighCount_ = nullptr;};
      inline int32_t getNotPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(notPassHighCount_, 0) };
      inline OverallStatistic& setNotPassHighCount(int32_t notPassHighCount) { DARABONBA_PTR_SET_VALUE(notPassHighCount_, notPassHighCount) };


      // notPassLowCount Field Functions 
      bool hasNotPassLowCount() const { return this->notPassLowCount_ != nullptr;};
      void deleteNotPassLowCount() { this->notPassLowCount_ = nullptr;};
      inline int32_t getNotPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(notPassLowCount_, 0) };
      inline OverallStatistic& setNotPassLowCount(int32_t notPassLowCount) { DARABONBA_PTR_SET_VALUE(notPassLowCount_, notPassLowCount) };


      // notPassMediumCount Field Functions 
      bool hasNotPassMediumCount() const { return this->notPassMediumCount_ != nullptr;};
      void deleteNotPassMediumCount() { this->notPassMediumCount_ = nullptr;};
      inline int32_t getNotPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notPassMediumCount_, 0) };
      inline OverallStatistic& setNotPassMediumCount(int32_t notPassMediumCount) { DARABONBA_PTR_SET_VALUE(notPassMediumCount_, notPassMediumCount) };


      // passCount Field Functions 
      bool hasPassCount() const { return this->passCount_ != nullptr;};
      void deletePassCount() { this->passCount_ = nullptr;};
      inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
      inline OverallStatistic& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


      // passHighCount Field Functions 
      bool hasPassHighCount() const { return this->passHighCount_ != nullptr;};
      void deletePassHighCount() { this->passHighCount_ = nullptr;};
      inline int32_t getPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(passHighCount_, 0) };
      inline OverallStatistic& setPassHighCount(int32_t passHighCount) { DARABONBA_PTR_SET_VALUE(passHighCount_, passHighCount) };


      // passLowCount Field Functions 
      bool hasPassLowCount() const { return this->passLowCount_ != nullptr;};
      void deletePassLowCount() { this->passLowCount_ = nullptr;};
      inline int32_t getPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(passLowCount_, 0) };
      inline OverallStatistic& setPassLowCount(int32_t passLowCount) { DARABONBA_PTR_SET_VALUE(passLowCount_, passLowCount) };


      // passMediumCount Field Functions 
      bool hasPassMediumCount() const { return this->passMediumCount_ != nullptr;};
      void deletePassMediumCount() { this->passMediumCount_ = nullptr;};
      inline int32_t getPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(passMediumCount_, 0) };
      inline OverallStatistic& setPassMediumCount(int32_t passMediumCount) { DARABONBA_PTR_SET_VALUE(passMediumCount_, passMediumCount) };


    protected:
      // The number of unchecked check items.
      shared_ptr<int32_t> notCheckCount_ {};
      // The number of unchecked high-risk check items.
      shared_ptr<int32_t> notCheckHighCount_ {};
      // The number of unchecked low-risk check items.
      shared_ptr<int32_t> notCheckLowCount_ {};
      // The number of unchecked medium-risk check items.
      shared_ptr<int32_t> notCheckMediumCount_ {};
      // The number of check items that failed to pass the check.
      shared_ptr<int32_t> notPassCount_ {};
      // The number of high-risk check items that failed to pass the check.
      shared_ptr<int32_t> notPassHighCount_ {};
      // The number of low-risk check items that failed to pass the check.
      shared_ptr<int32_t> notPassLowCount_ {};
      // The number of medium-risk check items that failed to pass the check.
      shared_ptr<int32_t> notPassMediumCount_ {};
      // The number of check items that pass the check.
      shared_ptr<int32_t> passCount_ {};
      // The number of high-risk check items that pass the check.
      shared_ptr<int32_t> passHighCount_ {};
      // The number of low-risk check items that pass the check.
      shared_ptr<int32_t> passLowCount_ {};
      // The number of medium-risk check items that pass the check.
      shared_ptr<int32_t> passMediumCount_ {};
    };

    class OverallItemStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallItemStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseCount, releaseCount_);
        DARABONBA_PTR_TO_JSON(ResultCount, resultCount_);
      };
      friend void from_json(const Darabonba::Json& j, OverallItemStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseCount, releaseCount_);
        DARABONBA_PTR_FROM_JSON(ResultCount, resultCount_);
      };
      OverallItemStatistic() = default ;
      OverallItemStatistic(const OverallItemStatistic &) = default ;
      OverallItemStatistic(OverallItemStatistic &&) = default ;
      OverallItemStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallItemStatistic() = default ;
      OverallItemStatistic& operator=(const OverallItemStatistic &) = default ;
      OverallItemStatistic& operator=(OverallItemStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->releaseCount_ == nullptr
        && this->resultCount_ == nullptr; };
      // releaseCount Field Functions 
      bool hasReleaseCount() const { return this->releaseCount_ != nullptr;};
      void deleteReleaseCount() { this->releaseCount_ = nullptr;};
      inline int32_t getReleaseCount() const { DARABONBA_PTR_GET_DEFAULT(releaseCount_, 0) };
      inline OverallItemStatistic& setReleaseCount(int32_t releaseCount) { DARABONBA_PTR_SET_VALUE(releaseCount_, releaseCount) };


      // resultCount Field Functions 
      bool hasResultCount() const { return this->resultCount_ != nullptr;};
      void deleteResultCount() { this->resultCount_ = nullptr;};
      inline int32_t getResultCount() const { DARABONBA_PTR_GET_DEFAULT(resultCount_, 0) };
      inline OverallItemStatistic& setResultCount(int32_t resultCount) { DARABONBA_PTR_SET_VALUE(resultCount_, resultCount) };


    protected:
      // The number of check items supported by the system.
      shared_ptr<int32_t> releaseCount_ {};
      // The number of check items available to you.
      shared_ptr<int32_t> resultCount_ {};
    };

    virtual bool empty() const override { return this->overallItemStatistic_ == nullptr
        && this->overallStatistic_ == nullptr && this->requestId_ == nullptr && this->summarys_ == nullptr; };
    // overallItemStatistic Field Functions 
    bool hasOverallItemStatistic() const { return this->overallItemStatistic_ != nullptr;};
    void deleteOverallItemStatistic() { this->overallItemStatistic_ = nullptr;};
    inline const GetCheckSummaryResponseBody::OverallItemStatistic & getOverallItemStatistic() const { DARABONBA_PTR_GET_CONST(overallItemStatistic_, GetCheckSummaryResponseBody::OverallItemStatistic) };
    inline GetCheckSummaryResponseBody::OverallItemStatistic getOverallItemStatistic() { DARABONBA_PTR_GET(overallItemStatistic_, GetCheckSummaryResponseBody::OverallItemStatistic) };
    inline GetCheckSummaryResponseBody& setOverallItemStatistic(const GetCheckSummaryResponseBody::OverallItemStatistic & overallItemStatistic) { DARABONBA_PTR_SET_VALUE(overallItemStatistic_, overallItemStatistic) };
    inline GetCheckSummaryResponseBody& setOverallItemStatistic(GetCheckSummaryResponseBody::OverallItemStatistic && overallItemStatistic) { DARABONBA_PTR_SET_RVALUE(overallItemStatistic_, overallItemStatistic) };


    // overallStatistic Field Functions 
    bool hasOverallStatistic() const { return this->overallStatistic_ != nullptr;};
    void deleteOverallStatistic() { this->overallStatistic_ = nullptr;};
    inline const GetCheckSummaryResponseBody::OverallStatistic & getOverallStatistic() const { DARABONBA_PTR_GET_CONST(overallStatistic_, GetCheckSummaryResponseBody::OverallStatistic) };
    inline GetCheckSummaryResponseBody::OverallStatistic getOverallStatistic() { DARABONBA_PTR_GET(overallStatistic_, GetCheckSummaryResponseBody::OverallStatistic) };
    inline GetCheckSummaryResponseBody& setOverallStatistic(const GetCheckSummaryResponseBody::OverallStatistic & overallStatistic) { DARABONBA_PTR_SET_VALUE(overallStatistic_, overallStatistic) };
    inline GetCheckSummaryResponseBody& setOverallStatistic(GetCheckSummaryResponseBody::OverallStatistic && overallStatistic) { DARABONBA_PTR_SET_RVALUE(overallStatistic_, overallStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summarys Field Functions 
    bool hasSummarys() const { return this->summarys_ != nullptr;};
    void deleteSummarys() { this->summarys_ = nullptr;};
    inline const vector<GetCheckSummaryResponseBody::Summarys> & getSummarys() const { DARABONBA_PTR_GET_CONST(summarys_, vector<GetCheckSummaryResponseBody::Summarys>) };
    inline vector<GetCheckSummaryResponseBody::Summarys> getSummarys() { DARABONBA_PTR_GET(summarys_, vector<GetCheckSummaryResponseBody::Summarys>) };
    inline GetCheckSummaryResponseBody& setSummarys(const vector<GetCheckSummaryResponseBody::Summarys> & summarys) { DARABONBA_PTR_SET_VALUE(summarys_, summarys) };
    inline GetCheckSummaryResponseBody& setSummarys(vector<GetCheckSummaryResponseBody::Summarys> && summarys) { DARABONBA_PTR_SET_RVALUE(summarys_, summarys) };


  protected:
    // The statistics about the number of check items.
    shared_ptr<GetCheckSummaryResponseBody::OverallItemStatistic> overallItemStatistic_ {};
    // The overall risk statistics.
    shared_ptr<GetCheckSummaryResponseBody::OverallStatistic> overallStatistic_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The summary information about the configuration checks on cloud services.
    shared_ptr<vector<GetCheckSummaryResponseBody::Summarys>> summarys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
