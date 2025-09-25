// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGTASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGTASKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAggTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupId, aggTaskGroupId_);
      DARABONBA_PTR_TO_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourcePrometheusId, sourcePrometheusId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroupConfigHash, aggTaskGroupConfigHash_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupId, aggTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(aggTaskGroupName, aggTaskGroupName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourcePrometheusId, sourcePrometheusId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    CreateAggTaskGroupResponseBody() = default ;
    CreateAggTaskGroupResponseBody(const CreateAggTaskGroupResponseBody &) = default ;
    CreateAggTaskGroupResponseBody(CreateAggTaskGroupResponseBody &&) = default ;
    CreateAggTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggTaskGroupResponseBody() = default ;
    CreateAggTaskGroupResponseBody& operator=(const CreateAggTaskGroupResponseBody &) = default ;
    CreateAggTaskGroupResponseBody& operator=(CreateAggTaskGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggTaskGroupConfigHash_ != nullptr
        && this->aggTaskGroupId_ != nullptr && this->aggTaskGroupName_ != nullptr && this->requestId_ != nullptr && this->sourcePrometheusId_ != nullptr && this->status_ != nullptr; };
    // aggTaskGroupConfigHash Field Functions 
    bool hasAggTaskGroupConfigHash() const { return this->aggTaskGroupConfigHash_ != nullptr;};
    void deleteAggTaskGroupConfigHash() { this->aggTaskGroupConfigHash_ = nullptr;};
    inline string aggTaskGroupConfigHash() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupConfigHash_, "") };
    inline CreateAggTaskGroupResponseBody& setAggTaskGroupConfigHash(string aggTaskGroupConfigHash) { DARABONBA_PTR_SET_VALUE(aggTaskGroupConfigHash_, aggTaskGroupConfigHash) };


    // aggTaskGroupId Field Functions 
    bool hasAggTaskGroupId() const { return this->aggTaskGroupId_ != nullptr;};
    void deleteAggTaskGroupId() { this->aggTaskGroupId_ = nullptr;};
    inline string aggTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupId_, "") };
    inline CreateAggTaskGroupResponseBody& setAggTaskGroupId(string aggTaskGroupId) { DARABONBA_PTR_SET_VALUE(aggTaskGroupId_, aggTaskGroupId) };


    // aggTaskGroupName Field Functions 
    bool hasAggTaskGroupName() const { return this->aggTaskGroupName_ != nullptr;};
    void deleteAggTaskGroupName() { this->aggTaskGroupName_ = nullptr;};
    inline string aggTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(aggTaskGroupName_, "") };
    inline CreateAggTaskGroupResponseBody& setAggTaskGroupName(string aggTaskGroupName) { DARABONBA_PTR_SET_VALUE(aggTaskGroupName_, aggTaskGroupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAggTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourcePrometheusId Field Functions 
    bool hasSourcePrometheusId() const { return this->sourcePrometheusId_ != nullptr;};
    void deleteSourcePrometheusId() { this->sourcePrometheusId_ = nullptr;};
    inline string sourcePrometheusId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrometheusId_, "") };
    inline CreateAggTaskGroupResponseBody& setSourcePrometheusId(string sourcePrometheusId) { DARABONBA_PTR_SET_VALUE(sourcePrometheusId_, sourcePrometheusId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAggTaskGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> aggTaskGroupConfigHash_ = nullptr;
    std::shared_ptr<string> aggTaskGroupId_ = nullptr;
    std::shared_ptr<string> aggTaskGroupName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sourcePrometheusId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
