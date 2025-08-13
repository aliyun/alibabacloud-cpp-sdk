// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOperatorListBySceneResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListBySceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListBySceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListBySceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeOperatorListBySceneResponseBody() = default ;
    DescribeOperatorListBySceneResponseBody(const DescribeOperatorListBySceneResponseBody &) = default ;
    DescribeOperatorListBySceneResponseBody(DescribeOperatorListBySceneResponseBody &&) = default ;
    DescribeOperatorListBySceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListBySceneResponseBody() = default ;
    DescribeOperatorListBySceneResponseBody& operator=(const DescribeOperatorListBySceneResponseBody &) = default ;
    DescribeOperatorListBySceneResponseBody& operator=(DescribeOperatorListBySceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultObject_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOperatorListBySceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeOperatorListBySceneResponseBodyResultObject> & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeOperatorListBySceneResponseBodyResultObject>) };
    inline vector<DescribeOperatorListBySceneResponseBodyResultObject> resultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeOperatorListBySceneResponseBodyResultObject>) };
    inline DescribeOperatorListBySceneResponseBody& setResultObject(const vector<DescribeOperatorListBySceneResponseBodyResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeOperatorListBySceneResponseBody& setResultObject(vector<DescribeOperatorListBySceneResponseBodyResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return object
    std::shared_ptr<vector<DescribeOperatorListBySceneResponseBodyResultObject>> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
