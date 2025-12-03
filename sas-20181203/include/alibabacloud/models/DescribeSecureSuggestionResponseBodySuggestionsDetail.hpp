// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecureSuggestionResponseBodySuggestionsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionResponseBodySuggestionsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionResponseBodySuggestionsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeSecureSuggestionResponseBodySuggestionsDetail() = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(const DescribeSecureSuggestionResponseBodySuggestionsDetail &) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(DescribeSecureSuggestionResponseBodySuggestionsDetail &&) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionResponseBodySuggestionsDetail() = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail& operator=(const DescribeSecureSuggestionResponseBodySuggestionsDetail &) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail& operator=(DescribeSecureSuggestionResponseBodySuggestionsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->subType_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
