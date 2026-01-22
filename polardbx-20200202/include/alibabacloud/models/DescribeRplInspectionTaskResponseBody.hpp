// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERPLINSPECTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRplInspectionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRplInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRplInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRplInspectionTaskResponseBody() = default ;
    DescribeRplInspectionTaskResponseBody(const DescribeRplInspectionTaskResponseBody &) = default ;
    DescribeRplInspectionTaskResponseBody(DescribeRplInspectionTaskResponseBody &&) = default ;
    DescribeRplInspectionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRplInspectionTaskResponseBody() = default ;
    DescribeRplInspectionTaskResponseBody& operator=(const DescribeRplInspectionTaskResponseBody &) = default ;
    DescribeRplInspectionTaskResponseBody& operator=(DescribeRplInspectionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InspectionTaskList, inspectionTaskList_);
        DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InspectionTaskList, inspectionTaskList_);
        DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
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
      class InspectionTaskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InspectionTaskList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
          DARABONBA_PTR_TO_JSON(Stage, stage_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, InspectionTaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
          DARABONBA_PTR_FROM_JSON(Stage, stage_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        InspectionTaskList() = default ;
        InspectionTaskList(const InspectionTaskList &) = default ;
        InspectionTaskList(InspectionTaskList &&) = default ;
        InspectionTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InspectionTaskList() = default ;
        InspectionTaskList& operator=(const InspectionTaskList &) = default ;
        InspectionTaskList& operator=(InspectionTaskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->slinkTaskId_ == nullptr && this->stage_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline InspectionTaskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline InspectionTaskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline InspectionTaskList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // slinkTaskId Field Functions 
        bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
        void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
        inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
        inline InspectionTaskList& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline InspectionTaskList& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InspectionTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline InspectionTaskList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> id_ {};
        // slinktaskid。
        shared_ptr<string> slinkTaskId_ {};
        shared_ptr<string> stage_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->inspectionTaskList_ == nullptr
        && this->slinkStage_ == nullptr; };
      // inspectionTaskList Field Functions 
      bool hasInspectionTaskList() const { return this->inspectionTaskList_ != nullptr;};
      void deleteInspectionTaskList() { this->inspectionTaskList_ = nullptr;};
      inline const vector<Data::InspectionTaskList> & getInspectionTaskList() const { DARABONBA_PTR_GET_CONST(inspectionTaskList_, vector<Data::InspectionTaskList>) };
      inline vector<Data::InspectionTaskList> getInspectionTaskList() { DARABONBA_PTR_GET(inspectionTaskList_, vector<Data::InspectionTaskList>) };
      inline Data& setInspectionTaskList(const vector<Data::InspectionTaskList> & inspectionTaskList) { DARABONBA_PTR_SET_VALUE(inspectionTaskList_, inspectionTaskList) };
      inline Data& setInspectionTaskList(vector<Data::InspectionTaskList> && inspectionTaskList) { DARABONBA_PTR_SET_RVALUE(inspectionTaskList_, inspectionTaskList) };


      // slinkStage Field Functions 
      bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
      void deleteSlinkStage() { this->slinkStage_ = nullptr;};
      inline string getSlinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
      inline Data& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


    protected:
      shared_ptr<vector<Data::InspectionTaskList>> inspectionTaskList_ {};
      shared_ptr<string> slinkStage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeRplInspectionTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeRplInspectionTaskResponseBody::Data) };
    inline DescribeRplInspectionTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeRplInspectionTaskResponseBody::Data) };
    inline DescribeRplInspectionTaskResponseBody& setData(const DescribeRplInspectionTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRplInspectionTaskResponseBody& setData(DescribeRplInspectionTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRplInspectionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRplInspectionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRplInspectionTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeRplInspectionTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
