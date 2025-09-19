// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllEntityResponseBodyEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllEntityResponseBody() = default ;
    DescribeAllEntityResponseBody(const DescribeAllEntityResponseBody &) = default ;
    DescribeAllEntityResponseBody(DescribeAllEntityResponseBody &&) = default ;
    DescribeAllEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllEntityResponseBody() = default ;
    DescribeAllEntityResponseBody& operator=(const DescribeAllEntityResponseBody &) = default ;
    DescribeAllEntityResponseBody& operator=(DescribeAllEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityList_ != nullptr
        && this->requestId_ != nullptr; };
    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline const vector<DescribeAllEntityResponseBodyEntityList> & entityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<DescribeAllEntityResponseBodyEntityList>) };
    inline vector<DescribeAllEntityResponseBodyEntityList> entityList() { DARABONBA_PTR_GET(entityList_, vector<DescribeAllEntityResponseBodyEntityList>) };
    inline DescribeAllEntityResponseBody& setEntityList(const vector<DescribeAllEntityResponseBodyEntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
    inline DescribeAllEntityResponseBody& setEntityList(vector<DescribeAllEntityResponseBodyEntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of servers.
    std::shared_ptr<vector<DescribeAllEntityResponseBodyEntityList>> entityList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
