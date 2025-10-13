// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_BINDINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class BindingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeNodes, excludeNodes_);
      DARABONBA_PTR_TO_JSON(IncludeNodes, includeNodes_);
      DARABONBA_PTR_TO_JSON(NodeSpecCount, nodeSpecCount_);
    };
    friend void from_json(const Darabonba::Json& j, BindingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeNodes, excludeNodes_);
      DARABONBA_PTR_FROM_JSON(IncludeNodes, includeNodes_);
      DARABONBA_PTR_FROM_JSON(NodeSpecCount, nodeSpecCount_);
    };
    BindingPolicy() = default ;
    BindingPolicy(const BindingPolicy &) = default ;
    BindingPolicy(BindingPolicy &&) = default ;
    BindingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindingPolicy() = default ;
    BindingPolicy& operator=(const BindingPolicy &) = default ;
    BindingPolicy& operator=(BindingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeNodes_ == nullptr
        && return this->includeNodes_ == nullptr && return this->nodeSpecCount_ == nullptr; };
    // excludeNodes Field Functions 
    bool hasExcludeNodes() const { return this->excludeNodes_ != nullptr;};
    void deleteExcludeNodes() { this->excludeNodes_ = nullptr;};
    inline const vector<string> & excludeNodes() const { DARABONBA_PTR_GET_CONST(excludeNodes_, vector<string>) };
    inline vector<string> excludeNodes() { DARABONBA_PTR_GET(excludeNodes_, vector<string>) };
    inline BindingPolicy& setExcludeNodes(const vector<string> & excludeNodes) { DARABONBA_PTR_SET_VALUE(excludeNodes_, excludeNodes) };
    inline BindingPolicy& setExcludeNodes(vector<string> && excludeNodes) { DARABONBA_PTR_SET_RVALUE(excludeNodes_, excludeNodes) };


    // includeNodes Field Functions 
    bool hasIncludeNodes() const { return this->includeNodes_ != nullptr;};
    void deleteIncludeNodes() { this->includeNodes_ = nullptr;};
    inline const vector<string> & includeNodes() const { DARABONBA_PTR_GET_CONST(includeNodes_, vector<string>) };
    inline vector<string> includeNodes() { DARABONBA_PTR_GET(includeNodes_, vector<string>) };
    inline BindingPolicy& setIncludeNodes(const vector<string> & includeNodes) { DARABONBA_PTR_SET_VALUE(includeNodes_, includeNodes) };
    inline BindingPolicy& setIncludeNodes(vector<string> && includeNodes) { DARABONBA_PTR_SET_RVALUE(includeNodes_, includeNodes) };


    // nodeSpecCount Field Functions 
    bool hasNodeSpecCount() const { return this->nodeSpecCount_ != nullptr;};
    void deleteNodeSpecCount() { this->nodeSpecCount_ = nullptr;};
    inline int64_t nodeSpecCount() const { DARABONBA_PTR_GET_DEFAULT(nodeSpecCount_, 0L) };
    inline BindingPolicy& setNodeSpecCount(int64_t nodeSpecCount) { DARABONBA_PTR_SET_VALUE(nodeSpecCount_, nodeSpecCount) };


  protected:
    std::shared_ptr<vector<string>> excludeNodes_ = nullptr;
    std::shared_ptr<vector<string>> includeNodes_ = nullptr;
    std::shared_ptr<int64_t> nodeSpecCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
