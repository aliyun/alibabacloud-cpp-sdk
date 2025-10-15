// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATACHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATACHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetSummaryTaskResultResponseBodyDataChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryTaskResultResponseBodyDataChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryTaskResultResponseBodyDataChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
    };
    GetSummaryTaskResultResponseBodyDataChoicesMessage() = default ;
    GetSummaryTaskResultResponseBodyDataChoicesMessage(const GetSummaryTaskResultResponseBodyDataChoicesMessage &) = default ;
    GetSummaryTaskResultResponseBodyDataChoicesMessage(GetSummaryTaskResultResponseBodyDataChoicesMessage &&) = default ;
    GetSummaryTaskResultResponseBodyDataChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryTaskResultResponseBodyDataChoicesMessage() = default ;
    GetSummaryTaskResultResponseBodyDataChoicesMessage& operator=(const GetSummaryTaskResultResponseBodyDataChoicesMessage &) = default ;
    GetSummaryTaskResultResponseBodyDataChoicesMessage& operator=(GetSummaryTaskResultResponseBodyDataChoicesMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->role_ == nullptr && return this->toolCalls_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetSummaryTaskResultResponseBodyDataChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetSummaryTaskResultResponseBodyDataChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<Darabonba::Json> & toolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> toolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Darabonba::Json>) };
    inline GetSummaryTaskResultResponseBodyDataChoicesMessage& setToolCalls(const vector<Darabonba::Json> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline GetSummaryTaskResultResponseBodyDataChoicesMessage& setToolCalls(vector<Darabonba::Json> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> toolCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
