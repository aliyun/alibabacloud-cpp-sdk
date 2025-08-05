// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTRESPONSEBODYCONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTRESPONSEBODYCONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDocParserJobResultResponseBodyContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocParserJobResultResponseBodyContentList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocParserJobResultResponseBodyContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
    };
    DescribeDocParserJobResultResponseBodyContentList() = default ;
    DescribeDocParserJobResultResponseBodyContentList(const DescribeDocParserJobResultResponseBodyContentList &) = default ;
    DescribeDocParserJobResultResponseBodyContentList(DescribeDocParserJobResultResponseBodyContentList &&) = default ;
    DescribeDocParserJobResultResponseBodyContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocParserJobResultResponseBodyContentList() = default ;
    DescribeDocParserJobResultResponseBodyContentList& operator=(const DescribeDocParserJobResultResponseBodyContentList &) = default ;
    DescribeDocParserJobResultResponseBodyContentList& operator=(DescribeDocParserJobResultResponseBodyContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->pageNumber_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeDocParserJobResultResponseBodyContentList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDocParserJobResultResponseBodyContentList& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
