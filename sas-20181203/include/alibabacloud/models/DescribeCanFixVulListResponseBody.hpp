// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCanFixVulListResponseBodyVulRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCanFixVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanFixVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulRecords, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanFixVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulRecords, vulRecords_);
    };
    DescribeCanFixVulListResponseBody() = default ;
    DescribeCanFixVulListResponseBody(const DescribeCanFixVulListResponseBody &) = default ;
    DescribeCanFixVulListResponseBody(DescribeCanFixVulListResponseBody &&) = default ;
    DescribeCanFixVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanFixVulListResponseBody() = default ;
    DescribeCanFixVulListResponseBody& operator=(const DescribeCanFixVulListResponseBody &) = default ;
    DescribeCanFixVulListResponseBody& operator=(DescribeCanFixVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vulRecords_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCanFixVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeCanFixVulListResponseBodyVulRecords> & vulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeCanFixVulListResponseBodyVulRecords>) };
    inline vector<DescribeCanFixVulListResponseBodyVulRecords> vulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeCanFixVulListResponseBodyVulRecords>) };
    inline DescribeCanFixVulListResponseBody& setVulRecords(const vector<DescribeCanFixVulListResponseBodyVulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeCanFixVulListResponseBody& setVulRecords(vector<DescribeCanFixVulListResponseBodyVulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the vulnerability.
    std::shared_ptr<vector<DescribeCanFixVulListResponseBodyVulRecords>> vulRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
