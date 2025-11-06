// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetTaskByUidResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUidResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(ImportDefinitionTaskDO, importDefinitionTaskDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUidResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportDefinitionTaskDO, importDefinitionTaskDO_);
    };
    GetTaskByUidResponseBodyDataVoList() = default ;
    GetTaskByUidResponseBodyDataVoList(const GetTaskByUidResponseBodyDataVoList &) = default ;
    GetTaskByUidResponseBodyDataVoList(GetTaskByUidResponseBodyDataVoList &&) = default ;
    GetTaskByUidResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUidResponseBodyDataVoList() = default ;
    GetTaskByUidResponseBodyDataVoList& operator=(const GetTaskByUidResponseBodyDataVoList &) = default ;
    GetTaskByUidResponseBodyDataVoList& operator=(GetTaskByUidResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importDefinitionTaskDO_ == nullptr; };
    // importDefinitionTaskDO Field Functions 
    bool hasImportDefinitionTaskDO() const { return this->importDefinitionTaskDO_ != nullptr;};
    void deleteImportDefinitionTaskDO() { this->importDefinitionTaskDO_ = nullptr;};
    inline const vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO> & importDefinitionTaskDO() const { DARABONBA_PTR_GET_CONST(importDefinitionTaskDO_, vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO>) };
    inline vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO> importDefinitionTaskDO() { DARABONBA_PTR_GET(importDefinitionTaskDO_, vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO>) };
    inline GetTaskByUidResponseBodyDataVoList& setImportDefinitionTaskDO(const vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO> & importDefinitionTaskDO) { DARABONBA_PTR_SET_VALUE(importDefinitionTaskDO_, importDefinitionTaskDO) };
    inline GetTaskByUidResponseBodyDataVoList& setImportDefinitionTaskDO(vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO> && importDefinitionTaskDO) { DARABONBA_PTR_SET_RVALUE(importDefinitionTaskDO_, importDefinitionTaskDO) };


  protected:
    std::shared_ptr<vector<Models::GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO>> importDefinitionTaskDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
