// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODYINSTANCERELATIONLISTFIELDINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODYINSTANCERELATIONLISTFIELDINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceId, fieldInstanceId_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_TO_JSON(SelectStatus, selectStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceId, fieldInstanceId_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_FROM_JSON(SelectStatus, selectStatus_);
    };
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList() = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList(const GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList &) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList(GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList &&) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList() = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& operator=(const GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList &) = default ;
    GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& operator=(GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldInstanceId_ != nullptr
        && this->runStatus_ != nullptr && this->selectStatus_ != nullptr; };
    // fieldInstanceId Field Functions 
    bool hasFieldInstanceId() const { return this->fieldInstanceId_ != nullptr;};
    void deleteFieldInstanceId() { this->fieldInstanceId_ = nullptr;};
    inline string fieldInstanceId() const { DARABONBA_PTR_GET_DEFAULT(fieldInstanceId_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& setFieldInstanceId(string fieldInstanceId) { DARABONBA_PTR_SET_VALUE(fieldInstanceId_, fieldInstanceId) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string runStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    // selectStatus Field Functions 
    bool hasSelectStatus() const { return this->selectStatus_ != nullptr;};
    void deleteSelectStatus() { this->selectStatus_ = nullptr;};
    inline string selectStatus() const { DARABONBA_PTR_GET_DEFAULT(selectStatus_, "") };
    inline GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList& setSelectStatus(string selectStatus) { DARABONBA_PTR_SET_VALUE(selectStatus_, selectStatus) };


  protected:
    std::shared_ptr<string> fieldInstanceId_ = nullptr;
    std::shared_ptr<string> runStatus_ = nullptr;
    std::shared_ptr<string> selectStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
