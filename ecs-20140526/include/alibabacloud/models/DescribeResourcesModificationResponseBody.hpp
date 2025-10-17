// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResourcesModificationResponseBodyAvailableZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeResourcesModificationResponseBody() = default ;
    DescribeResourcesModificationResponseBody(const DescribeResourcesModificationResponseBody &) = default ;
    DescribeResourcesModificationResponseBody(DescribeResourcesModificationResponseBody &&) = default ;
    DescribeResourcesModificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBody() = default ;
    DescribeResourcesModificationResponseBody& operator=(const DescribeResourcesModificationResponseBody &) = default ;
    DescribeResourcesModificationResponseBody& operator=(DescribeResourcesModificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZones_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const DescribeResourcesModificationResponseBodyAvailableZones & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, DescribeResourcesModificationResponseBodyAvailableZones) };
    inline DescribeResourcesModificationResponseBodyAvailableZones availableZones() { DARABONBA_PTR_GET(availableZones_, DescribeResourcesModificationResponseBodyAvailableZones) };
    inline DescribeResourcesModificationResponseBody& setAvailableZones(const DescribeResourcesModificationResponseBodyAvailableZones & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeResourcesModificationResponseBody& setAvailableZones(DescribeResourcesModificationResponseBodyAvailableZones && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcesModificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the queried zones.
    std::shared_ptr<DescribeResourcesModificationResponseBodyAvailableZones> availableZones_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
