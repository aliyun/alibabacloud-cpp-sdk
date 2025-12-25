// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSupportedRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeSupportedRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportedRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportedRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSupportedRegionsResponseBody() = default ;
    DescribeSupportedRegionsResponseBody(const DescribeSupportedRegionsResponseBody &) = default ;
    DescribeSupportedRegionsResponseBody(DescribeSupportedRegionsResponseBody &&) = default ;
    DescribeSupportedRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportedRegionsResponseBody() = default ;
    DescribeSupportedRegionsResponseBody& operator=(const DescribeSupportedRegionsResponseBody &) = default ;
    DescribeSupportedRegionsResponseBody& operator=(DescribeSupportedRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<DescribeSupportedRegionsResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<DescribeSupportedRegionsResponseBodyRegions>) };
    inline vector<DescribeSupportedRegionsResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<DescribeSupportedRegionsResponseBodyRegions>) };
    inline DescribeSupportedRegionsResponseBody& setRegions(const vector<DescribeSupportedRegionsResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeSupportedRegionsResponseBody& setRegions(vector<DescribeSupportedRegionsResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupportedRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSupportedRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<DescribeSupportedRegionsResponseBodyRegions>> regions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
