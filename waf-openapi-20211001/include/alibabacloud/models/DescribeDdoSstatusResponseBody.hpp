// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDoSStatusResponseBodyDDoSStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDDoSStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSStatus, DDoSStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSStatus, DDoSStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDoSStatusResponseBody() = default ;
    DescribeDDoSStatusResponseBody(const DescribeDDoSStatusResponseBody &) = default ;
    DescribeDDoSStatusResponseBody(DescribeDDoSStatusResponseBody &&) = default ;
    DescribeDDoSStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSStatusResponseBody() = default ;
    DescribeDDoSStatusResponseBody& operator=(const DescribeDDoSStatusResponseBody &) = default ;
    DescribeDDoSStatusResponseBody& operator=(DescribeDDoSStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DDoSStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // DDoSStatus Field Functions 
    bool hasDDoSStatus() const { return this->DDoSStatus_ != nullptr;};
    void deleteDDoSStatus() { this->DDoSStatus_ = nullptr;};
    inline const vector<DescribeDDoSStatusResponseBodyDDoSStatus> & DDoSStatus() const { DARABONBA_PTR_GET_CONST(DDoSStatus_, vector<DescribeDDoSStatusResponseBodyDDoSStatus>) };
    inline vector<DescribeDDoSStatusResponseBodyDDoSStatus> DDoSStatus() { DARABONBA_PTR_GET(DDoSStatus_, vector<DescribeDDoSStatusResponseBodyDDoSStatus>) };
    inline DescribeDDoSStatusResponseBody& setDDoSStatus(const vector<DescribeDDoSStatusResponseBodyDDoSStatus> & DDoSStatus) { DARABONBA_PTR_SET_VALUE(DDoSStatus_, DDoSStatus) };
    inline DescribeDDoSStatusResponseBody& setDDoSStatus(vector<DescribeDDoSStatusResponseBodyDDoSStatus> && DDoSStatus) { DARABONBA_PTR_SET_RVALUE(DDoSStatus_, DDoSStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether DDoS attacks occur on specific domain names.
    std::shared_ptr<vector<DescribeDDoSStatusResponseBodyDDoSStatus>> DDoSStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
