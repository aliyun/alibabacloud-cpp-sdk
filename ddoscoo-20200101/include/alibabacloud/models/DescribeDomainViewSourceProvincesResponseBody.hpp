// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewSourceProvincesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceProvinces, sourceProvinces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceProvinces, sourceProvinces_);
    };
    DescribeDomainViewSourceProvincesResponseBody() = default ;
    DescribeDomainViewSourceProvincesResponseBody(const DescribeDomainViewSourceProvincesResponseBody &) = default ;
    DescribeDomainViewSourceProvincesResponseBody(DescribeDomainViewSourceProvincesResponseBody &&) = default ;
    DescribeDomainViewSourceProvincesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewSourceProvincesResponseBody() = default ;
    DescribeDomainViewSourceProvincesResponseBody& operator=(const DescribeDomainViewSourceProvincesResponseBody &) = default ;
    DescribeDomainViewSourceProvincesResponseBody& operator=(DescribeDomainViewSourceProvincesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceProvinces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceProvinces& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
      };
      friend void from_json(const Darabonba::Json& j, SourceProvinces& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
      };
      SourceProvinces() = default ;
      SourceProvinces(const SourceProvinces &) = default ;
      SourceProvinces(SourceProvinces &&) = default ;
      SourceProvinces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceProvinces() = default ;
      SourceProvinces& operator=(const SourceProvinces &) = default ;
      SourceProvinces& operator=(SourceProvinces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->provinceId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline SourceProvinces& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // provinceId Field Functions 
      bool hasProvinceId() const { return this->provinceId_ != nullptr;};
      void deleteProvinceId() { this->provinceId_ = nullptr;};
      inline string getProvinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, "") };
      inline SourceProvinces& setProvinceId(string provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


    protected:
      // The total number of requests.
      shared_ptr<int64_t> count_ {};
      // The ID of the region inside China. For more information, see the **Codes of administrative regions in China** section of the [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html) topic. For example, **110000** indicates Beijing, and **120000** indicates Tianjin.
      shared_ptr<string> provinceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sourceProvinces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewSourceProvincesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceProvinces Field Functions 
    bool hasSourceProvinces() const { return this->sourceProvinces_ != nullptr;};
    void deleteSourceProvinces() { this->sourceProvinces_ = nullptr;};
    inline const vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces> & getSourceProvinces() const { DARABONBA_PTR_GET_CONST(sourceProvinces_, vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces>) };
    inline vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces> getSourceProvinces() { DARABONBA_PTR_GET(sourceProvinces_, vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces>) };
    inline DescribeDomainViewSourceProvincesResponseBody& setSourceProvinces(const vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces> & sourceProvinces) { DARABONBA_PTR_SET_VALUE(sourceProvinces_, sourceProvinces) };
    inline DescribeDomainViewSourceProvincesResponseBody& setSourceProvinces(vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces> && sourceProvinces) { DARABONBA_PTR_SET_RVALUE(sourceProvinces_, sourceProvinces) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array consisting of the details of the administrative region in China from which the requests are sent.
    shared_ptr<vector<DescribeDomainViewSourceProvincesResponseBody::SourceProvinces>> sourceProvinces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
