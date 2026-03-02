// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPMOBIPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPMOBIPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NeuronAppMobi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppMobiPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppMobiPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppMobiPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    NeuronAppMobiPageResult() = default ;
    NeuronAppMobiPageResult(const NeuronAppMobiPageResult &) = default ;
    NeuronAppMobiPageResult(NeuronAppMobiPageResult &&) = default ;
    NeuronAppMobiPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppMobiPageResult() = default ;
    NeuronAppMobiPageResult& operator=(const NeuronAppMobiPageResult &) = default ;
    NeuronAppMobiPageResult& operator=(NeuronAppMobiPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<NeuronAppMobi> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<NeuronAppMobi>) };
    inline vector<NeuronAppMobi> getData() { DARABONBA_PTR_GET(data_, vector<NeuronAppMobi>) };
    inline NeuronAppMobiPageResult& setData(const vector<NeuronAppMobi> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline NeuronAppMobiPageResult& setData(vector<NeuronAppMobi> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NeuronAppMobiPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline NeuronAppMobiPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<NeuronAppMobi>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
