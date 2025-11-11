// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInterveneGlobalReplyResponseBodyDataReplyMessagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneGlobalReplyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneGlobalReplyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ReplyMessagList, replyMessagList_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneGlobalReplyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ReplyMessagList, replyMessagList_);
    };
    GetInterveneGlobalReplyResponseBodyData() = default ;
    GetInterveneGlobalReplyResponseBodyData(const GetInterveneGlobalReplyResponseBodyData &) = default ;
    GetInterveneGlobalReplyResponseBodyData(GetInterveneGlobalReplyResponseBodyData &&) = default ;
    GetInterveneGlobalReplyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneGlobalReplyResponseBodyData() = default ;
    GetInterveneGlobalReplyResponseBodyData& operator=(const GetInterveneGlobalReplyResponseBodyData &) = default ;
    GetInterveneGlobalReplyResponseBodyData& operator=(GetInterveneGlobalReplyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->replyMessagList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInterveneGlobalReplyResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // replyMessagList Field Functions 
    bool hasReplyMessagList() const { return this->replyMessagList_ != nullptr;};
    void deleteReplyMessagList() { this->replyMessagList_ = nullptr;};
    inline const vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList> & replyMessagList() const { DARABONBA_PTR_GET_CONST(replyMessagList_, vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList>) };
    inline vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList> replyMessagList() { DARABONBA_PTR_GET(replyMessagList_, vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList>) };
    inline GetInterveneGlobalReplyResponseBodyData& setReplyMessagList(const vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList> & replyMessagList) { DARABONBA_PTR_SET_VALUE(replyMessagList_, replyMessagList) };
    inline GetInterveneGlobalReplyResponseBodyData& setReplyMessagList(vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList> && replyMessagList) { DARABONBA_PTR_SET_RVALUE(replyMessagList_, replyMessagList) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<vector<Models::GetInterveneGlobalReplyResponseBodyDataReplyMessagList>> replyMessagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
