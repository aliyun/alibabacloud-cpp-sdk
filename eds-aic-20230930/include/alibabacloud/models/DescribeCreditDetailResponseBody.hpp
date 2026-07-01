// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCreditDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreditDetailResponseBody() = default ;
    DescribeCreditDetailResponseBody(const DescribeCreditDetailResponseBody &) = default ;
    DescribeCreditDetailResponseBody(DescribeCreditDetailResponseBody &&) = default ;
    DescribeCreditDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditDetailResponseBody() = default ;
    DescribeCreditDetailResponseBody& operator=(const DescribeCreditDetailResponseBody &) = default ;
    DescribeCreditDetailResponseBody& operator=(DescribeCreditDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalCreditChange, totalCreditChange_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalCreditChange, totalCreditChange_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeTime, changeTime_);
          DARABONBA_PTR_TO_JSON(CreditChange, creditChange_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeTime, changeTime_);
          DARABONBA_PTR_FROM_JSON(CreditChange, creditChange_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeTime_ == nullptr
        && this->creditChange_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->packageId_ == nullptr && this->taskId_ == nullptr; };
        // changeTime Field Functions 
        bool hasChangeTime() const { return this->changeTime_ != nullptr;};
        void deleteChangeTime() { this->changeTime_ = nullptr;};
        inline string getChangeTime() const { DARABONBA_PTR_GET_DEFAULT(changeTime_, "") };
        inline Details& setChangeTime(string changeTime) { DARABONBA_PTR_SET_VALUE(changeTime_, changeTime) };


        // creditChange Field Functions 
        bool hasCreditChange() const { return this->creditChange_ != nullptr;};
        void deleteCreditChange() { this->creditChange_ = nullptr;};
        inline string getCreditChange() const { DARABONBA_PTR_GET_DEFAULT(creditChange_, "") };
        inline Details& setCreditChange(string creditChange) { DARABONBA_PTR_SET_VALUE(creditChange_, creditChange) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Details& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Details& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
        inline Details& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Details& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The time when the change occurred.
        shared_ptr<string> changeTime_ {};
        // The credit change amount.
        shared_ptr<string> creditChange_ {};
        // The task description.
        shared_ptr<string> description_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The credit or resource plan ID.
        shared_ptr<string> packageId_ {};
        // The task ID, which is globally unique.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalCreditChange_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalCreditChange Field Functions 
      bool hasTotalCreditChange() const { return this->totalCreditChange_ != nullptr;};
      void deleteTotalCreditChange() { this->totalCreditChange_ = nullptr;};
      inline string getTotalCreditChange() const { DARABONBA_PTR_GET_DEFAULT(totalCreditChange_, "") };
      inline Data& setTotalCreditChange(string totalCreditChange) { DARABONBA_PTR_SET_VALUE(totalCreditChange_, totalCreditChange) };


    protected:
      // The credit change details.
      shared_ptr<vector<Data::Details>> details_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of detail records.
      shared_ptr<int32_t> totalCount_ {};
      // The total credit change.
      shared_ptr<string> totalCreditChange_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCreditDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCreditDetailResponseBody::Data) };
    inline DescribeCreditDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCreditDetailResponseBody::Data) };
    inline DescribeCreditDetailResponseBody& setData(const DescribeCreditDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCreditDetailResponseBody& setData(DescribeCreditDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreditDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response object.
    shared_ptr<DescribeCreditDetailResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
