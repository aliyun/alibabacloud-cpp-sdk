// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisksData.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(System, system_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(System, system_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDisks() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisks(const DescribeSourceServersResponseBodySourceServersSourceServerDisks &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisks(DescribeSourceServersResponseBodySourceServersSourceServerDisks &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDisks() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisks& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDisks &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisks& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->system_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData data() { DARABONBA_PTR_GET(data_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisks& setData(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisks& setData(Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem & system() const { DARABONBA_PTR_GET_CONST(system_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem system() { DARABONBA_PTR_GET(system_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisks& setSystem(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem & system) { DARABONBA_PTR_SET_VALUE(system_, system) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisks& setSystem(Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem && system) { DARABONBA_PTR_SET_RVALUE(system_, system) };


  protected:
    // The list of data disk information.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksData> data_ = nullptr;
    // The information about the system disk.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem> system_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
