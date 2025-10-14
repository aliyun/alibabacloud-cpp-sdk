// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsCategories& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
    };
    ListEventsResponseBodyEventsCategories() = default ;
    ListEventsResponseBodyEventsCategories(const ListEventsResponseBodyEventsCategories &) = default ;
    ListEventsResponseBodyEventsCategories(ListEventsResponseBodyEventsCategories &&) = default ;
    ListEventsResponseBodyEventsCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsCategories() = default ;
    ListEventsResponseBodyEventsCategories& operator=(const ListEventsResponseBodyEventsCategories &) = default ;
    ListEventsResponseBodyEventsCategories& operator=(ListEventsResponseBodyEventsCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListEventsResponseBodyEventsCategories& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
