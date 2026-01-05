// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCENAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCENAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseResourceNamesResponseBody() = default ;
    DescribeDefenseResourceNamesResponseBody(const DescribeDefenseResourceNamesResponseBody &) = default ;
    DescribeDefenseResourceNamesResponseBody(DescribeDefenseResourceNamesResponseBody &&) = default ;
    DescribeDefenseResourceNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceNamesResponseBody() = default ;
    DescribeDefenseResourceNamesResponseBody& operator=(const DescribeDefenseResourceNamesResponseBody &) = default ;
    DescribeDefenseResourceNamesResponseBody& operator=(DescribeDefenseResourceNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline DescribeDefenseResourceNamesResponseBody& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeDefenseResourceNamesResponseBody& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseResourceNamesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The names of the protected objects.
    shared_ptr<vector<string>> resources_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
