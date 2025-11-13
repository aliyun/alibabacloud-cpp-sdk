// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDBInstanceClassResponseBodyClassCodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeAllDBInstanceClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDBInstanceClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllDBInstanceClassResponseBody() = default ;
    DescribeAllDBInstanceClassResponseBody(const DescribeAllDBInstanceClassResponseBody &) = default ;
    DescribeAllDBInstanceClassResponseBody(DescribeAllDBInstanceClassResponseBody &&) = default ;
    DescribeAllDBInstanceClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDBInstanceClassResponseBody() = default ;
    DescribeAllDBInstanceClassResponseBody& operator=(const DescribeAllDBInstanceClassResponseBody &) = default ;
    DescribeAllDBInstanceClassResponseBody& operator=(DescribeAllDBInstanceClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCodeList_ == nullptr
        && return this->requestId_ == nullptr; };
    // classCodeList Field Functions 
    bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
    void deleteClassCodeList() { this->classCodeList_ = nullptr;};
    inline const vector<DescribeAllDBInstanceClassResponseBodyClassCodeList> & classCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<DescribeAllDBInstanceClassResponseBodyClassCodeList>) };
    inline vector<DescribeAllDBInstanceClassResponseBodyClassCodeList> classCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<DescribeAllDBInstanceClassResponseBodyClassCodeList>) };
    inline DescribeAllDBInstanceClassResponseBody& setClassCodeList(const vector<DescribeAllDBInstanceClassResponseBodyClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
    inline DescribeAllDBInstanceClassResponseBody& setClassCodeList(vector<DescribeAllDBInstanceClassResponseBodyClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllDBInstanceClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance specifications.
    std::shared_ptr<vector<DescribeAllDBInstanceClassResponseBodyClassCodeList>> classCodeList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
