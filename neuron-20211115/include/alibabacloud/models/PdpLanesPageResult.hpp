// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANESPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPLANESPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpLaneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpLanesPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLanesPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(pdpLanes, pdpLanes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLanesPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pdpLanes, pdpLanes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PdpLanesPageResult() = default ;
    PdpLanesPageResult(const PdpLanesPageResult &) = default ;
    PdpLanesPageResult(PdpLanesPageResult &&) = default ;
    PdpLanesPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLanesPageResult() = default ;
    PdpLanesPageResult& operator=(const PdpLanesPageResult &) = default ;
    PdpLanesPageResult& operator=(PdpLanesPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pdpLanes_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // pdpLanes Field Functions 
    bool hasPdpLanes() const { return this->pdpLanes_ != nullptr;};
    void deletePdpLanes() { this->pdpLanes_ = nullptr;};
    inline const vector<PdpLaneInfo> & getPdpLanes() const { DARABONBA_PTR_GET_CONST(pdpLanes_, vector<PdpLaneInfo>) };
    inline vector<PdpLaneInfo> getPdpLanes() { DARABONBA_PTR_GET(pdpLanes_, vector<PdpLaneInfo>) };
    inline PdpLanesPageResult& setPdpLanes(const vector<PdpLaneInfo> & pdpLanes) { DARABONBA_PTR_SET_VALUE(pdpLanes_, pdpLanes) };
    inline PdpLanesPageResult& setPdpLanes(vector<PdpLaneInfo> && pdpLanes) { DARABONBA_PTR_SET_RVALUE(pdpLanes_, pdpLanes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpLanesPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline PdpLanesPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PdpLaneInfo>> pdpLanes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
