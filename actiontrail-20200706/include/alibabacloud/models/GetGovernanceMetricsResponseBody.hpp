// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetGovernanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGovernanceMetricsResponseBody() = default ;
    GetGovernanceMetricsResponseBody(const GetGovernanceMetricsResponseBody &) = default ;
    GetGovernanceMetricsResponseBody(GetGovernanceMetricsResponseBody &&) = default ;
    GetGovernanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceMetricsResponseBody() = default ;
    GetGovernanceMetricsResponseBody& operator=(const GetGovernanceMetricsResponseBody &) = default ;
    GetGovernanceMetricsResponseBody& operator=(GetGovernanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(GovernanceMetrics, governanceMetrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(GovernanceMetrics, governanceMetrics_);
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
      class GovernanceMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GovernanceMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnsSchema, columnsSchema_);
          DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_TO_JSON(GovernanceScore, governanceScore_);
        };
        friend void from_json(const Darabonba::Json& j, GovernanceMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnsSchema, columnsSchema_);
          DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_FROM_JSON(GovernanceScore, governanceScore_);
        };
        GovernanceMetrics() = default ;
        GovernanceMetrics(const GovernanceMetrics &) = default ;
        GovernanceMetrics(GovernanceMetrics &&) = default ;
        GovernanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GovernanceMetrics() = default ;
        GovernanceMetrics& operator=(const GovernanceMetrics &) = default ;
        GovernanceMetrics& operator=(GovernanceMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnsSchema_ == nullptr
        && this->governanceItem_ == nullptr && this->governanceScore_ == nullptr; };
        // columnsSchema Field Functions 
        bool hasColumnsSchema() const { return this->columnsSchema_ != nullptr;};
        void deleteColumnsSchema() { this->columnsSchema_ = nullptr;};
        inline string getColumnsSchema() const { DARABONBA_PTR_GET_DEFAULT(columnsSchema_, "") };
        inline GovernanceMetrics& setColumnsSchema(string columnsSchema) { DARABONBA_PTR_SET_VALUE(columnsSchema_, columnsSchema) };


        // governanceItem Field Functions 
        bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
        void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
        inline string getGovernanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
        inline GovernanceMetrics& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


        // governanceScore Field Functions 
        bool hasGovernanceScore() const { return this->governanceScore_ != nullptr;};
        void deleteGovernanceScore() { this->governanceScore_ = nullptr;};
        inline string getGovernanceScore() const { DARABONBA_PTR_GET_DEFAULT(governanceScore_, "") };
        inline GovernanceMetrics& setGovernanceScore(string governanceScore) { DARABONBA_PTR_SET_VALUE(governanceScore_, governanceScore) };


      protected:
        shared_ptr<string> columnsSchema_ {};
        shared_ptr<string> governanceItem_ {};
        shared_ptr<string> governanceScore_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->governanceMetrics_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // governanceMetrics Field Functions 
      bool hasGovernanceMetrics() const { return this->governanceMetrics_ != nullptr;};
      void deleteGovernanceMetrics() { this->governanceMetrics_ = nullptr;};
      inline const vector<Data::GovernanceMetrics> & getGovernanceMetrics() const { DARABONBA_PTR_GET_CONST(governanceMetrics_, vector<Data::GovernanceMetrics>) };
      inline vector<Data::GovernanceMetrics> getGovernanceMetrics() { DARABONBA_PTR_GET(governanceMetrics_, vector<Data::GovernanceMetrics>) };
      inline Data& setGovernanceMetrics(const vector<Data::GovernanceMetrics> & governanceMetrics) { DARABONBA_PTR_SET_VALUE(governanceMetrics_, governanceMetrics) };
      inline Data& setGovernanceMetrics(vector<Data::GovernanceMetrics> && governanceMetrics) { DARABONBA_PTR_SET_RVALUE(governanceMetrics_, governanceMetrics) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<vector<Data::GovernanceMetrics>> governanceMetrics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGovernanceMetricsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGovernanceMetricsResponseBody::Data) };
    inline GetGovernanceMetricsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGovernanceMetricsResponseBody::Data) };
    inline GetGovernanceMetricsResponseBody& setData(const GetGovernanceMetricsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGovernanceMetricsResponseBody& setData(GetGovernanceMetricsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetGovernanceMetricsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
