// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyModeList.hpp>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeCategoryList, DBNodeCategoryList_);
      DARABONBA_PTR_TO_JSON(DBNodeClassList, DBNodeClassList_);
      DARABONBA_PTR_TO_JSON(DBNodeStorageList, DBNodeStorageList_);
      DARABONBA_PTR_TO_JSON(EngineVersionList, engineVersionList_);
      DARABONBA_PTR_TO_JSON(ModeList, modeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeCategoryList, DBNodeCategoryList_);
      DARABONBA_PTR_FROM_JSON(DBNodeClassList, DBNodeClassList_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorageList, DBNodeStorageList_);
      DARABONBA_PTR_FROM_JSON(EngineVersionList, engineVersionList_);
      DARABONBA_PTR_FROM_JSON(ModeList, modeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBody() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(const DescribeRdsAnalysisResourceQuotasResponseBody &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(DescribeRdsAnalysisResourceQuotasResponseBody &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBody() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody& operator=(const DescribeRdsAnalysisResourceQuotasResponseBody &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBody& operator=(DescribeRdsAnalysisResourceQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeCategoryList_ == nullptr
        && return this->DBNodeClassList_ == nullptr && return this->DBNodeStorageList_ == nullptr && return this->engineVersionList_ == nullptr && return this->modeList_ == nullptr && return this->requestId_ == nullptr
        && return this->storageTypeList_ == nullptr; };
    // DBNodeCategoryList Field Functions 
    bool hasDBNodeCategoryList() const { return this->DBNodeCategoryList_ != nullptr;};
    void deleteDBNodeCategoryList() { this->DBNodeCategoryList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList & DBNodeCategoryList() const { DARABONBA_PTR_GET_CONST(DBNodeCategoryList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList DBNodeCategoryList() { DARABONBA_PTR_GET(DBNodeCategoryList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeCategoryList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList & DBNodeCategoryList) { DARABONBA_PTR_SET_VALUE(DBNodeCategoryList_, DBNodeCategoryList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeCategoryList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList && DBNodeCategoryList) { DARABONBA_PTR_SET_RVALUE(DBNodeCategoryList_, DBNodeCategoryList) };


    // DBNodeClassList Field Functions 
    bool hasDBNodeClassList() const { return this->DBNodeClassList_ != nullptr;};
    void deleteDBNodeClassList() { this->DBNodeClassList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList & DBNodeClassList() const { DARABONBA_PTR_GET_CONST(DBNodeClassList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList DBNodeClassList() { DARABONBA_PTR_GET(DBNodeClassList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeClassList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList & DBNodeClassList) { DARABONBA_PTR_SET_VALUE(DBNodeClassList_, DBNodeClassList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeClassList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList && DBNodeClassList) { DARABONBA_PTR_SET_RVALUE(DBNodeClassList_, DBNodeClassList) };


    // DBNodeStorageList Field Functions 
    bool hasDBNodeStorageList() const { return this->DBNodeStorageList_ != nullptr;};
    void deleteDBNodeStorageList() { this->DBNodeStorageList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList & DBNodeStorageList() const { DARABONBA_PTR_GET_CONST(DBNodeStorageList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList DBNodeStorageList() { DARABONBA_PTR_GET(DBNodeStorageList_, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeStorageList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList & DBNodeStorageList) { DARABONBA_PTR_SET_VALUE(DBNodeStorageList_, DBNodeStorageList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setDBNodeStorageList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList && DBNodeStorageList) { DARABONBA_PTR_SET_RVALUE(DBNodeStorageList_, DBNodeStorageList) };


    // engineVersionList Field Functions 
    bool hasEngineVersionList() const { return this->engineVersionList_ != nullptr;};
    void deleteEngineVersionList() { this->engineVersionList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList & engineVersionList() const { DARABONBA_PTR_GET_CONST(engineVersionList_, DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList engineVersionList() { DARABONBA_PTR_GET(engineVersionList_, DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setEngineVersionList(const DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList & engineVersionList) { DARABONBA_PTR_SET_VALUE(engineVersionList_, engineVersionList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setEngineVersionList(DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList && engineVersionList) { DARABONBA_PTR_SET_RVALUE(engineVersionList_, engineVersionList) };


    // modeList Field Functions 
    bool hasModeList() const { return this->modeList_ != nullptr;};
    void deleteModeList() { this->modeList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyModeList & modeList() const { DARABONBA_PTR_GET_CONST(modeList_, DescribeRdsAnalysisResourceQuotasResponseBodyModeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyModeList modeList() { DARABONBA_PTR_GET(modeList_, DescribeRdsAnalysisResourceQuotasResponseBodyModeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setModeList(const DescribeRdsAnalysisResourceQuotasResponseBodyModeList & modeList) { DARABONBA_PTR_SET_VALUE(modeList_, modeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setModeList(DescribeRdsAnalysisResourceQuotasResponseBodyModeList && modeList) { DARABONBA_PTR_SET_RVALUE(modeList_, modeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageTypeList Field Functions 
    bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
    void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
    inline const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList & storageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList storageTypeList() { DARABONBA_PTR_GET(storageTypeList_, DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setStorageTypeList(const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
    inline DescribeRdsAnalysisResourceQuotasResponseBody& setStorageTypeList(DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


  protected:
    // The editions of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList> DBNodeCategoryList_ = nullptr;
    // The instance types of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList> DBNodeClassList_ = nullptr;
    // The storage sizes of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeStorageList> DBNodeStorageList_ = nullptr;
    // The versions of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList> engineVersionList_ = nullptr;
    // The modes of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyModeList> modeList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The storage types of the MySQL analytic instances.
    std::shared_ptr<DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeList> storageTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
