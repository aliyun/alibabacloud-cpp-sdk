// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPPBCLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPPBCLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpPbc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpPbcListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpPbcListResult& obj) { 
      DARABONBA_PTR_TO_JSON(pdpPbcs, pdpPbcs_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PdpPbcListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pdpPbcs, pdpPbcs_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PdpPbcListResult() = default ;
    PdpPbcListResult(const PdpPbcListResult &) = default ;
    PdpPbcListResult(PdpPbcListResult &&) = default ;
    PdpPbcListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpPbcListResult() = default ;
    PdpPbcListResult& operator=(const PdpPbcListResult &) = default ;
    PdpPbcListResult& operator=(PdpPbcListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pdpPbcs_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // pdpPbcs Field Functions 
    bool hasPdpPbcs() const { return this->pdpPbcs_ != nullptr;};
    void deletePdpPbcs() { this->pdpPbcs_ = nullptr;};
    inline const vector<PdpPbc> & getPdpPbcs() const { DARABONBA_PTR_GET_CONST(pdpPbcs_, vector<PdpPbc>) };
    inline vector<PdpPbc> getPdpPbcs() { DARABONBA_PTR_GET(pdpPbcs_, vector<PdpPbc>) };
    inline PdpPbcListResult& setPdpPbcs(const vector<PdpPbc> & pdpPbcs) { DARABONBA_PTR_SET_VALUE(pdpPbcs_, pdpPbcs) };
    inline PdpPbcListResult& setPdpPbcs(vector<PdpPbc> && pdpPbcs) { DARABONBA_PTR_SET_RVALUE(pdpPbcs_, pdpPbcs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpPbcListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline PdpPbcListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PdpPbc>> pdpPbcs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
