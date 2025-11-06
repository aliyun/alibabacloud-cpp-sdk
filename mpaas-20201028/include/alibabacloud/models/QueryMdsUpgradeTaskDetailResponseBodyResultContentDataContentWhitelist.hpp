// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENTWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENTWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
    };
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist &&) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& operator=(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& operator=(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->business_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->idType_ == nullptr && return this->platform_ == nullptr
        && return this->status_ == nullptr && return this->whiteListCount_ == nullptr && return this->whiteListName_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // whiteListCount Field Functions 
    bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
    void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
    inline int64_t whiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


    // whiteListName Field Functions 
    bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
    void deleteWhiteListName() { this->whiteListName_ = nullptr;};
    inline string whiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentWhitelist& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> business_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<int64_t> whiteListCount_ = nullptr;
    std::shared_ptr<string> whiteListName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
