// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPINAMELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPINAMELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeApiNameListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiNameListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(apiId, apiId_);
      DARABONBA_PTR_TO_JSON(apiName, apiName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiNameListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(apiId, apiId_);
      DARABONBA_PTR_FROM_JSON(apiName, apiName_);
    };
    DescribeApiNameListResponseBodyResultObject() = default ;
    DescribeApiNameListResponseBodyResultObject(const DescribeApiNameListResponseBodyResultObject &) = default ;
    DescribeApiNameListResponseBodyResultObject(DescribeApiNameListResponseBodyResultObject &&) = default ;
    DescribeApiNameListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiNameListResponseBodyResultObject() = default ;
    DescribeApiNameListResponseBodyResultObject& operator=(const DescribeApiNameListResponseBodyResultObject &) = default ;
    DescribeApiNameListResponseBodyResultObject& operator=(DescribeApiNameListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiNameListResponseBodyResultObject& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiNameListResponseBodyResultObject& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


  protected:
    // API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // API name.
    std::shared_ptr<string> apiName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
