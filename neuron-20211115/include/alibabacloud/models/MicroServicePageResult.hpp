// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MICROSERVICEPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MICROSERVICEPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MicroServiceDigest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MicroServicePageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MicroServicePageResult& obj) { 
      DARABONBA_PTR_TO_JSON(MicroServiceDigests, microServiceDigests_);
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MicroServicePageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MicroServiceDigests, microServiceDigests_);
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MicroServicePageResult() = default ;
    MicroServicePageResult(const MicroServicePageResult &) = default ;
    MicroServicePageResult(MicroServicePageResult &&) = default ;
    MicroServicePageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MicroServicePageResult() = default ;
    MicroServicePageResult& operator=(const MicroServicePageResult &) = default ;
    MicroServicePageResult& operator=(MicroServicePageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->microServiceDigests_ == nullptr
        && this->intTotal_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // microServiceDigests Field Functions 
    bool hasMicroServiceDigests() const { return this->microServiceDigests_ != nullptr;};
    void deleteMicroServiceDigests() { this->microServiceDigests_ = nullptr;};
    inline const vector<MicroServiceDigest> & getMicroServiceDigests() const { DARABONBA_PTR_GET_CONST(microServiceDigests_, vector<MicroServiceDigest>) };
    inline vector<MicroServiceDigest> getMicroServiceDigests() { DARABONBA_PTR_GET(microServiceDigests_, vector<MicroServiceDigest>) };
    inline MicroServicePageResult& setMicroServiceDigests(const vector<MicroServiceDigest> & microServiceDigests) { DARABONBA_PTR_SET_VALUE(microServiceDigests_, microServiceDigests) };
    inline MicroServicePageResult& setMicroServiceDigests(vector<MicroServiceDigest> && microServiceDigests) { DARABONBA_PTR_SET_RVALUE(microServiceDigests_, microServiceDigests) };


    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MicroServicePageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MicroServicePageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MicroServicePageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MicroServiceDigest>> microServiceDigests_ {};
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
