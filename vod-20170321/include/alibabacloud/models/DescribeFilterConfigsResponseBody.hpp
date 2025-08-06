// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILTERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILTERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFilterConfigsResponseBodyFilterConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeFilterConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilterConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilterConfigs, filterConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilterConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterConfigs, filterConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFilterConfigsResponseBody() = default ;
    DescribeFilterConfigsResponseBody(const DescribeFilterConfigsResponseBody &) = default ;
    DescribeFilterConfigsResponseBody(DescribeFilterConfigsResponseBody &&) = default ;
    DescribeFilterConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilterConfigsResponseBody() = default ;
    DescribeFilterConfigsResponseBody& operator=(const DescribeFilterConfigsResponseBody &) = default ;
    DescribeFilterConfigsResponseBody& operator=(DescribeFilterConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // filterConfigs Field Functions 
    bool hasFilterConfigs() const { return this->filterConfigs_ != nullptr;};
    void deleteFilterConfigs() { this->filterConfigs_ = nullptr;};
    inline const vector<DescribeFilterConfigsResponseBodyFilterConfigs> & filterConfigs() const { DARABONBA_PTR_GET_CONST(filterConfigs_, vector<DescribeFilterConfigsResponseBodyFilterConfigs>) };
    inline vector<DescribeFilterConfigsResponseBodyFilterConfigs> filterConfigs() { DARABONBA_PTR_GET(filterConfigs_, vector<DescribeFilterConfigsResponseBodyFilterConfigs>) };
    inline DescribeFilterConfigsResponseBody& setFilterConfigs(const vector<DescribeFilterConfigsResponseBodyFilterConfigs> & filterConfigs) { DARABONBA_PTR_SET_VALUE(filterConfigs_, filterConfigs) };
    inline DescribeFilterConfigsResponseBody& setFilterConfigs(vector<DescribeFilterConfigsResponseBodyFilterConfigs> && filterConfigs) { DARABONBA_PTR_SET_RVALUE(filterConfigs_, filterConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilterConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeFilterConfigsResponseBodyFilterConfigs>> filterConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
