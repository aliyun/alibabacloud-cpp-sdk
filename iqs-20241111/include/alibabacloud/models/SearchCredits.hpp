// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCREDITS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCREDITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class SearchCredits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCredits& obj) { 
      DARABONBA_PTR_TO_JSON(genericTextSearch, genericTextSearch_);
      DARABONBA_PTR_TO_JSON(liteAdvancedTextSearch, liteAdvancedTextSearch_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCredits& obj) { 
      DARABONBA_PTR_FROM_JSON(genericTextSearch, genericTextSearch_);
      DARABONBA_PTR_FROM_JSON(liteAdvancedTextSearch, liteAdvancedTextSearch_);
    };
    SearchCredits() = default ;
    SearchCredits(const SearchCredits &) = default ;
    SearchCredits(SearchCredits &&) = default ;
    SearchCredits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCredits() = default ;
    SearchCredits& operator=(const SearchCredits &) = default ;
    SearchCredits& operator=(SearchCredits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->genericTextSearch_ != nullptr
        && this->liteAdvancedTextSearch_ != nullptr; };
    // genericTextSearch Field Functions 
    bool hasGenericTextSearch() const { return this->genericTextSearch_ != nullptr;};
    void deleteGenericTextSearch() { this->genericTextSearch_ = nullptr;};
    inline int32_t genericTextSearch() const { DARABONBA_PTR_GET_DEFAULT(genericTextSearch_, 0) };
    inline SearchCredits& setGenericTextSearch(int32_t genericTextSearch) { DARABONBA_PTR_SET_VALUE(genericTextSearch_, genericTextSearch) };


    // liteAdvancedTextSearch Field Functions 
    bool hasLiteAdvancedTextSearch() const { return this->liteAdvancedTextSearch_ != nullptr;};
    void deleteLiteAdvancedTextSearch() { this->liteAdvancedTextSearch_ = nullptr;};
    inline int32_t liteAdvancedTextSearch() const { DARABONBA_PTR_GET_DEFAULT(liteAdvancedTextSearch_, 0) };
    inline SearchCredits& setLiteAdvancedTextSearch(int32_t liteAdvancedTextSearch) { DARABONBA_PTR_SET_VALUE(liteAdvancedTextSearch_, liteAdvancedTextSearch) };


  protected:
    std::shared_ptr<int32_t> genericTextSearch_ = nullptr;
    std::shared_ptr<int32_t> liteAdvancedTextSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
