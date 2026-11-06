// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPCHANGELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPCHANGELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterGroupChangeLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterGroupChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterGroupChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody() = default ;
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody(const DescribeLakebaseMountParameterGroupChangeLogsResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody(DescribeLakebaseMountParameterGroupChangeLogsResponseBody &&) = default ;
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterGroupChangeLogsResponseBody() = default ;
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody& operator=(const DescribeLakebaseMountParameterGroupChangeLogsResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupChangeLogsResponseBody& operator=(DescribeLakebaseMountParameterGroupChangeLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeLogs& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(IsApply, isApply_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(NewValue, newValue_);
        DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(IsApply, isApply_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
        DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      };
      ChangeLogs() = default ;
      ChangeLogs(const ChangeLogs &) = default ;
      ChangeLogs(ChangeLogs &&) = default ;
      ChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeLogs() = default ;
      ChangeLogs& operator=(const ChangeLogs &) = default ;
      ChangeLogs& operator=(ChangeLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changeType_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->isApply_ == nullptr && this->modifyTime_ == nullptr && this->newValue_ == nullptr
        && this->oldValue_ == nullptr && this->parameterName_ == nullptr; };
      // changeType Field Functions 
      bool hasChangeType() const { return this->changeType_ != nullptr;};
      void deleteChangeType() { this->changeType_ = nullptr;};
      inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
      inline ChangeLogs& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ChangeLogs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ChangeLogs& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // isApply Field Functions 
      bool hasIsApply() const { return this->isApply_ != nullptr;};
      void deleteIsApply() { this->isApply_ = nullptr;};
      inline string getIsApply() const { DARABONBA_PTR_GET_DEFAULT(isApply_, "") };
      inline ChangeLogs& setIsApply(string isApply) { DARABONBA_PTR_SET_VALUE(isApply_, isApply) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline ChangeLogs& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // newValue Field Functions 
      bool hasNewValue() const { return this->newValue_ != nullptr;};
      void deleteNewValue() { this->newValue_ = nullptr;};
      inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
      inline ChangeLogs& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


      // oldValue Field Functions 
      bool hasOldValue() const { return this->oldValue_ != nullptr;};
      void deleteOldValue() { this->oldValue_ = nullptr;};
      inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
      inline ChangeLogs& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline ChangeLogs& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    protected:
      // The change type. Valid values: create, modify, and delete.
      shared_ptr<string> changeType_ {};
      // The creation time (UTC).
      shared_ptr<string> createTime_ {};
      // The ID of the user who performed the operation.
      shared_ptr<string> creator_ {};
      // Indicates whether the change has been applied. Valid values: 0 (no) and 1 (yes).
      shared_ptr<string> isApply_ {};
      // The modification time (UTC).
      shared_ptr<string> modifyTime_ {};
      // The new value after the change. This parameter is empty for delete operations.
      shared_ptr<string> newValue_ {};
      // The old value before the change. This parameter is empty for create operations.
      shared_ptr<string> oldValue_ {};
      // The parameter name.
      shared_ptr<string> parameterName_ {};
    };

    virtual bool empty() const override { return this->changeLogs_ == nullptr
        && this->requestId_ == nullptr; };
    // changeLogs Field Functions 
    bool hasChangeLogs() const { return this->changeLogs_ != nullptr;};
    void deleteChangeLogs() { this->changeLogs_ = nullptr;};
    inline const vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs> & getChangeLogs() const { DARABONBA_PTR_GET_CONST(changeLogs_, vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs>) };
    inline vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs> getChangeLogs() { DARABONBA_PTR_GET(changeLogs_, vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs>) };
    inline DescribeLakebaseMountParameterGroupChangeLogsResponseBody& setChangeLogs(const vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs> & changeLogs) { DARABONBA_PTR_SET_VALUE(changeLogs_, changeLogs) };
    inline DescribeLakebaseMountParameterGroupChangeLogsResponseBody& setChangeLogs(vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs> && changeLogs) { DARABONBA_PTR_SET_RVALUE(changeLogs_, changeLogs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakebaseMountParameterGroupChangeLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The change records, sorted in descending order by CreateTime. An empty array is returned if no data is found.
    shared_ptr<vector<DescribeLakebaseMountParameterGroupChangeLogsResponseBody::ChangeLogs>> changeLogs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
