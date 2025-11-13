// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUESTTHREAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUESTTHREAD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchCaseFullTextRequestThreadMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextRequestThread : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextRequestThread& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextRequestThread& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
    };
    RunSearchCaseFullTextRequestThread() = default ;
    RunSearchCaseFullTextRequestThread(const RunSearchCaseFullTextRequestThread &) = default ;
    RunSearchCaseFullTextRequestThread(RunSearchCaseFullTextRequestThread &&) = default ;
    RunSearchCaseFullTextRequestThread(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextRequestThread() = default ;
    RunSearchCaseFullTextRequestThread& operator=(const RunSearchCaseFullTextRequestThread &) = default ;
    RunSearchCaseFullTextRequestThread& operator=(RunSearchCaseFullTextRequestThread &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::RunSearchCaseFullTextRequestThreadMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::RunSearchCaseFullTextRequestThreadMessages>) };
    inline vector<Models::RunSearchCaseFullTextRequestThreadMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::RunSearchCaseFullTextRequestThreadMessages>) };
    inline RunSearchCaseFullTextRequestThread& setMessages(const vector<Models::RunSearchCaseFullTextRequestThreadMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunSearchCaseFullTextRequestThread& setMessages(vector<Models::RunSearchCaseFullTextRequestThreadMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


  protected:
    std::shared_ptr<vector<Models::RunSearchCaseFullTextRequestThreadMessages>> messages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
