// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGadInstancesResponseBodyGadInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeGadInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GadInstances, gadInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GadInstances, gadInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody(DescribeGadInstancesResponseBody &&) = default ;
    DescribeGadInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody& operator=(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody& operator=(DescribeGadInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gadInstances_ == nullptr
        && return this->requestId_ == nullptr; };
    // gadInstances Field Functions 
    bool hasGadInstances() const { return this->gadInstances_ != nullptr;};
    void deleteGadInstances() { this->gadInstances_ = nullptr;};
    inline const vector<DescribeGadInstancesResponseBodyGadInstances> & gadInstances() const { DARABONBA_PTR_GET_CONST(gadInstances_, vector<DescribeGadInstancesResponseBodyGadInstances>) };
    inline vector<DescribeGadInstancesResponseBodyGadInstances> gadInstances() { DARABONBA_PTR_GET(gadInstances_, vector<DescribeGadInstancesResponseBodyGadInstances>) };
    inline DescribeGadInstancesResponseBody& setGadInstances(const vector<DescribeGadInstancesResponseBodyGadInstances> & gadInstances) { DARABONBA_PTR_SET_VALUE(gadInstances_, gadInstances) };
    inline DescribeGadInstancesResponseBody& setGadInstances(vector<DescribeGadInstancesResponseBodyGadInstances> && gadInstances) { DARABONBA_PTR_SET_RVALUE(gadInstances_, gadInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGadInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the global active database cluster.
    std::shared_ptr<vector<DescribeGadInstancesResponseBodyGadInstances>> gadInstances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
