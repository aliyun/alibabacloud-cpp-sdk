// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXDATAREQUESTFIXDATACOMMAND_HPP_
#define ALIBABACLOUD_MODELS_FIXDATAREQUESTFIXDATACOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FixDataRequestFixDataCommandDownStreamInstanceIdList.hpp>
#include <alibabacloud/models/FixDataRequestFixDataCommandRootInstanceId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class FixDataRequestFixDataCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixDataRequestFixDataCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ContainRootInstance, containRootInstance_);
      DARABONBA_PTR_TO_JSON(DownStreamInstanceIdList, downStreamInstanceIdList_);
      DARABONBA_PTR_TO_JSON(DownstreamRange, downstreamRange_);
      DARABONBA_PTR_TO_JSON(ForceRerun, forceRerun_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RootInstanceId, rootInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, FixDataRequestFixDataCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainRootInstance, containRootInstance_);
      DARABONBA_PTR_FROM_JSON(DownStreamInstanceIdList, downStreamInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(DownstreamRange, downstreamRange_);
      DARABONBA_PTR_FROM_JSON(ForceRerun, forceRerun_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RootInstanceId, rootInstanceId_);
    };
    FixDataRequestFixDataCommand() = default ;
    FixDataRequestFixDataCommand(const FixDataRequestFixDataCommand &) = default ;
    FixDataRequestFixDataCommand(FixDataRequestFixDataCommand &&) = default ;
    FixDataRequestFixDataCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixDataRequestFixDataCommand() = default ;
    FixDataRequestFixDataCommand& operator=(const FixDataRequestFixDataCommand &) = default ;
    FixDataRequestFixDataCommand& operator=(FixDataRequestFixDataCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containRootInstance_ != nullptr
        && this->downStreamInstanceIdList_ != nullptr && this->downstreamRange_ != nullptr && this->forceRerun_ != nullptr && this->projectId_ != nullptr && this->rootInstanceId_ != nullptr; };
    // containRootInstance Field Functions 
    bool hasContainRootInstance() const { return this->containRootInstance_ != nullptr;};
    void deleteContainRootInstance() { this->containRootInstance_ = nullptr;};
    inline bool containRootInstance() const { DARABONBA_PTR_GET_DEFAULT(containRootInstance_, false) };
    inline FixDataRequestFixDataCommand& setContainRootInstance(bool containRootInstance) { DARABONBA_PTR_SET_VALUE(containRootInstance_, containRootInstance) };


    // downStreamInstanceIdList Field Functions 
    bool hasDownStreamInstanceIdList() const { return this->downStreamInstanceIdList_ != nullptr;};
    void deleteDownStreamInstanceIdList() { this->downStreamInstanceIdList_ = nullptr;};
    inline const vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList> & downStreamInstanceIdList() const { DARABONBA_PTR_GET_CONST(downStreamInstanceIdList_, vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList>) };
    inline vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList> downStreamInstanceIdList() { DARABONBA_PTR_GET(downStreamInstanceIdList_, vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList>) };
    inline FixDataRequestFixDataCommand& setDownStreamInstanceIdList(const vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList> & downStreamInstanceIdList) { DARABONBA_PTR_SET_VALUE(downStreamInstanceIdList_, downStreamInstanceIdList) };
    inline FixDataRequestFixDataCommand& setDownStreamInstanceIdList(vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList> && downStreamInstanceIdList) { DARABONBA_PTR_SET_RVALUE(downStreamInstanceIdList_, downStreamInstanceIdList) };


    // downstreamRange Field Functions 
    bool hasDownstreamRange() const { return this->downstreamRange_ != nullptr;};
    void deleteDownstreamRange() { this->downstreamRange_ = nullptr;};
    inline string downstreamRange() const { DARABONBA_PTR_GET_DEFAULT(downstreamRange_, "") };
    inline FixDataRequestFixDataCommand& setDownstreamRange(string downstreamRange) { DARABONBA_PTR_SET_VALUE(downstreamRange_, downstreamRange) };


    // forceRerun Field Functions 
    bool hasForceRerun() const { return this->forceRerun_ != nullptr;};
    void deleteForceRerun() { this->forceRerun_ = nullptr;};
    inline bool forceRerun() const { DARABONBA_PTR_GET_DEFAULT(forceRerun_, false) };
    inline FixDataRequestFixDataCommand& setForceRerun(bool forceRerun) { DARABONBA_PTR_SET_VALUE(forceRerun_, forceRerun) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline FixDataRequestFixDataCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // rootInstanceId Field Functions 
    bool hasRootInstanceId() const { return this->rootInstanceId_ != nullptr;};
    void deleteRootInstanceId() { this->rootInstanceId_ = nullptr;};
    inline const Models::FixDataRequestFixDataCommandRootInstanceId & rootInstanceId() const { DARABONBA_PTR_GET_CONST(rootInstanceId_, Models::FixDataRequestFixDataCommandRootInstanceId) };
    inline Models::FixDataRequestFixDataCommandRootInstanceId rootInstanceId() { DARABONBA_PTR_GET(rootInstanceId_, Models::FixDataRequestFixDataCommandRootInstanceId) };
    inline FixDataRequestFixDataCommand& setRootInstanceId(const Models::FixDataRequestFixDataCommandRootInstanceId & rootInstanceId) { DARABONBA_PTR_SET_VALUE(rootInstanceId_, rootInstanceId) };
    inline FixDataRequestFixDataCommand& setRootInstanceId(Models::FixDataRequestFixDataCommandRootInstanceId && rootInstanceId) { DARABONBA_PTR_SET_RVALUE(rootInstanceId_, rootInstanceId) };


  protected:
    std::shared_ptr<bool> containRootInstance_ = nullptr;
    std::shared_ptr<vector<Models::FixDataRequestFixDataCommandDownStreamInstanceIdList>> downStreamInstanceIdList_ = nullptr;
    std::shared_ptr<string> downstreamRange_ = nullptr;
    std::shared_ptr<bool> forceRerun_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::FixDataRequestFixDataCommandRootInstanceId> rootInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
