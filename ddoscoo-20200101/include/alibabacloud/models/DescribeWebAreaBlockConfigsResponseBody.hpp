// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAreaBlockConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAreaBlockConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AreaBlockConfigs, areaBlockConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAreaBlockConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaBlockConfigs, areaBlockConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebAreaBlockConfigsResponseBody() = default ;
    DescribeWebAreaBlockConfigsResponseBody(const DescribeWebAreaBlockConfigsResponseBody &) = default ;
    DescribeWebAreaBlockConfigsResponseBody(DescribeWebAreaBlockConfigsResponseBody &&) = default ;
    DescribeWebAreaBlockConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAreaBlockConfigsResponseBody() = default ;
    DescribeWebAreaBlockConfigsResponseBody& operator=(const DescribeWebAreaBlockConfigsResponseBody &) = default ;
    DescribeWebAreaBlockConfigsResponseBody& operator=(DescribeWebAreaBlockConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaBlockConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // areaBlockConfigs Field Functions 
    bool hasAreaBlockConfigs() const { return this->areaBlockConfigs_ != nullptr;};
    void deleteAreaBlockConfigs() { this->areaBlockConfigs_ = nullptr;};
    inline const vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs> & areaBlockConfigs() const { DARABONBA_PTR_GET_CONST(areaBlockConfigs_, vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs>) };
    inline vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs> areaBlockConfigs() { DARABONBA_PTR_GET(areaBlockConfigs_, vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs>) };
    inline DescribeWebAreaBlockConfigsResponseBody& setAreaBlockConfigs(const vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs> & areaBlockConfigs) { DARABONBA_PTR_SET_VALUE(areaBlockConfigs_, areaBlockConfigs) };
    inline DescribeWebAreaBlockConfigsResponseBody& setAreaBlockConfigs(vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs> && areaBlockConfigs) { DARABONBA_PTR_SET_RVALUE(areaBlockConfigs_, areaBlockConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAreaBlockConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the Location Blacklist (Domain Names) policy.
    std::shared_ptr<vector<DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs>> areaBlockConfigs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
