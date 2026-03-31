// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSENSITIVEDOMAINSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSENSITIVEDOMAINSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSensitiveDomainStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSensitiveDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSensitiveDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecSensitiveDomainStatisticResponseBody() = default ;
    DescribeApisecSensitiveDomainStatisticResponseBody(const DescribeApisecSensitiveDomainStatisticResponseBody &) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBody(DescribeApisecSensitiveDomainStatisticResponseBody &&) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSensitiveDomainStatisticResponseBody() = default ;
    DescribeApisecSensitiveDomainStatisticResponseBody& operator=(const DescribeApisecSensitiveDomainStatisticResponseBody &) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBody& operator=(DescribeApisecSensitiveDomainStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiCount, apiCount_);
        DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
        DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveName, sensitiveName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiCount, apiCount_);
        DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveName, sensitiveName_);
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
      virtual bool empty() const override { return this->apiCount_ == nullptr
        && this->domainCount_ == nullptr && this->sensitiveCode_ == nullptr && this->sensitiveLevel_ == nullptr && this->sensitiveName_ == nullptr; };
      // apiCount Field Functions 
      bool hasApiCount() const { return this->apiCount_ != nullptr;};
      void deleteApiCount() { this->apiCount_ = nullptr;};
      inline int64_t getApiCount() const { DARABONBA_PTR_GET_DEFAULT(apiCount_, 0L) };
      inline Data& setApiCount(int64_t apiCount) { DARABONBA_PTR_SET_VALUE(apiCount_, apiCount) };


      // domainCount Field Functions 
      bool hasDomainCount() const { return this->domainCount_ != nullptr;};
      void deleteDomainCount() { this->domainCount_ = nullptr;};
      inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
      inline Data& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


      // sensitiveCode Field Functions 
      bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
      void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
      inline string getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
      inline Data& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline Data& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveName Field Functions 
      bool hasSensitiveName() const { return this->sensitiveName_ != nullptr;};
      void deleteSensitiveName() { this->sensitiveName_ = nullptr;};
      inline string getSensitiveName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveName_, "") };
      inline Data& setSensitiveName(string sensitiveName) { DARABONBA_PTR_SET_VALUE(sensitiveName_, sensitiveName) };


    protected:
      // The number of APIs that are involved.
      shared_ptr<int64_t> apiCount_ {};
      // The number of sites that are involved.
      shared_ptr<int64_t> domainCount_ {};
      // The code of the sensitive data.
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
      shared_ptr<string> sensitiveCode_ {};
      // The sensitivity level of the sensitive data.Valid values:
      // 
      // * **S1**: low sensitivity.
      // * **S2**: moderate sensitivity.
      // * **S3**: high sensitivity.
      shared_ptr<string> sensitiveLevel_ {};
      // The name of the sensitive data.
      shared_ptr<string> sensitiveName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data>) };
    inline vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data>) };
    inline DescribeApisecSensitiveDomainStatisticResponseBody& setData(const vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecSensitiveDomainStatisticResponseBody& setData(vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecSensitiveDomainStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecSensitiveDomainStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response parameters.
    shared_ptr<vector<DescribeApisecSensitiveDomainStatisticResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
