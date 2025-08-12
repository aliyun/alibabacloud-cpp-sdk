// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveCenterStreamRateDataResponseBodyRateDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterStreamRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterStreamRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RateDatas, rateDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterStreamRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RateDatas, rateDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveCenterStreamRateDataResponseBody() = default ;
    DescribeLiveCenterStreamRateDataResponseBody(const DescribeLiveCenterStreamRateDataResponseBody &) = default ;
    DescribeLiveCenterStreamRateDataResponseBody(DescribeLiveCenterStreamRateDataResponseBody &&) = default ;
    DescribeLiveCenterStreamRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterStreamRateDataResponseBody() = default ;
    DescribeLiveCenterStreamRateDataResponseBody& operator=(const DescribeLiveCenterStreamRateDataResponseBody &) = default ;
    DescribeLiveCenterStreamRateDataResponseBody& operator=(DescribeLiveCenterStreamRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rateDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // rateDatas Field Functions 
    bool hasRateDatas() const { return this->rateDatas_ != nullptr;};
    void deleteRateDatas() { this->rateDatas_ = nullptr;};
    inline const vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas> & rateDatas() const { DARABONBA_PTR_GET_CONST(rateDatas_, vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas>) };
    inline vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas> rateDatas() { DARABONBA_PTR_GET(rateDatas_, vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas>) };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRateDatas(const vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas> & rateDatas) { DARABONBA_PTR_SET_VALUE(rateDatas_, rateDatas) };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRateDatas(vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas> && rateDatas) { DARABONBA_PTR_SET_RVALUE(rateDatas_, rateDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of frame rates and bitrates.
    std::shared_ptr<vector<DescribeLiveCenterStreamRateDataResponseBodyRateDatas>> rateDatas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
