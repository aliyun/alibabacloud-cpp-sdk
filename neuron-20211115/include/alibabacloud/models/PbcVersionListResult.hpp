// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCVERSIONLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCVERSIONLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PbcVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcVersionListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcVersionListResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, PbcVersionListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    PbcVersionListResult() = default ;
    PbcVersionListResult(const PbcVersionListResult &) = default ;
    PbcVersionListResult(PbcVersionListResult &&) = default ;
    PbcVersionListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcVersionListResult() = default ;
    PbcVersionListResult& operator=(const PbcVersionListResult &) = default ;
    PbcVersionListResult& operator=(PbcVersionListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PbcVersion> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PbcVersion>) };
    inline vector<PbcVersion> getData() { DARABONBA_PTR_GET(data_, vector<PbcVersion>) };
    inline PbcVersionListResult& setData(const vector<PbcVersion> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PbcVersionListResult& setData(vector<PbcVersion> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcVersionListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline PbcVersionListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<PbcVersion>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
