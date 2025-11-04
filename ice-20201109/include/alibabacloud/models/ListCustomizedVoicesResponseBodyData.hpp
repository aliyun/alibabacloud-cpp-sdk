// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomizedVoicesResponseBodyDataCustomizedVoiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomizedVoicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomizedVoiceList, customizedVoiceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomizedVoiceList, customizedVoiceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomizedVoicesResponseBodyData() = default ;
    ListCustomizedVoicesResponseBodyData(const ListCustomizedVoicesResponseBodyData &) = default ;
    ListCustomizedVoicesResponseBodyData(ListCustomizedVoicesResponseBodyData &&) = default ;
    ListCustomizedVoicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoicesResponseBodyData() = default ;
    ListCustomizedVoicesResponseBodyData& operator=(const ListCustomizedVoicesResponseBodyData &) = default ;
    ListCustomizedVoicesResponseBodyData& operator=(ListCustomizedVoicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customizedVoiceList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // customizedVoiceList Field Functions 
    bool hasCustomizedVoiceList() const { return this->customizedVoiceList_ != nullptr;};
    void deleteCustomizedVoiceList() { this->customizedVoiceList_ = nullptr;};
    inline const vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList> & customizedVoiceList() const { DARABONBA_PTR_GET_CONST(customizedVoiceList_, vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList>) };
    inline vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList> customizedVoiceList() { DARABONBA_PTR_GET(customizedVoiceList_, vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList>) };
    inline ListCustomizedVoicesResponseBodyData& setCustomizedVoiceList(const vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList> & customizedVoiceList) { DARABONBA_PTR_SET_VALUE(customizedVoiceList_, customizedVoiceList) };
    inline ListCustomizedVoicesResponseBodyData& setCustomizedVoiceList(vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList> && customizedVoiceList) { DARABONBA_PTR_SET_RVALUE(customizedVoiceList_, customizedVoiceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomizedVoicesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried personalized human voices.
    std::shared_ptr<vector<Models::ListCustomizedVoicesResponseBodyDataCustomizedVoiceList>> customizedVoiceList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
