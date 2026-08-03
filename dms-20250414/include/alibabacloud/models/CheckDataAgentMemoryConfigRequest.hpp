// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATAAGENTMEMORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATAAGENTMEMORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CheckDataAgentMemoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataAgentMemoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataAgentMemoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
    };
    CheckDataAgentMemoryConfigRequest() = default ;
    CheckDataAgentMemoryConfigRequest(const CheckDataAgentMemoryConfigRequest &) = default ;
    CheckDataAgentMemoryConfigRequest(CheckDataAgentMemoryConfigRequest &&) = default ;
    CheckDataAgentMemoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataAgentMemoryConfigRequest() = default ;
    CheckDataAgentMemoryConfigRequest& operator=(const CheckDataAgentMemoryConfigRequest &) = default ;
    CheckDataAgentMemoryConfigRequest& operator=(CheckDataAgentMemoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CheckDataAgentMemoryConfigRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


  protected:
    // The current Data Management unit.
    shared_ptr<string> DMSUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
