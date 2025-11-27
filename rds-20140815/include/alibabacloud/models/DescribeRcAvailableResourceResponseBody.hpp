// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCAvailableResourceResponseBodyAvailableZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCAvailableResourceResponseBody() = default ;
    DescribeRCAvailableResourceResponseBody(const DescribeRCAvailableResourceResponseBody &) = default ;
    DescribeRCAvailableResourceResponseBody(DescribeRCAvailableResourceResponseBody &&) = default ;
    DescribeRCAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCAvailableResourceResponseBody() = default ;
    DescribeRCAvailableResourceResponseBody& operator=(const DescribeRCAvailableResourceResponseBody &) = default ;
    DescribeRCAvailableResourceResponseBody& operator=(DescribeRCAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZones_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeRCAvailableResourceResponseBodyAvailableZones> & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeRCAvailableResourceResponseBodyAvailableZones>) };
    inline vector<DescribeRCAvailableResourceResponseBodyAvailableZones> availableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeRCAvailableResourceResponseBodyAvailableZones>) };
    inline DescribeRCAvailableResourceResponseBody& setAvailableZones(const vector<DescribeRCAvailableResourceResponseBodyAvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeRCAvailableResourceResponseBody& setAvailableZones(vector<DescribeRCAvailableResourceResponseBodyAvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeRCAvailableResourceResponseBodyAvailableZones>> availableZones_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
