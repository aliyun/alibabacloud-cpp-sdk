// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYEVENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYEVENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayEventListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayEventListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlayTs, playTs_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayEventListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlayTs, playTs_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribePlayEventListRequest() = default ;
    DescribePlayEventListRequest(const DescribePlayEventListRequest &) = default ;
    DescribePlayEventListRequest(DescribePlayEventListRequest &&) = default ;
    DescribePlayEventListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayEventListRequest() = default ;
    DescribePlayEventListRequest& operator=(const DescribePlayEventListRequest &) = default ;
    DescribePlayEventListRequest& operator=(DescribePlayEventListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->playTs_ != nullptr && this->sessionId_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribePlayEventListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribePlayEventListRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayEventListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playTs Field Functions 
    bool hasPlayTs() const { return this->playTs_ != nullptr;};
    void deletePlayTs() { this->playTs_ = nullptr;};
    inline string playTs() const { DARABONBA_PTR_GET_DEFAULT(playTs_, "") };
    inline DescribePlayEventListRequest& setPlayTs(string playTs) { DARABONBA_PTR_SET_VALUE(playTs_, playTs) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePlayEventListRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> playTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
