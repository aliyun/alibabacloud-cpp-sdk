// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOfficeSitesResponseBodyOfficeSites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeOfficeSitesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody(DescribeOfficeSitesResponseBody &&) = default ;
    DescribeOfficeSitesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody& operator=(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody& operator=(DescribeOfficeSitesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->officeSites_ != nullptr
        && this->requestId_ != nullptr; };
    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<DescribeOfficeSitesResponseBodyOfficeSites> & officeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<DescribeOfficeSitesResponseBodyOfficeSites>) };
    inline vector<DescribeOfficeSitesResponseBodyOfficeSites> officeSites() { DARABONBA_PTR_GET(officeSites_, vector<DescribeOfficeSitesResponseBodyOfficeSites>) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(const vector<DescribeOfficeSitesResponseBodyOfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(vector<DescribeOfficeSitesResponseBodyOfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfficeSitesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSites>> officeSites_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
