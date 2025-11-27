// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODYMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODYMODELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryPageSmartShortUrlLogResponseBodyModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPageSmartShortUrlLogResponseBodyModelList& obj) { 
      DARABONBA_PTR_TO_JSON(ClickState, clickState_);
      DARABONBA_PTR_TO_JSON(ClickTime, clickTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ShortName, shortName_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPageSmartShortUrlLogResponseBodyModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClickState, clickState_);
      DARABONBA_PTR_FROM_JSON(ClickTime, clickTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
    };
    QueryPageSmartShortUrlLogResponseBodyModelList() = default ;
    QueryPageSmartShortUrlLogResponseBodyModelList(const QueryPageSmartShortUrlLogResponseBodyModelList &) = default ;
    QueryPageSmartShortUrlLogResponseBodyModelList(QueryPageSmartShortUrlLogResponseBodyModelList &&) = default ;
    QueryPageSmartShortUrlLogResponseBodyModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPageSmartShortUrlLogResponseBodyModelList() = default ;
    QueryPageSmartShortUrlLogResponseBodyModelList& operator=(const QueryPageSmartShortUrlLogResponseBodyModelList &) = default ;
    QueryPageSmartShortUrlLogResponseBodyModelList& operator=(QueryPageSmartShortUrlLogResponseBodyModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clickState_ == nullptr
        && return this->clickTime_ == nullptr && return this->createTime_ == nullptr && return this->phoneNumber_ == nullptr && return this->shortName_ == nullptr && return this->shortUrl_ == nullptr; };
    // clickState Field Functions 
    bool hasClickState() const { return this->clickState_ != nullptr;};
    void deleteClickState() { this->clickState_ = nullptr;};
    inline int64_t clickState() const { DARABONBA_PTR_GET_DEFAULT(clickState_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setClickState(int64_t clickState) { DARABONBA_PTR_SET_VALUE(clickState_, clickState) };


    // clickTime Field Functions 
    bool hasClickTime() const { return this->clickTime_ != nullptr;};
    void deleteClickTime() { this->clickTime_ = nullptr;};
    inline int64_t clickTime() const { DARABONBA_PTR_GET_DEFAULT(clickTime_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setClickTime(int64_t clickTime) { DARABONBA_PTR_SET_VALUE(clickTime_, clickTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline QueryPageSmartShortUrlLogResponseBodyModelList& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


  protected:
    std::shared_ptr<int64_t> clickState_ = nullptr;
    std::shared_ptr<int64_t> clickTime_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> shortName_ = nullptr;
    std::shared_ptr<string> shortUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
