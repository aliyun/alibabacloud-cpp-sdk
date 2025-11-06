// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppViewTemplatesResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppViewTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppViewTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppViewTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeAppViewTemplatesResponseBody() = default ;
    DescribeAppViewTemplatesResponseBody(const DescribeAppViewTemplatesResponseBody &) = default ;
    DescribeAppViewTemplatesResponseBody(DescribeAppViewTemplatesResponseBody &&) = default ;
    DescribeAppViewTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppViewTemplatesResponseBody() = default ;
    DescribeAppViewTemplatesResponseBody& operator=(const DescribeAppViewTemplatesResponseBody &) = default ;
    DescribeAppViewTemplatesResponseBody& operator=(DescribeAppViewTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templates_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppViewTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeAppViewTemplatesResponseBodyTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeAppViewTemplatesResponseBodyTemplates>) };
    inline vector<DescribeAppViewTemplatesResponseBodyTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<DescribeAppViewTemplatesResponseBodyTemplates>) };
    inline DescribeAppViewTemplatesResponseBody& setTemplates(const vector<DescribeAppViewTemplatesResponseBodyTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeAppViewTemplatesResponseBody& setTemplates(vector<DescribeAppViewTemplatesResponseBodyTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeAppViewTemplatesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAppViewTemplatesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeAppViewTemplatesResponseBodyTemplates>> templates_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
