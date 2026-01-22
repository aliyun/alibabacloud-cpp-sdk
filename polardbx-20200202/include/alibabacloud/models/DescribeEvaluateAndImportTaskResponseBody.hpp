// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVALUATEANDIMPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVALUATEANDIMPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeEvaluateAndImportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEvaluateAndImportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEvaluateAndImportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEvaluateAndImportTaskResponseBody() = default ;
    DescribeEvaluateAndImportTaskResponseBody(const DescribeEvaluateAndImportTaskResponseBody &) = default ;
    DescribeEvaluateAndImportTaskResponseBody(DescribeEvaluateAndImportTaskResponseBody &&) = default ;
    DescribeEvaluateAndImportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEvaluateAndImportTaskResponseBody() = default ;
    DescribeEvaluateAndImportTaskResponseBody& operator=(const DescribeEvaluateAndImportTaskResponseBody &) = default ;
    DescribeEvaluateAndImportTaskResponseBody& operator=(DescribeEvaluateAndImportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bid, bid_);
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SlinkDstDb, slinkDstDb_);
        DARABONBA_PTR_TO_JSON(SlinkDstResId, slinkDstResId_);
        DARABONBA_PTR_TO_JSON(SlinkDstUserName, slinkDstUserName_);
        DARABONBA_PTR_TO_JSON(SlinkSrcDb, slinkSrcDb_);
        DARABONBA_PTR_TO_JSON(SlinkSrcResId, slinkSrcResId_);
        DARABONBA_PTR_TO_JSON(SlinkSrcResType, slinkSrcResType_);
        DARABONBA_PTR_TO_JSON(SlinkSrcUserName, slinkSrcUserName_);
        DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
        DARABONBA_PTR_TO_JSON(SlinkStatus, slinkStatus_);
        DARABONBA_PTR_TO_JSON(SlinkTaskDesc, slinkTaskDesc_);
        DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
        DARABONBA_PTR_TO_JSON(SlinkType, slinkType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bid, bid_);
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SlinkDstDb, slinkDstDb_);
        DARABONBA_PTR_FROM_JSON(SlinkDstResId, slinkDstResId_);
        DARABONBA_PTR_FROM_JSON(SlinkDstUserName, slinkDstUserName_);
        DARABONBA_PTR_FROM_JSON(SlinkSrcDb, slinkSrcDb_);
        DARABONBA_PTR_FROM_JSON(SlinkSrcResId, slinkSrcResId_);
        DARABONBA_PTR_FROM_JSON(SlinkSrcResType, slinkSrcResType_);
        DARABONBA_PTR_FROM_JSON(SlinkSrcUserName, slinkSrcUserName_);
        DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
        DARABONBA_PTR_FROM_JSON(SlinkStatus, slinkStatus_);
        DARABONBA_PTR_FROM_JSON(SlinkTaskDesc, slinkTaskDesc_);
        DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
        DARABONBA_PTR_FROM_JSON(SlinkType, slinkType_);
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
      virtual bool empty() const override { return this->bid_ == nullptr
        && this->context_ == nullptr && this->creator_ == nullptr && this->deleted_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->regionId_ == nullptr && this->slinkDstDb_ == nullptr && this->slinkDstResId_ == nullptr && this->slinkDstUserName_ == nullptr
        && this->slinkSrcDb_ == nullptr && this->slinkSrcResId_ == nullptr && this->slinkSrcResType_ == nullptr && this->slinkSrcUserName_ == nullptr && this->slinkStage_ == nullptr
        && this->slinkStatus_ == nullptr && this->slinkTaskDesc_ == nullptr && this->slinkTaskId_ == nullptr && this->slinkType_ == nullptr; };
      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
      inline Data& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
      inline Data& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
      inline Data& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
      inline Data& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // slinkDstDb Field Functions 
      bool hasSlinkDstDb() const { return this->slinkDstDb_ != nullptr;};
      void deleteSlinkDstDb() { this->slinkDstDb_ = nullptr;};
      inline string getSlinkDstDb() const { DARABONBA_PTR_GET_DEFAULT(slinkDstDb_, "") };
      inline Data& setSlinkDstDb(string slinkDstDb) { DARABONBA_PTR_SET_VALUE(slinkDstDb_, slinkDstDb) };


      // slinkDstResId Field Functions 
      bool hasSlinkDstResId() const { return this->slinkDstResId_ != nullptr;};
      void deleteSlinkDstResId() { this->slinkDstResId_ = nullptr;};
      inline string getSlinkDstResId() const { DARABONBA_PTR_GET_DEFAULT(slinkDstResId_, "") };
      inline Data& setSlinkDstResId(string slinkDstResId) { DARABONBA_PTR_SET_VALUE(slinkDstResId_, slinkDstResId) };


      // slinkDstUserName Field Functions 
      bool hasSlinkDstUserName() const { return this->slinkDstUserName_ != nullptr;};
      void deleteSlinkDstUserName() { this->slinkDstUserName_ = nullptr;};
      inline string getSlinkDstUserName() const { DARABONBA_PTR_GET_DEFAULT(slinkDstUserName_, "") };
      inline Data& setSlinkDstUserName(string slinkDstUserName) { DARABONBA_PTR_SET_VALUE(slinkDstUserName_, slinkDstUserName) };


      // slinkSrcDb Field Functions 
      bool hasSlinkSrcDb() const { return this->slinkSrcDb_ != nullptr;};
      void deleteSlinkSrcDb() { this->slinkSrcDb_ = nullptr;};
      inline string getSlinkSrcDb() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcDb_, "") };
      inline Data& setSlinkSrcDb(string slinkSrcDb) { DARABONBA_PTR_SET_VALUE(slinkSrcDb_, slinkSrcDb) };


      // slinkSrcResId Field Functions 
      bool hasSlinkSrcResId() const { return this->slinkSrcResId_ != nullptr;};
      void deleteSlinkSrcResId() { this->slinkSrcResId_ = nullptr;};
      inline string getSlinkSrcResId() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcResId_, "") };
      inline Data& setSlinkSrcResId(string slinkSrcResId) { DARABONBA_PTR_SET_VALUE(slinkSrcResId_, slinkSrcResId) };


      // slinkSrcResType Field Functions 
      bool hasSlinkSrcResType() const { return this->slinkSrcResType_ != nullptr;};
      void deleteSlinkSrcResType() { this->slinkSrcResType_ = nullptr;};
      inline string getSlinkSrcResType() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcResType_, "") };
      inline Data& setSlinkSrcResType(string slinkSrcResType) { DARABONBA_PTR_SET_VALUE(slinkSrcResType_, slinkSrcResType) };


      // slinkSrcUserName Field Functions 
      bool hasSlinkSrcUserName() const { return this->slinkSrcUserName_ != nullptr;};
      void deleteSlinkSrcUserName() { this->slinkSrcUserName_ = nullptr;};
      inline string getSlinkSrcUserName() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcUserName_, "") };
      inline Data& setSlinkSrcUserName(string slinkSrcUserName) { DARABONBA_PTR_SET_VALUE(slinkSrcUserName_, slinkSrcUserName) };


      // slinkStage Field Functions 
      bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
      void deleteSlinkStage() { this->slinkStage_ = nullptr;};
      inline string getSlinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
      inline Data& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


      // slinkStatus Field Functions 
      bool hasSlinkStatus() const { return this->slinkStatus_ != nullptr;};
      void deleteSlinkStatus() { this->slinkStatus_ = nullptr;};
      inline string getSlinkStatus() const { DARABONBA_PTR_GET_DEFAULT(slinkStatus_, "") };
      inline Data& setSlinkStatus(string slinkStatus) { DARABONBA_PTR_SET_VALUE(slinkStatus_, slinkStatus) };


      // slinkTaskDesc Field Functions 
      bool hasSlinkTaskDesc() const { return this->slinkTaskDesc_ != nullptr;};
      void deleteSlinkTaskDesc() { this->slinkTaskDesc_ = nullptr;};
      inline string getSlinkTaskDesc() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskDesc_, "") };
      inline Data& setSlinkTaskDesc(string slinkTaskDesc) { DARABONBA_PTR_SET_VALUE(slinkTaskDesc_, slinkTaskDesc) };


      // slinkTaskId Field Functions 
      bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
      void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
      inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
      inline Data& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


      // slinkType Field Functions 
      bool hasSlinkType() const { return this->slinkType_ != nullptr;};
      void deleteSlinkType() { this->slinkType_ = nullptr;};
      inline string getSlinkType() const { DARABONBA_PTR_GET_DEFAULT(slinkType_, "") };
      inline Data& setSlinkType(string slinkType) { DARABONBA_PTR_SET_VALUE(slinkType_, slinkType) };


    protected:
      shared_ptr<string> bid_ {};
      shared_ptr<string> context_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<bool> deleted_ {};
      shared_ptr<int64_t> gmtCreated_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> slinkDstDb_ {};
      shared_ptr<string> slinkDstResId_ {};
      shared_ptr<string> slinkDstUserName_ {};
      shared_ptr<string> slinkSrcDb_ {};
      shared_ptr<string> slinkSrcResId_ {};
      shared_ptr<string> slinkSrcResType_ {};
      shared_ptr<string> slinkSrcUserName_ {};
      shared_ptr<string> slinkStage_ {};
      shared_ptr<string> slinkStatus_ {};
      shared_ptr<string> slinkTaskDesc_ {};
      shared_ptr<string> slinkTaskId_ {};
      shared_ptr<string> slinkType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEvaluateAndImportTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEvaluateAndImportTaskResponseBody::Data) };
    inline DescribeEvaluateAndImportTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEvaluateAndImportTaskResponseBody::Data) };
    inline DescribeEvaluateAndImportTaskResponseBody& setData(const DescribeEvaluateAndImportTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEvaluateAndImportTaskResponseBody& setData(DescribeEvaluateAndImportTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEvaluateAndImportTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEvaluateAndImportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEvaluateAndImportTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeEvaluateAndImportTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
