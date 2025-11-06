// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNamespacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListNamespacesShrinkRequest() = default ;
    ListNamespacesShrinkRequest(const ListNamespacesShrinkRequest &) = default ;
    ListNamespacesShrinkRequest(ListNamespacesShrinkRequest &&) = default ;
    ListNamespacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesShrinkRequest() = default ;
    ListNamespacesShrinkRequest& operator=(const ListNamespacesShrinkRequest &) = default ;
    ListNamespacesShrinkRequest& operator=(ListNamespacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->name_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->region_ == nullptr && return this->tagShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListNamespacesShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNamespacesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNamespacesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNamespacesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListNamespacesShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListNamespacesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
