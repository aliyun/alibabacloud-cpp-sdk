// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataLimitSetResponseBodyDataLimitSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimitSet, dataLimitSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimitSet, dataLimitSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataLimitSetResponseBody() = default ;
    DescribeDataLimitSetResponseBody(const DescribeDataLimitSetResponseBody &) = default ;
    DescribeDataLimitSetResponseBody(DescribeDataLimitSetResponseBody &&) = default ;
    DescribeDataLimitSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBody() = default ;
    DescribeDataLimitSetResponseBody& operator=(const DescribeDataLimitSetResponseBody &) = default ;
    DescribeDataLimitSetResponseBody& operator=(DescribeDataLimitSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataLimitSet_ != nullptr
        && this->requestId_ != nullptr; };
    // dataLimitSet Field Functions 
    bool hasDataLimitSet() const { return this->dataLimitSet_ != nullptr;};
    void deleteDataLimitSet() { this->dataLimitSet_ = nullptr;};
    inline const DescribeDataLimitSetResponseBodyDataLimitSet & dataLimitSet() const { DARABONBA_PTR_GET_CONST(dataLimitSet_, DescribeDataLimitSetResponseBodyDataLimitSet) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet dataLimitSet() { DARABONBA_PTR_GET(dataLimitSet_, DescribeDataLimitSetResponseBodyDataLimitSet) };
    inline DescribeDataLimitSetResponseBody& setDataLimitSet(const DescribeDataLimitSetResponseBodyDataLimitSet & dataLimitSet) { DARABONBA_PTR_SET_VALUE(dataLimitSet_, dataLimitSet) };
    inline DescribeDataLimitSetResponseBody& setDataLimitSet(DescribeDataLimitSetResponseBodyDataLimitSet && dataLimitSet) { DARABONBA_PTR_SET_RVALUE(dataLimitSet_, dataLimitSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataLimitSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data asset.
    std::shared_ptr<DescribeDataLimitSetResponseBodyDataLimitSet> dataLimitSet_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
