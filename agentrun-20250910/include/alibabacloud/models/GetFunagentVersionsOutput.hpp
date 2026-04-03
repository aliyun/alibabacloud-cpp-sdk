// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNAGENTVERSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETFUNAGENTVERSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FunagentVersionItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetFunagentVersionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunagentVersionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunagentVersionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    GetFunagentVersionsOutput() = default ;
    GetFunagentVersionsOutput(const GetFunagentVersionsOutput &) = default ;
    GetFunagentVersionsOutput(GetFunagentVersionsOutput &&) = default ;
    GetFunagentVersionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunagentVersionsOutput() = default ;
    GetFunagentVersionsOutput& operator=(const GetFunagentVersionsOutput &) = default ;
    GetFunagentVersionsOutput& operator=(GetFunagentVersionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<FunagentVersionItem> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<FunagentVersionItem>) };
    inline vector<FunagentVersionItem> getItems() { DARABONBA_PTR_GET(items_, vector<FunagentVersionItem>) };
    inline GetFunagentVersionsOutput& setItems(const vector<FunagentVersionItem> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetFunagentVersionsOutput& setItems(vector<FunagentVersionItem> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    shared_ptr<vector<FunagentVersionItem>> items_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
