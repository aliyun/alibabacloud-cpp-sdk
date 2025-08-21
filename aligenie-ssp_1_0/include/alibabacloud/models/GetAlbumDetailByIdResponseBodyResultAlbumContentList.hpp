// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODYRESULTALBUMCONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODYRESULTALBUMCONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumDetailByIdResponseBodyResultAlbumContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumDetailByIdResponseBodyResultAlbumContentList& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumDetailByIdResponseBodyResultAlbumContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetAlbumDetailByIdResponseBodyResultAlbumContentList() = default ;
    GetAlbumDetailByIdResponseBodyResultAlbumContentList(const GetAlbumDetailByIdResponseBodyResultAlbumContentList &) = default ;
    GetAlbumDetailByIdResponseBodyResultAlbumContentList(GetAlbumDetailByIdResponseBodyResultAlbumContentList &&) = default ;
    GetAlbumDetailByIdResponseBodyResultAlbumContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumDetailByIdResponseBodyResultAlbumContentList() = default ;
    GetAlbumDetailByIdResponseBodyResultAlbumContentList& operator=(const GetAlbumDetailByIdResponseBodyResultAlbumContentList &) = default ;
    GetAlbumDetailByIdResponseBodyResultAlbumContentList& operator=(GetAlbumDetailByIdResponseBodyResultAlbumContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->id_ != nullptr && this->orderIndex_ != nullptr && this->title_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetAlbumDetailByIdResponseBodyResultAlbumContentList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAlbumDetailByIdResponseBodyResultAlbumContentList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline string orderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, "") };
    inline GetAlbumDetailByIdResponseBodyResultAlbumContentList& setOrderIndex(string orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAlbumDetailByIdResponseBodyResultAlbumContentList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> orderIndex_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
