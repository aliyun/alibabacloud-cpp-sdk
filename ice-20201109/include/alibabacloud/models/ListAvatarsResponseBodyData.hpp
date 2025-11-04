// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvatarsResponseBodyDataAvatarList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarList, avatarList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarList, avatarList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAvatarsResponseBodyData() = default ;
    ListAvatarsResponseBodyData(const ListAvatarsResponseBodyData &) = default ;
    ListAvatarsResponseBodyData(ListAvatarsResponseBodyData &&) = default ;
    ListAvatarsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarsResponseBodyData() = default ;
    ListAvatarsResponseBodyData& operator=(const ListAvatarsResponseBodyData &) = default ;
    ListAvatarsResponseBodyData& operator=(ListAvatarsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // avatarList Field Functions 
    bool hasAvatarList() const { return this->avatarList_ != nullptr;};
    void deleteAvatarList() { this->avatarList_ = nullptr;};
    inline const vector<Models::ListAvatarsResponseBodyDataAvatarList> & avatarList() const { DARABONBA_PTR_GET_CONST(avatarList_, vector<Models::ListAvatarsResponseBodyDataAvatarList>) };
    inline vector<Models::ListAvatarsResponseBodyDataAvatarList> avatarList() { DARABONBA_PTR_GET(avatarList_, vector<Models::ListAvatarsResponseBodyDataAvatarList>) };
    inline ListAvatarsResponseBodyData& setAvatarList(const vector<Models::ListAvatarsResponseBodyDataAvatarList> & avatarList) { DARABONBA_PTR_SET_VALUE(avatarList_, avatarList) };
    inline ListAvatarsResponseBodyData& setAvatarList(vector<Models::ListAvatarsResponseBodyDataAvatarList> && avatarList) { DARABONBA_PTR_SET_RVALUE(avatarList_, avatarList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAvatarsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried digital humans.
    std::shared_ptr<vector<Models::ListAvatarsResponseBodyDataAvatarList>> avatarList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
