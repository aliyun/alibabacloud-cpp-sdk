// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESRESPONSEBODYRESULTBELONGS_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESRESPONSEBODYRESULTBELONGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFunctionInstancesResponseBodyResultBelongs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionInstancesResponseBodyResultBelongs& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionInstancesResponseBodyResultBelongs& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    ListFunctionInstancesResponseBodyResultBelongs() = default ;
    ListFunctionInstancesResponseBodyResultBelongs(const ListFunctionInstancesResponseBodyResultBelongs &) = default ;
    ListFunctionInstancesResponseBodyResultBelongs(ListFunctionInstancesResponseBodyResultBelongs &&) = default ;
    ListFunctionInstancesResponseBodyResultBelongs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionInstancesResponseBodyResultBelongs() = default ;
    ListFunctionInstancesResponseBodyResultBelongs& operator=(const ListFunctionInstancesResponseBodyResultBelongs &) = default ;
    ListFunctionInstancesResponseBodyResultBelongs& operator=(ListFunctionInstancesResponseBodyResultBelongs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->domain_ == nullptr && return this->language_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListFunctionInstancesResponseBodyResultBelongs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListFunctionInstancesResponseBodyResultBelongs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListFunctionInstancesResponseBodyResultBelongs& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The industry.
    std::shared_ptr<string> domain_ = nullptr;
    // The abbreviation of the language that applies.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
