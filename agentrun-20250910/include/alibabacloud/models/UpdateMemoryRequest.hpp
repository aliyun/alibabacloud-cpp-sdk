// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(longTtl, longTtl_);
      DARABONBA_PTR_TO_JSON(permanent, permanent_);
      DARABONBA_PTR_TO_JSON(shortTtl, shortTtl_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(longTtl, longTtl_);
      DARABONBA_PTR_FROM_JSON(permanent, permanent_);
      DARABONBA_PTR_FROM_JSON(shortTtl, shortTtl_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    UpdateMemoryRequest() = default ;
    UpdateMemoryRequest(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest(UpdateMemoryRequest &&) = default ;
    UpdateMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryRequest() = default ;
    UpdateMemoryRequest& operator=(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest& operator=(UpdateMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->longTtl_ == nullptr
        && return this->permanent_ == nullptr && return this->shortTtl_ == nullptr && return this->strategy_ == nullptr; };
    // longTtl Field Functions 
    bool hasLongTtl() const { return this->longTtl_ != nullptr;};
    void deleteLongTtl() { this->longTtl_ = nullptr;};
    inline int32_t longTtl() const { DARABONBA_PTR_GET_DEFAULT(longTtl_, 0) };
    inline UpdateMemoryRequest& setLongTtl(int32_t longTtl) { DARABONBA_PTR_SET_VALUE(longTtl_, longTtl) };


    // permanent Field Functions 
    bool hasPermanent() const { return this->permanent_ != nullptr;};
    void deletePermanent() { this->permanent_ = nullptr;};
    inline bool permanent() const { DARABONBA_PTR_GET_DEFAULT(permanent_, false) };
    inline UpdateMemoryRequest& setPermanent(bool permanent) { DARABONBA_PTR_SET_VALUE(permanent_, permanent) };


    // shortTtl Field Functions 
    bool hasShortTtl() const { return this->shortTtl_ != nullptr;};
    void deleteShortTtl() { this->shortTtl_ = nullptr;};
    inline int32_t shortTtl() const { DARABONBA_PTR_GET_DEFAULT(shortTtl_, 0) };
    inline UpdateMemoryRequest& setShortTtl(int32_t shortTtl) { DARABONBA_PTR_SET_VALUE(shortTtl_, shortTtl) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const vector<string> & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, vector<string>) };
    inline vector<string> strategy() { DARABONBA_PTR_GET(strategy_, vector<string>) };
    inline UpdateMemoryRequest& setStrategy(const vector<string> & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline UpdateMemoryRequest& setStrategy(vector<string> && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<int32_t> longTtl_ = nullptr;
    std::shared_ptr<bool> permanent_ = nullptr;
    std::shared_ptr<int32_t> shortTtl_ = nullptr;
    std::shared_ptr<vector<string>> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
