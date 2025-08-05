// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModifyParameterLogResponseBodyChangelogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Changelogs, changelogs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Changelogs, changelogs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody(DescribeModifyParameterLogResponseBody &&) = default ;
    DescribeModifyParameterLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody& operator=(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody& operator=(DescribeModifyParameterLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changelogs_ != nullptr
        && this->requestId_ != nullptr; };
    // changelogs Field Functions 
    bool hasChangelogs() const { return this->changelogs_ != nullptr;};
    void deleteChangelogs() { this->changelogs_ = nullptr;};
    inline const vector<DescribeModifyParameterLogResponseBodyChangelogs> & changelogs() const { DARABONBA_PTR_GET_CONST(changelogs_, vector<DescribeModifyParameterLogResponseBodyChangelogs>) };
    inline vector<DescribeModifyParameterLogResponseBodyChangelogs> changelogs() { DARABONBA_PTR_GET(changelogs_, vector<DescribeModifyParameterLogResponseBodyChangelogs>) };
    inline DescribeModifyParameterLogResponseBody& setChangelogs(const vector<DescribeModifyParameterLogResponseBodyChangelogs> & changelogs) { DARABONBA_PTR_SET_VALUE(changelogs_, changelogs) };
    inline DescribeModifyParameterLogResponseBody& setChangelogs(vector<DescribeModifyParameterLogResponseBodyChangelogs> && changelogs) { DARABONBA_PTR_SET_RVALUE(changelogs_, changelogs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyParameterLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried parameter modification logs.
    std::shared_ptr<vector<DescribeModifyParameterLogResponseBodyChangelogs>> changelogs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
