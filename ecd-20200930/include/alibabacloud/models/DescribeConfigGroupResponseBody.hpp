// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeConfigGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConfigGroupResponseBody() = default ;
    DescribeConfigGroupResponseBody(const DescribeConfigGroupResponseBody &) = default ;
    DescribeConfigGroupResponseBody(DescribeConfigGroupResponseBody &&) = default ;
    DescribeConfigGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigGroupResponseBody() = default ;
    DescribeConfigGroupResponseBody& operator=(const DescribeConfigGroupResponseBody &) = default ;
    DescribeConfigGroupResponseBody& operator=(DescribeConfigGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
        DARABONBA_PTR_TO_JSON(BindCountMap, bindCountMap_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InnerTimerDesc, innerTimerDesc_);
        DARABONBA_PTR_TO_JSON(InnerTimerName, innerTimerName_);
        DARABONBA_PTR_TO_JSON(IsBind, isBind_);
        DARABONBA_PTR_TO_JSON(IsUpdate, isUpdate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
        DARABONBA_PTR_FROM_JSON(BindCountMap, bindCountMap_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InnerTimerDesc, innerTimerDesc_);
        DARABONBA_PTR_FROM_JSON(InnerTimerName, innerTimerName_);
        DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
        DARABONBA_PTR_FROM_JSON(IsUpdate, isUpdate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindCount_ == nullptr
        && this->bindCountMap_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->innerTimerDesc_ == nullptr && this->innerTimerName_ == nullptr
        && this->isBind_ == nullptr && this->isUpdate_ == nullptr && this->name_ == nullptr && this->productType_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // bindCount Field Functions 
      bool hasBindCount() const { return this->bindCount_ != nullptr;};
      void deleteBindCount() { this->bindCount_ = nullptr;};
      inline int32_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
      inline Data& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


      // bindCountMap Field Functions 
      bool hasBindCountMap() const { return this->bindCountMap_ != nullptr;};
      void deleteBindCountMap() { this->bindCountMap_ = nullptr;};
      inline const map<string, int32_t> & getBindCountMap() const { DARABONBA_PTR_GET_CONST(bindCountMap_, map<string, int32_t>) };
      inline map<string, int32_t> getBindCountMap() { DARABONBA_PTR_GET(bindCountMap_, map<string, int32_t>) };
      inline Data& setBindCountMap(const map<string, int32_t> & bindCountMap) { DARABONBA_PTR_SET_VALUE(bindCountMap_, bindCountMap) };
      inline Data& setBindCountMap(map<string, int32_t> && bindCountMap) { DARABONBA_PTR_SET_RVALUE(bindCountMap_, bindCountMap) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // innerTimerDesc Field Functions 
      bool hasInnerTimerDesc() const { return this->innerTimerDesc_ != nullptr;};
      void deleteInnerTimerDesc() { this->innerTimerDesc_ = nullptr;};
      inline string getInnerTimerDesc() const { DARABONBA_PTR_GET_DEFAULT(innerTimerDesc_, "") };
      inline Data& setInnerTimerDesc(string innerTimerDesc) { DARABONBA_PTR_SET_VALUE(innerTimerDesc_, innerTimerDesc) };


      // innerTimerName Field Functions 
      bool hasInnerTimerName() const { return this->innerTimerName_ != nullptr;};
      void deleteInnerTimerName() { this->innerTimerName_ = nullptr;};
      inline string getInnerTimerName() const { DARABONBA_PTR_GET_DEFAULT(innerTimerName_, "") };
      inline Data& setInnerTimerName(string innerTimerName) { DARABONBA_PTR_SET_VALUE(innerTimerName_, innerTimerName) };


      // isBind Field Functions 
      bool hasIsBind() const { return this->isBind_ != nullptr;};
      void deleteIsBind() { this->isBind_ = nullptr;};
      inline bool getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
      inline Data& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


      // isUpdate Field Functions 
      bool hasIsUpdate() const { return this->isUpdate_ != nullptr;};
      void deleteIsUpdate() { this->isUpdate_ = nullptr;};
      inline bool getIsUpdate() const { DARABONBA_PTR_GET_DEFAULT(isUpdate_, false) };
      inline Data& setIsUpdate(bool isUpdate) { DARABONBA_PTR_SET_VALUE(isUpdate_, isUpdate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of resources that are bound to the configuration group.
      shared_ptr<int32_t> bindCount_ {};
      // The number of bound cloud computers.
      shared_ptr<map<string, int32_t>> bindCountMap_ {};
      // The description of the configuration group.
      shared_ptr<string> description_ {};
      // The ID of the configuration group.
      shared_ptr<string> groupId_ {};
      shared_ptr<string> innerTimerDesc_ {};
      shared_ptr<string> innerTimerName_ {};
      shared_ptr<bool> isBind_ {};
      shared_ptr<bool> isUpdate_ {};
      // The name of the configuration group.
      shared_ptr<string> name_ {};
      // The service type of the configuration group.
      // 
      // Valid values:
      // 
      // *   CLOUD_DESKTOP: the cloud computer service.
      shared_ptr<string> productType_ {};
      // The state of the configuration group.
      // 
      // Valid values:
      // 
      // *   AVAILABLE: The configuration group is available.
      // *   UNAVAILABLE: The configuration group is deleted.
      // *   DELETING: The configuration group is being deleted.
      // *   UPDATING: The configuration group is being modified.
      shared_ptr<string> status_ {};
      // The type of the configuration group.
      // 
      // Valid values:
      // 
      // *   Timer: the scheduled task type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeConfigGroupResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeConfigGroupResponseBody::Data>) };
    inline vector<DescribeConfigGroupResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeConfigGroupResponseBody::Data>) };
    inline DescribeConfigGroupResponseBody& setData(const vector<DescribeConfigGroupResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeConfigGroupResponseBody& setData(vector<DescribeConfigGroupResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeConfigGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConfigGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeConfigGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configuration groups.
    shared_ptr<vector<DescribeConfigGroupResponseBody::Data>> data_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
