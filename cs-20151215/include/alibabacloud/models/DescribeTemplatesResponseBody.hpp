// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTemplatesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTemplatesResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(templates, templates_);
    };
    DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody(DescribeTemplatesResponseBody &&) = default ;
    DescribeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody& operator=(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody& operator=(DescribeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->templates_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeTemplatesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeTemplatesResponseBodyPageInfo) };
    inline DescribeTemplatesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeTemplatesResponseBodyPageInfo) };
    inline DescribeTemplatesResponseBody& setPageInfo(const DescribeTemplatesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeTemplatesResponseBody& setPageInfo(DescribeTemplatesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeTemplatesResponseBodyTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeTemplatesResponseBodyTemplates>) };
    inline vector<DescribeTemplatesResponseBodyTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<DescribeTemplatesResponseBodyTemplates>) };
    inline DescribeTemplatesResponseBody& setTemplates(const vector<DescribeTemplatesResponseBodyTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeTemplatesResponseBody& setTemplates(vector<DescribeTemplatesResponseBodyTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeTemplatesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The list of returned templates.
    std::shared_ptr<vector<DescribeTemplatesResponseBodyTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
