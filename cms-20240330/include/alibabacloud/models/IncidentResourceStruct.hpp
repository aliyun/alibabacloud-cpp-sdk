// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTRESOURCESTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTRESOURCESTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IncidentResourceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentResourceStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentResourceStruct& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(incidentResourceId, incidentResourceId_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentResourceStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(incidentResourceId, incidentResourceId_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentResourceStruct() = default ;
    IncidentResourceStruct(const IncidentResourceStruct &) = default ;
    IncidentResourceStruct(IncidentResourceStruct &&) = default ;
    IncidentResourceStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentResourceStruct() = default ;
    IncidentResourceStruct& operator=(const IncidentResourceStruct &) = default ;
    IncidentResourceStruct& operator=(IncidentResourceStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->incidentId_ == nullptr && return this->incidentResourceId_ == nullptr && return this->resource_ == nullptr && return this->source_ == nullptr && return this->time_ == nullptr
        && return this->userId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentResourceStruct& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentResourceStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentResourceId Field Functions 
    bool hasIncidentResourceId() const { return this->incidentResourceId_ != nullptr;};
    void deleteIncidentResourceId() { this->incidentResourceId_ = nullptr;};
    inline string incidentResourceId() const { DARABONBA_PTR_GET_DEFAULT(incidentResourceId_, "") };
    inline IncidentResourceStruct& setIncidentResourceId(string incidentResourceId) { DARABONBA_PTR_SET_VALUE(incidentResourceId_, incidentResourceId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const IncidentResourceDetail & resource() const { DARABONBA_PTR_GET_CONST(resource_, IncidentResourceDetail) };
    inline IncidentResourceDetail resource() { DARABONBA_PTR_GET(resource_, IncidentResourceDetail) };
    inline IncidentResourceStruct& setResource(const IncidentResourceDetail & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline IncidentResourceStruct& setResource(IncidentResourceDetail && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IncidentResourceStruct& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentResourceStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline IncidentResourceStruct& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> incidentResourceId_ = nullptr;
    std::shared_ptr<IncidentResourceDetail> resource_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
