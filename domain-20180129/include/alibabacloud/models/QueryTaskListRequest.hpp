// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryTaskListRequest() = default ;
    QueryTaskListRequest(const QueryTaskListRequest &) = default ;
    QueryTaskListRequest(QueryTaskListRequest &&) = default ;
    QueryTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListRequest() = default ;
    QueryTaskListRequest& operator=(const QueryTaskListRequest &) = default ;
    QueryTaskListRequest& operator=(QueryTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginCreateTime_ == nullptr
        && this->endCreateTime_ == nullptr && this->lang_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->userClientIp_ == nullptr; };
    // beginCreateTime Field Functions 
    bool hasBeginCreateTime() const { return this->beginCreateTime_ != nullptr;};
    void deleteBeginCreateTime() { this->beginCreateTime_ = nullptr;};
    inline int64_t getBeginCreateTime() const { DARABONBA_PTR_GET_DEFAULT(beginCreateTime_, 0L) };
    inline QueryTaskListRequest& setBeginCreateTime(int64_t beginCreateTime) { DARABONBA_PTR_SET_VALUE(beginCreateTime_, beginCreateTime) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int64_t getEndCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0L) };
    inline QueryTaskListRequest& setEndCreateTime(int64_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryTaskListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryTaskListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryTaskListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<int64_t> beginCreateTime_ {};
    shared_ptr<int64_t> endCreateTime_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
