// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLREGIONSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLREGIONSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllRegionsStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllRegionsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllRegionsStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllRegionsStatisticsResponseBody() = default ;
    DescribeAllRegionsStatisticsResponseBody(const DescribeAllRegionsStatisticsResponseBody &) = default ;
    DescribeAllRegionsStatisticsResponseBody(DescribeAllRegionsStatisticsResponseBody &&) = default ;
    DescribeAllRegionsStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllRegionsStatisticsResponseBody() = default ;
    DescribeAllRegionsStatisticsResponseBody& operator=(const DescribeAllRegionsStatisticsResponseBody &) = default ;
    DescribeAllRegionsStatisticsResponseBody& operator=(DescribeAllRegionsStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Health, health_);
        DARABONBA_PTR_TO_JSON(NewSuspicious, newSuspicious_);
        DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
        DARABONBA_PTR_TO_JSON(Trojan, trojan_);
        DARABONBA_PTR_TO_JSON(Vul, vul_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Health, health_);
        DARABONBA_PTR_FROM_JSON(NewSuspicious, newSuspicious_);
        DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
        DARABONBA_PTR_FROM_JSON(Trojan, trojan_);
        DARABONBA_PTR_FROM_JSON(Vul, vul_);
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
      virtual bool empty() const override { return this->account_ == nullptr
        && this->health_ == nullptr && this->newSuspicious_ == nullptr && this->suspicious_ == nullptr && this->trojan_ == nullptr && this->vul_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline int32_t getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, 0) };
      inline Data& setAccount(int32_t account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline int32_t getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, 0) };
      inline Data& setHealth(int32_t health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // newSuspicious Field Functions 
      bool hasNewSuspicious() const { return this->newSuspicious_ != nullptr;};
      void deleteNewSuspicious() { this->newSuspicious_ = nullptr;};
      inline int32_t getNewSuspicious() const { DARABONBA_PTR_GET_DEFAULT(newSuspicious_, 0) };
      inline Data& setNewSuspicious(int32_t newSuspicious) { DARABONBA_PTR_SET_VALUE(newSuspicious_, newSuspicious) };


      // suspicious Field Functions 
      bool hasSuspicious() const { return this->suspicious_ != nullptr;};
      void deleteSuspicious() { this->suspicious_ = nullptr;};
      inline int32_t getSuspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
      inline Data& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


      // trojan Field Functions 
      bool hasTrojan() const { return this->trojan_ != nullptr;};
      void deleteTrojan() { this->trojan_ = nullptr;};
      inline int32_t getTrojan() const { DARABONBA_PTR_GET_DEFAULT(trojan_, 0) };
      inline Data& setTrojan(int32_t trojan) { DARABONBA_PTR_SET_VALUE(trojan_, trojan) };


      // vul Field Functions 
      bool hasVul() const { return this->vul_ != nullptr;};
      void deleteVul() { this->vul_ = nullptr;};
      inline int32_t getVul() const { DARABONBA_PTR_GET_DEFAULT(vul_, 0) };
      inline Data& setVul(int32_t vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };


    protected:
      // The number of logons to the asset.
      shared_ptr<int32_t> account_ {};
      // The total number of unfixed baseline risks.
      shared_ptr<int32_t> health_ {};
      // The number of alerts that are generated by Server Guard or Security Center.
      // 
      // > 
      // 
      // *   If **From** is set to **sas**, this parameter indicates the number of alerts that are generated by Security Center.
      // 
      // *   If **From** is set to **aqs**, this parameter indicates the number of alerts that are generated by Server Guard.
      shared_ptr<int32_t> newSuspicious_ {};
      // The number of alerts that are generated by Server Guard.
      shared_ptr<int32_t> suspicious_ {};
      // The number of webshell alerts.
      shared_ptr<int32_t> trojan_ {};
      // The number of unfixed vulnerabilities.
      shared_ptr<int32_t> vul_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAllRegionsStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAllRegionsStatisticsResponseBody::Data) };
    inline DescribeAllRegionsStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAllRegionsStatisticsResponseBody::Data) };
    inline DescribeAllRegionsStatisticsResponseBody& setData(const DescribeAllRegionsStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAllRegionsStatisticsResponseBody& setData(DescribeAllRegionsStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllRegionsStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeAllRegionsStatisticsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
