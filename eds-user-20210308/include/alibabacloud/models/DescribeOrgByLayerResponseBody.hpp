// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOrgByLayerResponseBodyOrgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Orgs, orgs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Orgs, orgs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOrgByLayerResponseBody() = default ;
    DescribeOrgByLayerResponseBody(const DescribeOrgByLayerResponseBody &) = default ;
    DescribeOrgByLayerResponseBody(DescribeOrgByLayerResponseBody &&) = default ;
    DescribeOrgByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgByLayerResponseBody() = default ;
    DescribeOrgByLayerResponseBody& operator=(const DescribeOrgByLayerResponseBody &) = default ;
    DescribeOrgByLayerResponseBody& operator=(DescribeOrgByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgs_ != nullptr
        && this->requestId_ != nullptr; };
    // orgs Field Functions 
    bool hasOrgs() const { return this->orgs_ != nullptr;};
    void deleteOrgs() { this->orgs_ = nullptr;};
    inline const vector<DescribeOrgByLayerResponseBodyOrgs> & orgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<DescribeOrgByLayerResponseBodyOrgs>) };
    inline vector<DescribeOrgByLayerResponseBodyOrgs> orgs() { DARABONBA_PTR_GET(orgs_, vector<DescribeOrgByLayerResponseBodyOrgs>) };
    inline DescribeOrgByLayerResponseBody& setOrgs(const vector<DescribeOrgByLayerResponseBodyOrgs> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
    inline DescribeOrgByLayerResponseBody& setOrgs(vector<DescribeOrgByLayerResponseBodyOrgs> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOrgByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeOrgByLayerResponseBodyOrgs>> orgs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
