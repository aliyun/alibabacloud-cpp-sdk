// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTLEDPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_SETTLEDPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Settled.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SettledPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SettledPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(settleds, settleds_);
    };
    friend void from_json(const Darabonba::Json& j, SettledPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(settleds, settleds_);
    };
    SettledPageResult() = default ;
    SettledPageResult(const SettledPageResult &) = default ;
    SettledPageResult(SettledPageResult &&) = default ;
    SettledPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SettledPageResult() = default ;
    SettledPageResult& operator=(const SettledPageResult &) = default ;
    SettledPageResult& operator=(SettledPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->settleds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SettledPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settleds Field Functions 
    bool hasSettleds() const { return this->settleds_ != nullptr;};
    void deleteSettleds() { this->settleds_ = nullptr;};
    inline const vector<Settled> & getSettleds() const { DARABONBA_PTR_GET_CONST(settleds_, vector<Settled>) };
    inline vector<Settled> getSettleds() { DARABONBA_PTR_GET(settleds_, vector<Settled>) };
    inline SettledPageResult& setSettleds(const vector<Settled> & settleds) { DARABONBA_PTR_SET_VALUE(settleds_, settleds) };
    inline SettledPageResult& setSettleds(vector<Settled> && settleds) { DARABONBA_PTR_SET_RVALUE(settleds_, settleds) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Settled>> settleds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
