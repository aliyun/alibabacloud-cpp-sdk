// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulDetailsResponseBodyCves.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cves, cves_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cves, cves_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVulDetailsResponseBody() = default ;
    DescribeVulDetailsResponseBody(const DescribeVulDetailsResponseBody &) = default ;
    DescribeVulDetailsResponseBody(DescribeVulDetailsResponseBody &&) = default ;
    DescribeVulDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDetailsResponseBody() = default ;
    DescribeVulDetailsResponseBody& operator=(const DescribeVulDetailsResponseBody &) = default ;
    DescribeVulDetailsResponseBody& operator=(DescribeVulDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cves_ != nullptr
        && this->requestId_ != nullptr; };
    // cves Field Functions 
    bool hasCves() const { return this->cves_ != nullptr;};
    void deleteCves() { this->cves_ = nullptr;};
    inline const vector<DescribeVulDetailsResponseBodyCves> & cves() const { DARABONBA_PTR_GET_CONST(cves_, vector<DescribeVulDetailsResponseBodyCves>) };
    inline vector<DescribeVulDetailsResponseBodyCves> cves() { DARABONBA_PTR_GET(cves_, vector<DescribeVulDetailsResponseBodyCves>) };
    inline DescribeVulDetailsResponseBody& setCves(const vector<DescribeVulDetailsResponseBodyCves> & cves) { DARABONBA_PTR_SET_VALUE(cves_, cves) };
    inline DescribeVulDetailsResponseBody& setCves(vector<DescribeVulDetailsResponseBodyCves> && cves) { DARABONBA_PTR_SET_RVALUE(cves_, cves) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the vulnerability.
    std::shared_ptr<vector<DescribeVulDetailsResponseBodyCves>> cves_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
