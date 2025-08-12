// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDrmUsageDataResponseBodyDrmUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDrmUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDrmUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DrmUsageData, drmUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDrmUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DrmUsageData, drmUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDrmUsageDataResponseBody() = default ;
    DescribeLiveDrmUsageDataResponseBody(const DescribeLiveDrmUsageDataResponseBody &) = default ;
    DescribeLiveDrmUsageDataResponseBody(DescribeLiveDrmUsageDataResponseBody &&) = default ;
    DescribeLiveDrmUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDrmUsageDataResponseBody() = default ;
    DescribeLiveDrmUsageDataResponseBody& operator=(const DescribeLiveDrmUsageDataResponseBody &) = default ;
    DescribeLiveDrmUsageDataResponseBody& operator=(DescribeLiveDrmUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drmUsageData_ != nullptr
        && this->requestId_ != nullptr; };
    // drmUsageData Field Functions 
    bool hasDrmUsageData() const { return this->drmUsageData_ != nullptr;};
    void deleteDrmUsageData() { this->drmUsageData_ = nullptr;};
    inline const DescribeLiveDrmUsageDataResponseBodyDrmUsageData & drmUsageData() const { DARABONBA_PTR_GET_CONST(drmUsageData_, DescribeLiveDrmUsageDataResponseBodyDrmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageData drmUsageData() { DARABONBA_PTR_GET(drmUsageData_, DescribeLiveDrmUsageDataResponseBodyDrmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBody& setDrmUsageData(const DescribeLiveDrmUsageDataResponseBodyDrmUsageData & drmUsageData) { DARABONBA_PTR_SET_VALUE(drmUsageData_, drmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBody& setDrmUsageData(DescribeLiveDrmUsageDataResponseBodyDrmUsageData && drmUsageData) { DARABONBA_PTR_SET_RVALUE(drmUsageData_, drmUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDrmUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage of the DRM encryption service at each time interval.
    std::shared_ptr<DescribeLiveDrmUsageDataResponseBodyDrmUsageData> drmUsageData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
