// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseResourceTemplatesResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    DescribeDefenseResourceTemplatesResponseBody() = default ;
    DescribeDefenseResourceTemplatesResponseBody(const DescribeDefenseResourceTemplatesResponseBody &) = default ;
    DescribeDefenseResourceTemplatesResponseBody(DescribeDefenseResourceTemplatesResponseBody &&) = default ;
    DescribeDefenseResourceTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceTemplatesResponseBody() = default ;
    DescribeDefenseResourceTemplatesResponseBody& operator=(const DescribeDefenseResourceTemplatesResponseBody &) = default ;
    DescribeDefenseResourceTemplatesResponseBody& operator=(DescribeDefenseResourceTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeDefenseResourceTemplatesResponseBodyTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeDefenseResourceTemplatesResponseBodyTemplates>) };
    inline vector<DescribeDefenseResourceTemplatesResponseBodyTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<DescribeDefenseResourceTemplatesResponseBodyTemplates>) };
    inline DescribeDefenseResourceTemplatesResponseBody& setTemplates(const vector<DescribeDefenseResourceTemplatesResponseBodyTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeDefenseResourceTemplatesResponseBody& setTemplates(vector<DescribeDefenseResourceTemplatesResponseBodyTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The protection templates.
    std::shared_ptr<vector<DescribeDefenseResourceTemplatesResponseBodyTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
