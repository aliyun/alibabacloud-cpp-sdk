// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateStructSyncOrderRequestParamSource.hpp>
#include <vector>
#include <alibabacloud/models/CreateStructSyncOrderRequestParamTableInfoList.hpp>
#include <alibabacloud/models/CreateStructSyncOrderRequestParamTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateStructSyncOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStructSyncOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStructSyncOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    CreateStructSyncOrderRequestParam() = default ;
    CreateStructSyncOrderRequestParam(const CreateStructSyncOrderRequestParam &) = default ;
    CreateStructSyncOrderRequestParam(CreateStructSyncOrderRequestParam &&) = default ;
    CreateStructSyncOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStructSyncOrderRequestParam() = default ;
    CreateStructSyncOrderRequestParam& operator=(const CreateStructSyncOrderRequestParam &) = default ;
    CreateStructSyncOrderRequestParam& operator=(CreateStructSyncOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreError_ == nullptr
        && return this->source_ == nullptr && return this->tableInfoList_ == nullptr && return this->target_ == nullptr; };
    // ignoreError Field Functions 
    bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
    void deleteIgnoreError() { this->ignoreError_ = nullptr;};
    inline bool ignoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
    inline CreateStructSyncOrderRequestParam& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::CreateStructSyncOrderRequestParamSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::CreateStructSyncOrderRequestParamSource) };
    inline Models::CreateStructSyncOrderRequestParamSource source() { DARABONBA_PTR_GET(source_, Models::CreateStructSyncOrderRequestParamSource) };
    inline CreateStructSyncOrderRequestParam& setSource(const Models::CreateStructSyncOrderRequestParamSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateStructSyncOrderRequestParam& setSource(Models::CreateStructSyncOrderRequestParamSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // tableInfoList Field Functions 
    bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
    void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
    inline const vector<Models::CreateStructSyncOrderRequestParamTableInfoList> & tableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<Models::CreateStructSyncOrderRequestParamTableInfoList>) };
    inline vector<Models::CreateStructSyncOrderRequestParamTableInfoList> tableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<Models::CreateStructSyncOrderRequestParamTableInfoList>) };
    inline CreateStructSyncOrderRequestParam& setTableInfoList(const vector<Models::CreateStructSyncOrderRequestParamTableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
    inline CreateStructSyncOrderRequestParam& setTableInfoList(vector<Models::CreateStructSyncOrderRequestParamTableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::CreateStructSyncOrderRequestParamTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::CreateStructSyncOrderRequestParamTarget) };
    inline Models::CreateStructSyncOrderRequestParamTarget target() { DARABONBA_PTR_GET(target_, Models::CreateStructSyncOrderRequestParamTarget) };
    inline CreateStructSyncOrderRequestParam& setTarget(const Models::CreateStructSyncOrderRequestParamTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateStructSyncOrderRequestParam& setTarget(Models::CreateStructSyncOrderRequestParamTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // Specifies whether to skip an error that occurs in executing an SQL statement. Valid values:
    // 
    // *   **true**: continues to execute subsequent SQL statements if an error occurs in executing an SQL statement.
    // *   **false**: stops executing subsequent SQL statements if an error occurs in executing an SQL statement.
    std::shared_ptr<bool> ignoreError_ = nullptr;
    // The information about the base database.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateStructSyncOrderRequestParamSource> source_ = nullptr;
    // The information about the table of which you want to synchronize the schema.
    std::shared_ptr<vector<Models::CreateStructSyncOrderRequestParamTableInfoList>> tableInfoList_ = nullptr;
    // The information about the database to which you want to synchronize the schema of a table.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateStructSyncOrderRequestParamTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
