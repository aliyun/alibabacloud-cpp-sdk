// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMENDPOINTLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomEndpointListResponseBodyDataEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCustomEndpointListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEndpointListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanDeleteCount, canDeleteCount_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEndpointListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanDeleteCount, canDeleteCount_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
    };
    DescribeCustomEndpointListResponseBodyData() = default ;
    DescribeCustomEndpointListResponseBodyData(const DescribeCustomEndpointListResponseBodyData &) = default ;
    DescribeCustomEndpointListResponseBodyData(DescribeCustomEndpointListResponseBodyData &&) = default ;
    DescribeCustomEndpointListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEndpointListResponseBodyData() = default ;
    DescribeCustomEndpointListResponseBodyData& operator=(const DescribeCustomEndpointListResponseBodyData &) = default ;
    DescribeCustomEndpointListResponseBodyData& operator=(DescribeCustomEndpointListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canDeleteCount_ == nullptr
        && return this->endpoints_ == nullptr; };
    // canDeleteCount Field Functions 
    bool hasCanDeleteCount() const { return this->canDeleteCount_ != nullptr;};
    void deleteCanDeleteCount() { this->canDeleteCount_ = nullptr;};
    inline int32_t canDeleteCount() const { DARABONBA_PTR_GET_DEFAULT(canDeleteCount_, 0) };
    inline DescribeCustomEndpointListResponseBodyData& setCanDeleteCount(int32_t canDeleteCount) { DARABONBA_PTR_SET_VALUE(canDeleteCount_, canDeleteCount) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints>) };
    inline vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints>) };
    inline DescribeCustomEndpointListResponseBodyData& setEndpoints(const vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeCustomEndpointListResponseBodyData& setEndpoints(vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


  protected:
    std::shared_ptr<int32_t> canDeleteCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCustomEndpointListResponseBodyDataEndpoints>> endpoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
