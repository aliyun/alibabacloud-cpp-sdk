// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImportedServicesDetailResponseBodyDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeImportedServicesDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedServicesDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedServicesDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImportedServicesDetailResponseBody() = default ;
    DescribeImportedServicesDetailResponseBody(const DescribeImportedServicesDetailResponseBody &) = default ;
    DescribeImportedServicesDetailResponseBody(DescribeImportedServicesDetailResponseBody &&) = default ;
    DescribeImportedServicesDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedServicesDetailResponseBody() = default ;
    DescribeImportedServicesDetailResponseBody& operator=(const DescribeImportedServicesDetailResponseBody &) = default ;
    DescribeImportedServicesDetailResponseBody& operator=(DescribeImportedServicesDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->requestId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DescribeImportedServicesDetailResponseBodyDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<DescribeImportedServicesDetailResponseBodyDetails>) };
    inline vector<DescribeImportedServicesDetailResponseBodyDetails> details() { DARABONBA_PTR_GET(details_, vector<DescribeImportedServicesDetailResponseBodyDetails>) };
    inline DescribeImportedServicesDetailResponseBody& setDetails(const vector<DescribeImportedServicesDetailResponseBodyDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeImportedServicesDetailResponseBody& setDetails(vector<DescribeImportedServicesDetailResponseBodyDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportedServicesDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the services.
    std::shared_ptr<vector<DescribeImportedServicesDetailResponseBodyDetails>> details_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
