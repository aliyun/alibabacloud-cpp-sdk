// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICEGROUPPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICEGROUPPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpServiceGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpServiceGroupPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpServiceGroupPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PdpServiceGroupPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PdpServiceGroupPageResult() = default ;
    PdpServiceGroupPageResult(const PdpServiceGroupPageResult &) = default ;
    PdpServiceGroupPageResult(PdpServiceGroupPageResult &&) = default ;
    PdpServiceGroupPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpServiceGroupPageResult() = default ;
    PdpServiceGroupPageResult& operator=(const PdpServiceGroupPageResult &) = default ;
    PdpServiceGroupPageResult& operator=(PdpServiceGroupPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PdpServiceGroup> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PdpServiceGroup>) };
    inline vector<PdpServiceGroup> getData() { DARABONBA_PTR_GET(data_, vector<PdpServiceGroup>) };
    inline PdpServiceGroupPageResult& setData(const vector<PdpServiceGroup> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PdpServiceGroupPageResult& setData(vector<PdpServiceGroup> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpServiceGroupPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline PdpServiceGroupPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PdpServiceGroup>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
