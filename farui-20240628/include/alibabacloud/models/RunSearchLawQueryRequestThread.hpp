// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUESTTHREAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUESTTHREAD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchLawQueryRequestThreadMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryRequestThread : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryRequestThread& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryRequestThread& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
    };
    RunSearchLawQueryRequestThread() = default ;
    RunSearchLawQueryRequestThread(const RunSearchLawQueryRequestThread &) = default ;
    RunSearchLawQueryRequestThread(RunSearchLawQueryRequestThread &&) = default ;
    RunSearchLawQueryRequestThread(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryRequestThread() = default ;
    RunSearchLawQueryRequestThread& operator=(const RunSearchLawQueryRequestThread &) = default ;
    RunSearchLawQueryRequestThread& operator=(RunSearchLawQueryRequestThread &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::RunSearchLawQueryRequestThreadMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::RunSearchLawQueryRequestThreadMessages>) };
    inline vector<Models::RunSearchLawQueryRequestThreadMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::RunSearchLawQueryRequestThreadMessages>) };
    inline RunSearchLawQueryRequestThread& setMessages(const vector<Models::RunSearchLawQueryRequestThreadMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunSearchLawQueryRequestThread& setMessages(vector<Models::RunSearchLawQueryRequestThreadMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


  protected:
    std::shared_ptr<vector<Models::RunSearchLawQueryRequestThreadMessages>> messages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
