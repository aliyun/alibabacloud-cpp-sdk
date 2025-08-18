// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMANDLINEAGEGROUPLISTINPUTLINEAGELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMANDLINEAGEGROUPLISTINPUTLINEAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList(const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList(UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList &&) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& operator=(const UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& operator=(UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnList_ != nullptr
        && this->env_ != nullptr && this->fullTable_ != nullptr && this->name_ != nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<string> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<string>) };
    inline vector<string> columnList() { DARABONBA_PTR_GET(columnList_, vector<string>) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& setColumnList(const vector<string> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& setColumnList(vector<string> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fullTable Field Functions 
    bool hasFullTable() const { return this->fullTable_ != nullptr;};
    void deleteFullTable() { this->fullTable_ = nullptr;};
    inline bool fullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupListInputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> columnList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> fullTable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
