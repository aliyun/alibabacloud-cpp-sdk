// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTerminalSessionsResponseBodySessionsSession.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(Session, session_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(Session, session_);
    };
    DescribeTerminalSessionsResponseBodySessions() = default ;
    DescribeTerminalSessionsResponseBodySessions(const DescribeTerminalSessionsResponseBodySessions &) = default ;
    DescribeTerminalSessionsResponseBodySessions(DescribeTerminalSessionsResponseBodySessions &&) = default ;
    DescribeTerminalSessionsResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBodySessions() = default ;
    DescribeTerminalSessionsResponseBodySessions& operator=(const DescribeTerminalSessionsResponseBodySessions &) = default ;
    DescribeTerminalSessionsResponseBodySessions& operator=(DescribeTerminalSessionsResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->session_ != nullptr; };
    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const vector<Models::DescribeTerminalSessionsResponseBodySessionsSession> & session() const { DARABONBA_PTR_GET_CONST(session_, vector<Models::DescribeTerminalSessionsResponseBodySessionsSession>) };
    inline vector<Models::DescribeTerminalSessionsResponseBodySessionsSession> session() { DARABONBA_PTR_GET(session_, vector<Models::DescribeTerminalSessionsResponseBodySessionsSession>) };
    inline DescribeTerminalSessionsResponseBodySessions& setSession(const vector<Models::DescribeTerminalSessionsResponseBodySessionsSession> & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline DescribeTerminalSessionsResponseBodySessions& setSession(vector<Models::DescribeTerminalSessionsResponseBodySessionsSession> && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    std::shared_ptr<vector<Models::DescribeTerminalSessionsResponseBodySessionsSession>> session_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
