// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVULSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_TO_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_TO_JSON(VulNntfSum, vulNntfSum_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_FROM_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_FROM_JSON(VulNntfSum, vulNntfSum_);
    };
    GetVulStatisticsResponseBody() = default ;
    GetVulStatisticsResponseBody(const GetVulStatisticsResponseBody &) = default ;
    GetVulStatisticsResponseBody(GetVulStatisticsResponseBody &&) = default ;
    GetVulStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulStatisticsResponseBody() = default ;
    GetVulStatisticsResponseBody& operator=(const GetVulStatisticsResponseBody &) = default ;
    GetVulStatisticsResponseBody& operator=(GetVulStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulAsapSum_ == nullptr && this->vulLaterSum_ == nullptr && this->vulNntfSum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVulStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulAsapSum Field Functions 
    bool hasVulAsapSum() const { return this->vulAsapSum_ != nullptr;};
    void deleteVulAsapSum() { this->vulAsapSum_ = nullptr;};
    inline int32_t getVulAsapSum() const { DARABONBA_PTR_GET_DEFAULT(vulAsapSum_, 0) };
    inline GetVulStatisticsResponseBody& setVulAsapSum(int32_t vulAsapSum) { DARABONBA_PTR_SET_VALUE(vulAsapSum_, vulAsapSum) };


    // vulLaterSum Field Functions 
    bool hasVulLaterSum() const { return this->vulLaterSum_ != nullptr;};
    void deleteVulLaterSum() { this->vulLaterSum_ = nullptr;};
    inline int32_t getVulLaterSum() const { DARABONBA_PTR_GET_DEFAULT(vulLaterSum_, 0) };
    inline GetVulStatisticsResponseBody& setVulLaterSum(int32_t vulLaterSum) { DARABONBA_PTR_SET_VALUE(vulLaterSum_, vulLaterSum) };


    // vulNntfSum Field Functions 
    bool hasVulNntfSum() const { return this->vulNntfSum_ != nullptr;};
    void deleteVulNntfSum() { this->vulNntfSum_ = nullptr;};
    inline int32_t getVulNntfSum() const { DARABONBA_PTR_GET_DEFAULT(vulNntfSum_, 0) };
    inline GetVulStatisticsResponseBody& setVulNntfSum(int32_t vulNntfSum) { DARABONBA_PTR_SET_VALUE(vulNntfSum_, vulNntfSum) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of vulnerabilities that have the high priority.
    shared_ptr<int32_t> vulAsapSum_ {};
    // The number of vulnerabilities that have the medium priority.
    shared_ptr<int32_t> vulLaterSum_ {};
    // The number of vulnerabilities that have the low priority.
    shared_ptr<int32_t> vulNntfSum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
