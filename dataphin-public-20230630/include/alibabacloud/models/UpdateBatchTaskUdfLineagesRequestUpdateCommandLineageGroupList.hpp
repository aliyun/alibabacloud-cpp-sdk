// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMANDLINEAGEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMANDLINEAGEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList.hpp>
#include <alibabacloud/models/UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(InputLineageList, inputLineageList_);
      DARABONBA_PTR_TO_JSON(OutputLineageList, outputLineageList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(InputLineageList, inputLineageList_);
      DARABONBA_PTR_FROM_JSON(OutputLineageList, outputLineageList_);
    };
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList(const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList(UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList &&) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& operator=(const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& operator=(UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputLineageList_ != nullptr
        && this->outputLineageList_ != nullptr; };
    // inputLineageList Field Functions 
    bool hasInputLineageList() const { return this->inputLineageList_ != nullptr;};
    void deleteInputLineageList() { this->inputLineageList_ = nullptr;};
    inline const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList> & inputLineageList() const { DARABONBA_PTR_GET_CONST(inputLineageList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList>) };
    inline vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList> inputLineageList() { DARABONBA_PTR_GET(inputLineageList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList>) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& setInputLineageList(const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList> & inputLineageList) { DARABONBA_PTR_SET_VALUE(inputLineageList_, inputLineageList) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& setInputLineageList(vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList> && inputLineageList) { DARABONBA_PTR_SET_RVALUE(inputLineageList_, inputLineageList) };


    // outputLineageList Field Functions 
    bool hasOutputLineageList() const { return this->outputLineageList_ != nullptr;};
    void deleteOutputLineageList() { this->outputLineageList_ = nullptr;};
    inline const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList> & outputLineageList() const { DARABONBA_PTR_GET_CONST(outputLineageList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList>) };
    inline vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList> outputLineageList() { DARABONBA_PTR_GET(outputLineageList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList>) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& setOutputLineageList(const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList> & outputLineageList) { DARABONBA_PTR_SET_VALUE(outputLineageList_, outputLineageList) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList& setOutputLineageList(vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList> && outputLineageList) { DARABONBA_PTR_SET_RVALUE(outputLineageList_, outputLineageList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList>> inputLineageList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListOutputLineageList>> outputLineageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
