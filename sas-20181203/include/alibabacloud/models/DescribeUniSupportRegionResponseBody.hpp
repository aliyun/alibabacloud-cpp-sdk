// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNISUPPORTREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNISUPPORTREGIONRESPONSEBODY_HPP_
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
  class DescribeUniSupportRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniSupportRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniSupportRegion, uniSupportRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniSupportRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniSupportRegion, uniSupportRegion_);
    };
    DescribeUniSupportRegionResponseBody() = default ;
    DescribeUniSupportRegionResponseBody(const DescribeUniSupportRegionResponseBody &) = default ;
    DescribeUniSupportRegionResponseBody(DescribeUniSupportRegionResponseBody &&) = default ;
    DescribeUniSupportRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniSupportRegionResponseBody() = default ;
    DescribeUniSupportRegionResponseBody& operator=(const DescribeUniSupportRegionResponseBody &) = default ;
    DescribeUniSupportRegionResponseBody& operator=(DescribeUniSupportRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->uniSupportRegion_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniSupportRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniSupportRegion Field Functions 
    bool hasUniSupportRegion() const { return this->uniSupportRegion_ != nullptr;};
    void deleteUniSupportRegion() { this->uniSupportRegion_ = nullptr;};
    inline const vector<string> & uniSupportRegion() const { DARABONBA_PTR_GET_CONST(uniSupportRegion_, vector<string>) };
    inline vector<string> uniSupportRegion() { DARABONBA_PTR_GET(uniSupportRegion_, vector<string>) };
    inline DescribeUniSupportRegionResponseBody& setUniSupportRegion(const vector<string> & uniSupportRegion) { DARABONBA_PTR_SET_VALUE(uniSupportRegion_, uniSupportRegion) };
    inline DescribeUniSupportRegionResponseBody& setUniSupportRegion(vector<string> && uniSupportRegion) { DARABONBA_PTR_SET_RVALUE(uniSupportRegion_, uniSupportRegion) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the region that is supported by anti-ransomware for databases.
    std::shared_ptr<vector<string>> uniSupportRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
