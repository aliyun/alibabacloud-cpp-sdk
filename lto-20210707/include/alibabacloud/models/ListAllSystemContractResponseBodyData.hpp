// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSYSTEMCONTRACTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSYSTEMCONTRACTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllSystemContractResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSystemContractResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SystemContractId, systemContractId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSystemContractResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SystemContractId, systemContractId_);
    };
    ListAllSystemContractResponseBodyData() = default ;
    ListAllSystemContractResponseBodyData(const ListAllSystemContractResponseBodyData &) = default ;
    ListAllSystemContractResponseBodyData(ListAllSystemContractResponseBodyData &&) = default ;
    ListAllSystemContractResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSystemContractResponseBodyData() = default ;
    ListAllSystemContractResponseBodyData& operator=(const ListAllSystemContractResponseBodyData &) = default ;
    ListAllSystemContractResponseBodyData& operator=(ListAllSystemContractResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->systemContractId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllSystemContractResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // systemContractId Field Functions 
    bool hasSystemContractId() const { return this->systemContractId_ != nullptr;};
    void deleteSystemContractId() { this->systemContractId_ = nullptr;};
    inline string systemContractId() const { DARABONBA_PTR_GET_DEFAULT(systemContractId_, "") };
    inline ListAllSystemContractResponseBodyData& setSystemContractId(string systemContractId) { DARABONBA_PTR_SET_VALUE(systemContractId_, systemContractId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> systemContractId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
