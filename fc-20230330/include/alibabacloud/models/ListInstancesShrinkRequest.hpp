// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTimeMs, endTimeMs_);
      DARABONBA_PTR_TO_JSON(instanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatusShrink_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(startKey, startKey_);
      DARABONBA_PTR_TO_JSON(startTimeMs, startTimeMs_);
      DARABONBA_PTR_TO_JSON(withAllActive, withAllActive_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTimeMs, endTimeMs_);
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatusShrink_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(startKey, startKey_);
      DARABONBA_PTR_FROM_JSON(startTimeMs, startTimeMs_);
      DARABONBA_PTR_FROM_JSON(withAllActive, withAllActive_);
    };
    ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest(ListInstancesShrinkRequest &&) = default ;
    ListInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest& operator=(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest& operator=(ListInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimeMs_ == nullptr
        && return this->instanceIdsShrink_ == nullptr && return this->instanceStatusShrink_ == nullptr && return this->limit_ == nullptr && return this->qualifier_ == nullptr && return this->startKey_ == nullptr
        && return this->startTimeMs_ == nullptr && return this->withAllActive_ == nullptr; };
    // endTimeMs Field Functions 
    bool hasEndTimeMs() const { return this->endTimeMs_ != nullptr;};
    void deleteEndTimeMs() { this->endTimeMs_ = nullptr;};
    inline int64_t endTimeMs() const { DARABONBA_PTR_GET_DEFAULT(endTimeMs_, 0L) };
    inline ListInstancesShrinkRequest& setEndTimeMs(int64_t endTimeMs) { DARABONBA_PTR_SET_VALUE(endTimeMs_, endTimeMs) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline ListInstancesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // instanceStatusShrink Field Functions 
    bool hasInstanceStatusShrink() const { return this->instanceStatusShrink_ != nullptr;};
    void deleteInstanceStatusShrink() { this->instanceStatusShrink_ = nullptr;};
    inline string instanceStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceStatusShrink_, "") };
    inline ListInstancesShrinkRequest& setInstanceStatusShrink(string instanceStatusShrink) { DARABONBA_PTR_SET_VALUE(instanceStatusShrink_, instanceStatusShrink) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline ListInstancesShrinkRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListInstancesShrinkRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // startKey Field Functions 
    bool hasStartKey() const { return this->startKey_ != nullptr;};
    void deleteStartKey() { this->startKey_ = nullptr;};
    inline string startKey() const { DARABONBA_PTR_GET_DEFAULT(startKey_, "") };
    inline ListInstancesShrinkRequest& setStartKey(string startKey) { DARABONBA_PTR_SET_VALUE(startKey_, startKey) };


    // startTimeMs Field Functions 
    bool hasStartTimeMs() const { return this->startTimeMs_ != nullptr;};
    void deleteStartTimeMs() { this->startTimeMs_ = nullptr;};
    inline int64_t startTimeMs() const { DARABONBA_PTR_GET_DEFAULT(startTimeMs_, 0L) };
    inline ListInstancesShrinkRequest& setStartTimeMs(int64_t startTimeMs) { DARABONBA_PTR_SET_VALUE(startTimeMs_, startTimeMs) };


    // withAllActive Field Functions 
    bool hasWithAllActive() const { return this->withAllActive_ != nullptr;};
    void deleteWithAllActive() { this->withAllActive_ = nullptr;};
    inline bool withAllActive() const { DARABONBA_PTR_GET_DEFAULT(withAllActive_, false) };
    inline ListInstancesShrinkRequest& setWithAllActive(bool withAllActive) { DARABONBA_PTR_SET_VALUE(withAllActive_, withAllActive) };


  protected:
    std::shared_ptr<int64_t> endTimeMs_ = nullptr;
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    std::shared_ptr<string> instanceStatusShrink_ = nullptr;
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
