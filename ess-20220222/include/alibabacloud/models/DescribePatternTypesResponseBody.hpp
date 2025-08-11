// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePatternTypesResponseBodyPatternTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribePatternTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PatternTypes, patternTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PatternTypes, patternTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePatternTypesResponseBody() = default ;
    DescribePatternTypesResponseBody(const DescribePatternTypesResponseBody &) = default ;
    DescribePatternTypesResponseBody(DescribePatternTypesResponseBody &&) = default ;
    DescribePatternTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternTypesResponseBody() = default ;
    DescribePatternTypesResponseBody& operator=(const DescribePatternTypesResponseBody &) = default ;
    DescribePatternTypesResponseBody& operator=(DescribePatternTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->patternTypes_ != nullptr
        && this->requestId_ != nullptr; };
    // patternTypes Field Functions 
    bool hasPatternTypes() const { return this->patternTypes_ != nullptr;};
    void deletePatternTypes() { this->patternTypes_ = nullptr;};
    inline const vector<DescribePatternTypesResponseBodyPatternTypes> & patternTypes() const { DARABONBA_PTR_GET_CONST(patternTypes_, vector<DescribePatternTypesResponseBodyPatternTypes>) };
    inline vector<DescribePatternTypesResponseBodyPatternTypes> patternTypes() { DARABONBA_PTR_GET(patternTypes_, vector<DescribePatternTypesResponseBodyPatternTypes>) };
    inline DescribePatternTypesResponseBody& setPatternTypes(const vector<DescribePatternTypesResponseBodyPatternTypes> & patternTypes) { DARABONBA_PTR_SET_VALUE(patternTypes_, patternTypes) };
    inline DescribePatternTypesResponseBody& setPatternTypes(vector<DescribePatternTypesResponseBodyPatternTypes> && patternTypes) { DARABONBA_PTR_SET_RVALUE(patternTypes_, patternTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePatternTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance types that meet the specified requirements.
    std::shared_ptr<vector<DescribePatternTypesResponseBodyPatternTypes>> patternTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
