// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSJSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSJSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentsJsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentsJsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentsJs, componentsJs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentsJsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentsJs, componentsJs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentsJsResponseBody() = default ;
    DescribeComponentsJsResponseBody(const DescribeComponentsJsResponseBody &) = default ;
    DescribeComponentsJsResponseBody(DescribeComponentsJsResponseBody &&) = default ;
    DescribeComponentsJsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentsJsResponseBody() = default ;
    DescribeComponentsJsResponseBody& operator=(const DescribeComponentsJsResponseBody &) = default ;
    DescribeComponentsJsResponseBody& operator=(DescribeComponentsJsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentsJs_ == nullptr
        && return this->requestId_ == nullptr; };
    // componentsJs Field Functions 
    bool hasComponentsJs() const { return this->componentsJs_ != nullptr;};
    void deleteComponentsJs() { this->componentsJs_ = nullptr;};
    inline string componentsJs() const { DARABONBA_PTR_GET_DEFAULT(componentsJs_, "") };
    inline DescribeComponentsJsResponseBody& setComponentsJs(string componentsJs) { DARABONBA_PTR_SET_VALUE(componentsJs_, componentsJs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentsJsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the JavaScript file for the component.
    std::shared_ptr<string> componentsJs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
