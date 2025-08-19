// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolScalingGroupPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
    };
    NodepoolScalingGroupPrivatePoolOptions() = default ;
    NodepoolScalingGroupPrivatePoolOptions(const NodepoolScalingGroupPrivatePoolOptions &) = default ;
    NodepoolScalingGroupPrivatePoolOptions(NodepoolScalingGroupPrivatePoolOptions &&) = default ;
    NodepoolScalingGroupPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolScalingGroupPrivatePoolOptions() = default ;
    NodepoolScalingGroupPrivatePoolOptions& operator=(const NodepoolScalingGroupPrivatePoolOptions &) = default ;
    NodepoolScalingGroupPrivatePoolOptions& operator=(NodepoolScalingGroupPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->matchCriteria_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline NodepoolScalingGroupPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline NodepoolScalingGroupPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
