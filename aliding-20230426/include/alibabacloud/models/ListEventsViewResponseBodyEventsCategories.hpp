// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEventsCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEventsCategories& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEventsCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
    };
    ListEventsViewResponseBodyEventsCategories() = default ;
    ListEventsViewResponseBodyEventsCategories(const ListEventsViewResponseBodyEventsCategories &) = default ;
    ListEventsViewResponseBodyEventsCategories(ListEventsViewResponseBodyEventsCategories &&) = default ;
    ListEventsViewResponseBodyEventsCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEventsCategories() = default ;
    ListEventsViewResponseBodyEventsCategories& operator=(const ListEventsViewResponseBodyEventsCategories &) = default ;
    ListEventsViewResponseBodyEventsCategories& operator=(ListEventsViewResponseBodyEventsCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListEventsViewResponseBodyEventsCategories& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
