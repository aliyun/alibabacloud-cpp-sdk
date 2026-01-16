// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Session.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListSessionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(sessions, sessions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(sessions, sessions_);
    };
    ListSessionsOutput() = default ;
    ListSessionsOutput(const ListSessionsOutput &) = default ;
    ListSessionsOutput(ListSessionsOutput &&) = default ;
    ListSessionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionsOutput() = default ;
    ListSessionsOutput& operator=(const ListSessionsOutput &) = default ;
    ListSessionsOutput& operator=(ListSessionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->sessions_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSessionsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Session> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Session>) };
    inline vector<Session> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Session>) };
    inline ListSessionsOutput& setSessions(const vector<Session> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListSessionsOutput& setSessions(vector<Session> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<Session>> sessions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
