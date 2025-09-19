// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKITEMTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKITEMTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskItemTypeResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskItemTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskItemTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskItemTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskItemTypeResponseBody() = default ;
    DescribeRiskItemTypeResponseBody(const DescribeRiskItemTypeResponseBody &) = default ;
    DescribeRiskItemTypeResponseBody(DescribeRiskItemTypeResponseBody &&) = default ;
    DescribeRiskItemTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskItemTypeResponseBody() = default ;
    DescribeRiskItemTypeResponseBody& operator=(const DescribeRiskItemTypeResponseBody &) = default ;
    DescribeRiskItemTypeResponseBody& operator=(DescribeRiskItemTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeRiskItemTypeResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeRiskItemTypeResponseBodyList>) };
    inline vector<DescribeRiskItemTypeResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeRiskItemTypeResponseBodyList>) };
    inline DescribeRiskItemTypeResponseBody& setList(const vector<DescribeRiskItemTypeResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeRiskItemTypeResponseBody& setList(vector<DescribeRiskItemTypeResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskItemTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the type of the check item.
    std::shared_ptr<vector<DescribeRiskItemTypeResponseBodyList>> list_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
