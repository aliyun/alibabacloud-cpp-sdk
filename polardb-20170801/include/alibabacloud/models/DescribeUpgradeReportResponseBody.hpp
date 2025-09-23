// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpgradeReportResponseBodyItems.hpp>
#include <alibabacloud/models/DescribeUpgradeReportResponseBodyUpgradeReportList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeUpgradeReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DstDBType, dstDBType_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ItemsSize, itemsSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(SrcDBType, srcDBType_);
      DARABONBA_PTR_TO_JSON(SrcDeleted, srcDeleted_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpgradeReportList, upgradeReportList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DstDBType, dstDBType_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ItemsSize, itemsSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(SrcDBType, srcDBType_);
      DARABONBA_PTR_FROM_JSON(SrcDeleted, srcDeleted_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpgradeReportList, upgradeReportList_);
    };
    DescribeUpgradeReportResponseBody() = default ;
    DescribeUpgradeReportResponseBody(const DescribeUpgradeReportResponseBody &) = default ;
    DescribeUpgradeReportResponseBody(DescribeUpgradeReportResponseBody &&) = default ;
    DescribeUpgradeReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeReportResponseBody() = default ;
    DescribeUpgradeReportResponseBody& operator=(const DescribeUpgradeReportResponseBody &) = default ;
    DescribeUpgradeReportResponseBody& operator=(DescribeUpgradeReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->dstDBType_ != nullptr && this->items_ != nullptr && this->itemsSize_ != nullptr && this->requestId_ != nullptr && this->sourceDBClusterId_ != nullptr
        && this->srcDBType_ != nullptr && this->srcDeleted_ != nullptr && this->totalSize_ != nullptr && this->type_ != nullptr && this->upgradeReportList_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline DescribeUpgradeReportResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // dstDBType Field Functions 
    bool hasDstDBType() const { return this->dstDBType_ != nullptr;};
    void deleteDstDBType() { this->dstDBType_ = nullptr;};
    inline string dstDBType() const { DARABONBA_PTR_GET_DEFAULT(dstDBType_, "") };
    inline DescribeUpgradeReportResponseBody& setDstDBType(string dstDBType) { DARABONBA_PTR_SET_VALUE(dstDBType_, dstDBType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeUpgradeReportResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeUpgradeReportResponseBodyItems>) };
    inline vector<DescribeUpgradeReportResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeUpgradeReportResponseBodyItems>) };
    inline DescribeUpgradeReportResponseBody& setItems(const vector<DescribeUpgradeReportResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeUpgradeReportResponseBody& setItems(vector<DescribeUpgradeReportResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // itemsSize Field Functions 
    bool hasItemsSize() const { return this->itemsSize_ != nullptr;};
    void deleteItemsSize() { this->itemsSize_ = nullptr;};
    inline int64_t itemsSize() const { DARABONBA_PTR_GET_DEFAULT(itemsSize_, 0L) };
    inline DescribeUpgradeReportResponseBody& setItemsSize(int64_t itemsSize) { DARABONBA_PTR_SET_VALUE(itemsSize_, itemsSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpgradeReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline DescribeUpgradeReportResponseBody& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // srcDBType Field Functions 
    bool hasSrcDBType() const { return this->srcDBType_ != nullptr;};
    void deleteSrcDBType() { this->srcDBType_ = nullptr;};
    inline string srcDBType() const { DARABONBA_PTR_GET_DEFAULT(srcDBType_, "") };
    inline DescribeUpgradeReportResponseBody& setSrcDBType(string srcDBType) { DARABONBA_PTR_SET_VALUE(srcDBType_, srcDBType) };


    // srcDeleted Field Functions 
    bool hasSrcDeleted() const { return this->srcDeleted_ != nullptr;};
    void deleteSrcDeleted() { this->srcDeleted_ = nullptr;};
    inline string srcDeleted() const { DARABONBA_PTR_GET_DEFAULT(srcDeleted_, "") };
    inline DescribeUpgradeReportResponseBody& setSrcDeleted(string srcDeleted) { DARABONBA_PTR_SET_VALUE(srcDeleted_, srcDeleted) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeUpgradeReportResponseBody& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeUpgradeReportResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upgradeReportList Field Functions 
    bool hasUpgradeReportList() const { return this->upgradeReportList_ != nullptr;};
    void deleteUpgradeReportList() { this->upgradeReportList_ = nullptr;};
    inline const vector<DescribeUpgradeReportResponseBodyUpgradeReportList> & upgradeReportList() const { DARABONBA_PTR_GET_CONST(upgradeReportList_, vector<DescribeUpgradeReportResponseBodyUpgradeReportList>) };
    inline vector<DescribeUpgradeReportResponseBodyUpgradeReportList> upgradeReportList() { DARABONBA_PTR_GET(upgradeReportList_, vector<DescribeUpgradeReportResponseBodyUpgradeReportList>) };
    inline DescribeUpgradeReportResponseBody& setUpgradeReportList(const vector<DescribeUpgradeReportResponseBodyUpgradeReportList> & upgradeReportList) { DARABONBA_PTR_SET_VALUE(upgradeReportList_, upgradeReportList) };
    inline DescribeUpgradeReportResponseBody& setUpgradeReportList(vector<DescribeUpgradeReportResponseBodyUpgradeReportList> && upgradeReportList) { DARABONBA_PTR_SET_RVALUE(upgradeReportList_, upgradeReportList) };


  protected:
    std::shared_ptr<string> details_ = nullptr;
    std::shared_ptr<string> dstDBType_ = nullptr;
    std::shared_ptr<vector<DescribeUpgradeReportResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<int64_t> itemsSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
    std::shared_ptr<string> srcDBType_ = nullptr;
    std::shared_ptr<string> srcDeleted_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<DescribeUpgradeReportResponseBodyUpgradeReportList>> upgradeReportList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
