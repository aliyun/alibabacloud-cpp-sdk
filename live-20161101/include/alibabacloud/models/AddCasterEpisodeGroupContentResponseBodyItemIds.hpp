// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPCONTENTRESPONSEBODYITEMIDS_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPCONTENTRESPONSEBODYITEMIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeGroupContentResponseBodyItemIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeGroupContentResponseBodyItemIds& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeGroupContentResponseBodyItemIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
    };
    AddCasterEpisodeGroupContentResponseBodyItemIds() = default ;
    AddCasterEpisodeGroupContentResponseBodyItemIds(const AddCasterEpisodeGroupContentResponseBodyItemIds &) = default ;
    AddCasterEpisodeGroupContentResponseBodyItemIds(AddCasterEpisodeGroupContentResponseBodyItemIds &&) = default ;
    AddCasterEpisodeGroupContentResponseBodyItemIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeGroupContentResponseBodyItemIds() = default ;
    AddCasterEpisodeGroupContentResponseBodyItemIds& operator=(const AddCasterEpisodeGroupContentResponseBodyItemIds &) = default ;
    AddCasterEpisodeGroupContentResponseBodyItemIds& operator=(AddCasterEpisodeGroupContentResponseBodyItemIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemId_ == nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline const vector<string> & itemId() const { DARABONBA_PTR_GET_CONST(itemId_, vector<string>) };
    inline vector<string> itemId() { DARABONBA_PTR_GET(itemId_, vector<string>) };
    inline AddCasterEpisodeGroupContentResponseBodyItemIds& setItemId(const vector<string> & itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };
    inline AddCasterEpisodeGroupContentResponseBodyItemIds& setItemId(vector<string> && itemId) { DARABONBA_PTR_SET_RVALUE(itemId_, itemId) };


  protected:
    std::shared_ptr<vector<string>> itemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
