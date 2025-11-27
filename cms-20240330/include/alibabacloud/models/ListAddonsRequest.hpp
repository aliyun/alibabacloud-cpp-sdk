// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(regexp, regexp_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(regexp, regexp_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    ListAddonsRequest() = default ;
    ListAddonsRequest(const ListAddonsRequest &) = default ;
    ListAddonsRequest(ListAddonsRequest &&) = default ;
    ListAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsRequest() = default ;
    ListAddonsRequest& operator=(const ListAddonsRequest &) = default ;
    ListAddonsRequest& operator=(ListAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && return this->category_ == nullptr && return this->regexp_ == nullptr && return this->search_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline ListAddonsRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListAddonsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // regexp Field Functions 
    bool hasRegexp() const { return this->regexp_ != nullptr;};
    void deleteRegexp() { this->regexp_ = nullptr;};
    inline bool regexp() const { DARABONBA_PTR_GET_DEFAULT(regexp_, false) };
    inline ListAddonsRequest& setRegexp(bool regexp) { DARABONBA_PTR_SET_VALUE(regexp_, regexp) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListAddonsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


  protected:
    std::shared_ptr<string> aliyunLang_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> regexp_ = nullptr;
    std::shared_ptr<string> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
