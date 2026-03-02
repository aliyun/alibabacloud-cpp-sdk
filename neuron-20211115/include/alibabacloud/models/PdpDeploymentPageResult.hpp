// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPDEPLOYMENTPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPDEPLOYMENTPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpServiceDeployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpDeploymentPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpDeploymentPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PdpDeploymentPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PdpDeploymentPageResult() = default ;
    PdpDeploymentPageResult(const PdpDeploymentPageResult &) = default ;
    PdpDeploymentPageResult(PdpDeploymentPageResult &&) = default ;
    PdpDeploymentPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpDeploymentPageResult() = default ;
    PdpDeploymentPageResult& operator=(const PdpDeploymentPageResult &) = default ;
    PdpDeploymentPageResult& operator=(PdpDeploymentPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PdpServiceDeployment> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PdpServiceDeployment>) };
    inline vector<PdpServiceDeployment> getData() { DARABONBA_PTR_GET(data_, vector<PdpServiceDeployment>) };
    inline PdpDeploymentPageResult& setData(const vector<PdpServiceDeployment> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PdpDeploymentPageResult& setData(vector<PdpServiceDeployment> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpDeploymentPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline PdpDeploymentPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PdpServiceDeployment>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
