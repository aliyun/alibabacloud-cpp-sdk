// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMDATAFORPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUMDATAFORPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumDataForPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumDataForPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Authentication, authentication_);
      DARABONBA_PTR_TO_JSON(Completion, completion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Preference, preference_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumDataForPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(Completion, completion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Preference, preference_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetRumDataForPageResponseBodyData() = default ;
    GetRumDataForPageResponseBodyData(const GetRumDataForPageResponseBodyData &) = default ;
    GetRumDataForPageResponseBodyData(GetRumDataForPageResponseBodyData &&) = default ;
    GetRumDataForPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumDataForPageResponseBodyData() = default ;
    GetRumDataForPageResponseBodyData& operator=(const GetRumDataForPageResponseBodyData &) = default ;
    GetRumDataForPageResponseBodyData& operator=(GetRumDataForPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authentication_ != nullptr
        && this->completion_ != nullptr && this->items_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->preference_ != nullptr
        && this->total_ != nullptr; };
    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline string authentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, "") };
    inline GetRumDataForPageResponseBodyData& setAuthentication(string authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


    // completion Field Functions 
    bool hasCompletion() const { return this->completion_ != nullptr;};
    void deleteCompletion() { this->completion_ = nullptr;};
    inline string completion() const { DARABONBA_PTR_GET_DEFAULT(completion_, "") };
    inline GetRumDataForPageResponseBodyData& setCompletion(string completion) { DARABONBA_PTR_SET_VALUE(completion_, completion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline GetRumDataForPageResponseBodyData& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetRumDataForPageResponseBodyData& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string page() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline GetRumDataForPageResponseBodyData& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetRumDataForPageResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // preference Field Functions 
    bool hasPreference() const { return this->preference_ != nullptr;};
    void deletePreference() { this->preference_ = nullptr;};
    inline string preference() const { DARABONBA_PTR_GET_DEFAULT(preference_, "") };
    inline GetRumDataForPageResponseBodyData& setPreference(string preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline GetRumDataForPageResponseBodyData& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // A reserved parameter. Ignore this parameter.
    std::shared_ptr<string> authentication_ = nullptr;
    // Indicates whether the query ends. Valid values: true and false.
    std::shared_ptr<string> completion_ = nullptr;
    // The queried data.
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
    // The page number.
    std::shared_ptr<string> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // A reserved parameter. Ignore this parameter.
    std::shared_ptr<string> preference_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
