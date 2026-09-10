// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTINNERCONVERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTINNERCONVERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class PostInnerConvertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostInnerConvertRequest& obj) { 
      DARABONBA_ANY_TO_JSON(sqlConvertMap, sqlConvertMap_);
      DARABONBA_PTR_TO_JSON(srcDataSourceName, srcDataSourceName_);
      DARABONBA_PTR_TO_JSON(tgtDataSourceName, tgtDataSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, PostInnerConvertRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(sqlConvertMap, sqlConvertMap_);
      DARABONBA_PTR_FROM_JSON(srcDataSourceName, srcDataSourceName_);
      DARABONBA_PTR_FROM_JSON(tgtDataSourceName, tgtDataSourceName_);
    };
    PostInnerConvertRequest() = default ;
    PostInnerConvertRequest(const PostInnerConvertRequest &) = default ;
    PostInnerConvertRequest(PostInnerConvertRequest &&) = default ;
    PostInnerConvertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostInnerConvertRequest() = default ;
    PostInnerConvertRequest& operator=(const PostInnerConvertRequest &) = default ;
    PostInnerConvertRequest& operator=(PostInnerConvertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sqlConvertMap_ == nullptr
        && this->srcDataSourceName_ == nullptr && this->tgtDataSourceName_ == nullptr; };
    // sqlConvertMap Field Functions 
    bool hasSqlConvertMap() const { return this->sqlConvertMap_ != nullptr;};
    void deleteSqlConvertMap() { this->sqlConvertMap_ = nullptr;};
    inline     const Darabonba::Json & getSqlConvertMap() const { DARABONBA_GET(sqlConvertMap_) };
    Darabonba::Json & getSqlConvertMap() { DARABONBA_GET(sqlConvertMap_) };
    inline PostInnerConvertRequest& setSqlConvertMap(const Darabonba::Json & sqlConvertMap) { DARABONBA_SET_VALUE(sqlConvertMap_, sqlConvertMap) };
    inline PostInnerConvertRequest& setSqlConvertMap(Darabonba::Json && sqlConvertMap) { DARABONBA_SET_RVALUE(sqlConvertMap_, sqlConvertMap) };


    // srcDataSourceName Field Functions 
    bool hasSrcDataSourceName() const { return this->srcDataSourceName_ != nullptr;};
    void deleteSrcDataSourceName() { this->srcDataSourceName_ = nullptr;};
    inline string getSrcDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(srcDataSourceName_, "") };
    inline PostInnerConvertRequest& setSrcDataSourceName(string srcDataSourceName) { DARABONBA_PTR_SET_VALUE(srcDataSourceName_, srcDataSourceName) };


    // tgtDataSourceName Field Functions 
    bool hasTgtDataSourceName() const { return this->tgtDataSourceName_ != nullptr;};
    void deleteTgtDataSourceName() { this->tgtDataSourceName_ = nullptr;};
    inline string getTgtDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(tgtDataSourceName_, "") };
    inline PostInnerConvertRequest& setTgtDataSourceName(string tgtDataSourceName) { DARABONBA_PTR_SET_VALUE(tgtDataSourceName_, tgtDataSourceName) };


  protected:
    // SQL node type mapping, where the key is the source node type and the value is the target node type. If not empty, it will be assembled into `workflow.converter.sqlNodeTypeMapping` in `innerConvertConfig` and written via the task configuration update interface after creating the scheduling transformation task.
    Darabonba::Json sqlConvertMap_ {};
    // Source data source name, i.e., the name of the scheduling data source at the source end of the transformation task.
    shared_ptr<string> srcDataSourceName_ {};
    // Target data source name, i.e., the name of the scheduling data source at the target end of the transformation task.
    shared_ptr<string> tgtDataSourceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
