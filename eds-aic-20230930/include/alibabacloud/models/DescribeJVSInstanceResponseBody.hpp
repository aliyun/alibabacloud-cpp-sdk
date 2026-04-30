// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJVSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJVSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeJVSInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJVSInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJVSInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeJVSInstanceResponseBody() = default ;
    DescribeJVSInstanceResponseBody(const DescribeJVSInstanceResponseBody &) = default ;
    DescribeJVSInstanceResponseBody(DescribeJVSInstanceResponseBody &&) = default ;
    DescribeJVSInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJVSInstanceResponseBody() = default ;
    DescribeJVSInstanceResponseBody& operator=(const DescribeJVSInstanceResponseBody &) = default ;
    DescribeJVSInstanceResponseBody& operator=(DescribeJVSInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreditConfig, creditConfig_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JvsPackageId, jvsPackageId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UsedCredit, usedCredit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreditConfig, creditConfig_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JvsPackageId, jvsPackageId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UsedCredit, usedCredit_);
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
      class UsedCredit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsedCredit& obj) { 
          DARABONBA_PTR_TO_JSON(Credit, credit_);
          DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, UsedCredit& obj) { 
          DARABONBA_PTR_FROM_JSON(Credit, credit_);
          DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
        };
        UsedCredit() = default ;
        UsedCredit(const UsedCredit &) = default ;
        UsedCredit(UsedCredit &&) = default ;
        UsedCredit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsedCredit() = default ;
        UsedCredit& operator=(const UsedCredit &) = default ;
        UsedCredit& operator=(UsedCredit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->credit_ == nullptr
        && this->limitPeriod_ == nullptr; };
        // credit Field Functions 
        bool hasCredit() const { return this->credit_ != nullptr;};
        void deleteCredit() { this->credit_ = nullptr;};
        inline int64_t getCredit() const { DARABONBA_PTR_GET_DEFAULT(credit_, 0L) };
        inline UsedCredit& setCredit(int64_t credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };


        // limitPeriod Field Functions 
        bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
        void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
        inline string getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, "") };
        inline UsedCredit& setLimitPeriod(string limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


      protected:
        shared_ptr<int64_t> credit_ {};
        shared_ptr<string> limitPeriod_ {};
      };

      class CreditConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreditConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CreditLimit, creditLimit_);
          DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, CreditConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CreditLimit, creditLimit_);
          DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
        };
        CreditConfig() = default ;
        CreditConfig(const CreditConfig &) = default ;
        CreditConfig(CreditConfig &&) = default ;
        CreditConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreditConfig() = default ;
        CreditConfig& operator=(const CreditConfig &) = default ;
        CreditConfig& operator=(CreditConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creditLimit_ == nullptr
        && this->limitPeriod_ == nullptr; };
        // creditLimit Field Functions 
        bool hasCreditLimit() const { return this->creditLimit_ != nullptr;};
        void deleteCreditLimit() { this->creditLimit_ = nullptr;};
        inline int64_t getCreditLimit() const { DARABONBA_PTR_GET_DEFAULT(creditLimit_, 0L) };
        inline CreditConfig& setCreditLimit(int64_t creditLimit) { DARABONBA_PTR_SET_VALUE(creditLimit_, creditLimit) };


        // limitPeriod Field Functions 
        bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
        void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
        inline string getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, "") };
        inline CreditConfig& setLimitPeriod(string limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


      protected:
        shared_ptr<int64_t> creditLimit_ {};
        shared_ptr<string> limitPeriod_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creditConfig_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->jvsPackageId_ == nullptr && this->modifyTime_ == nullptr
        && this->status_ == nullptr && this->usedCredit_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creditConfig Field Functions 
      bool hasCreditConfig() const { return this->creditConfig_ != nullptr;};
      void deleteCreditConfig() { this->creditConfig_ = nullptr;};
      inline const vector<Data::CreditConfig> & getCreditConfig() const { DARABONBA_PTR_GET_CONST(creditConfig_, vector<Data::CreditConfig>) };
      inline vector<Data::CreditConfig> getCreditConfig() { DARABONBA_PTR_GET(creditConfig_, vector<Data::CreditConfig>) };
      inline Data& setCreditConfig(const vector<Data::CreditConfig> & creditConfig) { DARABONBA_PTR_SET_VALUE(creditConfig_, creditConfig) };
      inline Data& setCreditConfig(vector<Data::CreditConfig> && creditConfig) { DARABONBA_PTR_SET_RVALUE(creditConfig_, creditConfig) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jvsPackageId Field Functions 
      bool hasJvsPackageId() const { return this->jvsPackageId_ != nullptr;};
      void deleteJvsPackageId() { this->jvsPackageId_ = nullptr;};
      inline string getJvsPackageId() const { DARABONBA_PTR_GET_DEFAULT(jvsPackageId_, "") };
      inline Data& setJvsPackageId(string jvsPackageId) { DARABONBA_PTR_SET_VALUE(jvsPackageId_, jvsPackageId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usedCredit Field Functions 
      bool hasUsedCredit() const { return this->usedCredit_ != nullptr;};
      void deleteUsedCredit() { this->usedCredit_ = nullptr;};
      inline const vector<Data::UsedCredit> & getUsedCredit() const { DARABONBA_PTR_GET_CONST(usedCredit_, vector<Data::UsedCredit>) };
      inline vector<Data::UsedCredit> getUsedCredit() { DARABONBA_PTR_GET(usedCredit_, vector<Data::UsedCredit>) };
      inline Data& setUsedCredit(const vector<Data::UsedCredit> & usedCredit) { DARABONBA_PTR_SET_VALUE(usedCredit_, usedCredit) };
      inline Data& setUsedCredit(vector<Data::UsedCredit> && usedCredit) { DARABONBA_PTR_SET_RVALUE(usedCredit_, usedCredit) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<Data::CreditConfig>> creditConfig_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> jvsPackageId_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Data::UsedCredit>> usedCredit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeJVSInstanceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeJVSInstanceResponseBody::Data>) };
    inline vector<DescribeJVSInstanceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeJVSInstanceResponseBody::Data>) };
    inline DescribeJVSInstanceResponseBody& setData(const vector<DescribeJVSInstanceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJVSInstanceResponseBody& setData(vector<DescribeJVSInstanceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeJVSInstanceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeJVSInstanceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJVSInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeJVSInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeJVSInstanceResponseBody::Data>> data_ {};
    // 当前页实际返回条数
    shared_ptr<int32_t> maxResults_ {};
    // 下一页游标，末页不返回
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    // 符合条件的总记录数
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
