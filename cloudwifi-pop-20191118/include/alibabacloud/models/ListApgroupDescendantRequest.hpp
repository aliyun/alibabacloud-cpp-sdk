// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPGROUPDESCENDANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPGROUPDESCENDANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class ListApgroupDescendantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApgroupDescendantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_TO_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListApgroupDescendantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_FROM_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListApgroupDescendantRequest() = default ;
    ListApgroupDescendantRequest(const ListApgroupDescendantRequest &) = default ;
    ListApgroupDescendantRequest(ListApgroupDescendantRequest &&) = default ;
    ListApgroupDescendantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApgroupDescendantRequest() = default ;
    ListApgroupDescendantRequest& operator=(const ListApgroupDescendantRequest &) = default ;
    ListApgroupDescendantRequest& operator=(ListApgroupDescendantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apgroupId_ == nullptr
        && this->apgroupUuid_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr && this->cursor_ == nullptr && this->level_ == nullptr
        && this->pageSize_ == nullptr; };
    // apgroupId Field Functions 
    bool hasApgroupId() const { return this->apgroupId_ != nullptr;};
    void deleteApgroupId() { this->apgroupId_ = nullptr;};
    inline int64_t getApgroupId() const { DARABONBA_PTR_GET_DEFAULT(apgroupId_, 0L) };
    inline ListApgroupDescendantRequest& setApgroupId(int64_t apgroupId) { DARABONBA_PTR_SET_VALUE(apgroupId_, apgroupId) };


    // apgroupUuid Field Functions 
    bool hasApgroupUuid() const { return this->apgroupUuid_ != nullptr;};
    void deleteApgroupUuid() { this->apgroupUuid_ = nullptr;};
    inline string getApgroupUuid() const { DARABONBA_PTR_GET_DEFAULT(apgroupUuid_, "") };
    inline ListApgroupDescendantRequest& setApgroupUuid(string apgroupUuid) { DARABONBA_PTR_SET_VALUE(apgroupUuid_, apgroupUuid) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListApgroupDescendantRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApgroupDescendantRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline ListApgroupDescendantRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline ListApgroupDescendantRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApgroupDescendantRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> apgroupId_ {};
    shared_ptr<string> apgroupUuid_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> cursor_ {};
    shared_ptr<int64_t> level_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
