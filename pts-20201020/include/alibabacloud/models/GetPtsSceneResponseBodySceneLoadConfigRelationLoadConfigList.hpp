// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIGRELATIONLOADCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIGRELATIONLOADCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrencyBegin, concurrencyBegin_);
      DARABONBA_PTR_TO_JSON(ConcurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrencyBegin, concurrencyBegin_);
      DARABONBA_PTR_FROM_JSON(ConcurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
    };
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList() = default ;
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList(const GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList &) = default ;
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList(GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList &&) = default ;
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList() = default ;
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& operator=(const GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList &) = default ;
    GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& operator=(GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrencyBegin_ == nullptr
        && return this->concurrencyLimit_ == nullptr && return this->relationId_ == nullptr; };
    // concurrencyBegin Field Functions 
    bool hasConcurrencyBegin() const { return this->concurrencyBegin_ != nullptr;};
    void deleteConcurrencyBegin() { this->concurrencyBegin_ = nullptr;};
    inline int32_t concurrencyBegin() const { DARABONBA_PTR_GET_DEFAULT(concurrencyBegin_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& setConcurrencyBegin(int32_t concurrencyBegin) { DARABONBA_PTR_SET_VALUE(concurrencyBegin_, concurrencyBegin) };


    // concurrencyLimit Field Functions 
    bool hasConcurrencyLimit() const { return this->concurrencyLimit_ != nullptr;};
    void deleteConcurrencyLimit() { this->concurrencyLimit_ = nullptr;};
    inline int32_t concurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(concurrencyLimit_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& setConcurrencyLimit(int32_t concurrencyLimit) { DARABONBA_PTR_SET_VALUE(concurrencyLimit_, concurrencyLimit) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline string relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
    inline GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


  protected:
    // The starting number of concurrent sessions.
    std::shared_ptr<int32_t> concurrencyBegin_ = nullptr;
    // The maximum number of concurrent sessions.
    std::shared_ptr<int32_t> concurrencyLimit_ = nullptr;
    // The session ID.
    std::shared_ptr<string> relationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
