// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCECONFIGREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCECONFIGREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataSourceConfigRequestUpdateCommandConfigItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateDataSourceConfigRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceConfigRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceConfigRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateDataSourceConfigRequestUpdateCommand() = default ;
    UpdateDataSourceConfigRequestUpdateCommand(const UpdateDataSourceConfigRequestUpdateCommand &) = default ;
    UpdateDataSourceConfigRequestUpdateCommand(UpdateDataSourceConfigRequestUpdateCommand &&) = default ;
    UpdateDataSourceConfigRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceConfigRequestUpdateCommand() = default ;
    UpdateDataSourceConfigRequestUpdateCommand& operator=(const UpdateDataSourceConfigRequestUpdateCommand &) = default ;
    UpdateDataSourceConfigRequestUpdateCommand& operator=(UpdateDataSourceConfigRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configItemList_ == nullptr
        && return this->id_ == nullptr; };
    // configItemList Field Functions 
    bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
    void deleteConfigItemList() { this->configItemList_ = nullptr;};
    inline const vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList> & configItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList>) };
    inline vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList> configItemList() { DARABONBA_PTR_GET(configItemList_, vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList>) };
    inline UpdateDataSourceConfigRequestUpdateCommand& setConfigItemList(const vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
    inline UpdateDataSourceConfigRequestUpdateCommand& setConfigItemList(vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataSourceConfigRequestUpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateDataSourceConfigRequestUpdateCommandConfigItemList>> configItemList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
