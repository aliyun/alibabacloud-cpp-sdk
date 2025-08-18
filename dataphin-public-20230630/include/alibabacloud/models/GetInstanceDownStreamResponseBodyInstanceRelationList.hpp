// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODYINSTANCERELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODYINSTANCERELATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList.hpp>
#include <alibabacloud/models/GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamResponseBodyInstanceRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamResponseBodyInstanceRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FieldInstanceList, fieldInstanceList_);
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_TO_JSON(SelectStatus, selectStatus_);
      DARABONBA_PTR_TO_JSON(SelectStatusCause, selectStatusCause_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamResponseBodyInstanceRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FieldInstanceList, fieldInstanceList_);
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_FROM_JSON(SelectStatus, selectStatus_);
      DARABONBA_PTR_FROM_JSON(SelectStatusCause, selectStatusCause_);
    };
    GetInstanceDownStreamResponseBodyInstanceRelationList() = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationList(const GetInstanceDownStreamResponseBodyInstanceRelationList &) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationList(GetInstanceDownStreamResponseBodyInstanceRelationList &&) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamResponseBodyInstanceRelationList() = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationList& operator=(const GetInstanceDownStreamResponseBodyInstanceRelationList &) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationList& operator=(GetInstanceDownStreamResponseBodyInstanceRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downStreamDepth_ != nullptr
        && this->extendInfo_ != nullptr && this->fieldInstanceList_ != nullptr && this->instanceInfo_ != nullptr && this->runStatus_ != nullptr && this->selectStatus_ != nullptr
        && this->selectStatusCause_ != nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t downStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // fieldInstanceList Field Functions 
    bool hasFieldInstanceList() const { return this->fieldInstanceList_ != nullptr;};
    void deleteFieldInstanceList() { this->fieldInstanceList_ = nullptr;};
    inline const vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList> & fieldInstanceList() const { DARABONBA_PTR_GET_CONST(fieldInstanceList_, vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList>) };
    inline vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList> fieldInstanceList() { DARABONBA_PTR_GET(fieldInstanceList_, vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList>) };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setFieldInstanceList(const vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList> & fieldInstanceList) { DARABONBA_PTR_SET_VALUE(fieldInstanceList_, fieldInstanceList) };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setFieldInstanceList(vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList> && fieldInstanceList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceList_, fieldInstanceList) };


    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo & instanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo) };
    inline Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo instanceInfo() { DARABONBA_PTR_GET(instanceInfo_, Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo) };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setInstanceInfo(const Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setInstanceInfo(Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string runStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    // selectStatus Field Functions 
    bool hasSelectStatus() const { return this->selectStatus_ != nullptr;};
    void deleteSelectStatus() { this->selectStatus_ = nullptr;};
    inline string selectStatus() const { DARABONBA_PTR_GET_DEFAULT(selectStatus_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setSelectStatus(string selectStatus) { DARABONBA_PTR_SET_VALUE(selectStatus_, selectStatus) };


    // selectStatusCause Field Functions 
    bool hasSelectStatusCause() const { return this->selectStatusCause_ != nullptr;};
    void deleteSelectStatusCause() { this->selectStatusCause_ = nullptr;};
    inline string selectStatusCause() const { DARABONBA_PTR_GET_DEFAULT(selectStatusCause_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationList& setSelectStatusCause(string selectStatusCause) { DARABONBA_PTR_SET_VALUE(selectStatusCause_, selectStatusCause) };


  protected:
    std::shared_ptr<int32_t> downStreamDepth_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList>> fieldInstanceList_ = nullptr;
    std::shared_ptr<Models::GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo> instanceInfo_ = nullptr;
    std::shared_ptr<string> runStatus_ = nullptr;
    std::shared_ptr<string> selectStatus_ = nullptr;
    std::shared_ptr<string> selectStatusCause_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
