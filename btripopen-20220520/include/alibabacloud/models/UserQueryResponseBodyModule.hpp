// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserQueryResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UserQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(has_more, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(page_token, pageToken_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, UserQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(has_more, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    UserQueryResponseBodyModule() = default ;
    UserQueryResponseBodyModule(const UserQueryResponseBodyModule &) = default ;
    UserQueryResponseBodyModule(UserQueryResponseBodyModule &&) = default ;
    UserQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserQueryResponseBodyModule() = default ;
    UserQueryResponseBodyModule& operator=(const UserQueryResponseBodyModule &) = default ;
    UserQueryResponseBodyModule& operator=(UserQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->items_ != nullptr && this->pageToken_ != nullptr && this->total_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline UserQueryResponseBodyModule& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::UserQueryResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::UserQueryResponseBodyModuleItems>) };
    inline vector<Models::UserQueryResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::UserQueryResponseBodyModuleItems>) };
    inline UserQueryResponseBodyModule& setItems(const vector<Models::UserQueryResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline UserQueryResponseBodyModule& setItems(vector<Models::UserQueryResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline UserQueryResponseBodyModule& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline UserQueryResponseBodyModule& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<Models::UserQueryResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
