// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAvatarsRequest() = default ;
    ListAvatarsRequest(const ListAvatarsRequest &) = default ;
    ListAvatarsRequest(ListAvatarsRequest &&) = default ;
    ListAvatarsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarsRequest() = default ;
    ListAvatarsRequest& operator=(const ListAvatarsRequest &) = default ;
    ListAvatarsRequest& operator=(ListAvatarsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarType_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr; };
    // avatarType Field Functions 
    bool hasAvatarType() const { return this->avatarType_ != nullptr;};
    void deleteAvatarType() { this->avatarType_ = nullptr;};
    inline string avatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
    inline ListAvatarsRequest& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAvatarsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvatarsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // *   The type of the digital human.
    // *   2DAvatar
    std::shared_ptr<string> avatarType_ = nullptr;
    // *   The page number.
    // *   Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // *   The number of entries per page.
    // *   Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
