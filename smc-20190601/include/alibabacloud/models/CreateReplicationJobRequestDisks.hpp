// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKS_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReplicationJobRequestDisksData.hpp>
#include <alibabacloud/models/CreateReplicationJobRequestDisksSystem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(System, system_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(System, system_);
    };
    CreateReplicationJobRequestDisks() = default ;
    CreateReplicationJobRequestDisks(const CreateReplicationJobRequestDisks &) = default ;
    CreateReplicationJobRequestDisks(CreateReplicationJobRequestDisks &&) = default ;
    CreateReplicationJobRequestDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestDisks() = default ;
    CreateReplicationJobRequestDisks& operator=(const CreateReplicationJobRequestDisks &) = default ;
    CreateReplicationJobRequestDisks& operator=(CreateReplicationJobRequestDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->system_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::CreateReplicationJobRequestDisksData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::CreateReplicationJobRequestDisksData>) };
    inline vector<Models::CreateReplicationJobRequestDisksData> data() { DARABONBA_PTR_GET(data_, vector<Models::CreateReplicationJobRequestDisksData>) };
    inline CreateReplicationJobRequestDisks& setData(const vector<Models::CreateReplicationJobRequestDisksData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateReplicationJobRequestDisks& setData(vector<Models::CreateReplicationJobRequestDisksData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline const Models::CreateReplicationJobRequestDisksSystem & system() const { DARABONBA_PTR_GET_CONST(system_, Models::CreateReplicationJobRequestDisksSystem) };
    inline Models::CreateReplicationJobRequestDisksSystem system() { DARABONBA_PTR_GET(system_, Models::CreateReplicationJobRequestDisksSystem) };
    inline CreateReplicationJobRequestDisks& setSystem(const Models::CreateReplicationJobRequestDisksSystem & system) { DARABONBA_PTR_SET_VALUE(system_, system) };
    inline CreateReplicationJobRequestDisks& setSystem(Models::CreateReplicationJobRequestDisksSystem && system) { DARABONBA_PTR_SET_RVALUE(system_, system) };


  protected:
    // The information about the data disk partition.
    std::shared_ptr<vector<Models::CreateReplicationJobRequestDisksData>> data_ = nullptr;
    // The information about the system disk.
    std::shared_ptr<Models::CreateReplicationJobRequestDisksSystem> system_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
