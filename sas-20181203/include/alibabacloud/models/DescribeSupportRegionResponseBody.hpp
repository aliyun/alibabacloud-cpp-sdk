// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSupportRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportRegion, supportRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportRegion, supportRegion_);
    };
    DescribeSupportRegionResponseBody() = default ;
    DescribeSupportRegionResponseBody(const DescribeSupportRegionResponseBody &) = default ;
    DescribeSupportRegionResponseBody(DescribeSupportRegionResponseBody &&) = default ;
    DescribeSupportRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportRegionResponseBody() = default ;
    DescribeSupportRegionResponseBody& operator=(const DescribeSupportRegionResponseBody &) = default ;
    DescribeSupportRegionResponseBody& operator=(DescribeSupportRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->supportRegion_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupportRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportRegion Field Functions 
    bool hasSupportRegion() const { return this->supportRegion_ != nullptr;};
    void deleteSupportRegion() { this->supportRegion_ = nullptr;};
    inline const vector<string> & supportRegion() const { DARABONBA_PTR_GET_CONST(supportRegion_, vector<string>) };
    inline vector<string> supportRegion() { DARABONBA_PTR_GET(supportRegion_, vector<string>) };
    inline DescribeSupportRegionResponseBody& setSupportRegion(const vector<string> & supportRegion) { DARABONBA_PTR_SET_VALUE(supportRegion_, supportRegion) };
    inline DescribeSupportRegionResponseBody& setSupportRegion(vector<string> && supportRegion) { DARABONBA_PTR_SET_RVALUE(supportRegion_, supportRegion) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of supported regions
    std::shared_ptr<vector<string>> supportRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
