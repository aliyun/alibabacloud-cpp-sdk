// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERSHARERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERSHARERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterShareRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterShareRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterShareRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostCenterShareRuleResponseBody() = default ;
    QueryCostCenterShareRuleResponseBody(const QueryCostCenterShareRuleResponseBody &) = default ;
    QueryCostCenterShareRuleResponseBody(QueryCostCenterShareRuleResponseBody &&) = default ;
    QueryCostCenterShareRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterShareRuleResponseBody() = default ;
    QueryCostCenterShareRuleResponseBody& operator=(const QueryCostCenterShareRuleResponseBody &) = default ;
    QueryCostCenterShareRuleResponseBody& operator=(QueryCostCenterShareRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FromCostCenterShareRuleDetails, fromCostCenterShareRuleDetails_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(ShareRuleId, shareRuleId_);
        DARABONBA_PTR_TO_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_TO_JSON(ShareRuleType, shareRuleType_);
        DARABONBA_PTR_TO_JSON(ToCostCenterShareRuleDetails, toCostCenterShareRuleDetails_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FromCostCenterShareRuleDetails, fromCostCenterShareRuleDetails_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(ShareRuleId, shareRuleId_);
        DARABONBA_PTR_FROM_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_FROM_JSON(ShareRuleType, shareRuleType_);
        DARABONBA_PTR_FROM_JSON(ToCostCenterShareRuleDetails, toCostCenterShareRuleDetails_);
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
      class ToCostCenterShareRuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToCostCenterShareRuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
          DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
          DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
          DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
          DARABONBA_PTR_TO_JSON(PrevCostCenterId, prevCostCenterId_);
          DARABONBA_PTR_TO_JSON(RootCostCenterId, rootCostCenterId_);
          DARABONBA_PTR_TO_JSON(ShareRatio, shareRatio_);
        };
        friend void from_json(const Darabonba::Json& j, ToCostCenterShareRuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
          DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
          DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
          DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
          DARABONBA_PTR_FROM_JSON(PrevCostCenterId, prevCostCenterId_);
          DARABONBA_PTR_FROM_JSON(RootCostCenterId, rootCostCenterId_);
          DARABONBA_PTR_FROM_JSON(ShareRatio, shareRatio_);
        };
        ToCostCenterShareRuleDetails() = default ;
        ToCostCenterShareRuleDetails(const ToCostCenterShareRuleDetails &) = default ;
        ToCostCenterShareRuleDetails(ToCostCenterShareRuleDetails &&) = default ;
        ToCostCenterShareRuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToCostCenterShareRuleDetails() = default ;
        ToCostCenterShareRuleDetails& operator=(const ToCostCenterShareRuleDetails &) = default ;
        ToCostCenterShareRuleDetails& operator=(ToCostCenterShareRuleDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->costCenterCode_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerAccountId_ == nullptr
        && this->parentCostCenterId_ == nullptr && this->prevCostCenterId_ == nullptr && this->rootCostCenterId_ == nullptr && this->shareRatio_ == nullptr; };
        // costCenterCode Field Functions 
        bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
        void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
        inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
        inline ToCostCenterShareRuleDetails& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline ToCostCenterShareRuleDetails& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ToCostCenterShareRuleDetails& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ToCostCenterShareRuleDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ToCostCenterShareRuleDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ownerAccountId Field Functions 
        bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
        void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
        inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
        inline ToCostCenterShareRuleDetails& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


        // parentCostCenterId Field Functions 
        bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
        void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
        inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
        inline ToCostCenterShareRuleDetails& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


        // prevCostCenterId Field Functions 
        bool hasPrevCostCenterId() const { return this->prevCostCenterId_ != nullptr;};
        void deletePrevCostCenterId() { this->prevCostCenterId_ = nullptr;};
        inline int64_t getPrevCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(prevCostCenterId_, 0L) };
        inline ToCostCenterShareRuleDetails& setPrevCostCenterId(int64_t prevCostCenterId) { DARABONBA_PTR_SET_VALUE(prevCostCenterId_, prevCostCenterId) };


        // rootCostCenterId Field Functions 
        bool hasRootCostCenterId() const { return this->rootCostCenterId_ != nullptr;};
        void deleteRootCostCenterId() { this->rootCostCenterId_ = nullptr;};
        inline int64_t getRootCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(rootCostCenterId_, 0L) };
        inline ToCostCenterShareRuleDetails& setRootCostCenterId(int64_t rootCostCenterId) { DARABONBA_PTR_SET_VALUE(rootCostCenterId_, rootCostCenterId) };


        // shareRatio Field Functions 
        bool hasShareRatio() const { return this->shareRatio_ != nullptr;};
        void deleteShareRatio() { this->shareRatio_ = nullptr;};
        inline double getShareRatio() const { DARABONBA_PTR_GET_DEFAULT(shareRatio_, 0.0) };
        inline ToCostCenterShareRuleDetails& setShareRatio(double shareRatio) { DARABONBA_PTR_SET_VALUE(shareRatio_, shareRatio) };


      protected:
        shared_ptr<string> costCenterCode_ {};
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> ownerAccountId_ {};
        shared_ptr<int64_t> parentCostCenterId_ {};
        shared_ptr<int64_t> prevCostCenterId_ {};
        shared_ptr<int64_t> rootCostCenterId_ {};
        shared_ptr<double> shareRatio_ {};
      };

      class FromCostCenterShareRuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FromCostCenterShareRuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
          DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
          DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
          DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
          DARABONBA_PTR_TO_JSON(PrevCostCenterId, prevCostCenterId_);
          DARABONBA_PTR_TO_JSON(RootCostCenterId, rootCostCenterId_);
        };
        friend void from_json(const Darabonba::Json& j, FromCostCenterShareRuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
          DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
          DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
          DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
          DARABONBA_PTR_FROM_JSON(PrevCostCenterId, prevCostCenterId_);
          DARABONBA_PTR_FROM_JSON(RootCostCenterId, rootCostCenterId_);
        };
        FromCostCenterShareRuleDetails() = default ;
        FromCostCenterShareRuleDetails(const FromCostCenterShareRuleDetails &) = default ;
        FromCostCenterShareRuleDetails(FromCostCenterShareRuleDetails &&) = default ;
        FromCostCenterShareRuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FromCostCenterShareRuleDetails() = default ;
        FromCostCenterShareRuleDetails& operator=(const FromCostCenterShareRuleDetails &) = default ;
        FromCostCenterShareRuleDetails& operator=(FromCostCenterShareRuleDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->costCenterCode_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerAccountId_ == nullptr
        && this->parentCostCenterId_ == nullptr && this->prevCostCenterId_ == nullptr && this->rootCostCenterId_ == nullptr; };
        // costCenterCode Field Functions 
        bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
        void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
        inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
        inline FromCostCenterShareRuleDetails& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline FromCostCenterShareRuleDetails& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline FromCostCenterShareRuleDetails& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline FromCostCenterShareRuleDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline FromCostCenterShareRuleDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ownerAccountId Field Functions 
        bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
        void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
        inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
        inline FromCostCenterShareRuleDetails& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


        // parentCostCenterId Field Functions 
        bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
        void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
        inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
        inline FromCostCenterShareRuleDetails& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


        // prevCostCenterId Field Functions 
        bool hasPrevCostCenterId() const { return this->prevCostCenterId_ != nullptr;};
        void deletePrevCostCenterId() { this->prevCostCenterId_ = nullptr;};
        inline int64_t getPrevCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(prevCostCenterId_, 0L) };
        inline FromCostCenterShareRuleDetails& setPrevCostCenterId(int64_t prevCostCenterId) { DARABONBA_PTR_SET_VALUE(prevCostCenterId_, prevCostCenterId) };


        // rootCostCenterId Field Functions 
        bool hasRootCostCenterId() const { return this->rootCostCenterId_ != nullptr;};
        void deleteRootCostCenterId() { this->rootCostCenterId_ = nullptr;};
        inline int64_t getRootCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(rootCostCenterId_, 0L) };
        inline FromCostCenterShareRuleDetails& setRootCostCenterId(int64_t rootCostCenterId) { DARABONBA_PTR_SET_VALUE(rootCostCenterId_, rootCostCenterId) };


      protected:
        shared_ptr<string> costCenterCode_ {};
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> ownerAccountId_ {};
        shared_ptr<int64_t> parentCostCenterId_ {};
        shared_ptr<int64_t> prevCostCenterId_ {};
        shared_ptr<int64_t> rootCostCenterId_ {};
      };

      virtual bool empty() const override { return this->fromCostCenterShareRuleDetails_ == nullptr
        && this->gmtModified_ == nullptr && this->ownerAccountId_ == nullptr && this->shareRuleId_ == nullptr && this->shareRuleName_ == nullptr && this->shareRuleType_ == nullptr
        && this->toCostCenterShareRuleDetails_ == nullptr; };
      // fromCostCenterShareRuleDetails Field Functions 
      bool hasFromCostCenterShareRuleDetails() const { return this->fromCostCenterShareRuleDetails_ != nullptr;};
      void deleteFromCostCenterShareRuleDetails() { this->fromCostCenterShareRuleDetails_ = nullptr;};
      inline const vector<Data::FromCostCenterShareRuleDetails> & getFromCostCenterShareRuleDetails() const { DARABONBA_PTR_GET_CONST(fromCostCenterShareRuleDetails_, vector<Data::FromCostCenterShareRuleDetails>) };
      inline vector<Data::FromCostCenterShareRuleDetails> getFromCostCenterShareRuleDetails() { DARABONBA_PTR_GET(fromCostCenterShareRuleDetails_, vector<Data::FromCostCenterShareRuleDetails>) };
      inline Data& setFromCostCenterShareRuleDetails(const vector<Data::FromCostCenterShareRuleDetails> & fromCostCenterShareRuleDetails) { DARABONBA_PTR_SET_VALUE(fromCostCenterShareRuleDetails_, fromCostCenterShareRuleDetails) };
      inline Data& setFromCostCenterShareRuleDetails(vector<Data::FromCostCenterShareRuleDetails> && fromCostCenterShareRuleDetails) { DARABONBA_PTR_SET_RVALUE(fromCostCenterShareRuleDetails_, fromCostCenterShareRuleDetails) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline Data& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // shareRuleId Field Functions 
      bool hasShareRuleId() const { return this->shareRuleId_ != nullptr;};
      void deleteShareRuleId() { this->shareRuleId_ = nullptr;};
      inline int64_t getShareRuleId() const { DARABONBA_PTR_GET_DEFAULT(shareRuleId_, 0L) };
      inline Data& setShareRuleId(int64_t shareRuleId) { DARABONBA_PTR_SET_VALUE(shareRuleId_, shareRuleId) };


      // shareRuleName Field Functions 
      bool hasShareRuleName() const { return this->shareRuleName_ != nullptr;};
      void deleteShareRuleName() { this->shareRuleName_ = nullptr;};
      inline string getShareRuleName() const { DARABONBA_PTR_GET_DEFAULT(shareRuleName_, "") };
      inline Data& setShareRuleName(string shareRuleName) { DARABONBA_PTR_SET_VALUE(shareRuleName_, shareRuleName) };


      // shareRuleType Field Functions 
      bool hasShareRuleType() const { return this->shareRuleType_ != nullptr;};
      void deleteShareRuleType() { this->shareRuleType_ = nullptr;};
      inline string getShareRuleType() const { DARABONBA_PTR_GET_DEFAULT(shareRuleType_, "") };
      inline Data& setShareRuleType(string shareRuleType) { DARABONBA_PTR_SET_VALUE(shareRuleType_, shareRuleType) };


      // toCostCenterShareRuleDetails Field Functions 
      bool hasToCostCenterShareRuleDetails() const { return this->toCostCenterShareRuleDetails_ != nullptr;};
      void deleteToCostCenterShareRuleDetails() { this->toCostCenterShareRuleDetails_ = nullptr;};
      inline const vector<Data::ToCostCenterShareRuleDetails> & getToCostCenterShareRuleDetails() const { DARABONBA_PTR_GET_CONST(toCostCenterShareRuleDetails_, vector<Data::ToCostCenterShareRuleDetails>) };
      inline vector<Data::ToCostCenterShareRuleDetails> getToCostCenterShareRuleDetails() { DARABONBA_PTR_GET(toCostCenterShareRuleDetails_, vector<Data::ToCostCenterShareRuleDetails>) };
      inline Data& setToCostCenterShareRuleDetails(const vector<Data::ToCostCenterShareRuleDetails> & toCostCenterShareRuleDetails) { DARABONBA_PTR_SET_VALUE(toCostCenterShareRuleDetails_, toCostCenterShareRuleDetails) };
      inline Data& setToCostCenterShareRuleDetails(vector<Data::ToCostCenterShareRuleDetails> && toCostCenterShareRuleDetails) { DARABONBA_PTR_SET_RVALUE(toCostCenterShareRuleDetails_, toCostCenterShareRuleDetails) };


    protected:
      shared_ptr<vector<Data::FromCostCenterShareRuleDetails>> fromCostCenterShareRuleDetails_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
      shared_ptr<int64_t> shareRuleId_ {};
      shared_ptr<string> shareRuleName_ {};
      shared_ptr<string> shareRuleType_ {};
      shared_ptr<vector<Data::ToCostCenterShareRuleDetails>> toCostCenterShareRuleDetails_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->metadata_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryCostCenterShareRuleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryCostCenterShareRuleResponseBody::Data>) };
    inline vector<QueryCostCenterShareRuleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryCostCenterShareRuleResponseBody::Data>) };
    inline QueryCostCenterShareRuleResponseBody& setData(const vector<QueryCostCenterShareRuleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCostCenterShareRuleResponseBody& setData(vector<QueryCostCenterShareRuleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryCostCenterShareRuleResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterShareRuleResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterShareRuleResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryCostCenterShareRuleResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterShareRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostCenterShareRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryCostCenterShareRuleResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
