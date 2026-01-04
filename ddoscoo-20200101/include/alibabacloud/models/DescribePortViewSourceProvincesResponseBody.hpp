// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
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
  class DescribePortViewSourceProvincesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceProvinces, sourceProvinces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceProvinces, sourceProvinces_);
    };
    DescribePortViewSourceProvincesResponseBody() = default ;
    DescribePortViewSourceProvincesResponseBody(const DescribePortViewSourceProvincesResponseBody &) = default ;
    DescribePortViewSourceProvincesResponseBody(DescribePortViewSourceProvincesResponseBody &&) = default ;
    DescribePortViewSourceProvincesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceProvincesResponseBody() = default ;
    DescribePortViewSourceProvincesResponseBody& operator=(const DescribePortViewSourceProvincesResponseBody &) = default ;
    DescribePortViewSourceProvincesResponseBody& operator=(DescribePortViewSourceProvincesResponseBody &&) = default ;
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
      // The total number of requests that are sent from the ISP.
      // 
      // > This parameter does not indicate the accurate number of requests. You can use this parameter to calculate the proportion of requests from different administrative regions in China.
      shared_ptr<int64_t> count_ {};
      // The ID of the administrative region in China from which the requests are sent. For example, **110000** indicates Beijing, and **120000** indicates Tianjin.
      // 
      // > For more information, see [Location parameters](https://help.aliyun.com/document_detail/167926.html).
      shared_ptr<string> provinceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sourceProvinces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortViewSourceProvincesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceProvinces Field Functions 
    bool hasSourceProvinces() const { return this->sourceProvinces_ != nullptr;};
    void deleteSourceProvinces() { this->sourceProvinces_ = nullptr;};
    inline const vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces> & getSourceProvinces() const { DARABONBA_PTR_GET_CONST(sourceProvinces_, vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces>) };
    inline vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces> getSourceProvinces() { DARABONBA_PTR_GET(sourceProvinces_, vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces>) };
    inline DescribePortViewSourceProvincesResponseBody& setSourceProvinces(const vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces> & sourceProvinces) { DARABONBA_PTR_SET_VALUE(sourceProvinces_, sourceProvinces) };
    inline DescribePortViewSourceProvincesResponseBody& setSourceProvinces(vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces> && sourceProvinces) { DARABONBA_PTR_SET_RVALUE(sourceProvinces_, sourceProvinces) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the administrative region in China from which the requests are sent.
    shared_ptr<vector<DescribePortViewSourceProvincesResponseBody::SourceProvinces>> sourceProvinces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
