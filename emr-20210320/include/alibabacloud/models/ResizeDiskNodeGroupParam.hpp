// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEDISKNODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_RESIZEDISKNODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ResizeDiskNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeDiskNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCapacity, dataDiskCapacity_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(RollingRestart, rollingRestart_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeDiskNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCapacity, dataDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(RollingRestart, rollingRestart_);
    };
    ResizeDiskNodeGroupParam() = default ;
    ResizeDiskNodeGroupParam(const ResizeDiskNodeGroupParam &) = default ;
    ResizeDiskNodeGroupParam(ResizeDiskNodeGroupParam &&) = default ;
    ResizeDiskNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeDiskNodeGroupParam() = default ;
    ResizeDiskNodeGroupParam& operator=(const ResizeDiskNodeGroupParam &) = default ;
    ResizeDiskNodeGroupParam& operator=(ResizeDiskNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskCapacity_ == nullptr
        && return this->nodeGroupId_ == nullptr && return this->rollingRestart_ == nullptr; };
    // dataDiskCapacity Field Functions 
    bool hasDataDiskCapacity() const { return this->dataDiskCapacity_ != nullptr;};
    void deleteDataDiskCapacity() { this->dataDiskCapacity_ = nullptr;};
    inline int64_t dataDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCapacity_, 0L) };
    inline ResizeDiskNodeGroupParam& setDataDiskCapacity(int64_t dataDiskCapacity) { DARABONBA_PTR_SET_VALUE(dataDiskCapacity_, dataDiskCapacity) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ResizeDiskNodeGroupParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // rollingRestart Field Functions 
    bool hasRollingRestart() const { return this->rollingRestart_ != nullptr;};
    void deleteRollingRestart() { this->rollingRestart_ = nullptr;};
    inline bool rollingRestart() const { DARABONBA_PTR_GET_DEFAULT(rollingRestart_, false) };
    inline ResizeDiskNodeGroupParam& setRollingRestart(bool rollingRestart) { DARABONBA_PTR_SET_VALUE(rollingRestart_, rollingRestart) };


  protected:
    std::shared_ptr<int64_t> dataDiskCapacity_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<bool> rollingRestart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
