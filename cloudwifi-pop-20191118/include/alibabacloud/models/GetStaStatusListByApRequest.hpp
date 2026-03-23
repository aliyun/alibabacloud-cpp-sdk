// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTASTATUSLISTBYAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTASTATUSLISTBYAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetStaStatusListByApRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStaStatusListByApRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApMac, apMac_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetStaStatusListByApRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApMac, apMac_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetStaStatusListByApRequest() = default ;
    GetStaStatusListByApRequest(const GetStaStatusListByApRequest &) = default ;
    GetStaStatusListByApRequest(GetStaStatusListByApRequest &&) = default ;
    GetStaStatusListByApRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStaStatusListByApRequest() = default ;
    GetStaStatusListByApRequest& operator=(const GetStaStatusListByApRequest &) = default ;
    GetStaStatusListByApRequest& operator=(GetStaStatusListByApRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apMac_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->cursor_ == nullptr && this->pageSize_ == nullptr; };
    // apMac Field Functions 
    bool hasApMac() const { return this->apMac_ != nullptr;};
    void deleteApMac() { this->apMac_ = nullptr;};
    inline string getApMac() const { DARABONBA_PTR_GET_DEFAULT(apMac_, "") };
    inline GetStaStatusListByApRequest& setApMac(string apMac) { DARABONBA_PTR_SET_VALUE(apMac_, apMac) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetStaStatusListByApRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetStaStatusListByApRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline GetStaStatusListByApRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetStaStatusListByApRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> apMac_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<int64_t> cursor_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
