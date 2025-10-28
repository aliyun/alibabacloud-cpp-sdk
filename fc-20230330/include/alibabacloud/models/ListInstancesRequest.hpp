// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTimeMs, endTimeMs_);
      DARABONBA_PTR_TO_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(startKey, startKey_);
      DARABONBA_PTR_TO_JSON(startTimeMs, startTimeMs_);
      DARABONBA_PTR_TO_JSON(withAllActive, withAllActive_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTimeMs, endTimeMs_);
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(startKey, startKey_);
      DARABONBA_PTR_FROM_JSON(startTimeMs, startTimeMs_);
      DARABONBA_PTR_FROM_JSON(withAllActive, withAllActive_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimeMs_ == nullptr
        && return this->instanceIds_ == nullptr && return this->instanceStatus_ == nullptr && return this->limit_ == nullptr && return this->qualifier_ == nullptr && return this->startKey_ == nullptr
        && return this->startTimeMs_ == nullptr && return this->withAllActive_ == nullptr; };
    // endTimeMs Field Functions 
    bool hasEndTimeMs() const { return this->endTimeMs_ != nullptr;};
    void deleteEndTimeMs() { this->endTimeMs_ = nullptr;};
    inline int64_t endTimeMs() const { DARABONBA_PTR_GET_DEFAULT(endTimeMs_, 0L) };
    inline ListInstancesRequest& setEndTimeMs(int64_t endTimeMs) { DARABONBA_PTR_SET_VALUE(endTimeMs_, endTimeMs) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline const vector<string> & instanceStatus() const { DARABONBA_PTR_GET_CONST(instanceStatus_, vector<string>) };
    inline vector<string> instanceStatus() { DARABONBA_PTR_GET(instanceStatus_, vector<string>) };
    inline ListInstancesRequest& setInstanceStatus(const vector<string> & instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };
    inline ListInstancesRequest& setInstanceStatus(vector<string> && instanceStatus) { DARABONBA_PTR_SET_RVALUE(instanceStatus_, instanceStatus) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline ListInstancesRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListInstancesRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // startKey Field Functions 
    bool hasStartKey() const { return this->startKey_ != nullptr;};
    void deleteStartKey() { this->startKey_ = nullptr;};
    inline string startKey() const { DARABONBA_PTR_GET_DEFAULT(startKey_, "") };
    inline ListInstancesRequest& setStartKey(string startKey) { DARABONBA_PTR_SET_VALUE(startKey_, startKey) };


    // startTimeMs Field Functions 
    bool hasStartTimeMs() const { return this->startTimeMs_ != nullptr;};
    void deleteStartTimeMs() { this->startTimeMs_ = nullptr;};
    inline int64_t startTimeMs() const { DARABONBA_PTR_GET_DEFAULT(startTimeMs_, 0L) };
    inline ListInstancesRequest& setStartTimeMs(int64_t startTimeMs) { DARABONBA_PTR_SET_VALUE(startTimeMs_, startTimeMs) };


    // withAllActive Field Functions 
    bool hasWithAllActive() const { return this->withAllActive_ != nullptr;};
    void deleteWithAllActive() { this->withAllActive_ = nullptr;};
    inline bool withAllActive() const { DARABONBA_PTR_GET_DEFAULT(withAllActive_, false) };
    inline ListInstancesRequest& setWithAllActive(bool withAllActive) { DARABONBA_PTR_SET_VALUE(withAllActive_, withAllActive) };


  protected:
    std::shared_ptr<int64_t> endTimeMs_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<vector<string>> instanceStatus_ = nullptr;
    std::shared_ptr<string> limit_ = nullptr;
    // The function version or alias.
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> startKey_ = nullptr;
    std::shared_ptr<int64_t> startTimeMs_ = nullptr;
    // Specifies whether to list all instances. Valid values: true and false.
    std::shared_ptr<bool> withAllActive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
