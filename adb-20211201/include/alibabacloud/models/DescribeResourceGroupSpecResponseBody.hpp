// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceGroupSpecResponseBodySpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResourceGroupSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
    };
    DescribeResourceGroupSpecResponseBody() = default ;
    DescribeResourceGroupSpecResponseBody(const DescribeResourceGroupSpecResponseBody &) = default ;
    DescribeResourceGroupSpecResponseBody(DescribeResourceGroupSpecResponseBody &&) = default ;
    DescribeResourceGroupSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupSpecResponseBody() = default ;
    DescribeResourceGroupSpecResponseBody& operator=(const DescribeResourceGroupSpecResponseBody &) = default ;
    DescribeResourceGroupSpecResponseBody& operator=(DescribeResourceGroupSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->specs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceGroupSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<DescribeResourceGroupSpecResponseBodySpecs> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<DescribeResourceGroupSpecResponseBodySpecs>) };
    inline vector<DescribeResourceGroupSpecResponseBodySpecs> specs() { DARABONBA_PTR_GET(specs_, vector<DescribeResourceGroupSpecResponseBodySpecs>) };
    inline DescribeResourceGroupSpecResponseBody& setSpecs(const vector<DescribeResourceGroupSpecResponseBodySpecs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline DescribeResourceGroupSpecResponseBody& setSpecs(vector<DescribeResourceGroupSpecResponseBodySpecs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried specifications.
    std::shared_ptr<vector<DescribeResourceGroupSpecResponseBodySpecs>> specs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
