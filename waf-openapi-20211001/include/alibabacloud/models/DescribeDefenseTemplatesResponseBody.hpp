// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseTemplatesResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseTemplatesResponseBody() = default ;
    DescribeDefenseTemplatesResponseBody(const DescribeDefenseTemplatesResponseBody &) = default ;
    DescribeDefenseTemplatesResponseBody(DescribeDefenseTemplatesResponseBody &&) = default ;
    DescribeDefenseTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseTemplatesResponseBody() = default ;
    DescribeDefenseTemplatesResponseBody& operator=(const DescribeDefenseTemplatesResponseBody &) = default ;
    DescribeDefenseTemplatesResponseBody& operator=(DescribeDefenseTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templates_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeDefenseTemplatesResponseBodyTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeDefenseTemplatesResponseBodyTemplates>) };
    inline vector<DescribeDefenseTemplatesResponseBodyTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<DescribeDefenseTemplatesResponseBodyTemplates>) };
    inline DescribeDefenseTemplatesResponseBody& setTemplates(const vector<DescribeDefenseTemplatesResponseBodyTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeDefenseTemplatesResponseBody& setTemplates(vector<DescribeDefenseTemplatesResponseBodyTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The protection templates.
    std::shared_ptr<vector<DescribeDefenseTemplatesResponseBodyTemplates>> templates_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
