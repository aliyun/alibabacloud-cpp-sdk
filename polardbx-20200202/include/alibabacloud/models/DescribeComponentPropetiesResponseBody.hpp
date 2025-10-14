// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPROPETIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPROPETIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeComponentPropetiesResponseBodyProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeComponentPropetiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentPropetiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentPropetiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentPropetiesResponseBody() = default ;
    DescribeComponentPropetiesResponseBody(const DescribeComponentPropetiesResponseBody &) = default ;
    DescribeComponentPropetiesResponseBody(DescribeComponentPropetiesResponseBody &&) = default ;
    DescribeComponentPropetiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentPropetiesResponseBody() = default ;
    DescribeComponentPropetiesResponseBody& operator=(const DescribeComponentPropetiesResponseBody &) = default ;
    DescribeComponentPropetiesResponseBody& operator=(DescribeComponentPropetiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->properties_ == nullptr
        && return this->requestId_ == nullptr; };
    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<DescribeComponentPropetiesResponseBodyProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<DescribeComponentPropetiesResponseBodyProperties>) };
    inline vector<DescribeComponentPropetiesResponseBodyProperties> properties() { DARABONBA_PTR_GET(properties_, vector<DescribeComponentPropetiesResponseBodyProperties>) };
    inline DescribeComponentPropetiesResponseBody& setProperties(const vector<DescribeComponentPropetiesResponseBodyProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline DescribeComponentPropetiesResponseBody& setProperties(vector<DescribeComponentPropetiesResponseBodyProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentPropetiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeComponentPropetiesResponseBodyProperties>> properties_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
