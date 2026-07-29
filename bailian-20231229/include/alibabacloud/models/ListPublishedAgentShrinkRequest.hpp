// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPublishedAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(subTypes, subTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(subTypes, subTypesShrink_);
    };
    ListPublishedAgentShrinkRequest() = default ;
    ListPublishedAgentShrinkRequest(const ListPublishedAgentShrinkRequest &) = default ;
    ListPublishedAgentShrinkRequest(ListPublishedAgentShrinkRequest &&) = default ;
    ListPublishedAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentShrinkRequest() = default ;
    ListPublishedAgentShrinkRequest& operator=(const ListPublishedAgentShrinkRequest &) = default ;
    ListPublishedAgentShrinkRequest& operator=(ListPublishedAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->subTypesShrink_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListPublishedAgentShrinkRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedAgentShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // subTypesShrink Field Functions 
    bool hasSubTypesShrink() const { return this->subTypesShrink_ != nullptr;};
    void deleteSubTypesShrink() { this->subTypesShrink_ = nullptr;};
    inline string getSubTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(subTypesShrink_, "") };
    inline ListPublishedAgentShrinkRequest& setSubTypesShrink(string subTypesShrink) { DARABONBA_PTR_SET_VALUE(subTypesShrink_, subTypesShrink) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> subTypesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
