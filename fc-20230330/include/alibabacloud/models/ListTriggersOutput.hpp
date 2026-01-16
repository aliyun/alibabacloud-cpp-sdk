// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRIGGERSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTTRIGGERSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Trigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListTriggersOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTriggersOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, ListTriggersOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(triggers, triggers_);
    };
    ListTriggersOutput() = default ;
    ListTriggersOutput(const ListTriggersOutput &) = default ;
    ListTriggersOutput(ListTriggersOutput &&) = default ;
    ListTriggersOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTriggersOutput() = default ;
    ListTriggersOutput& operator=(const ListTriggersOutput &) = default ;
    ListTriggersOutput& operator=(ListTriggersOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->triggers_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTriggersOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<Trigger> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Trigger>) };
    inline vector<Trigger> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<Trigger>) };
    inline ListTriggersOutput& setTriggers(const vector<Trigger> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ListTriggersOutput& setTriggers(vector<Trigger> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<Trigger>> triggers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
