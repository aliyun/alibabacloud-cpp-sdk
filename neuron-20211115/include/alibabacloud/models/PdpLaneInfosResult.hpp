// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANEINFOSRESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPLANEINFOSRESULT_HPP_
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
  class PdpLaneInfosResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLaneInfosResult& obj) { 
      DARABONBA_PTR_TO_JSON(pdpLanes, pdpLanes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLaneInfosResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pdpLanes, pdpLanes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PdpLaneInfosResult() = default ;
    PdpLaneInfosResult(const PdpLaneInfosResult &) = default ;
    PdpLaneInfosResult(PdpLaneInfosResult &&) = default ;
    PdpLaneInfosResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLaneInfosResult() = default ;
    PdpLaneInfosResult& operator=(const PdpLaneInfosResult &) = default ;
    PdpLaneInfosResult& operator=(PdpLaneInfosResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pdpLanes_ == nullptr
        && this->requestId_ == nullptr; };
    // pdpLanes Field Functions 
    bool hasPdpLanes() const { return this->pdpLanes_ != nullptr;};
    void deletePdpLanes() { this->pdpLanes_ = nullptr;};
    inline const vector<PdpLaneInfo> & getPdpLanes() const { DARABONBA_PTR_GET_CONST(pdpLanes_, vector<PdpLaneInfo>) };
    inline vector<PdpLaneInfo> getPdpLanes() { DARABONBA_PTR_GET(pdpLanes_, vector<PdpLaneInfo>) };
    inline PdpLaneInfosResult& setPdpLanes(const vector<PdpLaneInfo> & pdpLanes) { DARABONBA_PTR_SET_VALUE(pdpLanes_, pdpLanes) };
    inline PdpLaneInfosResult& setPdpLanes(vector<PdpLaneInfo> && pdpLanes) { DARABONBA_PTR_SET_RVALUE(pdpLanes_, pdpLanes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpLaneInfosResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<PdpLaneInfo>> pdpLanes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
