// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTLIFECYCLEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTLIFECYCLEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ArtifactLifecyclePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactLifecyclePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactLifecyclePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ArtifactLifecyclePolicy() = default ;
    ArtifactLifecyclePolicy(const ArtifactLifecyclePolicy &) = default ;
    ArtifactLifecyclePolicy(ArtifactLifecyclePolicy &&) = default ;
    ArtifactLifecyclePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactLifecyclePolicy() = default ;
    ArtifactLifecyclePolicy& operator=(const ArtifactLifecyclePolicy &) = default ;
    ArtifactLifecyclePolicy& operator=(ArtifactLifecyclePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(TagWildcard, tagWildcard_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(TagWildcard, tagWildcard_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagWildcard_ == nullptr; };
      // tagWildcard Field Functions 
      bool hasTagWildcard() const { return this->tagWildcard_ != nullptr;};
      void deleteTagWildcard() { this->tagWildcard_ = nullptr;};
      inline string getTagWildcard() const { DARABONBA_PTR_GET_DEFAULT(tagWildcard_, "") };
      inline Filter& setTagWildcard(string tagWildcard) { DARABONBA_PTR_SET_VALUE(tagWildcard_, tagWildcard) };


    protected:
      shared_ptr<string> tagWildcard_ {};
    };

    class Condition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Condition& obj) { 
        DARABONBA_PTR_TO_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
        DARABONBA_PTR_TO_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
        DARABONBA_PTR_TO_JSON(LatestTagCount, latestTagCount_);
      };
      friend void from_json(const Darabonba::Json& j, Condition& obj) { 
        DARABONBA_PTR_FROM_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
        DARABONBA_PTR_FROM_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
        DARABONBA_PTR_FROM_JSON(LatestTagCount, latestTagCount_);
      };
      Condition() = default ;
      Condition(const Condition &) = default ;
      Condition(Condition &&) = default ;
      Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Condition() = default ;
      Condition& operator=(const Condition &) = default ;
      Condition& operator=(Condition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastPullOlderThanDays_ == nullptr
        && this->lastPushOlderThanDays_ == nullptr && this->latestTagCount_ == nullptr; };
      // lastPullOlderThanDays Field Functions 
      bool hasLastPullOlderThanDays() const { return this->lastPullOlderThanDays_ != nullptr;};
      void deleteLastPullOlderThanDays() { this->lastPullOlderThanDays_ = nullptr;};
      inline int32_t getLastPullOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPullOlderThanDays_, 0) };
      inline Condition& setLastPullOlderThanDays(int32_t lastPullOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPullOlderThanDays_, lastPullOlderThanDays) };


      // lastPushOlderThanDays Field Functions 
      bool hasLastPushOlderThanDays() const { return this->lastPushOlderThanDays_ != nullptr;};
      void deleteLastPushOlderThanDays() { this->lastPushOlderThanDays_ = nullptr;};
      inline int32_t getLastPushOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPushOlderThanDays_, 0) };
      inline Condition& setLastPushOlderThanDays(int32_t lastPushOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPushOlderThanDays_, lastPushOlderThanDays) };


      // latestTagCount Field Functions 
      bool hasLatestTagCount() const { return this->latestTagCount_ != nullptr;};
      void deleteLatestTagCount() { this->latestTagCount_ = nullptr;};
      inline int32_t getLatestTagCount() const { DARABONBA_PTR_GET_DEFAULT(latestTagCount_, 0) };
      inline Condition& setLatestTagCount(int32_t latestTagCount) { DARABONBA_PTR_SET_VALUE(latestTagCount_, latestTagCount) };


    protected:
      shared_ptr<int32_t> lastPullOlderThanDays_ {};
      shared_ptr<int32_t> lastPushOlderThanDays_ {};
      shared_ptr<int32_t> latestTagCount_ {};
    };

    virtual bool empty() const override { return this->condition_ == nullptr
        && this->filter_ == nullptr && this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const ArtifactLifecyclePolicy::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, ArtifactLifecyclePolicy::Condition) };
    inline ArtifactLifecyclePolicy::Condition getCondition() { DARABONBA_PTR_GET(condition_, ArtifactLifecyclePolicy::Condition) };
    inline ArtifactLifecyclePolicy& setCondition(const ArtifactLifecyclePolicy::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline ArtifactLifecyclePolicy& setCondition(ArtifactLifecyclePolicy::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ArtifactLifecyclePolicy::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ArtifactLifecyclePolicy::Filter) };
    inline ArtifactLifecyclePolicy::Filter getFilter() { DARABONBA_PTR_GET(filter_, ArtifactLifecyclePolicy::Filter) };
    inline ArtifactLifecyclePolicy& setFilter(const ArtifactLifecyclePolicy::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ArtifactLifecyclePolicy& setFilter(ArtifactLifecyclePolicy::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ArtifactLifecyclePolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<ArtifactLifecyclePolicy::Condition> condition_ {};
    shared_ptr<ArtifactLifecyclePolicy::Filter> filter_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
