// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUESTDIALOGCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUESTDIALOGCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DuplexDecisionRequestDialogContextHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class DuplexDecisionRequestDialogContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplexDecisionRequestDialogContext& obj) { 
      DARABONBA_PTR_TO_JSON(CurUtteranceIdx, curUtteranceIdx_);
      DARABONBA_PTR_TO_JSON(Histories, histories_);
    };
    friend void from_json(const Darabonba::Json& j, DuplexDecisionRequestDialogContext& obj) { 
      DARABONBA_PTR_FROM_JSON(CurUtteranceIdx, curUtteranceIdx_);
      DARABONBA_PTR_FROM_JSON(Histories, histories_);
    };
    DuplexDecisionRequestDialogContext() = default ;
    DuplexDecisionRequestDialogContext(const DuplexDecisionRequestDialogContext &) = default ;
    DuplexDecisionRequestDialogContext(DuplexDecisionRequestDialogContext &&) = default ;
    DuplexDecisionRequestDialogContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplexDecisionRequestDialogContext() = default ;
    DuplexDecisionRequestDialogContext& operator=(const DuplexDecisionRequestDialogContext &) = default ;
    DuplexDecisionRequestDialogContext& operator=(DuplexDecisionRequestDialogContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->curUtteranceIdx_ != nullptr
        && this->histories_ != nullptr; };
    // curUtteranceIdx Field Functions 
    bool hasCurUtteranceIdx() const { return this->curUtteranceIdx_ != nullptr;};
    void deleteCurUtteranceIdx() { this->curUtteranceIdx_ = nullptr;};
    inline int32_t curUtteranceIdx() const { DARABONBA_PTR_GET_DEFAULT(curUtteranceIdx_, 0) };
    inline DuplexDecisionRequestDialogContext& setCurUtteranceIdx(int32_t curUtteranceIdx) { DARABONBA_PTR_SET_VALUE(curUtteranceIdx_, curUtteranceIdx) };


    // histories Field Functions 
    bool hasHistories() const { return this->histories_ != nullptr;};
    void deleteHistories() { this->histories_ = nullptr;};
    inline const vector<Models::DuplexDecisionRequestDialogContextHistories> & histories() const { DARABONBA_PTR_GET_CONST(histories_, vector<Models::DuplexDecisionRequestDialogContextHistories>) };
    inline vector<Models::DuplexDecisionRequestDialogContextHistories> histories() { DARABONBA_PTR_GET(histories_, vector<Models::DuplexDecisionRequestDialogContextHistories>) };
    inline DuplexDecisionRequestDialogContext& setHistories(const vector<Models::DuplexDecisionRequestDialogContextHistories> & histories) { DARABONBA_PTR_SET_VALUE(histories_, histories) };
    inline DuplexDecisionRequestDialogContext& setHistories(vector<Models::DuplexDecisionRequestDialogContextHistories> && histories) { DARABONBA_PTR_SET_RVALUE(histories_, histories) };


  protected:
    std::shared_ptr<int32_t> curUtteranceIdx_ = nullptr;
    std::shared_ptr<vector<Models::DuplexDecisionRequestDialogContextHistories>> histories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
