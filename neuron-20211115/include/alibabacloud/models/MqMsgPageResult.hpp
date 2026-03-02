// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQMSGPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MQMSGPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MqMsgDigest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqMsgPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqMsgPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(MqMsgDigests, mqMsgDigests_);
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MqMsgPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MqMsgDigests, mqMsgDigests_);
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MqMsgPageResult() = default ;
    MqMsgPageResult(const MqMsgPageResult &) = default ;
    MqMsgPageResult(MqMsgPageResult &&) = default ;
    MqMsgPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqMsgPageResult() = default ;
    MqMsgPageResult& operator=(const MqMsgPageResult &) = default ;
    MqMsgPageResult& operator=(MqMsgPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqMsgDigests_ == nullptr
        && this->intTotal_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // mqMsgDigests Field Functions 
    bool hasMqMsgDigests() const { return this->mqMsgDigests_ != nullptr;};
    void deleteMqMsgDigests() { this->mqMsgDigests_ = nullptr;};
    inline const vector<MqMsgDigest> & getMqMsgDigests() const { DARABONBA_PTR_GET_CONST(mqMsgDigests_, vector<MqMsgDigest>) };
    inline vector<MqMsgDigest> getMqMsgDigests() { DARABONBA_PTR_GET(mqMsgDigests_, vector<MqMsgDigest>) };
    inline MqMsgPageResult& setMqMsgDigests(const vector<MqMsgDigest> & mqMsgDigests) { DARABONBA_PTR_SET_VALUE(mqMsgDigests_, mqMsgDigests) };
    inline MqMsgPageResult& setMqMsgDigests(vector<MqMsgDigest> && mqMsgDigests) { DARABONBA_PTR_SET_RVALUE(mqMsgDigests_, mqMsgDigests) };


    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MqMsgPageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MqMsgPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MqMsgPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MqMsgDigest>> mqMsgDigests_ {};
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
