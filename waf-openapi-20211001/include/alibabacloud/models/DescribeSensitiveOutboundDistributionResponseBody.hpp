// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODY_HPP_
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
  class DescribeSensitiveOutboundDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSensitiveOutboundDistributionResponseBody() = default ;
    DescribeSensitiveOutboundDistributionResponseBody(const DescribeSensitiveOutboundDistributionResponseBody &) = default ;
    DescribeSensitiveOutboundDistributionResponseBody(DescribeSensitiveOutboundDistributionResponseBody &&) = default ;
    DescribeSensitiveOutboundDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundDistributionResponseBody() = default ;
    DescribeSensitiveOutboundDistributionResponseBody& operator=(const DescribeSensitiveOutboundDistributionResponseBody &) = default ;
    DescribeSensitiveOutboundDistributionResponseBody& operator=(DescribeSensitiveOutboundDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
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
      virtual bool empty() const override { return this->country_ == nullptr
        && this->infoOutboundCount_ == nullptr && this->sensitiveOutboundCount_ == nullptr; };
      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline Data& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // infoOutboundCount Field Functions 
      bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
      void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
      inline int64_t getInfoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
      inline Data& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


      // sensitiveOutboundCount Field Functions 
      bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
      void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
      inline int64_t getSensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
      inline Data& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


    protected:
      // The country to which the data is transferred.
      shared_ptr<string> country_ {};
      // The number of personal information records involved in cross-border data transfer.
      shared_ptr<int64_t> infoOutboundCount_ {};
      // The number of sensitive information records involved in cross-border data transfer.
      shared_ptr<int64_t> sensitiveOutboundCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveOutboundDistributionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveOutboundDistributionResponseBody::Data>) };
    inline vector<DescribeSensitiveOutboundDistributionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveOutboundDistributionResponseBody::Data>) };
    inline DescribeSensitiveOutboundDistributionResponseBody& setData(const vector<DescribeSensitiveOutboundDistributionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveOutboundDistributionResponseBody& setData(vector<DescribeSensitiveOutboundDistributionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveOutboundDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic distribution of personal information records involved in cross-border data transfer.
    shared_ptr<vector<DescribeSensitiveOutboundDistributionResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
