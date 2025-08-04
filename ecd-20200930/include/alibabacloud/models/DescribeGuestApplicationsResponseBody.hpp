// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGuestApplicationsResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGuestApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGuestApplicationsResponseBody() = default ;
    DescribeGuestApplicationsResponseBody(const DescribeGuestApplicationsResponseBody &) = default ;
    DescribeGuestApplicationsResponseBody(DescribeGuestApplicationsResponseBody &&) = default ;
    DescribeGuestApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestApplicationsResponseBody() = default ;
    DescribeGuestApplicationsResponseBody& operator=(const DescribeGuestApplicationsResponseBody &) = default ;
    DescribeGuestApplicationsResponseBody& operator=(DescribeGuestApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->requestId_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<DescribeGuestApplicationsResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<DescribeGuestApplicationsResponseBodyApplications>) };
    inline vector<DescribeGuestApplicationsResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<DescribeGuestApplicationsResponseBodyApplications>) };
    inline DescribeGuestApplicationsResponseBody& setApplications(const vector<DescribeGuestApplicationsResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline DescribeGuestApplicationsResponseBody& setApplications(vector<DescribeGuestApplicationsResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGuestApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications.
    std::shared_ptr<vector<DescribeGuestApplicationsResponseBodyApplications>> applications_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
