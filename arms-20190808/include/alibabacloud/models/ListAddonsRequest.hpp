// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Regexp, regexp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Regexp, regexp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
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
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->category_ != nullptr && this->regexp_ != nullptr && this->regionId_ != nullptr && this->search_ != nullptr; };
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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAddonsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListAddonsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


  protected:
    // Language,the default language is Chinese.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // Category filter.
    std::shared_ptr<string> category_ = nullptr;
    // Whether to enable regular matching.
    std::shared_ptr<bool> regexp_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // A query field can be queried by name or description.
    std::shared_ptr<string> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
