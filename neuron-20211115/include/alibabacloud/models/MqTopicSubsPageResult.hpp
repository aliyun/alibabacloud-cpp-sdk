// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQTOPICSUBSPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_MQTOPICSUBSPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MqTopicSubsDigest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqTopicSubsPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqTopicSubsPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(MqTopicSubsDigests, mqTopicSubsDigests_);
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MqTopicSubsPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MqTopicSubsDigests, mqTopicSubsDigests_);
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MqTopicSubsPageResult() = default ;
    MqTopicSubsPageResult(const MqTopicSubsPageResult &) = default ;
    MqTopicSubsPageResult(MqTopicSubsPageResult &&) = default ;
    MqTopicSubsPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqTopicSubsPageResult() = default ;
    MqTopicSubsPageResult& operator=(const MqTopicSubsPageResult &) = default ;
    MqTopicSubsPageResult& operator=(MqTopicSubsPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqTopicSubsDigests_ == nullptr
        && this->intTotal_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // mqTopicSubsDigests Field Functions 
    bool hasMqTopicSubsDigests() const { return this->mqTopicSubsDigests_ != nullptr;};
    void deleteMqTopicSubsDigests() { this->mqTopicSubsDigests_ = nullptr;};
    inline const vector<MqTopicSubsDigest> & getMqTopicSubsDigests() const { DARABONBA_PTR_GET_CONST(mqTopicSubsDigests_, vector<MqTopicSubsDigest>) };
    inline vector<MqTopicSubsDigest> getMqTopicSubsDigests() { DARABONBA_PTR_GET(mqTopicSubsDigests_, vector<MqTopicSubsDigest>) };
    inline MqTopicSubsPageResult& setMqTopicSubsDigests(const vector<MqTopicSubsDigest> & mqTopicSubsDigests) { DARABONBA_PTR_SET_VALUE(mqTopicSubsDigests_, mqTopicSubsDigests) };
    inline MqTopicSubsPageResult& setMqTopicSubsDigests(vector<MqTopicSubsDigest> && mqTopicSubsDigests) { DARABONBA_PTR_SET_RVALUE(mqTopicSubsDigests_, mqTopicSubsDigests) };


    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline MqTopicSubsPageResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MqTopicSubsPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MqTopicSubsPageResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MqTopicSubsDigest>> mqTopicSubsDigests_ {};
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
