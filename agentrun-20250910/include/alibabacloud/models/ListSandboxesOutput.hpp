// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSANDBOXESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSANDBOXESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Sandbox.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListSandboxesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSandboxesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListSandboxesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListSandboxesOutput() = default ;
    ListSandboxesOutput(const ListSandboxesOutput &) = default ;
    ListSandboxesOutput(ListSandboxesOutput &&) = default ;
    ListSandboxesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSandboxesOutput() = default ;
    ListSandboxesOutput& operator=(const ListSandboxesOutput &) = default ;
    ListSandboxesOutput& operator=(ListSandboxesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->nextToken_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Sandbox> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Sandbox>) };
    inline vector<Sandbox> getItems() { DARABONBA_PTR_GET(items_, vector<Sandbox>) };
    inline ListSandboxesOutput& setItems(const vector<Sandbox> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSandboxesOutput& setItems(vector<Sandbox> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSandboxesOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // This parameter is required.
    shared_ptr<vector<Sandbox>> items_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
