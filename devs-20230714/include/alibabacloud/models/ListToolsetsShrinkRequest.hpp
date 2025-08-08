// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOOLSETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOOLSETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ListToolsetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListToolsetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelectorShrink_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListToolsetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelectorShrink_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListToolsetsShrinkRequest() = default ;
    ListToolsetsShrinkRequest(const ListToolsetsShrinkRequest &) = default ;
    ListToolsetsShrinkRequest(ListToolsetsShrinkRequest &&) = default ;
    ListToolsetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListToolsetsShrinkRequest() = default ;
    ListToolsetsShrinkRequest& operator=(const ListToolsetsShrinkRequest &) = default ;
    ListToolsetsShrinkRequest& operator=(ListToolsetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->labelSelectorShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListToolsetsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // labelSelectorShrink Field Functions 
    bool hasLabelSelectorShrink() const { return this->labelSelectorShrink_ != nullptr;};
    void deleteLabelSelectorShrink() { this->labelSelectorShrink_ = nullptr;};
    inline string labelSelectorShrink() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorShrink_, "") };
    inline ListToolsetsShrinkRequest& setLabelSelectorShrink(string labelSelectorShrink) { DARABONBA_PTR_SET_VALUE(labelSelectorShrink_, labelSelectorShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListToolsetsShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListToolsetsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> labelSelectorShrink_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
