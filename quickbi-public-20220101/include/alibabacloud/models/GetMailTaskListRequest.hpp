// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAILTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMAILTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetMailTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMailTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Paused, paused_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, GetMailTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    GetMailTaskListRequest() = default ;
    GetMailTaskListRequest(const GetMailTaskListRequest &) = default ;
    GetMailTaskListRequest(GetMailTaskListRequest &&) = default ;
    GetMailTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMailTaskListRequest() = default ;
    GetMailTaskListRequest& operator=(const GetMailTaskListRequest &) = default ;
    GetMailTaskListRequest& operator=(GetMailTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->paused_ == nullptr && this->userNick_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetMailTaskListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMailTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline GetMailTaskListRequest& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetMailTaskListRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> paused_ {};
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
