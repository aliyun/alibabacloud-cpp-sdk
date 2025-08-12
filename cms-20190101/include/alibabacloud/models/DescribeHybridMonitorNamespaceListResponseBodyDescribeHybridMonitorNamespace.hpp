// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList.hpp>
#include <alibabacloud/models/DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunProductMetricList, aliyunProductMetricList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceType, namespaceType_);
      DARABONBA_PTR_TO_JSON(NotAliyunTaskNumber, notAliyunTaskNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunProductMetricList, aliyunProductMetricList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceType, namespaceType_);
      DARABONBA_PTR_FROM_JSON(NotAliyunTaskNumber, notAliyunTaskNumber_);
    };
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace &&) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& operator=(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& operator=(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunProductMetricList_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->detail_ != nullptr && this->id_ != nullptr && this->isDelete_ != nullptr
        && this->modifyTime_ != nullptr && this->namespace_ != nullptr && this->namespaceType_ != nullptr && this->notAliyunTaskNumber_ != nullptr; };
    // aliyunProductMetricList Field Functions 
    bool hasAliyunProductMetricList() const { return this->aliyunProductMetricList_ != nullptr;};
    void deleteAliyunProductMetricList() { this->aliyunProductMetricList_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList> & aliyunProductMetricList() const { DARABONBA_PTR_GET_CONST(aliyunProductMetricList_, vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList>) };
    inline vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList> aliyunProductMetricList() { DARABONBA_PTR_GET(aliyunProductMetricList_, vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList>) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setAliyunProductMetricList(const vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList> & aliyunProductMetricList) { DARABONBA_PTR_SET_VALUE(aliyunProductMetricList_, aliyunProductMetricList) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setAliyunProductMetricList(vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList> && aliyunProductMetricList) { DARABONBA_PTR_SET_RVALUE(aliyunProductMetricList_, aliyunProductMetricList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail) };
    inline Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setDetail(const Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setDetail(Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline int32_t isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceType Field Functions 
    bool hasNamespaceType() const { return this->namespaceType_ != nullptr;};
    void deleteNamespaceType() { this->namespaceType_ = nullptr;};
    inline string namespaceType() const { DARABONBA_PTR_GET_DEFAULT(namespaceType_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setNamespaceType(string namespaceType) { DARABONBA_PTR_SET_VALUE(namespaceType_, namespaceType) };


    // notAliyunTaskNumber Field Functions 
    bool hasNotAliyunTaskNumber() const { return this->notAliyunTaskNumber_ != nullptr;};
    void deleteNotAliyunTaskNumber() { this->notAliyunTaskNumber_ = nullptr;};
    inline int64_t notAliyunTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(notAliyunTaskNumber_, 0L) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace& setNotAliyunTaskNumber(int64_t notAliyunTaskNumber) { DARABONBA_PTR_SET_VALUE(notAliyunTaskNumber_, notAliyunTaskNumber) };


  protected:
    // The configuration details of metric import tasks for Alibaba Cloud services.
    std::shared_ptr<vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList>> aliyunProductMetricList_ = nullptr;
    // The timestamp that was generated when the namespace was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The details of the data retention period.
    std::shared_ptr<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail> detail_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether the namespace is deleted. Valid values:
    // 
    // *   0: The namespace is not deleted.
    // *   1: The namespace is deleted.
    std::shared_ptr<int32_t> isDelete_ = nullptr;
    // The timestamp that was generated when the namespace was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The storage scheme of metric data. Valid values:
    // 
    // *   m_prom_user: The metric data is stored in Simple Log Service.
    // *   m_prom_pool: The metric data is stored in the storage space provided by CloudMonitor.
    std::shared_ptr<string> namespaceType_ = nullptr;
    // The number of metric import tasks for third-party services.
    std::shared_ptr<int64_t> notAliyunTaskNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
