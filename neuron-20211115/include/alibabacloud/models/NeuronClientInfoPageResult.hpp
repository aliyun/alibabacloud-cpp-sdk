// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONCLIENTINFOPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_NEURONCLIENTINFOPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NeuronAppClientInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronClientInfoPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronClientInfoPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(showApp, showApp_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronClientInfoPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(showApp, showApp_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    NeuronClientInfoPageResult() = default ;
    NeuronClientInfoPageResult(const NeuronClientInfoPageResult &) = default ;
    NeuronClientInfoPageResult(NeuronClientInfoPageResult &&) = default ;
    NeuronClientInfoPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronClientInfoPageResult() = default ;
    NeuronClientInfoPageResult& operator=(const NeuronClientInfoPageResult &) = default ;
    NeuronClientInfoPageResult& operator=(NeuronClientInfoPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->showApp_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<NeuronAppClientInfo> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<NeuronAppClientInfo>) };
    inline vector<NeuronAppClientInfo> getData() { DARABONBA_PTR_GET(data_, vector<NeuronAppClientInfo>) };
    inline NeuronClientInfoPageResult& setData(const vector<NeuronAppClientInfo> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline NeuronClientInfoPageResult& setData(vector<NeuronAppClientInfo> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NeuronClientInfoPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showApp Field Functions 
    bool hasShowApp() const { return this->showApp_ != nullptr;};
    void deleteShowApp() { this->showApp_ = nullptr;};
    inline bool getShowApp() const { DARABONBA_PTR_GET_DEFAULT(showApp_, false) };
    inline NeuronClientInfoPageResult& setShowApp(bool showApp) { DARABONBA_PTR_SET_VALUE(showApp_, showApp) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline NeuronClientInfoPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<NeuronAppClientInfo>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> showApp_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
